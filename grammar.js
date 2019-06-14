module.exports = grammar({
  name: 'PowerShell',

  extras: $ => [
    $.comment,
    /`?\s/,
  ],

  rules: {
    source_file: $ => seq(
      optional($.param_block),
      seq(
        $._statement,
        repeat(
          seq(
            $._terminator,
            $._statement
          )
        ),
        optional($._terminator)
      ),
    ),

    scriptblock: $ => seq(
      '{',
      optional($.param_block),
      seq(
        $._statement,
        repeat(
          seq(
            $._terminator,
            $._statement
          )
        ),
        optional($._terminator)
      ),
      '}'
    ),

    param_block: $ => seq(
      /(p|P)(a|A)(r|R)(a|A)(m|M)/,
      '(',
      optional(
        seq(
          $.param_block_variable,
          repeat(
            seq(
              ',',
              $.param_block_variable
            )
          ),
          optional(',')
        )
      ),
      ')'
    ),

    param_block_variable: $ => seq(
      repeat(
        seq(
          $._attribute,
          optional($._newlines)
        )
      ),
      $.variable
    ),

    _statement: $ => choice(
      $.pipeline_statement
    ),

    _newline: $ => choice(
      '\r\n',
      '\n'
    ),

    _newlines: $ => repeat1($._newline),

    _terminator: $ => choice(
      ';',
      $._newline
    ),

    pipeline_statement: $ => seq(
      optional(
        seq(
          $._attributed_variable,
          '=',
          optional($._newlines)
        )
      ),
      $._pipeline_expression,
      repeat(
        seq(
          '|',
          optional($._newline),
          $.command_expression
        )
      )
    ),

    command_expression: $ => seq(
      choice(
        $.bareword_string,
        seq('&', $.property_name)
      )
    ),

    parameter: $ => seq(
      /-[a-zA-Z_][a-zA-Z0-9_]*/,
      optional(
        seq(
          ':',
          $._expression
        )
      )
    ),

    _non_array_expression: $ => choice(
      $.number_expr,
      $._string_expr,
      $._attributed_variable,
      $.scriptblock,
      $.type_expr,
      $.flat_array_expression,
      $.hashtable_expression,
      $.scriptblock,
      seq('(', $._pipeline_expression, ')'),
      seq('$(', $.pipeline_statement, ')')
    ),

    _expression: $ => choice(
      $._non_array_expression,
      $.array_expression
    ),

    _pipeline_expression: $ => choice(
      $._expression,
      $.command_expression
    ),

    array_expression: $ => seq(
      optional($._non_array_expression),
      repeat1(
        seq(
          ',',
          $._non_array_expression
        )
      )
    ),

    flat_array_expression: $ => seq(
      '@(',
      repeat($._terminator),
      optional(
        seq(
          $._expression,
          repeat(
            seq(
              repeat1($._terminator),
              $._expression
            )
          ),
          repeat($._terminator)
        )
      ),
      ')'
    ),

    hashtable_expression: $ => seq(
      '@{',
      optional($._newlines),
      optional(
        seq(
          $.hashtable_entry,
          repeat(
            seq(
              repeat1($._terminator),
              $.hashtable_entry
            )
          ),
          optional($._terminator)
        )
      ),
      '}'
    ),

    hashtable_entry: $ => seq(
      $.property_name,
      '=',
      optional($._newlines),
      $._expression
    ),

    property_name: $ => choice(
      $._string_expr,
      $.bareword_string,
      $.variable
    ),

    _attributed_variable: $ => seq(
      repeat($._attribute),
      $.variable
    ),

    variable: $ => seq(
      '$',
      choice(
        $._varname_simple,
        $._varname_braced,
        $._varname_special
      )
    ),

    _varname_simple: $ => /[a-zA-Z0-9_]+/,

    _varname_braced: $ => /{[^}]+}/,

    _varname_special: $ => choice(
      '$',
      '^',
      '?'
    ),

    type_expr: $ => seq(
      '[',
      $._typename,
      ']'
    ),

    _typename: $ => choice(
      $._typename_simple,
      $._typename_array,
      $._typename_generic
    ),

    _typename_simple: $ => /[A-Za-z_][A-Za-z0-9_.]*/,

    _typename_array: $ => seq(
      $._typename,
      '[]'
    ),

    _typename_generic: $ => seq(
      $._typename,
      '[',
      $._typename,
      repeat(
        seq(
          ',',
          $._typename
        )
      ),
      ']'
    ),

    non_type_attribute: $ => seq(
      '[',
      $._typename_simple,
      '(',
      optional(
        seq(
          $._non_array_expression,
          repeat(
            seq(',', $._non_array_expression)
          )
        )
      ),
      ')',
      ']'
    ),

    _attribute: $ => choice(
      $.type_expr,
      $.non_type_attribute
    ),

    number_expr: $ => /(\d+|\d*\.\d+((e|E)\d+))(u|U)?(l|L)?((k|K|m|M|g|G|t|T)(b|B))?/,

    _string_expr: $ => choice(
      $.single_quote_string,
      $.double_quote_string
    ),

    single_quote_string: $  => /'[^']*'/,

    double_quote_string: $ => choice(
      '""',
      seq(
        '"',
        repeat(
          choice(
            /[^"$]+/,
            $.variable
          )
        ),
        optional('$'),
        '"'
      )
    ),

    bareword_string: $ => /[^0-9'"$^`*&()\[\]@!-+%{}\s][^'"$^`*&()\[\]@!+%{}\s]*/,

    comment: $ => token(choice(
      /#.*/,
      /<#.*#>/
    ))
  },
});
