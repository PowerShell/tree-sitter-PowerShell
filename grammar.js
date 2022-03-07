//-------------------------------------------------------------------------------------------------------
// Copyright (C) Microsoft. All rights reserved.
// Licensed under the MIT license. See LICENSE file in the project root for full license information.
//-------------------------------------------------------------------------------------------------------

const PREC = {
  COMMENT: 1,
  STRING: 2,
  NUMBER: 3
};

module.exports = grammar({
  name: 'PowerShell',

  inline: $ => [
    $._expression,
    $._non_array_expression,
    $._expression_statement,
    $._definition_statement
  ],

  externals: $ => [
    $._statement_terminator
  ],

  extras: $ => [
    $.comment,
    /`?\s/,
    /[\uFEFF\u2060\u200B\u00A0]/
  ],

  rules: {
    program: $ => seq(
      optional($.param_block),
      statement_sequence($)
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
      caseInsensitive('function'),
      /[_a-z+][_a-z0-9+]*/i,
      $.scriptblock
    ),

    filter_definition: $ => seq(
      caseInsensitive('filter'),
      /[_a-zA-Z+][_a-zA-Z0-9+]*/,
      $.scriptblock
    ),

    class_definition: $ => seq(
      caseInsensitive('class'),
      repeat($._newline),
      /[a-zA-Z_][a-zA-Z0-9_]+/,
      repeat($._newline),
      '{',
      repeat(
        seq(
          choice(
            seq($.class_property, $._statement_terminator),
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
        )
      ),
      $.simple_variable
    ),

    class_method: $ => seq(
      optional($.type_expr),
      $.bareword_string,
      '(',
      optional(
        seq(
          $.class_parameter,
          repeat(
            seq(
              ',',
              $.class_parameter
            )
          )
        )
      ),
      ')',
      $.class_method_body
    ),

    class_parameter: $ => seq(
      optional($.type_expr),
      $.simple_variable
    ),

    class_method_body: $ => seq(
      '{',
      statement_sequence($),
      '}'
    ),

    enum_definition: $ => seq(
      caseInsensitive('enum'),
      /[a-zA-Z_][a-zA-Z0-9_]+/,
      '{',
      delimited_seq($.bareword_string, $._statement_terminator, true, true),
      '}'
    ),

    _expression_statement: $ => choice(
      $.assignment_statement,
      $.binary_operator_statement,
      $.pipeline_statement,
      $.if_statement,
      $.while_statement,
      $.do_while_statement
    ),

    assignment_statement: $ => seq(
      $._attributed_variable,
      '=',
      $._expression_statement,
    ),

    pipeline_statement: $ => seq(
      $._pipeline_expression,
      repeat(
        seq(
          '|',
          $.command_expression
        )
      )
    ),

    if_statement: $ => seq(
      caseInsensitive('if'),
      '(',
      $.pipeline_statement,
      ')',
      '{',
      statement_sequence($),
      '}',
      repeat($.elseif_statement),
      optional($.else_statement)
    ),

    elseif_statement: $ => seq(
      caseInsensitive('elseif'),
      '(',
      $.pipeline_statement,
      ')',
      '{',
      statement_sequence($),
      '}'
    ),

    else_statement: $ => seq(
      caseInsensitive('else'),
      '{',
      statement_sequence($),
      '}'
    ),

    while_statement: $ => seq(
      caseInsensitive('while'),
      '(',
      $.pipeline_statement,
      ')',
      '{',
      statement_sequence($),
      '}'
    ),

    do_while_statement: $ => seq(
      caseInsensitive('do'),
      '{',
      statement_sequence($),
      '}',
      caseInsensitive('while'),
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
      $.splatted_variable,
      $.scriptblock,
      $.hashtable_expression,
      $.subpipeline,
      $.subexpression
    ),

    parameter: $ => seq(
      /-[a-zA-Z_][a-zA-Z0-9_]*/i,
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
      statement_sequence($),
      '}'
    ),

    param_block: $ => seq(
      caseInsensitive('param'),
      '(',
      delimited_seq($.param_block_variable, ','),
      ')'
    ),

    param_block_variable: $ => seq(
      repeat(
        $._attribute,
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
      delimited_seq($._expression, $._statement_terminator),
      ')'
    ),

    hashtable_expression: $ => seq(
      '@{',
      repeat(seq($.hashtable_entry, $._statement_terminator)),
      '}'
    ),

    hashtable_entry: $ => seq(
      $.property_name,
      '=',
      $._expression
    ),

    binary_operator: $ => choice(
      caseInsensitive('-eq'),
      caseInsensitive('-ne'),
      caseInsensitive('-ge'),
      caseInsensitive('-gt'),
      caseInsensitive('-lt'),
      caseInsensitive('-le'),
      caseInsensitive('-like'),
      caseInsensitive('-notlike'),
      caseInsensitive('-match'),
      caseInsensitive('-notmatch'),
      caseInsensitive('-replace'),
      caseInsensitive('-contains'),
      caseInsensitive('-notcontains'),
      caseInsensitive('-in'),
      caseInsensitive('-notin'),
      caseInsensitive('-split'),
      caseInsensitive('-join'),
      caseInsensitive('-is'),
      caseInsensitive('-isnot'),
      caseInsensitive('-as'),
    ),

    binary_operator_statement: $ => seq(
      $.variable,
      $.binary_operator,
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

    _newline: $ => choice(
      '\n'
    ),

    simple_variable: $ => /\$[a-zA-Z0-9_:]+/i,

    splatted_variable: $ => /@[a-zA-Z0-9_:]+/i,

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
      delimited_seq($._non_array_expression, ','),
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

    bareword_string: $ => /[^0-9'"$^&|;()@\-%{}\[\]\s][^'"$^&|;()@!%{}\s]*/,

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

function caseInsensitive (keyword) {
  return new RegExp(keyword
    .split('')
    .map(letter => `[${letter}${letter.toUpperCase()}]`)
    .join('')
  )
}

function caseInsensitiveOperator(operator) {
  re = new RegExp(operator
    .split('')
    .map(letter => `[${letter}${letter.toUpperCase()}]`)
    .join('')
  );
  return '-[Cc]?' + re;
}

function statement_sequence($)
{
  return repeat(
    seq(
      $._statement,
      $._statement_terminator
    )
  )
}

function delimited_seq(rule, delimiter, oneOrMore, canFollowLast)
{
  if (canFollowLast)
  {
    if (oneOrMore)
    {
      return repeat1(
        seq(
          rule,
          delimiter
        )
      );
    }

    return repeat(
      seq(
        rule,
        delimiter
      )
    );
  }

  let body = choice(
    rule,
    seq(
      rule,
      repeat(
        seq(
          delimiter,
          rule
        )
      )
    )
  );

  return oneOrMore
    ? body
    : optional(body);
}
