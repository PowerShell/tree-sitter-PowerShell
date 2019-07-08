const PREC = {
  COMMENT: 1,
  STRING: 2,
  NUMBER: 3
};

module.exports = grammar({
  name: 'PowerShell',

  extras: $ => [
    $.comment,
    /`?\s/,
  ],

  rules: {
    program: $ => seq(
      optional($.param_block),
      optional($._statement),
      repeat(
        seq(
          $._terminator,
          $._statement,
        )
      ),
      optional($._terminator)
    ),

    _newline: $ => choice(
      '\r\n',
      '\n'
    ),

    _terminator: $ => choice(
      seq(
        ';',
        repeat($._newline)
      ),
      repeat1($._newline)
    ),

    _statement: $ => choice(
      $._expression_statement,
      $._definition_statement
    ),

    _definition_statement: $ => choice(
      $.function_definition,
      $.filter_definition,
      $.class_definition,
      $.enum_definition
    ),

    function_definition: $ => seq(
      /function/i,
      /[_a-z+][_a-z0-9+]*/i,
      $.scriptblock
    ),

    filter_definition: $ => seq(
      /filter/i,
      /[_a-z+][_a-z0-9+]*/i,
      $.scriptblock
    ),

    class_definition: $ => seq(
      /class/i,
      repeat($._newline),
      /[a-z_][a-z0-9_]+/,
      repeat($._newline),
      '{',
      repeat(
        seq(
          choice(
            seq($.class_property, $._terminator),
            $.class_method
          )
        )
      ),
      '}'
    ),

    class_property: $ => seq(
      optional(
        seq(
          $.type_expr,
          repeat($._newline)
        )
      ),
      $.simple_variable
    ),

    class_method: $ => seq(
      optional($.type_expr),
      $.bareword_string,
      '(',
      repeat($._newline),
      optional(
        seq(
          $.class_parameter,
          repeat(
            seq(
              ',',
              repeat($._newline),
              $.class_parameter
            )
          )
        )
      ),
      ')',
      repeat($._newline),
      $.class_method_body
    ),

    class_parameter: $ => seq(
      optional($.type_expr),
      $.simple_variable
    ),

    class_method_body: $ => seq(
      '{',
      repeat(
        seq(
          $._statement,
          $._terminator
        )
      ),
      '}'
    ),

    enum_definition: $ => seq(
      /enum/i,
      repeat($._newline),
      /[a-zA-Z_][a-zA-Z0-9_]+/,
      repeat($._newline),
      '{',
      repeat($._newline),
      $.bareword_string,
      repeat(
        seq(
          $._terminator,
          $.bareword_string,
        )
      ),
      optional($._terminator),
      '}'
    ),

    _expression_statement: $ => choice(
      $.assignment_statement,
      $.pipeline_statement,
      $.if_statement,
      $.while_statement,
      $.do_while_statement
    ),

    assignment_statement: $ => seq(
      $._attributed_variable,
      '=',
      repeat($._newline),
      $._expression_statement,
    ),

    pipeline_statement: $ => seq(
      $._pipeline_expression,
      repeat(
        seq(
          '|',
          optional($._newline),
          $.command_expression
        )
      )
    ),

    if_statement: $ => seq(
      /if/i,
      repeat($._newline),
      '(',
      repeat($._newline),
      $.pipeline_statement,
      ')',
      repeat($._newline),
      '{',
      repeat(
        seq(
          $._statement,
          $._terminator
        ),
      ),
      '}',
      repeat($.elseif_statement),
      optional($.else_statement)
    ),

    elseif_statement: $ => seq(
      /elseif/i,
      repeat($._newline),
      '(',
      repeat($._newline),
      $.pipeline_statement,
      repeat($._newline),
      ')',
      repeat($._newline),
      '{',
      repeat(
        seq(
          $._statement,
          $._terminator
        ),
      ),
      '}'
    ),

    else_statement: $ => seq(
      /else/i,
      repeat($._newline),
      '{',
      repeat(
        seq(
          $._statement,
          $._terminator
        ),
      ),
      '}'
    ),

    while_statement: $ => seq(
      /while/i,
      repeat($._newline),
      '(',
      repeat($._newline),
      $.pipeline_statement,
      repeat($._newline),
      ')',
      repeat($._newline),
      '{',
      repeat(
        seq(
          $._statement,
          $._terminator
        ),
      ),
      '}'
    ),

    do_while_statement: $ => seq(
      /do/i,
      repeat($._newline),
      '{',
      repeat($._newline),
      repeat(
        seq(
          $._statement,
          $._terminator
        ),
      ),
      '}',
      repeat($._newline),
      /while/i,
      repeat($._newline),
      '(',
      $.pipeline_statement,
      ')'
    ),

    command_expression: $ => seq(
      choice(
        $.bareword_string,
        seq('&', $.property_name)
      ),
      repeat(
        choice(
          $.command_parameter,
          $.command_argument
        )
      )
    ),

    command_parameter: $ => /-[a-zA-Z_-]+/i,

    command_argument: $ => choice(
      $.bareword_string,
      $.number_expr,
      $._string_expr,
      $.variable,
      $.scriptblock,
      $.hashtable_expression,
      $.subpipeline,
      $.subexpression
    ),

    parameter: $ => seq(
      /-[a-z_][a-z0-9_]*/i,
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
      $.subpipeline,
      $.subexpression
    ),

    subpipeline: $ => seq(
      '(',
      $._pipeline_expression,
      ')'
    ),

    subexpression: $ => seq(
      '$(',
      $._statement,
      ')'
    ),

    _expression: $ => choice(
      $._non_array_expression,
      $.array_expression
    ),

    scriptblock: $ => seq(
      '{',
      optional($.param_block),
      repeat($._newline),
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
      /param/i,
      repeat($._newline),
      '(',
      optional(
        seq(
          repeat($._newline),
          $.param_block_variable,
          repeat(
            seq(
              ',',
              repeat($._newline),
              $.param_block_variable
            )
          ),
        )
      ),
      repeat($._newline),
      ')'
    ),

    param_block_variable: $ => seq(
      repeat(
        seq(
          $._attribute,
          repeat($._newline)
        )
      ),
      $.simple_variable
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
      repeat($._newline),
      optional(
        seq(
          $._expression,
          repeat(
            seq(
              $._terminator,
              $._expression
            )
          ),
          repeat($._newline)
        )
      ),
      ')'
    ),

    hashtable_expression: $ => seq(
      '@{',
      repeat($._newline),
      optional(
        seq(
          $.hashtable_entry,
          repeat(
            seq(
              $._terminator,
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
      repeat($._newline),
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
      choice(
        $.simple_variable,
        $._braced_variable,
        $._special_variable
      )
    ),

    simple_variable: $ => /\$[a-zA-Z0-9_:]+/i,

    _braced_variable: $ => /\${[^}]+}/,

    _special_variable: $ => choice(
      '$$',
      '$^',
      '$?'
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

    _typename_simple: $ => /[a-zA-Z_][a-zA-Z0-9_.]*/i,

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

    number_expr: $ => token(prec(PREC.NUMBER,
      seq(
        choice(
          /\d+/, // Integers
          /\d*\.\d+/ // Floats
        ),
        optional(/(e|E)\d+/), // Scientific notation
        optional(/u|U/), // Unsigned
        optional(/l|L/), // Long
        optional(/(k|K|m|M|g|G|t|T)(b|B)/) // Disk size notation
      )
    )),

    _string_expr: $ => choice(
      $.single_quote_string,
      $.double_quote_string
    ),

    single_quote_string: $  => prec(PREC.STRING, /'[^']*'/),

    double_quote_string: $ => prec(PREC.STRING,
      seq(
        '"',
        repeat(
          choice(
            /([^"$`]|`\$|`)+/,
            $.variable
          )
        ),
        optional('$'),
        '"'
      )
    ),

    bareword_string: $ => /[^0-9'"$^&|()@\-%{}\s][^'"$^&|()@!%{}\s]*/,

    comment: $ => token(prec(PREC.COMMENT,
      choice(
        /#.*/,
        seq(
          '<#',
          repeat(
            choice(
              /[^<]*/,
              /<[^#]*/
            )
          ),
          '#>'
        )
    )))
  },
});
