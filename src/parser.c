#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 10
#define STATE_COUNT 694
#define SYMBOL_COUNT 104
#define ALIAS_COUNT 0
#define TOKEN_COUNT 46
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 16

enum {
  anon_sym_CR_LF = 1,
  anon_sym_LF = 2,
  anon_sym_SEMI = 3,
  aux_sym_function_definition_token1 = 4,
  aux_sym_function_definition_token2 = 5,
  aux_sym_filter_definition_token1 = 6,
  aux_sym_class_definition_token1 = 7,
  aux_sym_class_definition_token2 = 8,
  anon_sym_LBRACE = 9,
  anon_sym_RBRACE = 10,
  anon_sym_LPAREN = 11,
  anon_sym_COMMA = 12,
  anon_sym_RPAREN = 13,
  aux_sym_enum_definition_token1 = 14,
  anon_sym_EQ = 15,
  anon_sym_PIPE = 16,
  aux_sym_if_statement_token1 = 17,
  aux_sym_if_statement_token2 = 18,
  aux_sym_if_statement_token3 = 19,
  aux_sym_while_statement_token1 = 20,
  aux_sym_do_while_statement_token1 = 21,
  anon_sym_AMP = 22,
  aux_sym_parameter_token1 = 23,
  anon_sym_COLON = 24,
  anon_sym_DOLLAR_LPAREN = 25,
  aux_sym_param_block_token1 = 26,
  anon_sym_AT_LPAREN = 27,
  anon_sym_AT_LBRACE = 28,
  sym_simple_variable = 29,
  sym__braced_variable = 30,
  anon_sym_DOLLAR_DOLLAR = 31,
  anon_sym_DOLLAR_CARET = 32,
  anon_sym_DOLLAR_QMARK = 33,
  anon_sym_LBRACK = 34,
  anon_sym_RBRACK = 35,
  sym__typename_simple = 36,
  anon_sym_LBRACK_RBRACK = 37,
  sym_number_expr = 38,
  sym_single_quote_string = 39,
  anon_sym_DQUOTE_DQUOTE = 40,
  anon_sym_DQUOTE = 41,
  aux_sym_double_quote_string_token1 = 42,
  anon_sym_DOLLAR = 43,
  sym_bareword_string = 44,
  sym_comment = 45,
  sym_source_file = 46,
  sym__newline = 47,
  sym__terminator = 48,
  sym__statement = 49,
  sym__definition_statement = 50,
  sym_function_definition = 51,
  sym_filter_definition = 52,
  sym_class_definition = 53,
  sym_class_property = 54,
  sym_class_method = 55,
  sym_class_parameter = 56,
  sym_class_method_body = 57,
  sym_enum_definition = 58,
  sym__expression_statement = 59,
  sym_assignment_statement = 60,
  sym_pipeline_statement = 61,
  sym_if_statement = 62,
  sym_while_statement = 63,
  sym_do_while_statement = 64,
  sym_command_expression = 65,
  sym__non_array_expression = 66,
  sym__expression = 67,
  sym_scriptblock = 68,
  sym_param_block = 69,
  sym_param_block_variable = 70,
  sym__pipeline_expression = 71,
  sym_array_expression = 72,
  sym_flat_array_expression = 73,
  sym_hashtable_expression = 74,
  sym_hashtable_entry = 75,
  sym_property_name = 76,
  sym__attributed_variable = 77,
  sym_variable = 78,
  sym__special_variable = 79,
  sym_type_expr = 80,
  sym__typename = 81,
  sym__typename_array = 82,
  sym__typename_generic = 83,
  sym_non_type_attribute = 84,
  sym__attribute = 85,
  sym__string_expr = 86,
  sym_double_quote_string = 87,
  aux_sym_source_file_repeat1 = 88,
  aux_sym__terminator_repeat1 = 89,
  aux_sym_class_definition_repeat1 = 90,
  aux_sym_class_method_repeat1 = 91,
  aux_sym_class_method_body_repeat1 = 92,
  aux_sym_enum_definition_repeat1 = 93,
  aux_sym_pipeline_statement_repeat1 = 94,
  aux_sym_if_statement_repeat1 = 95,
  aux_sym_param_block_repeat1 = 96,
  aux_sym_param_block_variable_repeat1 = 97,
  aux_sym_array_expression_repeat1 = 98,
  aux_sym_flat_array_expression_repeat1 = 99,
  aux_sym_hashtable_expression_repeat1 = 100,
  aux_sym__attributed_variable_repeat1 = 101,
  aux_sym__typename_generic_repeat1 = 102,
  aux_sym_double_quote_string_repeat1 = 103,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_CR_LF] = "\r\n",
  [anon_sym_LF] = "\n",
  [anon_sym_SEMI] = ";",
  [aux_sym_function_definition_token1] = "function_definition_token1",
  [aux_sym_function_definition_token2] = "function_definition_token2",
  [aux_sym_filter_definition_token1] = "filter_definition_token1",
  [aux_sym_class_definition_token1] = "class_definition_token1",
  [aux_sym_class_definition_token2] = "class_definition_token2",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_LPAREN] = "(",
  [anon_sym_COMMA] = ",",
  [anon_sym_RPAREN] = ")",
  [aux_sym_enum_definition_token1] = "enum_definition_token1",
  [anon_sym_EQ] = "=",
  [anon_sym_PIPE] = "|",
  [aux_sym_if_statement_token1] = "if_statement_token1",
  [aux_sym_if_statement_token2] = "if_statement_token2",
  [aux_sym_if_statement_token3] = "if_statement_token3",
  [aux_sym_while_statement_token1] = "while_statement_token1",
  [aux_sym_do_while_statement_token1] = "do_while_statement_token1",
  [anon_sym_AMP] = "&",
  [aux_sym_parameter_token1] = "parameter_token1",
  [anon_sym_COLON] = ":",
  [anon_sym_DOLLAR_LPAREN] = "$(",
  [aux_sym_param_block_token1] = "param_block_token1",
  [anon_sym_AT_LPAREN] = "@(",
  [anon_sym_AT_LBRACE] = "@{",
  [sym_simple_variable] = "simple_variable",
  [sym__braced_variable] = "_braced_variable",
  [anon_sym_DOLLAR_DOLLAR] = "$$",
  [anon_sym_DOLLAR_CARET] = "$^",
  [anon_sym_DOLLAR_QMARK] = "$?",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [sym__typename_simple] = "_typename_simple",
  [anon_sym_LBRACK_RBRACK] = "[]",
  [sym_number_expr] = "number_expr",
  [sym_single_quote_string] = "single_quote_string",
  [anon_sym_DQUOTE_DQUOTE] = "\"\"",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_double_quote_string_token1] = "double_quote_string_token1",
  [anon_sym_DOLLAR] = "$",
  [sym_bareword_string] = "bareword_string",
  [sym_comment] = "comment",
  [sym_source_file] = "source_file",
  [sym__newline] = "_newline",
  [sym__terminator] = "_terminator",
  [sym__statement] = "_statement",
  [sym__definition_statement] = "_definition_statement",
  [sym_function_definition] = "function_definition",
  [sym_filter_definition] = "filter_definition",
  [sym_class_definition] = "class_definition",
  [sym_class_property] = "class_property",
  [sym_class_method] = "class_method",
  [sym_class_parameter] = "class_parameter",
  [sym_class_method_body] = "class_method_body",
  [sym_enum_definition] = "enum_definition",
  [sym__expression_statement] = "_expression_statement",
  [sym_assignment_statement] = "assignment_statement",
  [sym_pipeline_statement] = "pipeline_statement",
  [sym_if_statement] = "if_statement",
  [sym_while_statement] = "while_statement",
  [sym_do_while_statement] = "do_while_statement",
  [sym_command_expression] = "command_expression",
  [sym__non_array_expression] = "_non_array_expression",
  [sym__expression] = "_expression",
  [sym_scriptblock] = "scriptblock",
  [sym_param_block] = "param_block",
  [sym_param_block_variable] = "param_block_variable",
  [sym__pipeline_expression] = "_pipeline_expression",
  [sym_array_expression] = "array_expression",
  [sym_flat_array_expression] = "flat_array_expression",
  [sym_hashtable_expression] = "hashtable_expression",
  [sym_hashtable_entry] = "hashtable_entry",
  [sym_property_name] = "property_name",
  [sym__attributed_variable] = "_attributed_variable",
  [sym_variable] = "variable",
  [sym__special_variable] = "_special_variable",
  [sym_type_expr] = "type_expr",
  [sym__typename] = "_typename",
  [sym__typename_array] = "_typename_array",
  [sym__typename_generic] = "_typename_generic",
  [sym_non_type_attribute] = "non_type_attribute",
  [sym__attribute] = "_attribute",
  [sym__string_expr] = "_string_expr",
  [sym_double_quote_string] = "double_quote_string",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym__terminator_repeat1] = "_terminator_repeat1",
  [aux_sym_class_definition_repeat1] = "class_definition_repeat1",
  [aux_sym_class_method_repeat1] = "class_method_repeat1",
  [aux_sym_class_method_body_repeat1] = "class_method_body_repeat1",
  [aux_sym_enum_definition_repeat1] = "enum_definition_repeat1",
  [aux_sym_pipeline_statement_repeat1] = "pipeline_statement_repeat1",
  [aux_sym_if_statement_repeat1] = "if_statement_repeat1",
  [aux_sym_param_block_repeat1] = "param_block_repeat1",
  [aux_sym_param_block_variable_repeat1] = "param_block_variable_repeat1",
  [aux_sym_array_expression_repeat1] = "array_expression_repeat1",
  [aux_sym_flat_array_expression_repeat1] = "flat_array_expression_repeat1",
  [aux_sym_hashtable_expression_repeat1] = "hashtable_expression_repeat1",
  [aux_sym__attributed_variable_repeat1] = "_attributed_variable_repeat1",
  [aux_sym__typename_generic_repeat1] = "_typename_generic_repeat1",
  [aux_sym_double_quote_string_repeat1] = "double_quote_string_repeat1",
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_CR_LF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_function_definition_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_function_definition_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_filter_definition_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_class_definition_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_class_definition_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_enum_definition_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_if_statement_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_if_statement_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_if_statement_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_while_statement_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_do_while_statement_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_AMP] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_parameter_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLAR_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_param_block_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_AT_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [sym_simple_variable] = {
    .visible = true,
    .named = true,
  },
  [sym__braced_variable] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_DOLLAR_DOLLAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLAR_CARET] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLAR_QMARK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [sym__typename_simple] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LBRACK_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [sym_number_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_single_quote_string] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_double_quote_string_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DOLLAR] = {
    .visible = true,
    .named = false,
  },
  [sym_bareword_string] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__newline] = {
    .visible = false,
    .named = true,
  },
  [sym__terminator] = {
    .visible = false,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym__definition_statement] = {
    .visible = false,
    .named = true,
  },
  [sym_function_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_filter_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_class_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_class_property] = {
    .visible = true,
    .named = true,
  },
  [sym_class_method] = {
    .visible = true,
    .named = true,
  },
  [sym_class_parameter] = {
    .visible = true,
    .named = true,
  },
  [sym_class_method_body] = {
    .visible = true,
    .named = true,
  },
  [sym_enum_definition] = {
    .visible = true,
    .named = true,
  },
  [sym__expression_statement] = {
    .visible = false,
    .named = true,
  },
  [sym_assignment_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_pipeline_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_if_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_while_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_do_while_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_command_expression] = {
    .visible = true,
    .named = true,
  },
  [sym__non_array_expression] = {
    .visible = false,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym_scriptblock] = {
    .visible = true,
    .named = true,
  },
  [sym_param_block] = {
    .visible = true,
    .named = true,
  },
  [sym_param_block_variable] = {
    .visible = true,
    .named = true,
  },
  [sym__pipeline_expression] = {
    .visible = false,
    .named = true,
  },
  [sym_array_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_flat_array_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_hashtable_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_hashtable_entry] = {
    .visible = true,
    .named = true,
  },
  [sym_property_name] = {
    .visible = true,
    .named = true,
  },
  [sym__attributed_variable] = {
    .visible = false,
    .named = true,
  },
  [sym_variable] = {
    .visible = true,
    .named = true,
  },
  [sym__special_variable] = {
    .visible = false,
    .named = true,
  },
  [sym_type_expr] = {
    .visible = true,
    .named = true,
  },
  [sym__typename] = {
    .visible = false,
    .named = true,
  },
  [sym__typename_array] = {
    .visible = false,
    .named = true,
  },
  [sym__typename_generic] = {
    .visible = false,
    .named = true,
  },
  [sym_non_type_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym__attribute] = {
    .visible = false,
    .named = true,
  },
  [sym__string_expr] = {
    .visible = false,
    .named = true,
  },
  [sym_double_quote_string] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__terminator_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_class_definition_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_class_method_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_class_method_body_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_enum_definition_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_pipeline_statement_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_if_statement_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_param_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_param_block_variable_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_array_expression_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_flat_array_expression_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_hashtable_expression_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__attributed_variable_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__typename_generic_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_double_quote_string_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  switch (state) {
    case 0:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '$')
        ADVANCE(4);
      if (lookahead == '&')
        ADVANCE(5);
      if (lookahead == '\'')
        ADVANCE(6);
      if (lookahead == '(')
        ADVANCE(7);
      if (lookahead == ')')
        ADVANCE(8);
      if (lookahead == ',')
        ADVANCE(9);
      if (lookahead == '-')
        ADVANCE(10);
      if (lookahead == '.')
        ADVANCE(11);
      if (lookahead == ':')
        ADVANCE(12);
      if (lookahead == ';')
        ADVANCE(13);
      if (lookahead == '<')
        ADVANCE(14);
      if (lookahead == '=')
        ADVANCE(15);
      if (lookahead == '@')
        ADVANCE(16);
      if (lookahead == '[')
        ADVANCE(17);
      if (lookahead == ']')
        ADVANCE(18);
      if (lookahead == '`')
        SKIP(19);
      if (lookahead == 'c')
        ADVANCE(20);
      if (lookahead == 'd')
        ADVANCE(21);
      if (lookahead == 'e')
        ADVANCE(22);
      if (lookahead == 'f')
        ADVANCE(23);
      if (lookahead == 'i')
        ADVANCE(24);
      if (lookahead == 'p')
        ADVANCE(25);
      if (lookahead == 'w')
        ADVANCE(26);
      if (lookahead == '{')
        ADVANCE(27);
      if (lookahead == '|')
        ADVANCE(28);
      if (lookahead == '}')
        ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(0);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(30);
      END_STATE();
    case 1:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 2:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == '"')
        ADVANCE(31);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(3);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      if (lookahead == '$')
        ADVANCE(32);
      if (lookahead == '(')
        ADVANCE(33);
      if (lookahead == '?')
        ADVANCE(34);
      if (lookahead == '^')
        ADVANCE(35);
      if (lookahead == '{')
        ADVANCE(36);
      if (('0' <= lookahead && lookahead <= ':') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 6:
      if (lookahead == '\'')
        ADVANCE(38);
      if (lookahead != 0)
        ADVANCE(6);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 10:
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(39);
      END_STATE();
    case 11:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(40);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 14:
      if (lookahead == '#')
        ADVANCE(41);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 16:
      if (lookahead == '(')
        ADVANCE(42);
      if (lookahead == '{')
        ADVANCE(43);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == ']')
        ADVANCE(44);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 19:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(0);
      END_STATE();
    case 20:
      if (lookahead == 'l')
        ADVANCE(45);
      END_STATE();
    case 21:
      if (lookahead == 'o')
        ADVANCE(46);
      END_STATE();
    case 22:
      if (lookahead == 'l')
        ADVANCE(47);
      if (lookahead == 'n')
        ADVANCE(48);
      END_STATE();
    case 23:
      if (lookahead == 'i')
        ADVANCE(49);
      if (lookahead == 'u')
        ADVANCE(50);
      END_STATE();
    case 24:
      if (lookahead == 'f')
        ADVANCE(51);
      END_STATE();
    case 25:
      if (lookahead == 'a')
        ADVANCE(52);
      END_STATE();
    case 26:
      if (lookahead == 'h')
        ADVANCE(53);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_number_expr);
      if (lookahead == '.')
        ADVANCE(11);
      if (lookahead == 'g' ||
          lookahead == 'k' ||
          lookahead == 'm' ||
          lookahead == 't')
        ADVANCE(54);
      if (lookahead == 'l')
        ADVANCE(55);
      if (lookahead == 'u')
        ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(30);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_DQUOTE_DQUOTE);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_DOLLAR_DOLLAR);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LPAREN);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_DOLLAR_QMARK);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_DOLLAR_CARET);
      END_STATE();
    case 36:
      if (lookahead != 0 &&
          lookahead != '}')
        ADVANCE(57);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_simple_variable);
      if (('0' <= lookahead && lookahead <= ':') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_single_quote_string);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_parameter_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(39);
      END_STATE();
    case 40:
      if (lookahead == 'e')
        ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(40);
      END_STATE();
    case 41:
      if (lookahead == '#')
        ADVANCE(59);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(41);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_AT_LPAREN);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_AT_LBRACE);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_LBRACK_RBRACK);
      END_STATE();
    case 45:
      if (lookahead == 'a')
        ADVANCE(60);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_do_while_statement_token1);
      END_STATE();
    case 47:
      if (lookahead == 's')
        ADVANCE(61);
      END_STATE();
    case 48:
      if (lookahead == 'u')
        ADVANCE(62);
      END_STATE();
    case 49:
      if (lookahead == 'l')
        ADVANCE(63);
      END_STATE();
    case 50:
      if (lookahead == 'n')
        ADVANCE(64);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym_if_statement_token1);
      END_STATE();
    case 52:
      if (lookahead == 'r')
        ADVANCE(65);
      END_STATE();
    case 53:
      if (lookahead == 'i')
        ADVANCE(66);
      END_STATE();
    case 54:
      if (lookahead == 'b')
        ADVANCE(67);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_number_expr);
      if (lookahead == 'g' ||
          lookahead == 'k' ||
          lookahead == 'm' ||
          lookahead == 't')
        ADVANCE(54);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_number_expr);
      if (lookahead == 'g' ||
          lookahead == 'k' ||
          lookahead == 'm' ||
          lookahead == 't')
        ADVANCE(54);
      if (lookahead == 'l')
        ADVANCE(55);
      END_STATE();
    case 57:
      if (lookahead == '}')
        ADVANCE(68);
      if (lookahead != 0)
        ADVANCE(57);
      END_STATE();
    case 58:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(69);
      END_STATE();
    case 59:
      if (lookahead == '#')
        ADVANCE(59);
      if (lookahead == '>')
        ADVANCE(70);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(41);
      END_STATE();
    case 60:
      if (lookahead == 's')
        ADVANCE(71);
      END_STATE();
    case 61:
      if (lookahead == 'e')
        ADVANCE(72);
      END_STATE();
    case 62:
      if (lookahead == 'm')
        ADVANCE(73);
      END_STATE();
    case 63:
      if (lookahead == 't')
        ADVANCE(74);
      END_STATE();
    case 64:
      if (lookahead == 'c')
        ADVANCE(75);
      END_STATE();
    case 65:
      if (lookahead == 'a')
        ADVANCE(76);
      END_STATE();
    case 66:
      if (lookahead == 'l')
        ADVANCE(77);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_number_expr);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym__braced_variable);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_number_expr);
      if (lookahead == 'g' ||
          lookahead == 'k' ||
          lookahead == 'm' ||
          lookahead == 't')
        ADVANCE(54);
      if (lookahead == 'l')
        ADVANCE(55);
      if (lookahead == 'u')
        ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(69);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '#')
        ADVANCE(59);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(41);
      END_STATE();
    case 71:
      if (lookahead == 's')
        ADVANCE(78);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_if_statement_token3);
      if (lookahead == 'i')
        ADVANCE(79);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_enum_definition_token1);
      END_STATE();
    case 74:
      if (lookahead == 'e')
        ADVANCE(80);
      END_STATE();
    case 75:
      if (lookahead == 't')
        ADVANCE(81);
      END_STATE();
    case 76:
      if (lookahead == 'm')
        ADVANCE(82);
      END_STATE();
    case 77:
      if (lookahead == 'e')
        ADVANCE(83);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_class_definition_token1);
      END_STATE();
    case 79:
      if (lookahead == 'f')
        ADVANCE(84);
      END_STATE();
    case 80:
      if (lookahead == 'r')
        ADVANCE(85);
      END_STATE();
    case 81:
      if (lookahead == 'i')
        ADVANCE(86);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_param_block_token1);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_while_statement_token1);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_if_statement_token2);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym_filter_definition_token1);
      END_STATE();
    case 86:
      if (lookahead == 'o')
        ADVANCE(87);
      END_STATE();
    case 87:
      if (lookahead == 'n')
        ADVANCE(88);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym_function_definition_token1);
      END_STATE();
    case 89:
      if (lookahead == '"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '$')
        ADVANCE(90);
      if (lookahead == '&')
        ADVANCE(5);
      if (lookahead == '\'')
        ADVANCE(6);
      if (lookahead == '(')
        ADVANCE(7);
      if (lookahead == ',')
        ADVANCE(91);
      if (lookahead == '.')
        ADVANCE(92);
      if (lookahead == '<')
        ADVANCE(93);
      if (lookahead == '@')
        ADVANCE(16);
      if (lookahead == '[')
        ADVANCE(94);
      if (lookahead == '`')
        SKIP(95);
      if (lookahead == 'c')
        ADVANCE(96);
      if (lookahead == 'd')
        ADVANCE(97);
      if (lookahead == 'e')
        ADVANCE(98);
      if (lookahead == 'f')
        ADVANCE(99);
      if (lookahead == 'i')
        ADVANCE(100);
      if (lookahead == 'p')
        ADVANCE(101);
      if (lookahead == 'w')
        ADVANCE(102);
      if (lookahead == '{')
        ADVANCE(27);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(89);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(30);
      if (lookahead != 0 &&
          (lookahead < '!' || '+' < lookahead) &&
          lookahead != ']' &&
          lookahead != '^' &&
          lookahead != '}')
        ADVANCE(103);
      END_STATE();
    case 90:
      if (lookahead == '$')
        ADVANCE(32);
      if (lookahead == '(')
        ADVANCE(33);
      if (lookahead == '?')
        ADVANCE(34);
      if (lookahead == '^')
        ADVANCE(35);
      if (lookahead == '{')
        ADVANCE(36);
      if (('0' <= lookahead && lookahead <= ':') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_COMMA);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          (lookahead < '$' || '+' < lookahead) &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '^' &&
          lookahead != '`' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(103);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_bareword_string);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(104);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          (lookahead < '$' || '+' < lookahead) &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '^' &&
          lookahead != '`' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(103);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_bareword_string);
      if (lookahead == '#')
        ADVANCE(105);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '+' < lookahead) &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '^' &&
          lookahead != '`' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(103);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 95:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(89);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_bareword_string);
      if (lookahead == 'l')
        ADVANCE(106);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          (lookahead < '$' || '+' < lookahead) &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '^' &&
          lookahead != '`' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(103);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_bareword_string);
      if (lookahead == 'o')
        ADVANCE(107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          (lookahead < '$' || '+' < lookahead) &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '^' &&
          lookahead != '`' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(103);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_bareword_string);
      if (lookahead == 'n')
        ADVANCE(108);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          (lookahead < '$' || '+' < lookahead) &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '^' &&
          lookahead != '`' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(103);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_bareword_string);
      if (lookahead == 'i')
        ADVANCE(109);
      if (lookahead == 'u')
        ADVANCE(110);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          (lookahead < '$' || '+' < lookahead) &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '^' &&
          lookahead != '`' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(103);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_bareword_string);
      if (lookahead == 'f')
        ADVANCE(111);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          (lookahead < '$' || '+' < lookahead) &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '^' &&
          lookahead != '`' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(103);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_bareword_string);
      if (lookahead == 'a')
        ADVANCE(112);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          (lookahead < '$' || '+' < lookahead) &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '^' &&
          lookahead != '`' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(103);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_bareword_string);
      if (lookahead == 'h')
        ADVANCE(113);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          (lookahead < '$' || '+' < lookahead) &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '^' &&
          lookahead != '`' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(103);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_bareword_string);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          (lookahead < '$' || '+' < lookahead) &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '^' &&
          lookahead != '`' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(103);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_bareword_string);
      if (lookahead == 'e')
        ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(104);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          (lookahead < '$' || '+' < lookahead) &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '^' &&
          lookahead != '`' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(103);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_bareword_string);
      if (lookahead == '#')
        ADVANCE(115);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          (' ' <= lookahead && lookahead <= '+') ||
          lookahead == '@' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '^' ||
          lookahead == '`' ||
          lookahead == '{' ||
          lookahead == '}')
        ADVANCE(41);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(105);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_bareword_string);
      if (lookahead == 'a')
        ADVANCE(116);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          (lookahead < '$' || '+' < lookahead) &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '^' &&
          lookahead != '`' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(103);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(aux_sym_do_while_statement_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          (lookahead < '$' || '+' < lookahead) &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '^' &&
          lookahead != '`' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(103);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_bareword_string);
      if (lookahead == 'u')
        ADVANCE(117);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          (lookahead < '$' || '+' < lookahead) &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '^' &&
          lookahead != '`' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(103);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_bareword_string);
      if (lookahead == 'l')
        ADVANCE(118);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          (lookahead < '$' || '+' < lookahead) &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '^' &&
          lookahead != '`' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(103);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_bareword_string);
      if (lookahead == 'n')
        ADVANCE(119);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          (lookahead < '$' || '+' < lookahead) &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '^' &&
          lookahead != '`' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(103);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(aux_sym_if_statement_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          (lookahead < '$' || '+' < lookahead) &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '^' &&
          lookahead != '`' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(103);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_bareword_string);
      if (lookahead == 'r')
        ADVANCE(120);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          (lookahead < '$' || '+' < lookahead) &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '^' &&
          lookahead != '`' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(103);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_bareword_string);
      if (lookahead == 'i')
        ADVANCE(121);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          (lookahead < '$' || '+' < lookahead) &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '^' &&
          lookahead != '`' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(103);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_bareword_string);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(122);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          (lookahead < '$' || '+' < lookahead) &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '^' &&
          lookahead != '`' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(103);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_bareword_string);
      if (lookahead == '#')
        ADVANCE(115);
      if (lookahead == '>')
        ADVANCE(123);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          (' ' <= lookahead && lookahead <= '+') ||
          lookahead == '@' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '^' ||
          lookahead == '`' ||
          lookahead == '{' ||
          lookahead == '}')
        ADVANCE(41);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(105);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_bareword_string);
      if (lookahead == 's')
        ADVANCE(124);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          (lookahead < '$' || '+' < lookahead) &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '^' &&
          lookahead != '`' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(103);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_bareword_string);
      if (lookahead == 'm')
        ADVANCE(125);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          (lookahead < '$' || '+' < lookahead) &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '^' &&
          lookahead != '`' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(103);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_bareword_string);
      if (lookahead == 't')
        ADVANCE(126);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          (lookahead < '$' || '+' < lookahead) &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '^' &&
          lookahead != '`' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(103);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_bareword_string);
      if (lookahead == 'c')
        ADVANCE(127);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          (lookahead < '$' || '+' < lookahead) &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '^' &&
          lookahead != '`' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(103);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_bareword_string);
      if (lookahead == 'a')
        ADVANCE(128);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          (lookahead < '$' || '+' < lookahead) &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '^' &&
          lookahead != '`' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(103);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_bareword_string);
      if (lookahead == 'l')
        ADVANCE(129);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          (lookahead < '$' || '+' < lookahead) &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '^' &&
          lookahead != '`' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(103);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_number_expr);
      if (lookahead == 'g' ||
          lookahead == 'k' ||
          lookahead == 'm' ||
          lookahead == 't')
        ADVANCE(130);
      if (lookahead == 'l')
        ADVANCE(131);
      if (lookahead == 'u')
        ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(122);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          (lookahead < '$' || '+' < lookahead) &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '^' &&
          lookahead != '`' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(103);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_bareword_string);
      if (lookahead == '#')
        ADVANCE(115);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          (' ' <= lookahead && lookahead <= '+') ||
          lookahead == '@' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '^' ||
          lookahead == '`' ||
          lookahead == '{' ||
          lookahead == '}')
        ADVANCE(41);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(105);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_bareword_string);
      if (lookahead == 's')
        ADVANCE(133);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          (lookahead < '$' || '+' < lookahead) &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '^' &&
          lookahead != '`' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(103);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(aux_sym_enum_definition_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          (lookahead < '$' || '+' < lookahead) &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '^' &&
          lookahead != '`' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(103);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_bareword_string);
      if (lookahead == 'e')
        ADVANCE(134);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          (lookahead < '$' || '+' < lookahead) &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '^' &&
          lookahead != '`' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(103);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_bareword_string);
      if (lookahead == 't')
        ADVANCE(135);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          (lookahead < '$' || '+' < lookahead) &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '^' &&
          lookahead != '`' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(103);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_bareword_string);
      if (lookahead == 'm')
        ADVANCE(136);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          (lookahead < '$' || '+' < lookahead) &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '^' &&
          lookahead != '`' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(103);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_bareword_string);
      if (lookahead == 'e')
        ADVANCE(137);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          (lookahead < '$' || '+' < lookahead) &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '^' &&
          lookahead != '`' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(103);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_bareword_string);
      if (lookahead == 'b')
        ADVANCE(138);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          (lookahead < '$' || '+' < lookahead) &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '^' &&
          lookahead != '`' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(103);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_number_expr);
      if (lookahead == 'g' ||
          lookahead == 'k' ||
          lookahead == 'm' ||
          lookahead == 't')
        ADVANCE(130);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          (lookahead < '$' || '+' < lookahead) &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '^' &&
          lookahead != '`' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(103);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_number_expr);
      if (lookahead == 'g' ||
          lookahead == 'k' ||
          lookahead == 'm' ||
          lookahead == 't')
        ADVANCE(130);
      if (lookahead == 'l')
        ADVANCE(131);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          (lookahead < '$' || '+' < lookahead) &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '^' &&
          lookahead != '`' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(103);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym_class_definition_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          (lookahead < '$' || '+' < lookahead) &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '^' &&
          lookahead != '`' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(103);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_bareword_string);
      if (lookahead == 'r')
        ADVANCE(139);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          (lookahead < '$' || '+' < lookahead) &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '^' &&
          lookahead != '`' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(103);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_bareword_string);
      if (lookahead == 'i')
        ADVANCE(140);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          (lookahead < '$' || '+' < lookahead) &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '^' &&
          lookahead != '`' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(103);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym_param_block_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          (lookahead < '$' || '+' < lookahead) &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '^' &&
          lookahead != '`' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(103);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym_while_statement_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          (lookahead < '$' || '+' < lookahead) &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '^' &&
          lookahead != '`' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(103);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_number_expr);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          (lookahead < '$' || '+' < lookahead) &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '^' &&
          lookahead != '`' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(103);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym_filter_definition_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          (lookahead < '$' || '+' < lookahead) &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '^' &&
          lookahead != '`' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(103);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_bareword_string);
      if (lookahead == 'o')
        ADVANCE(141);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          (lookahead < '$' || '+' < lookahead) &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '^' &&
          lookahead != '`' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(103);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_bareword_string);
      if (lookahead == 'n')
        ADVANCE(142);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          (lookahead < '$' || '+' < lookahead) &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '^' &&
          lookahead != '`' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(103);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym_function_definition_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          (lookahead < '$' || '+' < lookahead) &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '^' &&
          lookahead != '`' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(103);
      END_STATE();
    case 143:
      if (lookahead == '\n')
        ADVANCE(144);
      if (lookahead == '\r')
        ADVANCE(145);
      if (lookahead == '"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '$')
        ADVANCE(90);
      if (lookahead == '\'')
        ADVANCE(6);
      if (lookahead == '(')
        ADVANCE(7);
      if (lookahead == ')')
        ADVANCE(8);
      if (lookahead == ',')
        ADVANCE(9);
      if (lookahead == '.')
        ADVANCE(11);
      if (lookahead == '<')
        ADVANCE(14);
      if (lookahead == '@')
        ADVANCE(16);
      if (lookahead == '[')
        ADVANCE(94);
      if (lookahead == '`')
        SKIP(146);
      if (lookahead == '{')
        ADVANCE(27);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(143);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(30);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n')
        ADVANCE(144);
      if (lookahead == '\r')
        ADVANCE(145);
      END_STATE();
    case 145:
      if (lookahead == '\n')
        ADVANCE(147);
      if (lookahead == '\r')
        ADVANCE(145);
      if (lookahead == '"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '$')
        ADVANCE(90);
      if (lookahead == '\'')
        ADVANCE(6);
      if (lookahead == '(')
        ADVANCE(7);
      if (lookahead == ')')
        ADVANCE(8);
      if (lookahead == ',')
        ADVANCE(9);
      if (lookahead == '.')
        ADVANCE(11);
      if (lookahead == '<')
        ADVANCE(14);
      if (lookahead == '@')
        ADVANCE(16);
      if (lookahead == '[')
        ADVANCE(94);
      if (lookahead == '`')
        SKIP(146);
      if (lookahead == '{')
        ADVANCE(27);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(143);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(30);
      END_STATE();
    case 146:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(143);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_CR_LF);
      if (lookahead == '\n')
        ADVANCE(144);
      if (lookahead == '\r')
        ADVANCE(145);
      END_STATE();
    case 148:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '<')
        ADVANCE(14);
      if (lookahead == '`')
        SKIP(149);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(148);
      if (lookahead == '+' ||
          ('_' <= lookahead && lookahead <= 'z'))
        ADVANCE(150);
      END_STATE();
    case 149:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(148);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(aux_sym_function_definition_token2);
      if (lookahead == '+' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(150);
      END_STATE();
    case 151:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(152);
      if (lookahead == '\r')
        ADVANCE(153);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == ')')
        ADVANCE(8);
      if (lookahead == ',')
        ADVANCE(9);
      if (lookahead == ';')
        ADVANCE(13);
      if (lookahead == '<')
        ADVANCE(14);
      if (lookahead == '=')
        ADVANCE(15);
      if (lookahead == '`')
        SKIP(154);
      if (lookahead == '|')
        ADVANCE(28);
      if (lookahead == '}')
        ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(151);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n')
        ADVANCE(152);
      if (lookahead == '\r')
        ADVANCE(153);
      END_STATE();
    case 153:
      if (lookahead == '\n')
        ADVANCE(155);
      if (lookahead == '\r')
        ADVANCE(153);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == ')')
        ADVANCE(8);
      if (lookahead == ',')
        ADVANCE(9);
      if (lookahead == ';')
        ADVANCE(13);
      if (lookahead == '<')
        ADVANCE(14);
      if (lookahead == '=')
        ADVANCE(15);
      if (lookahead == '`')
        SKIP(156);
      if (lookahead == '|')
        ADVANCE(28);
      if (lookahead == '}')
        ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(157);
      END_STATE();
    case 154:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(151);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_CR_LF);
      if (lookahead == '\n')
        ADVANCE(152);
      if (lookahead == '\r')
        ADVANCE(153);
      END_STATE();
    case 156:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(157);
      END_STATE();
    case 157:
      if (lookahead == '\n')
        ADVANCE(152);
      if (lookahead == '\r')
        ADVANCE(153);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == ')')
        ADVANCE(8);
      if (lookahead == ',')
        ADVANCE(9);
      if (lookahead == ';')
        ADVANCE(13);
      if (lookahead == '<')
        ADVANCE(14);
      if (lookahead == '=')
        ADVANCE(15);
      if (lookahead == '`')
        SKIP(156);
      if (lookahead == '|')
        ADVANCE(28);
      if (lookahead == '}')
        ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(157);
      END_STATE();
    case 158:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(159);
      if (lookahead == '\r')
        ADVANCE(160);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '$')
        ADVANCE(161);
      if (lookahead == ')')
        ADVANCE(8);
      if (lookahead == ',')
        ADVANCE(9);
      if (lookahead == ';')
        ADVANCE(13);
      if (lookahead == '<')
        ADVANCE(14);
      if (lookahead == '[')
        ADVANCE(94);
      if (lookahead == '`')
        SKIP(162);
      if (lookahead == '|')
        ADVANCE(28);
      if (lookahead == '}')
        ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(158);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n')
        ADVANCE(159);
      if (lookahead == '\r')
        ADVANCE(160);
      END_STATE();
    case 160:
      if (lookahead == '\n')
        ADVANCE(163);
      if (lookahead == '\r')
        ADVANCE(160);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '$')
        ADVANCE(161);
      if (lookahead == ')')
        ADVANCE(8);
      if (lookahead == ',')
        ADVANCE(9);
      if (lookahead == ';')
        ADVANCE(13);
      if (lookahead == '<')
        ADVANCE(14);
      if (lookahead == '[')
        ADVANCE(94);
      if (lookahead == '`')
        SKIP(164);
      if (lookahead == '|')
        ADVANCE(28);
      if (lookahead == '}')
        ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(165);
      END_STATE();
    case 161:
      if (lookahead == '$')
        ADVANCE(32);
      if (lookahead == '?')
        ADVANCE(34);
      if (lookahead == '^')
        ADVANCE(35);
      if (lookahead == '{')
        ADVANCE(36);
      if (('0' <= lookahead && lookahead <= ':') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 162:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(158);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_CR_LF);
      if (lookahead == '\n')
        ADVANCE(159);
      if (lookahead == '\r')
        ADVANCE(160);
      END_STATE();
    case 164:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(165);
      END_STATE();
    case 165:
      if (lookahead == '\n')
        ADVANCE(159);
      if (lookahead == '\r')
        ADVANCE(160);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '$')
        ADVANCE(161);
      if (lookahead == ')')
        ADVANCE(8);
      if (lookahead == ',')
        ADVANCE(9);
      if (lookahead == ';')
        ADVANCE(13);
      if (lookahead == '<')
        ADVANCE(14);
      if (lookahead == '[')
        ADVANCE(94);
      if (lookahead == '`')
        SKIP(164);
      if (lookahead == '|')
        ADVANCE(28);
      if (lookahead == '}')
        ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(165);
      END_STATE();
    case 166:
      if (lookahead == '\n')
        ADVANCE(167);
      if (lookahead == '\r')
        ADVANCE(168);
      if (lookahead == '"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '$')
        ADVANCE(90);
      if (lookahead == '&')
        ADVANCE(5);
      if (lookahead == '\'')
        ADVANCE(6);
      if (lookahead == '(')
        ADVANCE(7);
      if (lookahead == ',')
        ADVANCE(91);
      if (lookahead == '.')
        ADVANCE(92);
      if (lookahead == '<')
        ADVANCE(93);
      if (lookahead == '@')
        ADVANCE(16);
      if (lookahead == '[')
        ADVANCE(94);
      if (lookahead == '`')
        SKIP(169);
      if (lookahead == 'c')
        ADVANCE(96);
      if (lookahead == 'd')
        ADVANCE(97);
      if (lookahead == 'e')
        ADVANCE(98);
      if (lookahead == 'f')
        ADVANCE(99);
      if (lookahead == 'i')
        ADVANCE(100);
      if (lookahead == 'p')
        ADVANCE(101);
      if (lookahead == 'w')
        ADVANCE(102);
      if (lookahead == '{')
        ADVANCE(27);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(166);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(30);
      if (lookahead != 0 &&
          (lookahead < '!' || '+' < lookahead) &&
          lookahead != ']' &&
          lookahead != '^' &&
          lookahead != '}')
        ADVANCE(103);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n')
        ADVANCE(167);
      if (lookahead == '\r')
        ADVANCE(168);
      END_STATE();
    case 168:
      if (lookahead == '\n')
        ADVANCE(170);
      if (lookahead == '\r')
        ADVANCE(168);
      if (lookahead == '"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '$')
        ADVANCE(90);
      if (lookahead == '&')
        ADVANCE(5);
      if (lookahead == '\'')
        ADVANCE(6);
      if (lookahead == '(')
        ADVANCE(7);
      if (lookahead == ',')
        ADVANCE(91);
      if (lookahead == '.')
        ADVANCE(92);
      if (lookahead == '<')
        ADVANCE(93);
      if (lookahead == '@')
        ADVANCE(16);
      if (lookahead == '[')
        ADVANCE(94);
      if (lookahead == '`')
        SKIP(169);
      if (lookahead == 'c')
        ADVANCE(96);
      if (lookahead == 'd')
        ADVANCE(97);
      if (lookahead == 'e')
        ADVANCE(98);
      if (lookahead == 'f')
        ADVANCE(99);
      if (lookahead == 'i')
        ADVANCE(100);
      if (lookahead == 'p')
        ADVANCE(101);
      if (lookahead == 'w')
        ADVANCE(102);
      if (lookahead == '{')
        ADVANCE(27);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(166);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(30);
      if (lookahead != 0 &&
          (lookahead < '!' || '+' < lookahead) &&
          lookahead != ']' &&
          lookahead != '^' &&
          lookahead != '}')
        ADVANCE(103);
      END_STATE();
    case 169:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(166);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_CR_LF);
      if (lookahead == '\n')
        ADVANCE(167);
      if (lookahead == '\r')
        ADVANCE(168);
      END_STATE();
    case 171:
      if (lookahead == '\n')
        ADVANCE(172);
      if (lookahead == '\r')
        ADVANCE(173);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '<')
        ADVANCE(14);
      if (lookahead == '`')
        SKIP(174);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(171);
      if (('_' <= lookahead && lookahead <= 'z'))
        ADVANCE(175);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n')
        ADVANCE(172);
      if (lookahead == '\r')
        ADVANCE(173);
      END_STATE();
    case 173:
      if (lookahead == '\n')
        ADVANCE(176);
      if (lookahead == '\r')
        ADVANCE(173);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '<')
        ADVANCE(14);
      if (lookahead == '`')
        SKIP(174);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(171);
      if (('_' <= lookahead && lookahead <= 'z'))
        ADVANCE(175);
      END_STATE();
    case 174:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(171);
      END_STATE();
    case 175:
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(177);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_CR_LF);
      if (lookahead == '\n')
        ADVANCE(172);
      if (lookahead == '\r')
        ADVANCE(173);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym_class_definition_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(177);
      END_STATE();
    case 178:
      if (lookahead == '"')
        ADVANCE(179);
      if (lookahead == '#')
        ADVANCE(180);
      if (lookahead == '$')
        ADVANCE(181);
      if (lookahead == '<')
        ADVANCE(182);
      if (lookahead == '`')
        ADVANCE(183);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(184);
      if (lookahead != 0)
        ADVANCE(185);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym_double_quote_string_token1);
      if (lookahead == '\n')
        ADVANCE(185);
      if (lookahead == '"' ||
          lookahead == '$')
        ADVANCE(3);
      if (lookahead != 0)
        ADVANCE(180);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      if (lookahead == '$')
        ADVANCE(32);
      if (lookahead == '?')
        ADVANCE(34);
      if (lookahead == '^')
        ADVANCE(35);
      if (lookahead == '{')
        ADVANCE(36);
      if (('0' <= lookahead && lookahead <= ':') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym_double_quote_string_token1);
      if (lookahead == '#')
        ADVANCE(186);
      if (lookahead != 0 &&
          (lookahead < '"' || '$' < lookahead))
        ADVANCE(185);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym_double_quote_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(184);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$')
        ADVANCE(185);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym_double_quote_string_token1);
      if (lookahead == '#')
        ADVANCE(180);
      if (lookahead == '<')
        ADVANCE(182);
      if (lookahead == '`')
        ADVANCE(183);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(184);
      if (lookahead != 0 &&
          (lookahead < '"' || '$' < lookahead))
        ADVANCE(185);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym_double_quote_string_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$')
        ADVANCE(185);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym_double_quote_string_token1);
      if (lookahead == '\n')
        ADVANCE(185);
      if (lookahead == '#')
        ADVANCE(187);
      if (('"' <= lookahead && lookahead <= '$'))
        ADVANCE(41);
      if (lookahead != 0)
        ADVANCE(186);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym_double_quote_string_token1);
      if (lookahead == '\n')
        ADVANCE(185);
      if (lookahead == '#')
        ADVANCE(187);
      if (lookahead == '>')
        ADVANCE(188);
      if (('"' <= lookahead && lookahead <= '$'))
        ADVANCE(41);
      if (lookahead != 0)
        ADVANCE(186);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym_double_quote_string_token1);
      if (lookahead == '\n')
        ADVANCE(185);
      if (lookahead == '#')
        ADVANCE(187);
      if (('"' <= lookahead && lookahead <= '$'))
        ADVANCE(41);
      if (lookahead != 0)
        ADVANCE(186);
      END_STATE();
    case 189:
      if (lookahead == '"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '$')
        ADVANCE(90);
      if (lookahead == '\'')
        ADVANCE(6);
      if (lookahead == '(')
        ADVANCE(7);
      if (lookahead == ')')
        ADVANCE(8);
      if (lookahead == ',')
        ADVANCE(9);
      if (lookahead == '.')
        ADVANCE(11);
      if (lookahead == '<')
        ADVANCE(14);
      if (lookahead == '@')
        ADVANCE(16);
      if (lookahead == '[')
        ADVANCE(94);
      if (lookahead == '`')
        SKIP(190);
      if (lookahead == '{')
        ADVANCE(27);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(189);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(30);
      END_STATE();
    case 190:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(189);
      END_STATE();
    case 191:
      if (lookahead == '"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '$')
        ADVANCE(161);
      if (lookahead == '&')
        ADVANCE(5);
      if (lookahead == '\'')
        ADVANCE(6);
      if (lookahead == '<')
        ADVANCE(93);
      if (lookahead == '[')
        ADVANCE(94);
      if (lookahead == '`')
        SKIP(192);
      if (lookahead == '}')
        ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(191);
      if (lookahead != 0 &&
          (lookahead < '!' || '+' < lookahead) &&
          (lookahead < '0' || '9' < lookahead) &&
          lookahead != '@' &&
          lookahead != ']' &&
          lookahead != '^' &&
          lookahead != '{')
        ADVANCE(103);
      END_STATE();
    case 192:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(191);
      END_STATE();
    case 193:
      if (lookahead == '"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '$')
        ADVANCE(90);
      if (lookahead == '&')
        ADVANCE(5);
      if (lookahead == '\'')
        ADVANCE(6);
      if (lookahead == '(')
        ADVANCE(7);
      if (lookahead == ',')
        ADVANCE(91);
      if (lookahead == '.')
        ADVANCE(92);
      if (lookahead == '<')
        ADVANCE(93);
      if (lookahead == '@')
        ADVANCE(16);
      if (lookahead == '[')
        ADVANCE(94);
      if (lookahead == '`')
        SKIP(194);
      if (lookahead == '{')
        ADVANCE(27);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(193);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(30);
      if (lookahead != 0 &&
          (lookahead < '!' || '+' < lookahead) &&
          lookahead != ']' &&
          lookahead != '^' &&
          lookahead != '}')
        ADVANCE(103);
      END_STATE();
    case 194:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(193);
      END_STATE();
    case 195:
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '<')
        ADVANCE(14);
      if (lookahead == '`')
        SKIP(196);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(195);
      if (('_' <= lookahead && lookahead <= 'z'))
        ADVANCE(197);
      END_STATE();
    case 196:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(195);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym__typename_simple);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(197);
      END_STATE();
    case 198:
      if (lookahead == '\n')
        ADVANCE(199);
      if (lookahead == '\r')
        ADVANCE(200);
      if (lookahead == '"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '$')
        ADVANCE(161);
      if (lookahead == '&')
        ADVANCE(5);
      if (lookahead == '\'')
        ADVANCE(6);
      if (lookahead == '<')
        ADVANCE(93);
      if (lookahead == '[')
        ADVANCE(94);
      if (lookahead == '`')
        SKIP(201);
      if (lookahead == '}')
        ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(198);
      if (lookahead != 0 &&
          (lookahead < '!' || '+' < lookahead) &&
          (lookahead < '0' || '9' < lookahead) &&
          lookahead != '@' &&
          lookahead != ']' &&
          lookahead != '^' &&
          lookahead != '{')
        ADVANCE(103);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n')
        ADVANCE(199);
      if (lookahead == '\r')
        ADVANCE(200);
      END_STATE();
    case 200:
      if (lookahead == '\n')
        ADVANCE(202);
      if (lookahead == '\r')
        ADVANCE(200);
      if (lookahead == '"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '$')
        ADVANCE(161);
      if (lookahead == '&')
        ADVANCE(5);
      if (lookahead == '\'')
        ADVANCE(6);
      if (lookahead == '<')
        ADVANCE(93);
      if (lookahead == '[')
        ADVANCE(94);
      if (lookahead == '`')
        SKIP(201);
      if (lookahead == '}')
        ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(198);
      if (lookahead != 0 &&
          (lookahead < '!' || '+' < lookahead) &&
          (lookahead < '0' || '9' < lookahead) &&
          lookahead != '@' &&
          lookahead != ']' &&
          lookahead != '^' &&
          lookahead != '{')
        ADVANCE(103);
      END_STATE();
    case 201:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(198);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_CR_LF);
      if (lookahead == '\n')
        ADVANCE(199);
      if (lookahead == '\r')
        ADVANCE(200);
      END_STATE();
    case 203:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '$')
        ADVANCE(90);
      if (lookahead == '&')
        ADVANCE(5);
      if (lookahead == '\'')
        ADVANCE(6);
      if (lookahead == '(')
        ADVANCE(7);
      if (lookahead == ',')
        ADVANCE(91);
      if (lookahead == '.')
        ADVANCE(92);
      if (lookahead == '<')
        ADVANCE(93);
      if (lookahead == '@')
        ADVANCE(16);
      if (lookahead == '[')
        ADVANCE(94);
      if (lookahead == '`')
        SKIP(204);
      if (lookahead == 'c')
        ADVANCE(96);
      if (lookahead == 'd')
        ADVANCE(97);
      if (lookahead == 'e')
        ADVANCE(98);
      if (lookahead == 'f')
        ADVANCE(99);
      if (lookahead == 'i')
        ADVANCE(100);
      if (lookahead == 'w')
        ADVANCE(102);
      if (lookahead == '{')
        ADVANCE(27);
      if (lookahead == '}')
        ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(203);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(30);
      if (lookahead != 0 &&
          (lookahead < '!' || '+' < lookahead) &&
          lookahead != ']' &&
          lookahead != '^')
        ADVANCE(103);
      END_STATE();
    case 204:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(203);
      END_STATE();
    case 205:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(206);
      if (lookahead == '\r')
        ADVANCE(207);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == ',')
        ADVANCE(9);
      if (lookahead == ';')
        ADVANCE(13);
      if (lookahead == '<')
        ADVANCE(14);
      if (lookahead == '=')
        ADVANCE(15);
      if (lookahead == '`')
        SKIP(208);
      if (lookahead == '|')
        ADVANCE(28);
      if (lookahead == '}')
        ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(205);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n')
        ADVANCE(206);
      if (lookahead == '\r')
        ADVANCE(207);
      END_STATE();
    case 207:
      if (lookahead == '\n')
        ADVANCE(209);
      if (lookahead == '\r')
        ADVANCE(207);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == ',')
        ADVANCE(9);
      if (lookahead == ';')
        ADVANCE(13);
      if (lookahead == '<')
        ADVANCE(14);
      if (lookahead == '=')
        ADVANCE(15);
      if (lookahead == '`')
        SKIP(210);
      if (lookahead == '|')
        ADVANCE(28);
      if (lookahead == '}')
        ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(211);
      END_STATE();
    case 208:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(205);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_CR_LF);
      if (lookahead == '\n')
        ADVANCE(206);
      if (lookahead == '\r')
        ADVANCE(207);
      END_STATE();
    case 210:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(211);
      END_STATE();
    case 211:
      if (lookahead == '\n')
        ADVANCE(206);
      if (lookahead == '\r')
        ADVANCE(207);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == ',')
        ADVANCE(9);
      if (lookahead == ';')
        ADVANCE(13);
      if (lookahead == '<')
        ADVANCE(14);
      if (lookahead == '=')
        ADVANCE(15);
      if (lookahead == '`')
        SKIP(210);
      if (lookahead == '|')
        ADVANCE(28);
      if (lookahead == '}')
        ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(211);
      END_STATE();
    case 212:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(213);
      if (lookahead == '\r')
        ADVANCE(214);
      if (lookahead == '"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '$')
        ADVANCE(90);
      if (lookahead == '&')
        ADVANCE(5);
      if (lookahead == '\'')
        ADVANCE(6);
      if (lookahead == '(')
        ADVANCE(7);
      if (lookahead == ',')
        ADVANCE(91);
      if (lookahead == '.')
        ADVANCE(92);
      if (lookahead == '<')
        ADVANCE(93);
      if (lookahead == '@')
        ADVANCE(16);
      if (lookahead == '[')
        ADVANCE(94);
      if (lookahead == '`')
        SKIP(215);
      if (lookahead == 'c')
        ADVANCE(96);
      if (lookahead == 'd')
        ADVANCE(97);
      if (lookahead == 'e')
        ADVANCE(98);
      if (lookahead == 'f')
        ADVANCE(99);
      if (lookahead == 'i')
        ADVANCE(100);
      if (lookahead == 'w')
        ADVANCE(102);
      if (lookahead == '{')
        ADVANCE(27);
      if (lookahead == '}')
        ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(212);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(30);
      if (lookahead != 0 &&
          (lookahead < '!' || '+' < lookahead) &&
          lookahead != ']' &&
          lookahead != '^')
        ADVANCE(103);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n')
        ADVANCE(213);
      if (lookahead == '\r')
        ADVANCE(214);
      END_STATE();
    case 214:
      if (lookahead == '\n')
        ADVANCE(216);
      if (lookahead == '\r')
        ADVANCE(214);
      if (lookahead == '"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '$')
        ADVANCE(90);
      if (lookahead == '&')
        ADVANCE(5);
      if (lookahead == '\'')
        ADVANCE(6);
      if (lookahead == '(')
        ADVANCE(7);
      if (lookahead == ',')
        ADVANCE(91);
      if (lookahead == '.')
        ADVANCE(92);
      if (lookahead == '<')
        ADVANCE(93);
      if (lookahead == '@')
        ADVANCE(16);
      if (lookahead == '[')
        ADVANCE(94);
      if (lookahead == '`')
        SKIP(217);
      if (lookahead == 'c')
        ADVANCE(96);
      if (lookahead == 'd')
        ADVANCE(97);
      if (lookahead == 'e')
        ADVANCE(98);
      if (lookahead == 'f')
        ADVANCE(99);
      if (lookahead == 'i')
        ADVANCE(100);
      if (lookahead == 'w')
        ADVANCE(102);
      if (lookahead == '{')
        ADVANCE(27);
      if (lookahead == '}')
        ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(218);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(30);
      if (lookahead != 0 &&
          (lookahead < '!' || '+' < lookahead) &&
          lookahead != ']' &&
          lookahead != '^')
        ADVANCE(103);
      END_STATE();
    case 215:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(212);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_CR_LF);
      if (lookahead == '\n')
        ADVANCE(213);
      if (lookahead == '\r')
        ADVANCE(214);
      END_STATE();
    case 217:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(218);
      END_STATE();
    case 218:
      if (lookahead == '\n')
        ADVANCE(213);
      if (lookahead == '\r')
        ADVANCE(214);
      if (lookahead == '"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '$')
        ADVANCE(90);
      if (lookahead == '&')
        ADVANCE(5);
      if (lookahead == '\'')
        ADVANCE(6);
      if (lookahead == '(')
        ADVANCE(7);
      if (lookahead == ',')
        ADVANCE(91);
      if (lookahead == '.')
        ADVANCE(92);
      if (lookahead == '<')
        ADVANCE(93);
      if (lookahead == '@')
        ADVANCE(16);
      if (lookahead == '[')
        ADVANCE(94);
      if (lookahead == '`')
        SKIP(217);
      if (lookahead == 'c')
        ADVANCE(96);
      if (lookahead == 'd')
        ADVANCE(97);
      if (lookahead == 'e')
        ADVANCE(98);
      if (lookahead == 'f')
        ADVANCE(99);
      if (lookahead == 'i')
        ADVANCE(100);
      if (lookahead == 'w')
        ADVANCE(102);
      if (lookahead == '{')
        ADVANCE(27);
      if (lookahead == '}')
        ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(218);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(30);
      if (lookahead != 0 &&
          (lookahead < '!' || '+' < lookahead) &&
          lookahead != ']' &&
          lookahead != '^')
        ADVANCE(103);
      END_STATE();
    case 219:
      if (lookahead == '\n')
        ADVANCE(220);
      if (lookahead == '\r')
        ADVANCE(221);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == ')')
        ADVANCE(8);
      if (lookahead == ',')
        ADVANCE(9);
      if (lookahead == ';')
        ADVANCE(13);
      if (lookahead == '<')
        ADVANCE(14);
      if (lookahead == '`')
        SKIP(222);
      if (lookahead == '|')
        ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(219);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n')
        ADVANCE(220);
      if (lookahead == '\r')
        ADVANCE(221);
      END_STATE();
    case 221:
      if (lookahead == '\n')
        ADVANCE(223);
      if (lookahead == '\r')
        ADVANCE(221);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == ')')
        ADVANCE(8);
      if (lookahead == ',')
        ADVANCE(9);
      if (lookahead == ';')
        ADVANCE(13);
      if (lookahead == '<')
        ADVANCE(14);
      if (lookahead == '`')
        SKIP(222);
      if (lookahead == '|')
        ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(219);
      END_STATE();
    case 222:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(219);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_CR_LF);
      if (lookahead == '\n')
        ADVANCE(220);
      if (lookahead == '\r')
        ADVANCE(221);
      END_STATE();
    case 224:
      if (lookahead == '\n')
        ADVANCE(225);
      if (lookahead == '\r')
        ADVANCE(226);
      if (lookahead == '"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '$')
        ADVANCE(90);
      if (lookahead == '&')
        ADVANCE(5);
      if (lookahead == '\'')
        ADVANCE(6);
      if (lookahead == '(')
        ADVANCE(7);
      if (lookahead == ',')
        ADVANCE(91);
      if (lookahead == '.')
        ADVANCE(92);
      if (lookahead == '<')
        ADVANCE(93);
      if (lookahead == '@')
        ADVANCE(16);
      if (lookahead == '[')
        ADVANCE(94);
      if (lookahead == '`')
        SKIP(227);
      if (lookahead == '{')
        ADVANCE(27);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(224);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(30);
      if (lookahead != 0 &&
          (lookahead < '!' || '+' < lookahead) &&
          lookahead != ']' &&
          lookahead != '^' &&
          lookahead != '}')
        ADVANCE(103);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n')
        ADVANCE(225);
      if (lookahead == '\r')
        ADVANCE(226);
      END_STATE();
    case 226:
      if (lookahead == '\n')
        ADVANCE(228);
      if (lookahead == '\r')
        ADVANCE(226);
      if (lookahead == '"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '$')
        ADVANCE(90);
      if (lookahead == '&')
        ADVANCE(5);
      if (lookahead == '\'')
        ADVANCE(6);
      if (lookahead == '(')
        ADVANCE(7);
      if (lookahead == ',')
        ADVANCE(91);
      if (lookahead == '.')
        ADVANCE(92);
      if (lookahead == '<')
        ADVANCE(93);
      if (lookahead == '@')
        ADVANCE(16);
      if (lookahead == '[')
        ADVANCE(94);
      if (lookahead == '`')
        SKIP(227);
      if (lookahead == '{')
        ADVANCE(27);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(224);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(30);
      if (lookahead != 0 &&
          (lookahead < '!' || '+' < lookahead) &&
          lookahead != ']' &&
          lookahead != '^' &&
          lookahead != '}')
        ADVANCE(103);
      END_STATE();
    case 227:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(224);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_CR_LF);
      if (lookahead == '\n')
        ADVANCE(225);
      if (lookahead == '\r')
        ADVANCE(226);
      END_STATE();
    case 229:
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == ')')
        ADVANCE(8);
      if (lookahead == ',')
        ADVANCE(9);
      if (lookahead == '<')
        ADVANCE(14);
      if (lookahead == '=')
        ADVANCE(15);
      if (lookahead == '`')
        SKIP(230);
      if (lookahead == '|')
        ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(229);
      END_STATE();
    case 230:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(229);
      END_STATE();
    case 231:
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '$')
        ADVANCE(161);
      if (lookahead == ')')
        ADVANCE(8);
      if (lookahead == ',')
        ADVANCE(9);
      if (lookahead == '<')
        ADVANCE(14);
      if (lookahead == '[')
        ADVANCE(94);
      if (lookahead == '`')
        SKIP(232);
      if (lookahead == '|')
        ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(231);
      END_STATE();
    case 232:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(231);
      END_STATE();
    case 233:
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '(')
        ADVANCE(7);
      if (lookahead == ',')
        ADVANCE(9);
      if (lookahead == '<')
        ADVANCE(14);
      if (lookahead == '[')
        ADVANCE(17);
      if (lookahead == ']')
        ADVANCE(18);
      if (lookahead == '`')
        SKIP(234);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(233);
      END_STATE();
    case 234:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(233);
      END_STATE();
    case 235:
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '<')
        ADVANCE(14);
      if (lookahead == '=')
        ADVANCE(15);
      if (lookahead == '`')
        SKIP(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(235);
      END_STATE();
    case 236:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(235);
      END_STATE();
    case 237:
      if (lookahead == '\n')
        ADVANCE(238);
      if (lookahead == '\r')
        ADVANCE(239);
      if (lookahead == '"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '$')
        ADVANCE(90);
      if (lookahead == '&')
        ADVANCE(5);
      if (lookahead == '\'')
        ADVANCE(6);
      if (lookahead == '(')
        ADVANCE(7);
      if (lookahead == ',')
        ADVANCE(91);
      if (lookahead == '.')
        ADVANCE(92);
      if (lookahead == '<')
        ADVANCE(93);
      if (lookahead == '@')
        ADVANCE(16);
      if (lookahead == '[')
        ADVANCE(94);
      if (lookahead == '`')
        SKIP(240);
      if (lookahead == 'd')
        ADVANCE(97);
      if (lookahead == 'i')
        ADVANCE(100);
      if (lookahead == 'w')
        ADVANCE(102);
      if (lookahead == '{')
        ADVANCE(27);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(237);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(30);
      if (lookahead != 0 &&
          (lookahead < '!' || '+' < lookahead) &&
          lookahead != ']' &&
          lookahead != '^' &&
          lookahead != '}')
        ADVANCE(103);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n')
        ADVANCE(238);
      if (lookahead == '\r')
        ADVANCE(239);
      END_STATE();
    case 239:
      if (lookahead == '\n')
        ADVANCE(241);
      if (lookahead == '\r')
        ADVANCE(239);
      if (lookahead == '"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '$')
        ADVANCE(90);
      if (lookahead == '&')
        ADVANCE(5);
      if (lookahead == '\'')
        ADVANCE(6);
      if (lookahead == '(')
        ADVANCE(7);
      if (lookahead == ',')
        ADVANCE(91);
      if (lookahead == '.')
        ADVANCE(92);
      if (lookahead == '<')
        ADVANCE(93);
      if (lookahead == '@')
        ADVANCE(16);
      if (lookahead == '[')
        ADVANCE(94);
      if (lookahead == '`')
        SKIP(240);
      if (lookahead == 'd')
        ADVANCE(97);
      if (lookahead == 'i')
        ADVANCE(100);
      if (lookahead == 'w')
        ADVANCE(102);
      if (lookahead == '{')
        ADVANCE(27);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(237);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(30);
      if (lookahead != 0 &&
          (lookahead < '!' || '+' < lookahead) &&
          lookahead != ']' &&
          lookahead != '^' &&
          lookahead != '}')
        ADVANCE(103);
      END_STATE();
    case 240:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(237);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_CR_LF);
      if (lookahead == '\n')
        ADVANCE(238);
      if (lookahead == '\r')
        ADVANCE(239);
      END_STATE();
    case 242:
      if (lookahead == '\n')
        ADVANCE(243);
      if (lookahead == '\r')
        ADVANCE(244);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '<')
        ADVANCE(14);
      if (lookahead == '`')
        SKIP(245);
      if (lookahead == 'w')
        ADVANCE(26);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(242);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n')
        ADVANCE(243);
      if (lookahead == '\r')
        ADVANCE(244);
      END_STATE();
    case 244:
      if (lookahead == '\n')
        ADVANCE(246);
      if (lookahead == '\r')
        ADVANCE(244);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '<')
        ADVANCE(14);
      if (lookahead == '`')
        SKIP(245);
      if (lookahead == 'w')
        ADVANCE(26);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(242);
      END_STATE();
    case 245:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(242);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_CR_LF);
      if (lookahead == '\n')
        ADVANCE(243);
      if (lookahead == '\r')
        ADVANCE(244);
      END_STATE();
    case 247:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(248);
      if (lookahead == '\r')
        ADVANCE(249);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == ';')
        ADVANCE(13);
      if (lookahead == '<')
        ADVANCE(14);
      if (lookahead == '`')
        SKIP(250);
      if (lookahead == 'e')
        ADVANCE(251);
      if (lookahead == '}')
        ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(247);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n')
        ADVANCE(248);
      if (lookahead == '\r')
        ADVANCE(249);
      END_STATE();
    case 249:
      if (lookahead == '\n')
        ADVANCE(252);
      if (lookahead == '\r')
        ADVANCE(249);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == ';')
        ADVANCE(13);
      if (lookahead == '<')
        ADVANCE(14);
      if (lookahead == '`')
        SKIP(253);
      if (lookahead == 'e')
        ADVANCE(251);
      if (lookahead == '}')
        ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(254);
      END_STATE();
    case 250:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(247);
      END_STATE();
    case 251:
      if (lookahead == 'l')
        ADVANCE(47);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_CR_LF);
      if (lookahead == '\n')
        ADVANCE(248);
      if (lookahead == '\r')
        ADVANCE(249);
      END_STATE();
    case 253:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(254);
      END_STATE();
    case 254:
      if (lookahead == '\n')
        ADVANCE(248);
      if (lookahead == '\r')
        ADVANCE(249);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == ';')
        ADVANCE(13);
      if (lookahead == '<')
        ADVANCE(14);
      if (lookahead == '`')
        SKIP(253);
      if (lookahead == 'e')
        ADVANCE(251);
      if (lookahead == '}')
        ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(254);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 89},
  [2] = {.lex_state = 143},
  [3] = {.lex_state = 148},
  [4] = {.lex_state = 148},
  [5] = {.lex_state = 143},
  [6] = {.lex_state = 151},
  [7] = {.lex_state = 158},
  [8] = {.lex_state = 166},
  [9] = {.lex_state = 171},
  [10] = {.lex_state = 178},
  [11] = {.lex_state = 158},
  [12] = {.lex_state = 189},
  [13] = {.lex_state = 189},
  [14] = {.lex_state = 143},
  [15] = {.lex_state = 143},
  [16] = {.lex_state = 191},
  [17] = {.lex_state = 193},
  [18] = {.lex_state = 195},
  [19] = {.lex_state = 171},
  [20] = {.lex_state = 198},
  [21] = {.lex_state = 193},
  [22] = {.lex_state = 151},
  [23] = {.lex_state = 151},
  [24] = {.lex_state = 148},
  [25] = {.lex_state = 203},
  [26] = {.lex_state = 158},
  [27] = {.lex_state = 151},
  [28] = {.lex_state = 151},
  [29] = {.lex_state = 205},
  [30] = {.lex_state = 189},
  [31] = {.lex_state = 212},
  [32] = {.lex_state = 143},
  [33] = {.lex_state = 189},
  [34] = {.lex_state = 189},
  [35] = {.lex_state = 158},
  [36] = {.lex_state = 219},
  [37] = {.lex_state = 219},
  [38] = {.lex_state = 219},
  [39] = {.lex_state = 143},
  [40] = {.lex_state = 189},
  [41] = {.lex_state = 143},
  [42] = {.lex_state = 205},
  [43] = {.lex_state = 205},
  [44] = {.lex_state = 212},
  [45] = {.lex_state = 205},
  [46] = {.lex_state = 205},
  [47] = {.lex_state = 205},
  [48] = {.lex_state = 212},
  [49] = {.lex_state = 143},
  [50] = {.lex_state = 171},
  [51] = {.lex_state = 189},
  [52] = {.lex_state = 178},
  [53] = {.lex_state = 158},
  [54] = {.lex_state = 178},
  [55] = {.lex_state = 158},
  [56] = {.lex_state = 189},
  [57] = {.lex_state = 224},
  [58] = {.lex_state = 143},
  [59] = {.lex_state = 224},
  [60] = {.lex_state = 143},
  [61] = {.lex_state = 158},
  [62] = {.lex_state = 158},
  [63] = {.lex_state = 143},
  [64] = {.lex_state = 229},
  [65] = {.lex_state = 231},
  [66] = {.lex_state = 166},
  [67] = {.lex_state = 178},
  [68] = {.lex_state = 189},
  [69] = {.lex_state = 229},
  [70] = {.lex_state = 191},
  [71] = {.lex_state = 193},
  [72] = {.lex_state = 195},
  [73] = {.lex_state = 198},
  [74] = {.lex_state = 193},
  [75] = {.lex_state = 231},
  [76] = {.lex_state = 189},
  [77] = {.lex_state = 189},
  [78] = {.lex_state = 189},
  [79] = {.lex_state = 189},
  [80] = {.lex_state = 233},
  [81] = {.lex_state = 233},
  [82] = {.lex_state = 143},
  [83] = {.lex_state = 171},
  [84] = {.lex_state = 158},
  [85] = {.lex_state = 229},
  [86] = {.lex_state = 205},
  [87] = {.lex_state = 235},
  [88] = {.lex_state = 198},
  [89] = {.lex_state = 231},
  [90] = {.lex_state = 231},
  [91] = {.lex_state = 231},
  [92] = {.lex_state = 212},
  [93] = {.lex_state = 151},
  [94] = {.lex_state = 212},
  [95] = {.lex_state = 203},
  [96] = {.lex_state = 151},
  [97] = {.lex_state = 151},
  [98] = {.lex_state = 151},
  [99] = {.lex_state = 198},
  [100] = {.lex_state = 151},
  [101] = {.lex_state = 237},
  [102] = {.lex_state = 151},
  [103] = {.lex_state = 189},
  [104] = {.lex_state = 242},
  [105] = {.lex_state = 143},
  [106] = {.lex_state = 151},
  [107] = {.lex_state = 151},
  [108] = {.lex_state = 203},
  [109] = {.lex_state = 151},
  [110] = {.lex_state = 151},
  [111] = {.lex_state = 205},
  [112] = {.lex_state = 212},
  [113] = {.lex_state = 212},
  [114] = {.lex_state = 143},
  [115] = {.lex_state = 205},
  [116] = {.lex_state = 205},
  [117] = {.lex_state = 219},
  [118] = {.lex_state = 219},
  [119] = {.lex_state = 158},
  [120] = {.lex_state = 143},
  [121] = {.lex_state = 219},
  [122] = {.lex_state = 143},
  [123] = {.lex_state = 189},
  [124] = {.lex_state = 219},
  [125] = {.lex_state = 143},
  [126] = {.lex_state = 189},
  [127] = {.lex_state = 224},
  [128] = {.lex_state = 143},
  [129] = {.lex_state = 158},
  [130] = {.lex_state = 212},
  [131] = {.lex_state = 205},
  [132] = {.lex_state = 212},
  [133] = {.lex_state = 203},
  [134] = {.lex_state = 205},
  [135] = {.lex_state = 205},
  [136] = {.lex_state = 212},
  [137] = {.lex_state = 205},
  [138] = {.lex_state = 205},
  [139] = {.lex_state = 237},
  [140] = {.lex_state = 212},
  [141] = {.lex_state = 198},
  [142] = {.lex_state = 143},
  [143] = {.lex_state = 143},
  [144] = {.lex_state = 171},
  [145] = {.lex_state = 158},
  [146] = {.lex_state = 189},
  [147] = {.lex_state = 178},
  [148] = {.lex_state = 189},
  [149] = {.lex_state = 195},
  [150] = {.lex_state = 203},
  [151] = {.lex_state = 189},
  [152] = {.lex_state = 189},
  [153] = {.lex_state = 143},
  [154] = {.lex_state = 143},
  [155] = {.lex_state = 219},
  [156] = {.lex_state = 219},
  [157] = {.lex_state = 219},
  [158] = {.lex_state = 224},
  [159] = {.lex_state = 224},
  [160] = {.lex_state = 143},
  [161] = {.lex_state = 189},
  [162] = {.lex_state = 224},
  [163] = {.lex_state = 224},
  [164] = {.lex_state = 231},
  [165] = {.lex_state = 219},
  [166] = {.lex_state = 143},
  [167] = {.lex_state = 205},
  [168] = {.lex_state = 212},
  [169] = {.lex_state = 212},
  [170] = {.lex_state = 189},
  [171] = {.lex_state = 229},
  [172] = {.lex_state = 178},
  [173] = {.lex_state = 231},
  [174] = {.lex_state = 231},
  [175] = {.lex_state = 189},
  [176] = {.lex_state = 233},
  [177] = {.lex_state = 231},
  [178] = {.lex_state = 205},
  [179] = {.lex_state = 198},
  [180] = {.lex_state = 189},
  [181] = {.lex_state = 189},
  [182] = {.lex_state = 158},
  [183] = {.lex_state = 231},
  [184] = {.lex_state = 189},
  [185] = {.lex_state = 233},
  [186] = {.lex_state = 195},
  [187] = {.lex_state = 158},
  [188] = {.lex_state = 191},
  [189] = {.lex_state = 143},
  [190] = {.lex_state = 143},
  [191] = {.lex_state = 158},
  [192] = {.lex_state = 198},
  [193] = {.lex_state = 198},
  [194] = {.lex_state = 191},
  [195] = {.lex_state = 205},
  [196] = {.lex_state = 143},
  [197] = {.lex_state = 205},
  [198] = {.lex_state = 198},
  [199] = {.lex_state = 231},
  [200] = {.lex_state = 231},
  [201] = {.lex_state = 198},
  [202] = {.lex_state = 231},
  [203] = {.lex_state = 212},
  [204] = {.lex_state = 151},
  [205] = {.lex_state = 203},
  [206] = {.lex_state = 212},
  [207] = {.lex_state = 205},
  [208] = {.lex_state = 151},
  [209] = {.lex_state = 158},
  [210] = {.lex_state = 191},
  [211] = {.lex_state = 151},
  [212] = {.lex_state = 205},
  [213] = {.lex_state = 237},
  [214] = {.lex_state = 143},
  [215] = {.lex_state = 242},
  [216] = {.lex_state = 224},
  [217] = {.lex_state = 143},
  [218] = {.lex_state = 203},
  [219] = {.lex_state = 151},
  [220] = {.lex_state = 242},
  [221] = {.lex_state = 203},
  [222] = {.lex_state = 151},
  [223] = {.lex_state = 151},
  [224] = {.lex_state = 237},
  [225] = {.lex_state = 203},
  [226] = {.lex_state = 212},
  [227] = {.lex_state = 212},
  [228] = {.lex_state = 143},
  [229] = {.lex_state = 158},
  [230] = {.lex_state = 219},
  [231] = {.lex_state = 143},
  [232] = {.lex_state = 219},
  [233] = {.lex_state = 219},
  [234] = {.lex_state = 212},
  [235] = {.lex_state = 189},
  [236] = {.lex_state = 189},
  [237] = {.lex_state = 224},
  [238] = {.lex_state = 224},
  [239] = {.lex_state = 212},
  [240] = {.lex_state = 158},
  [241] = {.lex_state = 205},
  [242] = {.lex_state = 203},
  [243] = {.lex_state = 205},
  [244] = {.lex_state = 205},
  [245] = {.lex_state = 205},
  [246] = {.lex_state = 237},
  [247] = {.lex_state = 205},
  [248] = {.lex_state = 198},
  [249] = {.lex_state = 198},
  [250] = {.lex_state = 198},
  [251] = {.lex_state = 143},
  [252] = {.lex_state = 158},
  [253] = {.lex_state = 233},
  [254] = {.lex_state = 189},
  [255] = {.lex_state = 189},
  [256] = {.lex_state = 203},
  [257] = {.lex_state = 189},
  [258] = {.lex_state = 189},
  [259] = {.lex_state = 143},
  [260] = {.lex_state = 143},
  [261] = {.lex_state = 143},
  [262] = {.lex_state = 219},
  [263] = {.lex_state = 219},
  [264] = {.lex_state = 219},
  [265] = {.lex_state = 143},
  [266] = {.lex_state = 224},
  [267] = {.lex_state = 224},
  [268] = {.lex_state = 143},
  [269] = {.lex_state = 189},
  [270] = {.lex_state = 224},
  [271] = {.lex_state = 231},
  [272] = {.lex_state = 219},
  [273] = {.lex_state = 143},
  [274] = {.lex_state = 219},
  [275] = {.lex_state = 231},
  [276] = {.lex_state = 205},
  [277] = {.lex_state = 203},
  [278] = {.lex_state = 205},
  [279] = {.lex_state = 212},
  [280] = {.lex_state = 229},
  [281] = {.lex_state = 189},
  [282] = {.lex_state = 231},
  [283] = {.lex_state = 231},
  [284] = {.lex_state = 231},
  [285] = {.lex_state = 191},
  [286] = {.lex_state = 205},
  [287] = {.lex_state = 205},
  [288] = {.lex_state = 233},
  [289] = {.lex_state = 189},
  [290] = {.lex_state = 233},
  [291] = {.lex_state = 151},
  [292] = {.lex_state = 195},
  [293] = {.lex_state = 205},
  [294] = {.lex_state = 189},
  [295] = {.lex_state = 198},
  [296] = {.lex_state = 151},
  [297] = {.lex_state = 191},
  [298] = {.lex_state = 191},
  [299] = {.lex_state = 143},
  [300] = {.lex_state = 198},
  [301] = {.lex_state = 158},
  [302] = {.lex_state = 205},
  [303] = {.lex_state = 191},
  [304] = {.lex_state = 205},
  [305] = {.lex_state = 205},
  [306] = {.lex_state = 205},
  [307] = {.lex_state = 205},
  [308] = {.lex_state = 143},
  [309] = {.lex_state = 205},
  [310] = {.lex_state = 231},
  [311] = {.lex_state = 191},
  [312] = {.lex_state = 231},
  [313] = {.lex_state = 212},
  [314] = {.lex_state = 212},
  [315] = {.lex_state = 203},
  [316] = {.lex_state = 203},
  [317] = {.lex_state = 158},
  [318] = {.lex_state = 205},
  [319] = {.lex_state = 237},
  [320] = {.lex_state = 193},
  [321] = {.lex_state = 143},
  [322] = {.lex_state = 143},
  [323] = {.lex_state = 242},
  [324] = {.lex_state = 189},
  [325] = {.lex_state = 224},
  [326] = {.lex_state = 224},
  [327] = {.lex_state = 242},
  [328] = {.lex_state = 151},
  [329] = {.lex_state = 237},
  [330] = {.lex_state = 242},
  [331] = {.lex_state = 203},
  [332] = {.lex_state = 143},
  [333] = {.lex_state = 143},
  [334] = {.lex_state = 158},
  [335] = {.lex_state = 143},
  [336] = {.lex_state = 212},
  [337] = {.lex_state = 189},
  [338] = {.lex_state = 189},
  [339] = {.lex_state = 143},
  [340] = {.lex_state = 189},
  [341] = {.lex_state = 224},
  [342] = {.lex_state = 203},
  [343] = {.lex_state = 158},
  [344] = {.lex_state = 203},
  [345] = {.lex_state = 205},
  [346] = {.lex_state = 205},
  [347] = {.lex_state = 198},
  [348] = {.lex_state = 198},
  [349] = {.lex_state = 198},
  [350] = {.lex_state = 198},
  [351] = {.lex_state = 198},
  [352] = {.lex_state = 198},
  [353] = {.lex_state = 189},
  [354] = {.lex_state = 203},
  [355] = {.lex_state = 189},
  [356] = {.lex_state = 189},
  [357] = {.lex_state = 189},
  [358] = {.lex_state = 143},
  [359] = {.lex_state = 203},
  [360] = {.lex_state = 143},
  [361] = {.lex_state = 143},
  [362] = {.lex_state = 143},
  [363] = {.lex_state = 219},
  [364] = {.lex_state = 143},
  [365] = {.lex_state = 143},
  [366] = {.lex_state = 203},
  [367] = {.lex_state = 143},
  [368] = {.lex_state = 143},
  [369] = {.lex_state = 189},
  [370] = {.lex_state = 231},
  [371] = {.lex_state = 143},
  [372] = {.lex_state = 219},
  [373] = {.lex_state = 231},
  [374] = {.lex_state = 203},
  [375] = {.lex_state = 205},
  [376] = {.lex_state = 205},
  [377] = {.lex_state = 229},
  [378] = {.lex_state = 231},
  [379] = {.lex_state = 191},
  [380] = {.lex_state = 205},
  [381] = {.lex_state = 189},
  [382] = {.lex_state = 233},
  [383] = {.lex_state = 189},
  [384] = {.lex_state = 195},
  [385] = {.lex_state = 233},
  [386] = {.lex_state = 233},
  [387] = {.lex_state = 233},
  [388] = {.lex_state = 143},
  [389] = {.lex_state = 151},
  [390] = {.lex_state = 189},
  [391] = {.lex_state = 143},
  [392] = {.lex_state = 198},
  [393] = {.lex_state = 191},
  [394] = {.lex_state = 198},
  [395] = {.lex_state = 205},
  [396] = {.lex_state = 191},
  [397] = {.lex_state = 191},
  [398] = {.lex_state = 191},
  [399] = {.lex_state = 158},
  [400] = {.lex_state = 198},
  [401] = {.lex_state = 198},
  [402] = {.lex_state = 191},
  [403] = {.lex_state = 205},
  [404] = {.lex_state = 205},
  [405] = {.lex_state = 205},
  [406] = {.lex_state = 191},
  [407] = {.lex_state = 231},
  [408] = {.lex_state = 212},
  [409] = {.lex_state = 189},
  [410] = {.lex_state = 193},
  [411] = {.lex_state = 143},
  [412] = {.lex_state = 143},
  [413] = {.lex_state = 189},
  [414] = {.lex_state = 224},
  [415] = {.lex_state = 143},
  [416] = {.lex_state = 242},
  [417] = {.lex_state = 242},
  [418] = {.lex_state = 158},
  [419] = {.lex_state = 212},
  [420] = {.lex_state = 189},
  [421] = {.lex_state = 203},
  [422] = {.lex_state = 143},
  [423] = {.lex_state = 143},
  [424] = {.lex_state = 189},
  [425] = {.lex_state = 158},
  [426] = {.lex_state = 203},
  [427] = {.lex_state = 198},
  [428] = {.lex_state = 205},
  [429] = {.lex_state = 198},
  [430] = {.lex_state = 198},
  [431] = {.lex_state = 233},
  [432] = {.lex_state = 189},
  [433] = {.lex_state = 203},
  [434] = {.lex_state = 189},
  [435] = {.lex_state = 205},
  [436] = {.lex_state = 203},
  [437] = {.lex_state = 203},
  [438] = {.lex_state = 143},
  [439] = {.lex_state = 143},
  [440] = {.lex_state = 143},
  [441] = {.lex_state = 247},
  [442] = {.lex_state = 203},
  [443] = {.lex_state = 203},
  [444] = {.lex_state = 143},
  [445] = {.lex_state = 143},
  [446] = {.lex_state = 231},
  [447] = {.lex_state = 143},
  [448] = {.lex_state = 231},
  [449] = {.lex_state = 203},
  [450] = {.lex_state = 205},
  [451] = {.lex_state = 231},
  [452] = {.lex_state = 191},
  [453] = {.lex_state = 189},
  [454] = {.lex_state = 233},
  [455] = {.lex_state = 233},
  [456] = {.lex_state = 233},
  [457] = {.lex_state = 233},
  [458] = {.lex_state = 198},
  [459] = {.lex_state = 189},
  [460] = {.lex_state = 195},
  [461] = {.lex_state = 143},
  [462] = {.lex_state = 189},
  [463] = {.lex_state = 143},
  [464] = {.lex_state = 189},
  [465] = {.lex_state = 143},
  [466] = {.lex_state = 151},
  [467] = {.lex_state = 143},
  [468] = {.lex_state = 198},
  [469] = {.lex_state = 198},
  [470] = {.lex_state = 205},
  [471] = {.lex_state = 191},
  [472] = {.lex_state = 198},
  [473] = {.lex_state = 198},
  [474] = {.lex_state = 158},
  [475] = {.lex_state = 205},
  [476] = {.lex_state = 189},
  [477] = {.lex_state = 193},
  [478] = {.lex_state = 203},
  [479] = {.lex_state = 143},
  [480] = {.lex_state = 143},
  [481] = {.lex_state = 189},
  [482] = {.lex_state = 143},
  [483] = {.lex_state = 143},
  [484] = {.lex_state = 242},
  [485] = {.lex_state = 212},
  [486] = {.lex_state = 247},
  [487] = {.lex_state = 203},
  [488] = {.lex_state = 203},
  [489] = {.lex_state = 143},
  [490] = {.lex_state = 143},
  [491] = {.lex_state = 158},
  [492] = {.lex_state = 198},
  [493] = {.lex_state = 205},
  [494] = {.lex_state = 198},
  [495] = {.lex_state = 143},
  [496] = {.lex_state = 233},
  [497] = {.lex_state = 189},
  [498] = {.lex_state = 205},
  [499] = {.lex_state = 203},
  [500] = {.lex_state = 203},
  [501] = {.lex_state = 143},
  [502] = {.lex_state = 143},
  [503] = {.lex_state = 143},
  [504] = {.lex_state = 143},
  [505] = {.lex_state = 247},
  [506] = {.lex_state = 247},
  [507] = {.lex_state = 203},
  [508] = {.lex_state = 203},
  [509] = {.lex_state = 143},
  [510] = {.lex_state = 231},
  [511] = {.lex_state = 231},
  [512] = {.lex_state = 203},
  [513] = {.lex_state = 231},
  [514] = {.lex_state = 189},
  [515] = {.lex_state = 203},
  [516] = {.lex_state = 191},
  [517] = {.lex_state = 143},
  [518] = {.lex_state = 189},
  [519] = {.lex_state = 143},
  [520] = {.lex_state = 143},
  [521] = {.lex_state = 189},
  [522] = {.lex_state = 143},
  [523] = {.lex_state = 189},
  [524] = {.lex_state = 143},
  [525] = {.lex_state = 205},
  [526] = {.lex_state = 205},
  [527] = {.lex_state = 189},
  [528] = {.lex_state = 247},
  [529] = {.lex_state = 203},
  [530] = {.lex_state = 203},
  [531] = {.lex_state = 143},
  [532] = {.lex_state = 143},
  [533] = {.lex_state = 193},
  [534] = {.lex_state = 143},
  [535] = {.lex_state = 143},
  [536] = {.lex_state = 247},
  [537] = {.lex_state = 247},
  [538] = {.lex_state = 203},
  [539] = {.lex_state = 203},
  [540] = {.lex_state = 143},
  [541] = {.lex_state = 205},
  [542] = {.lex_state = 143},
  [543] = {.lex_state = 233},
  [544] = {.lex_state = 205},
  [545] = {.lex_state = 203},
  [546] = {.lex_state = 203},
  [547] = {.lex_state = 143},
  [548] = {.lex_state = 224},
  [549] = {.lex_state = 143},
  [550] = {.lex_state = 203},
  [551] = {.lex_state = 143},
  [552] = {.lex_state = 143},
  [553] = {.lex_state = 247},
  [554] = {.lex_state = 247},
  [555] = {.lex_state = 247},
  [556] = {.lex_state = 203},
  [557] = {.lex_state = 203},
  [558] = {.lex_state = 231},
  [559] = {.lex_state = 191},
  [560] = {.lex_state = 203},
  [561] = {.lex_state = 191},
  [562] = {.lex_state = 143},
  [563] = {.lex_state = 143},
  [564] = {.lex_state = 189},
  [565] = {.lex_state = 143},
  [566] = {.lex_state = 189},
  [567] = {.lex_state = 189},
  [568] = {.lex_state = 189},
  [569] = {.lex_state = 205},
  [570] = {.lex_state = 247},
  [571] = {.lex_state = 247},
  [572] = {.lex_state = 203},
  [573] = {.lex_state = 203},
  [574] = {.lex_state = 143},
  [575] = {.lex_state = 189},
  [576] = {.lex_state = 193},
  [577] = {.lex_state = 143},
  [578] = {.lex_state = 247},
  [579] = {.lex_state = 247},
  [580] = {.lex_state = 247},
  [581] = {.lex_state = 203},
  [582] = {.lex_state = 203},
  [583] = {.lex_state = 143},
  [584] = {.lex_state = 205},
  [585] = {.lex_state = 203},
  [586] = {.lex_state = 203},
  [587] = {.lex_state = 143},
  [588] = {.lex_state = 224},
  [589] = {.lex_state = 224},
  [590] = {.lex_state = 205},
  [591] = {.lex_state = 203},
  [592] = {.lex_state = 203},
  [593] = {.lex_state = 143},
  [594] = {.lex_state = 143},
  [595] = {.lex_state = 247},
  [596] = {.lex_state = 247},
  [597] = {.lex_state = 203},
  [598] = {.lex_state = 191},
  [599] = {.lex_state = 191},
  [600] = {.lex_state = 143},
  [601] = {.lex_state = 143},
  [602] = {.lex_state = 189},
  [603] = {.lex_state = 189},
  [604] = {.lex_state = 247},
  [605] = {.lex_state = 247},
  [606] = {.lex_state = 247},
  [607] = {.lex_state = 203},
  [608] = {.lex_state = 203},
  [609] = {.lex_state = 205},
  [610] = {.lex_state = 189},
  [611] = {.lex_state = 193},
  [612] = {.lex_state = 247},
  [613] = {.lex_state = 247},
  [614] = {.lex_state = 203},
  [615] = {.lex_state = 205},
  [616] = {.lex_state = 203},
  [617] = {.lex_state = 143},
  [618] = {.lex_state = 143},
  [619] = {.lex_state = 143},
  [620] = {.lex_state = 224},
  [621] = {.lex_state = 205},
  [622] = {.lex_state = 203},
  [623] = {.lex_state = 203},
  [624] = {.lex_state = 143},
  [625] = {.lex_state = 143},
  [626] = {.lex_state = 247},
  [627] = {.lex_state = 247},
  [628] = {.lex_state = 191},
  [629] = {.lex_state = 143},
  [630] = {.lex_state = 143},
  [631] = {.lex_state = 247},
  [632] = {.lex_state = 247},
  [633] = {.lex_state = 203},
  [634] = {.lex_state = 205},
  [635] = {.lex_state = 189},
  [636] = {.lex_state = 247},
  [637] = {.lex_state = 247},
  [638] = {.lex_state = 205},
  [639] = {.lex_state = 203},
  [640] = {.lex_state = 143},
  [641] = {.lex_state = 143},
  [642] = {.lex_state = 143},
  [643] = {.lex_state = 143},
  [644] = {.lex_state = 205},
  [645] = {.lex_state = 203},
  [646] = {.lex_state = 203},
  [647] = {.lex_state = 143},
  [648] = {.lex_state = 143},
  [649] = {.lex_state = 247},
  [650] = {.lex_state = 191},
  [651] = {.lex_state = 143},
  [652] = {.lex_state = 247},
  [653] = {.lex_state = 247},
  [654] = {.lex_state = 205},
  [655] = {.lex_state = 247},
  [656] = {.lex_state = 247},
  [657] = {.lex_state = 203},
  [658] = {.lex_state = 203},
  [659] = {.lex_state = 143},
  [660] = {.lex_state = 143},
  [661] = {.lex_state = 143},
  [662] = {.lex_state = 205},
  [663] = {.lex_state = 203},
  [664] = {.lex_state = 203},
  [665] = {.lex_state = 143},
  [666] = {.lex_state = 143},
  [667] = {.lex_state = 191},
  [668] = {.lex_state = 247},
  [669] = {.lex_state = 247},
  [670] = {.lex_state = 203},
  [671] = {.lex_state = 203},
  [672] = {.lex_state = 143},
  [673] = {.lex_state = 143},
  [674] = {.lex_state = 205},
  [675] = {.lex_state = 203},
  [676] = {.lex_state = 203},
  [677] = {.lex_state = 143},
  [678] = {.lex_state = 247},
  [679] = {.lex_state = 203},
  [680] = {.lex_state = 203},
  [681] = {.lex_state = 143},
  [682] = {.lex_state = 205},
  [683] = {.lex_state = 203},
  [684] = {.lex_state = 203},
  [685] = {.lex_state = 247},
  [686] = {.lex_state = 203},
  [687] = {.lex_state = 203},
  [688] = {.lex_state = 205},
  [689] = {.lex_state = 203},
  [690] = {.lex_state = 247},
  [691] = {.lex_state = 203},
  [692] = {.lex_state = 205},
  [693] = {.lex_state = 247},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [aux_sym_do_while_statement_token1] = ACTIONS(1),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(1),
    [sym_number_expr] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [aux_sym_enum_definition_token1] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [aux_sym_param_block_token1] = ACTIONS(1),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(1),
    [aux_sym_while_statement_token1] = ACTIONS(1),
    [aux_sym_if_statement_token1] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(1),
    [sym_single_quote_string] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [aux_sym_function_definition_token1] = ACTIONS(1),
    [aux_sym_filter_definition_token1] = ACTIONS(1),
    [anon_sym_AT_LPAREN] = ACTIONS(1),
    [anon_sym_DOLLAR_CARET] = ACTIONS(1),
    [sym_simple_variable] = ACTIONS(1),
    [aux_sym_if_statement_token2] = ACTIONS(1),
    [aux_sym_parameter_token1] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(1),
    [anon_sym_LBRACK_RBRACK] = ACTIONS(1),
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [aux_sym_class_definition_token1] = ACTIONS(1),
    [anon_sym_AT_LBRACE] = ACTIONS(1),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(1),
    [sym__braced_variable] = ACTIONS(1),
    [aux_sym_if_statement_token3] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
  },
  [1] = {
    [sym__statement] = STATE(22),
    [sym__definition_statement] = STATE(22),
    [sym_pipeline_statement] = STATE(22),
    [sym_if_statement] = STATE(22),
    [sym__non_array_expression] = STATE(23),
    [sym__expression] = STATE(28),
    [sym_array_expression] = STATE(28),
    [sym_flat_array_expression] = STATE(23),
    [sym_variable] = STATE(29),
    [sym__special_variable] = STATE(6),
    [sym_non_type_attribute] = STATE(30),
    [sym__attribute] = STATE(30),
    [sym_source_file] = STATE(24),
    [sym_function_definition] = STATE(22),
    [sym_filter_definition] = STATE(22),
    [sym_enum_definition] = STATE(22),
    [sym_while_statement] = STATE(22),
    [sym_do_while_statement] = STATE(22),
    [sym_scriptblock] = STATE(23),
    [sym_param_block] = STATE(25),
    [sym_hashtable_expression] = STATE(23),
    [sym_type_expr] = STATE(26),
    [sym__string_expr] = STATE(23),
    [sym_double_quote_string] = STATE(23),
    [aux_sym_array_expression_repeat1] = STATE(27),
    [sym_class_definition] = STATE(22),
    [sym__expression_statement] = STATE(22),
    [sym_assignment_statement] = STATE(22),
    [sym_command_expression] = STATE(28),
    [sym__pipeline_expression] = STATE(28),
    [sym__attributed_variable] = STATE(29),
    [aux_sym__attributed_variable_repeat1] = STATE(30),
    [aux_sym_do_while_statement_token1] = ACTIONS(5),
    [aux_sym_function_definition_token1] = ACTIONS(7),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(9),
    [aux_sym_filter_definition_token1] = ACTIONS(11),
    [sym_number_expr] = ACTIONS(13),
    [anon_sym_AT_LPAREN] = ACTIONS(15),
    [sym_simple_variable] = ACTIONS(9),
    [anon_sym_DOLLAR_CARET] = ACTIONS(9),
    [anon_sym_COMMA] = ACTIONS(17),
    [sym_bareword_string] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [aux_sym_enum_definition_token1] = ACTIONS(23),
    [anon_sym_DQUOTE] = ACTIONS(25),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(27),
    [aux_sym_param_block_token1] = ACTIONS(29),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(9),
    [aux_sym_while_statement_token1] = ACTIONS(31),
    [aux_sym_if_statement_token1] = ACTIONS(33),
    [anon_sym_AMP] = ACTIONS(35),
    [anon_sym_LPAREN] = ACTIONS(37),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(41),
    [aux_sym_class_definition_token1] = ACTIONS(43),
    [anon_sym_AT_LBRACE] = ACTIONS(45),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(47),
    [sym__braced_variable] = ACTIONS(9),
    [sym_single_quote_string] = ACTIONS(49),
  },
  [2] = {
    [aux_sym__terminator_repeat1] = STATE(32),
    [sym__newline] = STATE(32),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(51),
    [anon_sym_CR_LF] = ACTIONS(53),
    [anon_sym_LBRACE] = ACTIONS(55),
  },
  [3] = {
    [aux_sym_function_definition_token2] = ACTIONS(57),
    [sym_comment] = ACTIONS(3),
  },
  [4] = {
    [aux_sym_function_definition_token2] = ACTIONS(59),
    [sym_comment] = ACTIONS(3),
  },
  [5] = {
    [sym_type_expr] = STATE(26),
    [sym__string_expr] = STATE(36),
    [sym_double_quote_string] = STATE(36),
    [aux_sym_array_expression_repeat1] = STATE(37),
    [sym__expression] = STATE(38),
    [sym__non_array_expression] = STATE(36),
    [sym_array_expression] = STATE(38),
    [sym_flat_array_expression] = STATE(36),
    [sym_variable] = STATE(36),
    [sym__special_variable] = STATE(6),
    [sym_non_type_attribute] = STATE(30),
    [sym__newline] = STATE(39),
    [sym__attribute] = STATE(30),
    [sym__attributed_variable] = STATE(36),
    [aux_sym__terminator_repeat1] = STATE(39),
    [sym_scriptblock] = STATE(36),
    [aux_sym__attributed_variable_repeat1] = STATE(30),
    [sym_hashtable_expression] = STATE(36),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(61),
    [anon_sym_CR_LF] = ACTIONS(63),
    [sym_number_expr] = ACTIONS(65),
    [anon_sym_AT_LPAREN] = ACTIONS(67),
    [sym_simple_variable] = ACTIONS(61),
    [anon_sym_DOLLAR_CARET] = ACTIONS(61),
    [anon_sym_COMMA] = ACTIONS(17),
    [anon_sym_LBRACE] = ACTIONS(69),
    [anon_sym_DQUOTE] = ACTIONS(25),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(71),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(61),
    [anon_sym_LPAREN] = ACTIONS(73),
    [anon_sym_RPAREN] = ACTIONS(75),
    [anon_sym_LBRACK] = ACTIONS(77),
    [anon_sym_LF] = ACTIONS(79),
    [anon_sym_AT_LBRACE] = ACTIONS(81),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(83),
    [sym__braced_variable] = ACTIONS(61),
    [sym_single_quote_string] = ACTIONS(65),
    [sym_comment] = ACTIONS(39),
  },
  [6] = {
    [anon_sym_RBRACE] = ACTIONS(85),
    [anon_sym_EQ] = ACTIONS(85),
    [ts_builtin_sym_end] = ACTIONS(87),
    [anon_sym_CR_LF] = ACTIONS(87),
    [anon_sym_PIPE] = ACTIONS(85),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(85),
    [anon_sym_RPAREN] = ACTIONS(85),
    [anon_sym_COMMA] = ACTIONS(85),
    [anon_sym_SEMI] = ACTIONS(85),
  },
  [7] = {
    [anon_sym_RBRACE] = ACTIONS(89),
    [ts_builtin_sym_end] = ACTIONS(91),
    [anon_sym_CR_LF] = ACTIONS(91),
    [anon_sym_PIPE] = ACTIONS(89),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(89),
    [anon_sym_RPAREN] = ACTIONS(89),
    [anon_sym_SEMI] = ACTIONS(89),
  },
  [8] = {
    [sym__statement] = STATE(42),
    [sym__definition_statement] = STATE(42),
    [sym_pipeline_statement] = STATE(42),
    [sym_if_statement] = STATE(42),
    [sym__non_array_expression] = STATE(43),
    [sym__expression] = STATE(46),
    [sym_array_expression] = STATE(46),
    [sym_flat_array_expression] = STATE(43),
    [sym_variable] = STATE(47),
    [sym__special_variable] = STATE(6),
    [sym_non_type_attribute] = STATE(30),
    [sym__attribute] = STATE(30),
    [sym_function_definition] = STATE(42),
    [sym_filter_definition] = STATE(42),
    [sym_enum_definition] = STATE(42),
    [sym_while_statement] = STATE(42),
    [sym_do_while_statement] = STATE(42),
    [sym_scriptblock] = STATE(43),
    [sym_param_block] = STATE(44),
    [sym_hashtable_expression] = STATE(43),
    [sym_type_expr] = STATE(26),
    [sym__string_expr] = STATE(43),
    [sym_double_quote_string] = STATE(43),
    [aux_sym_array_expression_repeat1] = STATE(45),
    [sym__newline] = STATE(48),
    [sym_class_definition] = STATE(42),
    [sym__expression_statement] = STATE(42),
    [sym_assignment_statement] = STATE(42),
    [sym_command_expression] = STATE(46),
    [sym__pipeline_expression] = STATE(46),
    [sym__attributed_variable] = STATE(47),
    [aux_sym__terminator_repeat1] = STATE(48),
    [aux_sym__attributed_variable_repeat1] = STATE(30),
    [aux_sym_do_while_statement_token1] = ACTIONS(5),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(61),
    [sym_number_expr] = ACTIONS(93),
    [anon_sym_COMMA] = ACTIONS(17),
    [anon_sym_LBRACE] = ACTIONS(69),
    [aux_sym_enum_definition_token1] = ACTIONS(23),
    [aux_sym_param_block_token1] = ACTIONS(95),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(61),
    [aux_sym_while_statement_token1] = ACTIONS(31),
    [aux_sym_if_statement_token1] = ACTIONS(97),
    [anon_sym_AMP] = ACTIONS(99),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(77),
    [sym_single_quote_string] = ACTIONS(93),
    [aux_sym_function_definition_token1] = ACTIONS(7),
    [anon_sym_CR_LF] = ACTIONS(101),
    [aux_sym_filter_definition_token1] = ACTIONS(11),
    [anon_sym_AT_LPAREN] = ACTIONS(67),
    [anon_sym_DOLLAR_CARET] = ACTIONS(61),
    [sym_simple_variable] = ACTIONS(61),
    [sym_bareword_string] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(25),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(71),
    [anon_sym_LPAREN] = ACTIONS(73),
    [anon_sym_LF] = ACTIONS(103),
    [aux_sym_class_definition_token1] = ACTIONS(43),
    [anon_sym_AT_LBRACE] = ACTIONS(81),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(83),
    [sym__braced_variable] = ACTIONS(61),
  },
  [9] = {
    [aux_sym__terminator_repeat1] = STATE(50),
    [sym__newline] = STATE(50),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(105),
    [anon_sym_CR_LF] = ACTIONS(107),
    [aux_sym_class_definition_token2] = ACTIONS(109),
  },
  [10] = {
    [sym__special_variable] = STATE(52),
    [aux_sym_double_quote_string_repeat1] = STATE(54),
    [sym_variable] = STATE(54),
    [aux_sym_double_quote_string_token1] = ACTIONS(111),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(113),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(113),
    [anon_sym_DOLLAR] = ACTIONS(115),
    [anon_sym_DOLLAR_CARET] = ACTIONS(113),
    [sym_simple_variable] = ACTIONS(113),
    [sym_comment] = ACTIONS(39),
    [anon_sym_DQUOTE] = ACTIONS(117),
    [sym__braced_variable] = ACTIONS(113),
  },
  [11] = {
    [anon_sym_RBRACE] = ACTIONS(119),
    [ts_builtin_sym_end] = ACTIONS(121),
    [anon_sym_CR_LF] = ACTIONS(121),
    [anon_sym_PIPE] = ACTIONS(119),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(119),
    [anon_sym_RPAREN] = ACTIONS(119),
    [anon_sym_COMMA] = ACTIONS(119),
    [anon_sym_SEMI] = ACTIONS(119),
  },
  [12] = {
    [aux_sym__attributed_variable_repeat1] = STATE(30),
    [sym_type_expr] = STATE(26),
    [sym_hashtable_expression] = STATE(55),
    [sym__string_expr] = STATE(55),
    [sym_double_quote_string] = STATE(55),
    [sym__attributed_variable] = STATE(55),
    [sym__non_array_expression] = STATE(55),
    [sym_flat_array_expression] = STATE(55),
    [sym_variable] = STATE(55),
    [sym__special_variable] = STATE(6),
    [sym_non_type_attribute] = STATE(30),
    [sym__attribute] = STATE(30),
    [sym_scriptblock] = STATE(55),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(9),
    [sym_number_expr] = ACTIONS(123),
    [anon_sym_AT_LPAREN] = ACTIONS(15),
    [anon_sym_DOLLAR_CARET] = ACTIONS(9),
    [sym_simple_variable] = ACTIONS(9),
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_DQUOTE] = ACTIONS(25),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(27),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(37),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(41),
    [sym_single_quote_string] = ACTIONS(123),
    [anon_sym_AT_LBRACE] = ACTIONS(45),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(47),
    [sym__braced_variable] = ACTIONS(9),
  },
  [13] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(125),
  },
  [14] = {
    [aux_sym__terminator_repeat1] = STATE(58),
    [sym__newline] = STATE(58),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(127),
    [anon_sym_CR_LF] = ACTIONS(129),
    [anon_sym_LPAREN] = ACTIONS(131),
  },
  [15] = {
    [aux_sym__terminator_repeat1] = STATE(60),
    [sym__newline] = STATE(60),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(133),
    [anon_sym_CR_LF] = ACTIONS(135),
    [anon_sym_LPAREN] = ACTIONS(137),
  },
  [16] = {
    [sym_variable] = STATE(61),
    [sym__special_variable] = STATE(6),
    [sym__string_expr] = STATE(61),
    [sym_double_quote_string] = STATE(61),
    [sym_property_name] = STATE(62),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(9),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(9),
    [anon_sym_DOLLAR_CARET] = ACTIONS(9),
    [sym_simple_variable] = ACTIONS(9),
    [sym_comment] = ACTIONS(39),
    [sym_single_quote_string] = ACTIONS(139),
    [sym_bareword_string] = ACTIONS(141),
    [anon_sym_DQUOTE] = ACTIONS(25),
    [sym__braced_variable] = ACTIONS(9),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(27),
  },
  [17] = {
    [sym_type_expr] = STATE(75),
    [sym__string_expr] = STATE(76),
    [sym_double_quote_string] = STATE(76),
    [sym__non_array_expression] = STATE(76),
    [sym__expression] = STATE(78),
    [sym_array_expression] = STATE(78),
    [sym_flat_array_expression] = STATE(76),
    [aux_sym_array_expression_repeat1] = STATE(77),
    [sym__special_variable] = STATE(64),
    [sym_variable] = STATE(76),
    [sym_non_type_attribute] = STATE(79),
    [sym__attribute] = STATE(79),
    [sym_command_expression] = STATE(78),
    [sym__pipeline_expression] = STATE(78),
    [sym__attributed_variable] = STATE(76),
    [sym_scriptblock] = STATE(76),
    [aux_sym__attributed_variable_repeat1] = STATE(79),
    [sym_hashtable_expression] = STATE(76),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(143),
    [sym_number_expr] = ACTIONS(145),
    [anon_sym_AT_LPAREN] = ACTIONS(147),
    [anon_sym_DOLLAR_CARET] = ACTIONS(143),
    [sym_simple_variable] = ACTIONS(143),
    [sym_bareword_string] = ACTIONS(149),
    [anon_sym_LBRACE] = ACTIONS(151),
    [anon_sym_DQUOTE] = ACTIONS(153),
    [anon_sym_COMMA] = ACTIONS(155),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(157),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(143),
    [anon_sym_AMP] = ACTIONS(159),
    [anon_sym_LPAREN] = ACTIONS(161),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(163),
    [sym_single_quote_string] = ACTIONS(165),
    [anon_sym_AT_LBRACE] = ACTIONS(167),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(169),
    [sym__braced_variable] = ACTIONS(143),
  },
  [18] = {
    [sym__typename_generic] = STATE(81),
    [sym__typename] = STATE(81),
    [sym__typename_array] = STATE(81),
    [sym_comment] = ACTIONS(3),
    [sym__typename_simple] = ACTIONS(171),
  },
  [19] = {
    [aux_sym__terminator_repeat1] = STATE(83),
    [sym__newline] = STATE(83),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(173),
    [anon_sym_CR_LF] = ACTIONS(175),
    [aux_sym_class_definition_token2] = ACTIONS(177),
  },
  [20] = {
    [sym_hashtable_entry] = STATE(86),
    [sym__string_expr] = STATE(85),
    [sym_double_quote_string] = STATE(85),
    [sym_property_name] = STATE(87),
    [aux_sym__terminator_repeat1] = STATE(88),
    [sym__newline] = STATE(88),
    [sym_variable] = STATE(85),
    [sym__special_variable] = STATE(64),
    [anon_sym_RBRACE] = ACTIONS(179),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(181),
    [anon_sym_CR_LF] = ACTIONS(183),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(181),
    [anon_sym_DOLLAR_CARET] = ACTIONS(181),
    [sym_simple_variable] = ACTIONS(181),
    [anon_sym_LF] = ACTIONS(185),
    [sym_single_quote_string] = ACTIONS(187),
    [sym_bareword_string] = ACTIONS(187),
    [anon_sym_DQUOTE] = ACTIONS(153),
    [sym__braced_variable] = ACTIONS(181),
    [sym_comment] = ACTIONS(39),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(189),
  },
  [21] = {
    [sym_type_expr] = STATE(75),
    [sym__string_expr] = STATE(89),
    [sym_double_quote_string] = STATE(89),
    [sym_pipeline_statement] = STATE(78),
    [sym__non_array_expression] = STATE(89),
    [sym__expression] = STATE(91),
    [sym_array_expression] = STATE(91),
    [sym_flat_array_expression] = STATE(89),
    [aux_sym_array_expression_repeat1] = STATE(90),
    [sym_variable] = STATE(89),
    [sym__special_variable] = STATE(64),
    [sym_non_type_attribute] = STATE(79),
    [sym__attribute] = STATE(79),
    [sym_command_expression] = STATE(91),
    [sym__pipeline_expression] = STATE(91),
    [sym__attributed_variable] = STATE(89),
    [sym_scriptblock] = STATE(89),
    [aux_sym__attributed_variable_repeat1] = STATE(79),
    [sym_hashtable_expression] = STATE(89),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(143),
    [sym_number_expr] = ACTIONS(191),
    [anon_sym_AT_LPAREN] = ACTIONS(147),
    [anon_sym_DOLLAR_CARET] = ACTIONS(143),
    [sym_simple_variable] = ACTIONS(143),
    [sym_bareword_string] = ACTIONS(149),
    [anon_sym_LBRACE] = ACTIONS(151),
    [anon_sym_DQUOTE] = ACTIONS(153),
    [anon_sym_COMMA] = ACTIONS(155),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(157),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(143),
    [anon_sym_AMP] = ACTIONS(159),
    [anon_sym_LPAREN] = ACTIONS(161),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(163),
    [sym_single_quote_string] = ACTIONS(193),
    [anon_sym_AT_LBRACE] = ACTIONS(167),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(169),
    [sym__braced_variable] = ACTIONS(143),
  },
  [22] = {
    [aux_sym_source_file_repeat1] = STATE(93),
    [aux_sym__terminator_repeat1] = STATE(94),
    [sym__newline] = STATE(94),
    [sym__terminator] = STATE(95),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(195),
    [ts_builtin_sym_end] = ACTIONS(197),
    [anon_sym_CR_LF] = ACTIONS(199),
    [anon_sym_SEMI] = ACTIONS(201),
  },
  [23] = {
    [aux_sym_array_expression_repeat1] = STATE(96),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(203),
    [ts_builtin_sym_end] = ACTIONS(205),
    [anon_sym_COMMA] = ACTIONS(17),
    [anon_sym_CR_LF] = ACTIONS(205),
    [anon_sym_SEMI] = ACTIONS(203),
    [anon_sym_PIPE] = ACTIONS(203),
  },
  [24] = {
    [sym_comment] = ACTIONS(3),
    [ts_builtin_sym_end] = ACTIONS(207),
  },
  [25] = {
    [sym__statement] = STATE(97),
    [sym__definition_statement] = STATE(97),
    [sym_pipeline_statement] = STATE(97),
    [sym_if_statement] = STATE(97),
    [sym__non_array_expression] = STATE(23),
    [sym__expression] = STATE(28),
    [sym_array_expression] = STATE(28),
    [sym_flat_array_expression] = STATE(23),
    [sym_variable] = STATE(29),
    [sym__special_variable] = STATE(6),
    [sym_non_type_attribute] = STATE(30),
    [sym__attribute] = STATE(30),
    [sym_function_definition] = STATE(97),
    [sym_filter_definition] = STATE(97),
    [sym_enum_definition] = STATE(97),
    [sym_while_statement] = STATE(97),
    [sym_do_while_statement] = STATE(97),
    [sym_scriptblock] = STATE(23),
    [sym_hashtable_expression] = STATE(23),
    [sym_type_expr] = STATE(26),
    [sym__string_expr] = STATE(23),
    [sym_double_quote_string] = STATE(23),
    [aux_sym_array_expression_repeat1] = STATE(27),
    [sym_class_definition] = STATE(97),
    [sym__expression_statement] = STATE(97),
    [sym_assignment_statement] = STATE(97),
    [sym_command_expression] = STATE(28),
    [sym__pipeline_expression] = STATE(28),
    [sym__attributed_variable] = STATE(29),
    [aux_sym__attributed_variable_repeat1] = STATE(30),
    [aux_sym_do_while_statement_token1] = ACTIONS(5),
    [aux_sym_function_definition_token1] = ACTIONS(7),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(9),
    [aux_sym_filter_definition_token1] = ACTIONS(11),
    [sym_number_expr] = ACTIONS(13),
    [anon_sym_AT_LPAREN] = ACTIONS(15),
    [sym_simple_variable] = ACTIONS(9),
    [anon_sym_DOLLAR_CARET] = ACTIONS(9),
    [anon_sym_COMMA] = ACTIONS(17),
    [sym_bareword_string] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [aux_sym_enum_definition_token1] = ACTIONS(23),
    [anon_sym_DQUOTE] = ACTIONS(25),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(27),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(9),
    [aux_sym_while_statement_token1] = ACTIONS(31),
    [aux_sym_if_statement_token1] = ACTIONS(33),
    [anon_sym_AMP] = ACTIONS(35),
    [anon_sym_LPAREN] = ACTIONS(37),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(41),
    [aux_sym_class_definition_token1] = ACTIONS(43),
    [anon_sym_AT_LBRACE] = ACTIONS(45),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(47),
    [sym__braced_variable] = ACTIONS(9),
    [sym_single_quote_string] = ACTIONS(49),
  },
  [26] = {
    [anon_sym_RBRACE] = ACTIONS(209),
    [anon_sym_CR_LF] = ACTIONS(211),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(213),
    [anon_sym_DOLLAR_CARET] = ACTIONS(213),
    [sym_simple_variable] = ACTIONS(213),
    [anon_sym_COMMA] = ACTIONS(209),
    [anon_sym_SEMI] = ACTIONS(209),
    [ts_builtin_sym_end] = ACTIONS(211),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(213),
    [anon_sym_PIPE] = ACTIONS(209),
    [anon_sym_RPAREN] = ACTIONS(209),
    [anon_sym_LF] = ACTIONS(209),
    [anon_sym_LBRACK] = ACTIONS(213),
    [sym_comment] = ACTIONS(39),
    [sym__braced_variable] = ACTIONS(213),
  },
  [27] = {
    [aux_sym_array_expression_repeat1] = STATE(98),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(215),
    [ts_builtin_sym_end] = ACTIONS(217),
    [anon_sym_COMMA] = ACTIONS(17),
    [anon_sym_CR_LF] = ACTIONS(217),
    [anon_sym_SEMI] = ACTIONS(215),
    [anon_sym_PIPE] = ACTIONS(215),
  },
  [28] = {
    [aux_sym_pipeline_statement_repeat1] = STATE(100),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(219),
    [ts_builtin_sym_end] = ACTIONS(221),
    [anon_sym_CR_LF] = ACTIONS(221),
    [anon_sym_SEMI] = ACTIONS(219),
    [anon_sym_PIPE] = ACTIONS(223),
  },
  [29] = {
    [ts_builtin_sym_end] = ACTIONS(211),
    [anon_sym_EQ] = ACTIONS(225),
    [anon_sym_CR_LF] = ACTIONS(211),
    [anon_sym_PIPE] = ACTIONS(209),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(209),
    [anon_sym_COMMA] = ACTIONS(209),
    [anon_sym_SEMI] = ACTIONS(209),
  },
  [30] = {
    [sym_type_expr] = STATE(103),
    [sym_variable] = STATE(102),
    [sym__special_variable] = STATE(6),
    [sym_non_type_attribute] = STATE(103),
    [sym__attribute] = STATE(103),
    [aux_sym__attributed_variable_repeat1] = STATE(103),
    [sym_simple_variable] = ACTIONS(9),
    [anon_sym_LBRACK] = ACTIONS(163),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(9),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(9),
    [sym__braced_variable] = ACTIONS(9),
    [anon_sym_DOLLAR_CARET] = ACTIONS(9),
  },
  [31] = {
    [sym__statement] = STATE(106),
    [sym__definition_statement] = STATE(106),
    [sym_pipeline_statement] = STATE(106),
    [sym_if_statement] = STATE(106),
    [sym__non_array_expression] = STATE(107),
    [sym__expression] = STATE(110),
    [sym_array_expression] = STATE(110),
    [sym_flat_array_expression] = STATE(107),
    [sym_variable] = STATE(111),
    [sym__special_variable] = STATE(6),
    [sym_non_type_attribute] = STATE(30),
    [sym__attribute] = STATE(30),
    [sym_function_definition] = STATE(106),
    [sym_filter_definition] = STATE(106),
    [sym_enum_definition] = STATE(106),
    [sym_while_statement] = STATE(106),
    [sym_do_while_statement] = STATE(106),
    [sym_scriptblock] = STATE(107),
    [sym_hashtable_expression] = STATE(107),
    [sym_type_expr] = STATE(26),
    [sym__string_expr] = STATE(107),
    [sym_double_quote_string] = STATE(107),
    [aux_sym_class_method_body_repeat1] = STATE(108),
    [aux_sym_array_expression_repeat1] = STATE(109),
    [sym__newline] = STATE(112),
    [sym_class_definition] = STATE(106),
    [sym__expression_statement] = STATE(106),
    [sym_assignment_statement] = STATE(106),
    [sym_command_expression] = STATE(110),
    [sym__pipeline_expression] = STATE(110),
    [sym__attributed_variable] = STATE(111),
    [aux_sym__terminator_repeat1] = STATE(112),
    [aux_sym__attributed_variable_repeat1] = STATE(30),
    [aux_sym_do_while_statement_token1] = ACTIONS(5),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(61),
    [sym_number_expr] = ACTIONS(227),
    [anon_sym_COMMA] = ACTIONS(17),
    [anon_sym_LBRACE] = ACTIONS(69),
    [aux_sym_enum_definition_token1] = ACTIONS(23),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(61),
    [aux_sym_while_statement_token1] = ACTIONS(31),
    [aux_sym_if_statement_token1] = ACTIONS(229),
    [anon_sym_AMP] = ACTIONS(99),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(77),
    [sym_single_quote_string] = ACTIONS(227),
    [anon_sym_RBRACE] = ACTIONS(231),
    [aux_sym_function_definition_token1] = ACTIONS(7),
    [anon_sym_CR_LF] = ACTIONS(233),
    [aux_sym_filter_definition_token1] = ACTIONS(11),
    [anon_sym_AT_LPAREN] = ACTIONS(67),
    [anon_sym_DOLLAR_CARET] = ACTIONS(61),
    [sym_simple_variable] = ACTIONS(61),
    [sym_bareword_string] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(25),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(71),
    [anon_sym_LPAREN] = ACTIONS(73),
    [anon_sym_LF] = ACTIONS(235),
    [aux_sym_class_definition_token1] = ACTIONS(43),
    [anon_sym_AT_LBRACE] = ACTIONS(81),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(83),
    [sym__braced_variable] = ACTIONS(61),
  },
  [32] = {
    [aux_sym__terminator_repeat1] = STATE(114),
    [sym__newline] = STATE(114),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(237),
    [anon_sym_CR_LF] = ACTIONS(239),
    [anon_sym_LBRACE] = ACTIONS(241),
  },
  [33] = {
    [sym_scriptblock] = STATE(115),
    [anon_sym_LBRACE] = ACTIONS(21),
    [sym_comment] = ACTIONS(3),
  },
  [34] = {
    [sym_scriptblock] = STATE(116),
    [anon_sym_LBRACE] = ACTIONS(21),
    [sym_comment] = ACTIONS(3),
  },
  [35] = {
    [anon_sym_RBRACE] = ACTIONS(243),
    [ts_builtin_sym_end] = ACTIONS(245),
    [anon_sym_CR_LF] = ACTIONS(245),
    [anon_sym_PIPE] = ACTIONS(243),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(243),
    [anon_sym_RPAREN] = ACTIONS(243),
    [anon_sym_COMMA] = ACTIONS(243),
    [anon_sym_SEMI] = ACTIONS(243),
  },
  [36] = {
    [aux_sym_array_expression_repeat1] = STATE(117),
    [anon_sym_RPAREN] = ACTIONS(203),
    [anon_sym_LF] = ACTIONS(203),
    [sym_comment] = ACTIONS(39),
    [anon_sym_COMMA] = ACTIONS(17),
    [anon_sym_CR_LF] = ACTIONS(205),
    [anon_sym_SEMI] = ACTIONS(203),
  },
  [37] = {
    [aux_sym_array_expression_repeat1] = STATE(118),
    [anon_sym_RPAREN] = ACTIONS(215),
    [anon_sym_LF] = ACTIONS(215),
    [sym_comment] = ACTIONS(39),
    [anon_sym_COMMA] = ACTIONS(17),
    [anon_sym_CR_LF] = ACTIONS(217),
    [anon_sym_SEMI] = ACTIONS(215),
  },
  [38] = {
    [aux_sym_flat_array_expression_repeat1] = STATE(121),
    [aux_sym__terminator_repeat1] = STATE(122),
    [sym__newline] = STATE(122),
    [sym__terminator] = STATE(123),
    [anon_sym_RPAREN] = ACTIONS(247),
    [anon_sym_LF] = ACTIONS(249),
    [sym_comment] = ACTIONS(39),
    [anon_sym_CR_LF] = ACTIONS(251),
    [anon_sym_SEMI] = ACTIONS(253),
  },
  [39] = {
    [sym_type_expr] = STATE(26),
    [sym__string_expr] = STATE(36),
    [sym_double_quote_string] = STATE(36),
    [aux_sym_array_expression_repeat1] = STATE(37),
    [sym__expression] = STATE(124),
    [sym__non_array_expression] = STATE(36),
    [sym_array_expression] = STATE(124),
    [sym_flat_array_expression] = STATE(36),
    [sym_variable] = STATE(36),
    [sym__special_variable] = STATE(6),
    [sym_non_type_attribute] = STATE(30),
    [sym__newline] = STATE(125),
    [sym__attribute] = STATE(30),
    [sym__attributed_variable] = STATE(36),
    [aux_sym__terminator_repeat1] = STATE(125),
    [sym_scriptblock] = STATE(36),
    [aux_sym__attributed_variable_repeat1] = STATE(30),
    [sym_hashtable_expression] = STATE(36),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(61),
    [anon_sym_CR_LF] = ACTIONS(255),
    [sym_number_expr] = ACTIONS(65),
    [anon_sym_AT_LPAREN] = ACTIONS(67),
    [sym_simple_variable] = ACTIONS(61),
    [anon_sym_DOLLAR_CARET] = ACTIONS(61),
    [anon_sym_COMMA] = ACTIONS(17),
    [anon_sym_LBRACE] = ACTIONS(69),
    [anon_sym_DQUOTE] = ACTIONS(25),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(71),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(61),
    [anon_sym_LPAREN] = ACTIONS(73),
    [anon_sym_RPAREN] = ACTIONS(247),
    [anon_sym_LBRACK] = ACTIONS(77),
    [anon_sym_LF] = ACTIONS(257),
    [anon_sym_AT_LBRACE] = ACTIONS(81),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(83),
    [sym__braced_variable] = ACTIONS(61),
    [sym_single_quote_string] = ACTIONS(65),
    [sym_comment] = ACTIONS(39),
  },
  [40] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(259),
  },
  [41] = {
    [aux_sym__terminator_repeat1] = STATE(128),
    [sym__newline] = STATE(128),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(261),
    [anon_sym_CR_LF] = ACTIONS(263),
    [anon_sym_LPAREN] = ACTIONS(265),
  },
  [42] = {
    [aux_sym_source_file_repeat1] = STATE(131),
    [aux_sym__terminator_repeat1] = STATE(132),
    [sym__newline] = STATE(132),
    [sym__terminator] = STATE(133),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(267),
    [anon_sym_RBRACE] = ACTIONS(269),
    [anon_sym_CR_LF] = ACTIONS(271),
    [anon_sym_SEMI] = ACTIONS(273),
  },
  [43] = {
    [aux_sym_array_expression_repeat1] = STATE(134),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(203),
    [anon_sym_RBRACE] = ACTIONS(203),
    [anon_sym_COMMA] = ACTIONS(17),
    [anon_sym_CR_LF] = ACTIONS(205),
    [anon_sym_SEMI] = ACTIONS(203),
    [anon_sym_PIPE] = ACTIONS(203),
  },
  [44] = {
    [sym__statement] = STATE(135),
    [sym__definition_statement] = STATE(135),
    [sym_pipeline_statement] = STATE(135),
    [sym_if_statement] = STATE(135),
    [sym__non_array_expression] = STATE(43),
    [sym__expression] = STATE(46),
    [sym_array_expression] = STATE(46),
    [sym_flat_array_expression] = STATE(43),
    [sym_variable] = STATE(47),
    [sym__special_variable] = STATE(6),
    [sym_non_type_attribute] = STATE(30),
    [sym__attribute] = STATE(30),
    [sym_function_definition] = STATE(135),
    [sym_filter_definition] = STATE(135),
    [sym_enum_definition] = STATE(135),
    [sym_while_statement] = STATE(135),
    [sym_do_while_statement] = STATE(135),
    [sym_scriptblock] = STATE(43),
    [sym_hashtable_expression] = STATE(43),
    [sym_type_expr] = STATE(26),
    [sym__string_expr] = STATE(43),
    [sym_double_quote_string] = STATE(43),
    [aux_sym_array_expression_repeat1] = STATE(45),
    [sym__newline] = STATE(136),
    [sym_class_definition] = STATE(135),
    [sym__expression_statement] = STATE(135),
    [sym_assignment_statement] = STATE(135),
    [sym_command_expression] = STATE(46),
    [sym__pipeline_expression] = STATE(46),
    [sym__attributed_variable] = STATE(47),
    [aux_sym__terminator_repeat1] = STATE(136),
    [aux_sym__attributed_variable_repeat1] = STATE(30),
    [aux_sym_do_while_statement_token1] = ACTIONS(5),
    [aux_sym_function_definition_token1] = ACTIONS(7),
    [anon_sym_CR_LF] = ACTIONS(275),
    [aux_sym_filter_definition_token1] = ACTIONS(11),
    [sym_number_expr] = ACTIONS(93),
    [anon_sym_AT_LPAREN] = ACTIONS(67),
    [sym_simple_variable] = ACTIONS(61),
    [anon_sym_DOLLAR_CARET] = ACTIONS(61),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(61),
    [sym_bareword_string] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(69),
    [aux_sym_enum_definition_token1] = ACTIONS(23),
    [anon_sym_DQUOTE] = ACTIONS(25),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(71),
    [anon_sym_COMMA] = ACTIONS(17),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(61),
    [aux_sym_while_statement_token1] = ACTIONS(31),
    [aux_sym_if_statement_token1] = ACTIONS(97),
    [anon_sym_AMP] = ACTIONS(99),
    [anon_sym_LPAREN] = ACTIONS(73),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(277),
    [aux_sym_class_definition_token1] = ACTIONS(43),
    [anon_sym_AT_LBRACE] = ACTIONS(81),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(83),
    [sym__braced_variable] = ACTIONS(61),
    [anon_sym_LBRACK] = ACTIONS(77),
    [sym_single_quote_string] = ACTIONS(93),
  },
  [45] = {
    [aux_sym_array_expression_repeat1] = STATE(137),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(215),
    [anon_sym_RBRACE] = ACTIONS(215),
    [anon_sym_COMMA] = ACTIONS(17),
    [anon_sym_CR_LF] = ACTIONS(217),
    [anon_sym_SEMI] = ACTIONS(215),
    [anon_sym_PIPE] = ACTIONS(215),
  },
  [46] = {
    [aux_sym_pipeline_statement_repeat1] = STATE(138),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(219),
    [anon_sym_RBRACE] = ACTIONS(219),
    [anon_sym_CR_LF] = ACTIONS(221),
    [anon_sym_SEMI] = ACTIONS(219),
    [anon_sym_PIPE] = ACTIONS(223),
  },
  [47] = {
    [anon_sym_RBRACE] = ACTIONS(209),
    [anon_sym_EQ] = ACTIONS(279),
    [anon_sym_CR_LF] = ACTIONS(211),
    [anon_sym_PIPE] = ACTIONS(209),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(209),
    [anon_sym_COMMA] = ACTIONS(209),
    [anon_sym_SEMI] = ACTIONS(209),
  },
  [48] = {
    [sym__statement] = STATE(135),
    [sym__definition_statement] = STATE(135),
    [sym_pipeline_statement] = STATE(135),
    [sym_if_statement] = STATE(135),
    [sym__non_array_expression] = STATE(43),
    [sym__expression] = STATE(46),
    [sym_array_expression] = STATE(46),
    [sym_flat_array_expression] = STATE(43),
    [sym_variable] = STATE(47),
    [sym__special_variable] = STATE(6),
    [sym_non_type_attribute] = STATE(30),
    [sym__attribute] = STATE(30),
    [sym_function_definition] = STATE(135),
    [sym_filter_definition] = STATE(135),
    [sym_enum_definition] = STATE(135),
    [sym_while_statement] = STATE(135),
    [sym_do_while_statement] = STATE(135),
    [sym_scriptblock] = STATE(43),
    [sym_hashtable_expression] = STATE(43),
    [sym_type_expr] = STATE(26),
    [sym__string_expr] = STATE(43),
    [sym_double_quote_string] = STATE(43),
    [aux_sym_array_expression_repeat1] = STATE(45),
    [sym__newline] = STATE(140),
    [sym_class_definition] = STATE(135),
    [sym__expression_statement] = STATE(135),
    [sym_assignment_statement] = STATE(135),
    [sym_command_expression] = STATE(46),
    [sym__pipeline_expression] = STATE(46),
    [sym__attributed_variable] = STATE(47),
    [aux_sym__terminator_repeat1] = STATE(140),
    [aux_sym__attributed_variable_repeat1] = STATE(30),
    [aux_sym_do_while_statement_token1] = ACTIONS(5),
    [aux_sym_function_definition_token1] = ACTIONS(7),
    [anon_sym_CR_LF] = ACTIONS(281),
    [aux_sym_filter_definition_token1] = ACTIONS(11),
    [sym_number_expr] = ACTIONS(93),
    [anon_sym_AT_LPAREN] = ACTIONS(67),
    [sym_simple_variable] = ACTIONS(61),
    [anon_sym_DOLLAR_CARET] = ACTIONS(61),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(61),
    [sym_bareword_string] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(69),
    [aux_sym_enum_definition_token1] = ACTIONS(23),
    [anon_sym_DQUOTE] = ACTIONS(25),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(71),
    [anon_sym_COMMA] = ACTIONS(17),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(61),
    [aux_sym_while_statement_token1] = ACTIONS(31),
    [aux_sym_if_statement_token1] = ACTIONS(97),
    [anon_sym_AMP] = ACTIONS(99),
    [anon_sym_LPAREN] = ACTIONS(73),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(283),
    [aux_sym_class_definition_token1] = ACTIONS(43),
    [anon_sym_AT_LBRACE] = ACTIONS(81),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(83),
    [sym__braced_variable] = ACTIONS(61),
    [anon_sym_LBRACK] = ACTIONS(77),
    [sym_single_quote_string] = ACTIONS(93),
  },
  [49] = {
    [aux_sym__terminator_repeat1] = STATE(142),
    [sym__newline] = STATE(142),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(285),
    [anon_sym_CR_LF] = ACTIONS(287),
    [anon_sym_LBRACE] = ACTIONS(289),
  },
  [50] = {
    [aux_sym__terminator_repeat1] = STATE(144),
    [sym__newline] = STATE(144),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(291),
    [anon_sym_CR_LF] = ACTIONS(293),
    [aux_sym_class_definition_token2] = ACTIONS(295),
  },
  [51] = {
    [anon_sym_DQUOTE] = ACTIONS(297),
    [sym_comment] = ACTIONS(3),
  },
  [52] = {
    [aux_sym_double_quote_string_token1] = ACTIONS(85),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(85),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(85),
    [anon_sym_DOLLAR] = ACTIONS(85),
    [anon_sym_DOLLAR_CARET] = ACTIONS(85),
    [sym_simple_variable] = ACTIONS(85),
    [sym_comment] = ACTIONS(39),
    [anon_sym_DQUOTE] = ACTIONS(85),
    [sym__braced_variable] = ACTIONS(85),
  },
  [53] = {
    [anon_sym_RBRACE] = ACTIONS(299),
    [ts_builtin_sym_end] = ACTIONS(301),
    [anon_sym_CR_LF] = ACTIONS(301),
    [anon_sym_PIPE] = ACTIONS(299),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(299),
    [anon_sym_RPAREN] = ACTIONS(299),
    [anon_sym_COMMA] = ACTIONS(299),
    [anon_sym_SEMI] = ACTIONS(299),
  },
  [54] = {
    [sym__special_variable] = STATE(52),
    [aux_sym_double_quote_string_repeat1] = STATE(147),
    [sym_variable] = STATE(147),
    [aux_sym_double_quote_string_token1] = ACTIONS(303),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(113),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(113),
    [anon_sym_DOLLAR] = ACTIONS(305),
    [anon_sym_DOLLAR_CARET] = ACTIONS(113),
    [sym_simple_variable] = ACTIONS(113),
    [sym_comment] = ACTIONS(39),
    [anon_sym_DQUOTE] = ACTIONS(307),
    [sym__braced_variable] = ACTIONS(113),
  },
  [55] = {
    [anon_sym_RBRACE] = ACTIONS(309),
    [ts_builtin_sym_end] = ACTIONS(311),
    [anon_sym_CR_LF] = ACTIONS(311),
    [anon_sym_PIPE] = ACTIONS(309),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(309),
    [anon_sym_RPAREN] = ACTIONS(309),
    [anon_sym_COMMA] = ACTIONS(309),
    [anon_sym_SEMI] = ACTIONS(309),
  },
  [56] = {
    [sym_type_expr] = STATE(153),
    [aux_sym_param_block_variable_repeat1] = STATE(151),
    [sym_param_block_variable] = STATE(152),
    [sym_non_type_attribute] = STATE(153),
    [sym__attribute] = STATE(153),
    [sym_simple_variable] = ACTIONS(313),
    [anon_sym_LBRACK] = ACTIONS(315),
    [anon_sym_RPAREN] = ACTIONS(317),
    [sym_comment] = ACTIONS(3),
  },
  [57] = {
    [sym_type_expr] = STATE(26),
    [sym__string_expr] = STATE(155),
    [sym_double_quote_string] = STATE(155),
    [sym_pipeline_statement] = STATE(154),
    [sym__non_array_expression] = STATE(155),
    [sym__expression] = STATE(157),
    [sym_array_expression] = STATE(157),
    [sym_flat_array_expression] = STATE(155),
    [aux_sym_array_expression_repeat1] = STATE(156),
    [sym_variable] = STATE(155),
    [sym__special_variable] = STATE(6),
    [sym__attribute] = STATE(30),
    [sym_non_type_attribute] = STATE(30),
    [sym__newline] = STATE(158),
    [sym_command_expression] = STATE(157),
    [sym__pipeline_expression] = STATE(157),
    [sym__attributed_variable] = STATE(155),
    [aux_sym__terminator_repeat1] = STATE(158),
    [sym_scriptblock] = STATE(155),
    [aux_sym__attributed_variable_repeat1] = STATE(30),
    [sym_hashtable_expression] = STATE(155),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(61),
    [anon_sym_CR_LF] = ACTIONS(319),
    [sym_number_expr] = ACTIONS(321),
    [anon_sym_AT_LPAREN] = ACTIONS(67),
    [sym_simple_variable] = ACTIONS(61),
    [anon_sym_DOLLAR_CARET] = ACTIONS(61),
    [sym_bareword_string] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(69),
    [anon_sym_DQUOTE] = ACTIONS(25),
    [anon_sym_COMMA] = ACTIONS(17),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(71),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(61),
    [anon_sym_AMP] = ACTIONS(99),
    [anon_sym_LPAREN] = ACTIONS(73),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(323),
    [anon_sym_LBRACK] = ACTIONS(77),
    [anon_sym_AT_LBRACE] = ACTIONS(81),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(83),
    [sym__braced_variable] = ACTIONS(61),
    [sym_single_quote_string] = ACTIONS(321),
  },
  [58] = {
    [aux_sym__terminator_repeat1] = STATE(160),
    [sym__newline] = STATE(160),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(325),
    [anon_sym_CR_LF] = ACTIONS(327),
    [anon_sym_LPAREN] = ACTIONS(329),
  },
  [59] = {
    [sym_type_expr] = STATE(75),
    [sym__string_expr] = STATE(89),
    [sym_double_quote_string] = STATE(89),
    [sym_pipeline_statement] = STATE(161),
    [sym__non_array_expression] = STATE(89),
    [sym__expression] = STATE(91),
    [sym_array_expression] = STATE(91),
    [sym_flat_array_expression] = STATE(89),
    [aux_sym_array_expression_repeat1] = STATE(90),
    [sym_variable] = STATE(89),
    [sym__special_variable] = STATE(64),
    [sym__attribute] = STATE(79),
    [sym_non_type_attribute] = STATE(79),
    [sym__newline] = STATE(162),
    [sym_command_expression] = STATE(91),
    [sym__pipeline_expression] = STATE(91),
    [sym__attributed_variable] = STATE(89),
    [aux_sym__terminator_repeat1] = STATE(162),
    [sym_scriptblock] = STATE(89),
    [aux_sym__attributed_variable_repeat1] = STATE(79),
    [sym_hashtable_expression] = STATE(89),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(181),
    [anon_sym_CR_LF] = ACTIONS(331),
    [sym_number_expr] = ACTIONS(191),
    [anon_sym_AT_LPAREN] = ACTIONS(333),
    [sym_simple_variable] = ACTIONS(181),
    [anon_sym_DOLLAR_CARET] = ACTIONS(181),
    [sym_bareword_string] = ACTIONS(149),
    [anon_sym_LBRACE] = ACTIONS(335),
    [anon_sym_DQUOTE] = ACTIONS(153),
    [anon_sym_COMMA] = ACTIONS(155),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(189),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(181),
    [anon_sym_AMP] = ACTIONS(337),
    [anon_sym_LPAREN] = ACTIONS(339),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(341),
    [anon_sym_LBRACK] = ACTIONS(343),
    [anon_sym_AT_LBRACE] = ACTIONS(345),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(347),
    [sym__braced_variable] = ACTIONS(181),
    [sym_single_quote_string] = ACTIONS(191),
  },
  [60] = {
    [aux_sym__terminator_repeat1] = STATE(160),
    [sym__newline] = STATE(160),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(325),
    [anon_sym_CR_LF] = ACTIONS(327),
    [anon_sym_LPAREN] = ACTIONS(349),
  },
  [61] = {
    [anon_sym_RBRACE] = ACTIONS(351),
    [ts_builtin_sym_end] = ACTIONS(353),
    [anon_sym_CR_LF] = ACTIONS(353),
    [anon_sym_PIPE] = ACTIONS(351),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(351),
    [anon_sym_RPAREN] = ACTIONS(351),
    [anon_sym_SEMI] = ACTIONS(351),
  },
  [62] = {
    [anon_sym_RBRACE] = ACTIONS(355),
    [ts_builtin_sym_end] = ACTIONS(357),
    [anon_sym_CR_LF] = ACTIONS(357),
    [anon_sym_PIPE] = ACTIONS(355),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(355),
    [anon_sym_RPAREN] = ACTIONS(355),
    [anon_sym_SEMI] = ACTIONS(355),
  },
  [63] = {
    [sym_type_expr] = STATE(26),
    [sym__string_expr] = STATE(36),
    [sym_double_quote_string] = STATE(36),
    [aux_sym_array_expression_repeat1] = STATE(37),
    [sym__expression] = STATE(165),
    [sym__non_array_expression] = STATE(36),
    [sym_array_expression] = STATE(165),
    [sym_flat_array_expression] = STATE(36),
    [sym_variable] = STATE(36),
    [sym__special_variable] = STATE(6),
    [sym_non_type_attribute] = STATE(30),
    [sym__newline] = STATE(166),
    [sym__attribute] = STATE(30),
    [sym__attributed_variable] = STATE(36),
    [aux_sym__terminator_repeat1] = STATE(166),
    [sym_scriptblock] = STATE(36),
    [aux_sym__attributed_variable_repeat1] = STATE(30),
    [sym_hashtable_expression] = STATE(36),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(61),
    [anon_sym_CR_LF] = ACTIONS(359),
    [sym_number_expr] = ACTIONS(65),
    [anon_sym_AT_LPAREN] = ACTIONS(67),
    [sym_simple_variable] = ACTIONS(61),
    [anon_sym_DOLLAR_CARET] = ACTIONS(61),
    [anon_sym_COMMA] = ACTIONS(17),
    [anon_sym_LBRACE] = ACTIONS(69),
    [anon_sym_DQUOTE] = ACTIONS(25),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(71),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(61),
    [anon_sym_LPAREN] = ACTIONS(73),
    [anon_sym_RPAREN] = ACTIONS(361),
    [anon_sym_LBRACK] = ACTIONS(77),
    [anon_sym_LF] = ACTIONS(363),
    [anon_sym_AT_LBRACE] = ACTIONS(81),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(83),
    [sym__braced_variable] = ACTIONS(61),
    [sym_single_quote_string] = ACTIONS(65),
    [sym_comment] = ACTIONS(39),
  },
  [64] = {
    [anon_sym_RPAREN] = ACTIONS(87),
    [sym_comment] = ACTIONS(3),
    [anon_sym_EQ] = ACTIONS(87),
    [anon_sym_COMMA] = ACTIONS(87),
    [anon_sym_PIPE] = ACTIONS(87),
  },
  [65] = {
    [anon_sym_RPAREN] = ACTIONS(91),
    [sym_comment] = ACTIONS(3),
    [anon_sym_PIPE] = ACTIONS(91),
  },
  [66] = {
    [sym__statement] = STATE(167),
    [sym__definition_statement] = STATE(167),
    [sym_pipeline_statement] = STATE(167),
    [sym_if_statement] = STATE(167),
    [sym__non_array_expression] = STATE(43),
    [sym__expression] = STATE(46),
    [sym_array_expression] = STATE(46),
    [sym_flat_array_expression] = STATE(43),
    [sym_variable] = STATE(47),
    [sym__special_variable] = STATE(6),
    [sym_non_type_attribute] = STATE(30),
    [sym__attribute] = STATE(30),
    [sym_function_definition] = STATE(167),
    [sym_filter_definition] = STATE(167),
    [sym_enum_definition] = STATE(167),
    [sym_while_statement] = STATE(167),
    [sym_do_while_statement] = STATE(167),
    [sym_scriptblock] = STATE(43),
    [sym_param_block] = STATE(168),
    [sym_hashtable_expression] = STATE(43),
    [sym_type_expr] = STATE(26),
    [sym__string_expr] = STATE(43),
    [sym_double_quote_string] = STATE(43),
    [aux_sym_array_expression_repeat1] = STATE(45),
    [sym__newline] = STATE(169),
    [sym_class_definition] = STATE(167),
    [sym__expression_statement] = STATE(167),
    [sym_assignment_statement] = STATE(167),
    [sym_command_expression] = STATE(46),
    [sym__pipeline_expression] = STATE(46),
    [sym__attributed_variable] = STATE(47),
    [aux_sym__terminator_repeat1] = STATE(169),
    [aux_sym__attributed_variable_repeat1] = STATE(30),
    [aux_sym_do_while_statement_token1] = ACTIONS(5),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(61),
    [sym_number_expr] = ACTIONS(93),
    [anon_sym_COMMA] = ACTIONS(17),
    [anon_sym_LBRACE] = ACTIONS(69),
    [aux_sym_enum_definition_token1] = ACTIONS(23),
    [aux_sym_param_block_token1] = ACTIONS(95),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(61),
    [aux_sym_while_statement_token1] = ACTIONS(31),
    [aux_sym_if_statement_token1] = ACTIONS(97),
    [anon_sym_AMP] = ACTIONS(99),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(77),
    [sym_single_quote_string] = ACTIONS(93),
    [aux_sym_function_definition_token1] = ACTIONS(7),
    [anon_sym_CR_LF] = ACTIONS(365),
    [aux_sym_filter_definition_token1] = ACTIONS(11),
    [anon_sym_AT_LPAREN] = ACTIONS(67),
    [anon_sym_DOLLAR_CARET] = ACTIONS(61),
    [sym_simple_variable] = ACTIONS(61),
    [sym_bareword_string] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(25),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(71),
    [anon_sym_LPAREN] = ACTIONS(73),
    [anon_sym_LF] = ACTIONS(367),
    [aux_sym_class_definition_token1] = ACTIONS(43),
    [anon_sym_AT_LBRACE] = ACTIONS(81),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(83),
    [sym__braced_variable] = ACTIONS(61),
  },
  [67] = {
    [sym__special_variable] = STATE(52),
    [aux_sym_double_quote_string_repeat1] = STATE(172),
    [sym_variable] = STATE(172),
    [aux_sym_double_quote_string_token1] = ACTIONS(369),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(113),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(113),
    [anon_sym_DOLLAR] = ACTIONS(371),
    [anon_sym_DOLLAR_CARET] = ACTIONS(113),
    [sym_simple_variable] = ACTIONS(113),
    [sym_comment] = ACTIONS(39),
    [anon_sym_DQUOTE] = ACTIONS(373),
    [sym__braced_variable] = ACTIONS(113),
  },
  [68] = {
    [aux_sym__attributed_variable_repeat1] = STATE(79),
    [sym_type_expr] = STATE(75),
    [sym_hashtable_expression] = STATE(173),
    [sym__string_expr] = STATE(173),
    [sym_double_quote_string] = STATE(173),
    [sym__attributed_variable] = STATE(173),
    [sym__non_array_expression] = STATE(173),
    [sym_flat_array_expression] = STATE(173),
    [sym_variable] = STATE(173),
    [sym__special_variable] = STATE(64),
    [sym_non_type_attribute] = STATE(79),
    [sym__attribute] = STATE(79),
    [sym_scriptblock] = STATE(173),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(143),
    [sym_number_expr] = ACTIONS(375),
    [anon_sym_AT_LPAREN] = ACTIONS(147),
    [anon_sym_DOLLAR_CARET] = ACTIONS(143),
    [sym_simple_variable] = ACTIONS(143),
    [anon_sym_LBRACE] = ACTIONS(151),
    [anon_sym_DQUOTE] = ACTIONS(153),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(157),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(143),
    [anon_sym_LPAREN] = ACTIONS(161),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(163),
    [sym_single_quote_string] = ACTIONS(375),
    [anon_sym_AT_LBRACE] = ACTIONS(167),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(169),
    [sym__braced_variable] = ACTIONS(143),
  },
  [69] = {
    [anon_sym_RPAREN] = ACTIONS(121),
    [sym_comment] = ACTIONS(3),
    [anon_sym_EQ] = ACTIONS(121),
    [anon_sym_COMMA] = ACTIONS(121),
    [anon_sym_PIPE] = ACTIONS(121),
  },
  [70] = {
    [sym_variable] = STATE(85),
    [sym__special_variable] = STATE(64),
    [sym__string_expr] = STATE(85),
    [sym_double_quote_string] = STATE(85),
    [sym_property_name] = STATE(174),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(143),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(143),
    [anon_sym_DOLLAR_CARET] = ACTIONS(143),
    [sym_simple_variable] = ACTIONS(143),
    [sym_comment] = ACTIONS(39),
    [sym_single_quote_string] = ACTIONS(377),
    [sym_bareword_string] = ACTIONS(187),
    [anon_sym_DQUOTE] = ACTIONS(153),
    [sym__braced_variable] = ACTIONS(143),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(157),
  },
  [71] = {
    [sym_type_expr] = STATE(75),
    [sym__string_expr] = STATE(76),
    [sym_double_quote_string] = STATE(76),
    [sym__non_array_expression] = STATE(76),
    [sym__expression] = STATE(175),
    [sym_array_expression] = STATE(175),
    [sym_flat_array_expression] = STATE(76),
    [aux_sym_array_expression_repeat1] = STATE(77),
    [sym__special_variable] = STATE(64),
    [sym_variable] = STATE(76),
    [sym_non_type_attribute] = STATE(79),
    [sym__attribute] = STATE(79),
    [sym_command_expression] = STATE(175),
    [sym__pipeline_expression] = STATE(175),
    [sym__attributed_variable] = STATE(76),
    [sym_scriptblock] = STATE(76),
    [aux_sym__attributed_variable_repeat1] = STATE(79),
    [sym_hashtable_expression] = STATE(76),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(143),
    [sym_number_expr] = ACTIONS(145),
    [anon_sym_AT_LPAREN] = ACTIONS(147),
    [anon_sym_DOLLAR_CARET] = ACTIONS(143),
    [sym_simple_variable] = ACTIONS(143),
    [sym_bareword_string] = ACTIONS(149),
    [anon_sym_LBRACE] = ACTIONS(151),
    [anon_sym_DQUOTE] = ACTIONS(153),
    [anon_sym_COMMA] = ACTIONS(155),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(157),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(143),
    [anon_sym_AMP] = ACTIONS(159),
    [anon_sym_LPAREN] = ACTIONS(161),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(163),
    [sym_single_quote_string] = ACTIONS(165),
    [anon_sym_AT_LBRACE] = ACTIONS(167),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(169),
    [sym__braced_variable] = ACTIONS(143),
  },
  [72] = {
    [sym__typename_generic] = STATE(176),
    [sym__typename] = STATE(176),
    [sym__typename_array] = STATE(176),
    [sym_comment] = ACTIONS(3),
    [sym__typename_simple] = ACTIONS(171),
  },
  [73] = {
    [sym_hashtable_entry] = STATE(178),
    [sym__string_expr] = STATE(85),
    [sym_double_quote_string] = STATE(85),
    [sym_property_name] = STATE(87),
    [aux_sym__terminator_repeat1] = STATE(179),
    [sym__newline] = STATE(179),
    [sym_variable] = STATE(85),
    [sym__special_variable] = STATE(64),
    [anon_sym_RBRACE] = ACTIONS(379),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(181),
    [anon_sym_CR_LF] = ACTIONS(381),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(181),
    [anon_sym_DOLLAR_CARET] = ACTIONS(181),
    [sym_simple_variable] = ACTIONS(181),
    [anon_sym_LF] = ACTIONS(383),
    [sym_single_quote_string] = ACTIONS(187),
    [sym_bareword_string] = ACTIONS(187),
    [anon_sym_DQUOTE] = ACTIONS(153),
    [sym__braced_variable] = ACTIONS(181),
    [sym_comment] = ACTIONS(39),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(189),
  },
  [74] = {
    [sym_type_expr] = STATE(75),
    [sym__string_expr] = STATE(89),
    [sym_double_quote_string] = STATE(89),
    [sym_pipeline_statement] = STATE(175),
    [sym__non_array_expression] = STATE(89),
    [sym__expression] = STATE(91),
    [sym_array_expression] = STATE(91),
    [sym_flat_array_expression] = STATE(89),
    [aux_sym_array_expression_repeat1] = STATE(90),
    [sym_variable] = STATE(89),
    [sym__special_variable] = STATE(64),
    [sym_non_type_attribute] = STATE(79),
    [sym__attribute] = STATE(79),
    [sym_command_expression] = STATE(91),
    [sym__pipeline_expression] = STATE(91),
    [sym__attributed_variable] = STATE(89),
    [sym_scriptblock] = STATE(89),
    [aux_sym__attributed_variable_repeat1] = STATE(79),
    [sym_hashtable_expression] = STATE(89),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(143),
    [sym_number_expr] = ACTIONS(191),
    [anon_sym_AT_LPAREN] = ACTIONS(147),
    [anon_sym_DOLLAR_CARET] = ACTIONS(143),
    [sym_simple_variable] = ACTIONS(143),
    [sym_bareword_string] = ACTIONS(149),
    [anon_sym_LBRACE] = ACTIONS(151),
    [anon_sym_DQUOTE] = ACTIONS(153),
    [anon_sym_COMMA] = ACTIONS(155),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(157),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(143),
    [anon_sym_AMP] = ACTIONS(159),
    [anon_sym_LPAREN] = ACTIONS(161),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(163),
    [sym_single_quote_string] = ACTIONS(193),
    [anon_sym_AT_LBRACE] = ACTIONS(167),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(169),
    [sym__braced_variable] = ACTIONS(143),
  },
  [75] = {
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(385),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(385),
    [anon_sym_DOLLAR_CARET] = ACTIONS(385),
    [anon_sym_RPAREN] = ACTIONS(211),
    [sym_simple_variable] = ACTIONS(385),
    [anon_sym_LBRACK] = ACTIONS(385),
    [anon_sym_COMMA] = ACTIONS(211),
    [sym_comment] = ACTIONS(3),
    [sym__braced_variable] = ACTIONS(385),
    [anon_sym_PIPE] = ACTIONS(211),
  },
  [76] = {
    [aux_sym_array_expression_repeat1] = STATE(180),
    [anon_sym_RPAREN] = ACTIONS(205),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(387),
  },
  [77] = {
    [aux_sym_array_expression_repeat1] = STATE(181),
    [anon_sym_RPAREN] = ACTIONS(217),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(387),
  },
  [78] = {
    [anon_sym_RPAREN] = ACTIONS(389),
    [sym_comment] = ACTIONS(3),
  },
  [79] = {
    [sym_type_expr] = STATE(103),
    [sym_variable] = STATE(183),
    [sym__special_variable] = STATE(64),
    [sym_non_type_attribute] = STATE(103),
    [sym__attribute] = STATE(103),
    [aux_sym__attributed_variable_repeat1] = STATE(103),
    [sym_simple_variable] = ACTIONS(143),
    [anon_sym_LBRACK] = ACTIONS(163),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(143),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(143),
    [sym__braced_variable] = ACTIONS(143),
    [anon_sym_DOLLAR_CARET] = ACTIONS(143),
  },
  [80] = {
    [anon_sym_LBRACK_RBRACK] = ACTIONS(391),
    [anon_sym_LBRACK] = ACTIONS(393),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACK] = ACTIONS(391),
    [anon_sym_LPAREN] = ACTIONS(395),
  },
  [81] = {
    [anon_sym_LBRACK_RBRACK] = ACTIONS(397),
    [anon_sym_LBRACK] = ACTIONS(399),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACK] = ACTIONS(401),
  },
  [82] = {
    [aux_sym__terminator_repeat1] = STATE(189),
    [sym__newline] = STATE(189),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(403),
    [anon_sym_CR_LF] = ACTIONS(405),
    [anon_sym_LBRACE] = ACTIONS(407),
  },
  [83] = {
    [aux_sym__terminator_repeat1] = STATE(144),
    [sym__newline] = STATE(144),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(291),
    [anon_sym_CR_LF] = ACTIONS(293),
    [aux_sym_class_definition_token2] = ACTIONS(409),
  },
  [84] = {
    [anon_sym_RBRACE] = ACTIONS(411),
    [ts_builtin_sym_end] = ACTIONS(413),
    [anon_sym_CR_LF] = ACTIONS(413),
    [anon_sym_PIPE] = ACTIONS(411),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(411),
    [anon_sym_RPAREN] = ACTIONS(411),
    [anon_sym_COMMA] = ACTIONS(411),
    [anon_sym_SEMI] = ACTIONS(411),
  },
  [85] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(353),
    [anon_sym_EQ] = ACTIONS(353),
    [anon_sym_PIPE] = ACTIONS(353),
  },
  [86] = {
    [aux_sym__terminator_repeat1] = STATE(193),
    [sym__newline] = STATE(193),
    [sym__terminator] = STATE(194),
    [aux_sym_hashtable_expression_repeat1] = STATE(195),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(415),
    [anon_sym_RBRACE] = ACTIONS(417),
    [anon_sym_CR_LF] = ACTIONS(419),
    [anon_sym_SEMI] = ACTIONS(421),
  },
  [87] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_EQ] = ACTIONS(423),
  },
  [88] = {
    [sym_hashtable_entry] = STATE(197),
    [sym__string_expr] = STATE(85),
    [sym_double_quote_string] = STATE(85),
    [sym_property_name] = STATE(87),
    [aux_sym__terminator_repeat1] = STATE(198),
    [sym__newline] = STATE(198),
    [sym_variable] = STATE(85),
    [sym__special_variable] = STATE(64),
    [anon_sym_RBRACE] = ACTIONS(417),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(181),
    [anon_sym_CR_LF] = ACTIONS(425),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(181),
    [anon_sym_DOLLAR_CARET] = ACTIONS(181),
    [sym_simple_variable] = ACTIONS(181),
    [anon_sym_LF] = ACTIONS(427),
    [sym_single_quote_string] = ACTIONS(187),
    [sym_bareword_string] = ACTIONS(187),
    [anon_sym_DQUOTE] = ACTIONS(153),
    [sym__braced_variable] = ACTIONS(181),
    [sym_comment] = ACTIONS(39),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(189),
  },
  [89] = {
    [aux_sym_array_expression_repeat1] = STATE(199),
    [anon_sym_RPAREN] = ACTIONS(205),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(387),
    [anon_sym_PIPE] = ACTIONS(205),
  },
  [90] = {
    [aux_sym_array_expression_repeat1] = STATE(200),
    [anon_sym_RPAREN] = ACTIONS(217),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(387),
    [anon_sym_PIPE] = ACTIONS(217),
  },
  [91] = {
    [aux_sym_pipeline_statement_repeat1] = STATE(202),
    [anon_sym_RPAREN] = ACTIONS(221),
    [sym_comment] = ACTIONS(3),
    [anon_sym_PIPE] = ACTIONS(429),
  },
  [92] = {
    [aux_sym__terminator_repeat1] = STATE(203),
    [sym__newline] = STATE(203),
    [aux_sym_do_while_statement_token1] = ACTIONS(431),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(431),
    [sym_number_expr] = ACTIONS(431),
    [anon_sym_COMMA] = ACTIONS(431),
    [anon_sym_LBRACE] = ACTIONS(431),
    [aux_sym_enum_definition_token1] = ACTIONS(431),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(431),
    [aux_sym_while_statement_token1] = ACTIONS(431),
    [aux_sym_if_statement_token1] = ACTIONS(431),
    [anon_sym_AMP] = ACTIONS(431),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(431),
    [sym_single_quote_string] = ACTIONS(431),
    [aux_sym_function_definition_token1] = ACTIONS(431),
    [anon_sym_CR_LF] = ACTIONS(433),
    [aux_sym_filter_definition_token1] = ACTIONS(431),
    [anon_sym_AT_LPAREN] = ACTIONS(431),
    [anon_sym_DOLLAR_CARET] = ACTIONS(431),
    [sym_simple_variable] = ACTIONS(431),
    [sym_bareword_string] = ACTIONS(431),
    [anon_sym_DQUOTE] = ACTIONS(431),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(431),
    [ts_builtin_sym_end] = ACTIONS(435),
    [anon_sym_LPAREN] = ACTIONS(431),
    [anon_sym_LF] = ACTIONS(437),
    [aux_sym_class_definition_token1] = ACTIONS(431),
    [anon_sym_AT_LBRACE] = ACTIONS(431),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(431),
    [sym__braced_variable] = ACTIONS(431),
  },
  [93] = {
    [aux_sym_source_file_repeat1] = STATE(204),
    [aux_sym__terminator_repeat1] = STATE(94),
    [sym__newline] = STATE(94),
    [sym__terminator] = STATE(205),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(195),
    [ts_builtin_sym_end] = ACTIONS(439),
    [anon_sym_CR_LF] = ACTIONS(199),
    [anon_sym_SEMI] = ACTIONS(201),
  },
  [94] = {
    [aux_sym__terminator_repeat1] = STATE(206),
    [sym__newline] = STATE(206),
    [aux_sym_do_while_statement_token1] = ACTIONS(431),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(431),
    [sym_number_expr] = ACTIONS(431),
    [anon_sym_COMMA] = ACTIONS(431),
    [anon_sym_LBRACE] = ACTIONS(431),
    [aux_sym_enum_definition_token1] = ACTIONS(431),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(431),
    [aux_sym_while_statement_token1] = ACTIONS(431),
    [aux_sym_if_statement_token1] = ACTIONS(431),
    [anon_sym_AMP] = ACTIONS(431),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(431),
    [sym_single_quote_string] = ACTIONS(431),
    [aux_sym_function_definition_token1] = ACTIONS(431),
    [anon_sym_CR_LF] = ACTIONS(441),
    [aux_sym_filter_definition_token1] = ACTIONS(431),
    [anon_sym_AT_LPAREN] = ACTIONS(431),
    [anon_sym_DOLLAR_CARET] = ACTIONS(431),
    [sym_simple_variable] = ACTIONS(431),
    [sym_bareword_string] = ACTIONS(431),
    [anon_sym_DQUOTE] = ACTIONS(431),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(431),
    [ts_builtin_sym_end] = ACTIONS(435),
    [anon_sym_LPAREN] = ACTIONS(431),
    [anon_sym_LF] = ACTIONS(443),
    [aux_sym_class_definition_token1] = ACTIONS(431),
    [anon_sym_AT_LBRACE] = ACTIONS(431),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(431),
    [sym__braced_variable] = ACTIONS(431),
  },
  [95] = {
    [sym__statement] = STATE(207),
    [sym__definition_statement] = STATE(207),
    [sym_pipeline_statement] = STATE(207),
    [sym_if_statement] = STATE(207),
    [sym__non_array_expression] = STATE(23),
    [sym__expression] = STATE(28),
    [sym_array_expression] = STATE(28),
    [sym_flat_array_expression] = STATE(23),
    [sym_variable] = STATE(29),
    [sym__special_variable] = STATE(6),
    [sym_non_type_attribute] = STATE(30),
    [sym__attribute] = STATE(30),
    [sym_function_definition] = STATE(207),
    [sym_filter_definition] = STATE(207),
    [sym_enum_definition] = STATE(207),
    [sym_while_statement] = STATE(207),
    [sym_do_while_statement] = STATE(207),
    [sym_scriptblock] = STATE(23),
    [sym_hashtable_expression] = STATE(23),
    [sym_type_expr] = STATE(26),
    [sym__string_expr] = STATE(23),
    [sym_double_quote_string] = STATE(23),
    [aux_sym_array_expression_repeat1] = STATE(27),
    [sym_class_definition] = STATE(207),
    [sym__expression_statement] = STATE(207),
    [sym_assignment_statement] = STATE(207),
    [sym_command_expression] = STATE(28),
    [sym__pipeline_expression] = STATE(28),
    [sym__attributed_variable] = STATE(29),
    [aux_sym__attributed_variable_repeat1] = STATE(30),
    [aux_sym_do_while_statement_token1] = ACTIONS(5),
    [aux_sym_function_definition_token1] = ACTIONS(7),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(9),
    [aux_sym_filter_definition_token1] = ACTIONS(11),
    [sym_number_expr] = ACTIONS(13),
    [anon_sym_AT_LPAREN] = ACTIONS(15),
    [sym_simple_variable] = ACTIONS(9),
    [anon_sym_DOLLAR_CARET] = ACTIONS(9),
    [sym_bareword_string] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [aux_sym_enum_definition_token1] = ACTIONS(23),
    [anon_sym_DQUOTE] = ACTIONS(25),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(17),
    [ts_builtin_sym_end] = ACTIONS(439),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(9),
    [aux_sym_while_statement_token1] = ACTIONS(31),
    [aux_sym_if_statement_token1] = ACTIONS(33),
    [anon_sym_AMP] = ACTIONS(35),
    [anon_sym_LPAREN] = ACTIONS(37),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(41),
    [aux_sym_class_definition_token1] = ACTIONS(43),
    [anon_sym_AT_LBRACE] = ACTIONS(45),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(47),
    [sym__braced_variable] = ACTIONS(9),
    [sym_single_quote_string] = ACTIONS(49),
  },
  [96] = {
    [aux_sym_array_expression_repeat1] = STATE(98),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(445),
    [ts_builtin_sym_end] = ACTIONS(447),
    [anon_sym_COMMA] = ACTIONS(17),
    [anon_sym_CR_LF] = ACTIONS(447),
    [anon_sym_SEMI] = ACTIONS(445),
    [anon_sym_PIPE] = ACTIONS(445),
  },
  [97] = {
    [aux_sym_source_file_repeat1] = STATE(208),
    [aux_sym__terminator_repeat1] = STATE(94),
    [sym__newline] = STATE(94),
    [sym__terminator] = STATE(205),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(195),
    [ts_builtin_sym_end] = ACTIONS(439),
    [anon_sym_CR_LF] = ACTIONS(199),
    [anon_sym_SEMI] = ACTIONS(201),
  },
  [98] = {
    [aux_sym_array_expression_repeat1] = STATE(98),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(309),
    [ts_builtin_sym_end] = ACTIONS(311),
    [anon_sym_COMMA] = ACTIONS(449),
    [anon_sym_CR_LF] = ACTIONS(311),
    [anon_sym_SEMI] = ACTIONS(309),
    [anon_sym_PIPE] = ACTIONS(309),
  },
  [99] = {
    [sym_command_expression] = STATE(209),
    [sym__newline] = STATE(210),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(452),
    [sym_bareword_string] = ACTIONS(19),
    [anon_sym_CR_LF] = ACTIONS(454),
    [anon_sym_AMP] = ACTIONS(99),
  },
  [100] = {
    [aux_sym_pipeline_statement_repeat1] = STATE(211),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(456),
    [ts_builtin_sym_end] = ACTIONS(458),
    [anon_sym_CR_LF] = ACTIONS(458),
    [anon_sym_SEMI] = ACTIONS(456),
    [anon_sym_PIPE] = ACTIONS(223),
  },
  [101] = {
    [sym_type_expr] = STATE(26),
    [sym__string_expr] = STATE(23),
    [sym_double_quote_string] = STATE(23),
    [sym_pipeline_statement] = STATE(212),
    [sym_if_statement] = STATE(212),
    [sym__non_array_expression] = STATE(23),
    [sym__expression] = STATE(28),
    [sym_array_expression] = STATE(28),
    [sym_flat_array_expression] = STATE(23),
    [aux_sym_array_expression_repeat1] = STATE(27),
    [sym_variable] = STATE(29),
    [sym__special_variable] = STATE(6),
    [sym_non_type_attribute] = STATE(30),
    [sym__newline] = STATE(213),
    [sym_assignment_statement] = STATE(212),
    [sym_command_expression] = STATE(28),
    [sym__attribute] = STATE(30),
    [sym__expression_statement] = STATE(212),
    [sym__pipeline_expression] = STATE(28),
    [sym__attributed_variable] = STATE(29),
    [aux_sym__terminator_repeat1] = STATE(213),
    [sym_while_statement] = STATE(212),
    [sym_do_while_statement] = STATE(212),
    [sym_scriptblock] = STATE(23),
    [aux_sym__attributed_variable_repeat1] = STATE(30),
    [sym_hashtable_expression] = STATE(23),
    [aux_sym_do_while_statement_token1] = ACTIONS(5),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(61),
    [anon_sym_CR_LF] = ACTIONS(460),
    [sym_number_expr] = ACTIONS(13),
    [anon_sym_AT_LPAREN] = ACTIONS(67),
    [sym_simple_variable] = ACTIONS(61),
    [anon_sym_DOLLAR_CARET] = ACTIONS(61),
    [sym_bareword_string] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(69),
    [anon_sym_DQUOTE] = ACTIONS(25),
    [anon_sym_COMMA] = ACTIONS(17),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(71),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(61),
    [aux_sym_while_statement_token1] = ACTIONS(31),
    [aux_sym_if_statement_token1] = ACTIONS(33),
    [anon_sym_AMP] = ACTIONS(99),
    [anon_sym_LPAREN] = ACTIONS(73),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(462),
    [anon_sym_LBRACK] = ACTIONS(77),
    [anon_sym_AT_LBRACE] = ACTIONS(81),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(83),
    [sym__braced_variable] = ACTIONS(61),
    [sym_single_quote_string] = ACTIONS(13),
  },
  [102] = {
    [anon_sym_RBRACE] = ACTIONS(464),
    [anon_sym_EQ] = ACTIONS(464),
    [ts_builtin_sym_end] = ACTIONS(466),
    [anon_sym_CR_LF] = ACTIONS(466),
    [anon_sym_PIPE] = ACTIONS(464),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(464),
    [anon_sym_RPAREN] = ACTIONS(464),
    [anon_sym_COMMA] = ACTIONS(464),
    [anon_sym_SEMI] = ACTIONS(464),
  },
  [103] = {
    [sym_type_expr] = STATE(103),
    [sym_non_type_attribute] = STATE(103),
    [sym__attribute] = STATE(103),
    [aux_sym__attributed_variable_repeat1] = STATE(103),
    [sym_simple_variable] = ACTIONS(468),
    [anon_sym_LBRACK] = ACTIONS(470),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(468),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(468),
    [sym__braced_variable] = ACTIONS(468),
    [anon_sym_DOLLAR_CARET] = ACTIONS(468),
  },
  [104] = {
    [aux_sym__terminator_repeat1] = STATE(215),
    [sym__newline] = STATE(215),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(473),
    [aux_sym_while_statement_token1] = ACTIONS(475),
    [anon_sym_CR_LF] = ACTIONS(477),
  },
  [105] = {
    [aux_sym__terminator_repeat1] = STATE(217),
    [sym__newline] = STATE(217),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(479),
    [anon_sym_CR_LF] = ACTIONS(481),
    [anon_sym_LPAREN] = ACTIONS(483),
  },
  [106] = {
    [sym__terminator] = STATE(218),
    [aux_sym__terminator_repeat1] = STATE(132),
    [sym__newline] = STATE(132),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(267),
    [anon_sym_CR_LF] = ACTIONS(271),
    [anon_sym_SEMI] = ACTIONS(273),
  },
  [107] = {
    [aux_sym_array_expression_repeat1] = STATE(219),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(203),
    [anon_sym_COMMA] = ACTIONS(17),
    [anon_sym_CR_LF] = ACTIONS(205),
    [anon_sym_SEMI] = ACTIONS(203),
    [anon_sym_PIPE] = ACTIONS(203),
  },
  [108] = {
    [sym__statement] = STATE(106),
    [sym__definition_statement] = STATE(106),
    [sym_pipeline_statement] = STATE(106),
    [sym_if_statement] = STATE(106),
    [sym__non_array_expression] = STATE(107),
    [sym__expression] = STATE(110),
    [sym_array_expression] = STATE(110),
    [sym_flat_array_expression] = STATE(107),
    [sym_variable] = STATE(111),
    [sym__special_variable] = STATE(6),
    [sym_non_type_attribute] = STATE(30),
    [sym__attribute] = STATE(30),
    [sym_function_definition] = STATE(106),
    [sym_filter_definition] = STATE(106),
    [sym_enum_definition] = STATE(106),
    [sym_while_statement] = STATE(106),
    [sym_do_while_statement] = STATE(106),
    [sym_scriptblock] = STATE(107),
    [sym_hashtable_expression] = STATE(107),
    [sym_type_expr] = STATE(26),
    [sym__string_expr] = STATE(107),
    [sym_double_quote_string] = STATE(107),
    [aux_sym_class_method_body_repeat1] = STATE(221),
    [aux_sym_array_expression_repeat1] = STATE(109),
    [sym_class_definition] = STATE(106),
    [sym__expression_statement] = STATE(106),
    [sym_assignment_statement] = STATE(106),
    [sym_command_expression] = STATE(110),
    [sym__pipeline_expression] = STATE(110),
    [sym__attributed_variable] = STATE(111),
    [aux_sym__attributed_variable_repeat1] = STATE(30),
    [aux_sym_do_while_statement_token1] = ACTIONS(5),
    [anon_sym_RBRACE] = ACTIONS(485),
    [aux_sym_function_definition_token1] = ACTIONS(7),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(9),
    [aux_sym_filter_definition_token1] = ACTIONS(11),
    [sym_number_expr] = ACTIONS(227),
    [anon_sym_AT_LPAREN] = ACTIONS(15),
    [sym_simple_variable] = ACTIONS(9),
    [anon_sym_DOLLAR_CARET] = ACTIONS(9),
    [sym_bareword_string] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [aux_sym_enum_definition_token1] = ACTIONS(23),
    [anon_sym_DQUOTE] = ACTIONS(25),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(17),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(9),
    [aux_sym_while_statement_token1] = ACTIONS(31),
    [aux_sym_if_statement_token1] = ACTIONS(229),
    [anon_sym_AMP] = ACTIONS(35),
    [anon_sym_LPAREN] = ACTIONS(37),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(41),
    [aux_sym_class_definition_token1] = ACTIONS(43),
    [anon_sym_AT_LBRACE] = ACTIONS(45),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(47),
    [sym__braced_variable] = ACTIONS(9),
    [sym_single_quote_string] = ACTIONS(487),
  },
  [109] = {
    [aux_sym_array_expression_repeat1] = STATE(222),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(215),
    [anon_sym_COMMA] = ACTIONS(17),
    [anon_sym_CR_LF] = ACTIONS(217),
    [anon_sym_SEMI] = ACTIONS(215),
    [anon_sym_PIPE] = ACTIONS(215),
  },
  [110] = {
    [aux_sym_pipeline_statement_repeat1] = STATE(223),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(219),
    [anon_sym_CR_LF] = ACTIONS(221),
    [anon_sym_SEMI] = ACTIONS(219),
    [anon_sym_PIPE] = ACTIONS(223),
  },
  [111] = {
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(209),
    [anon_sym_EQ] = ACTIONS(489),
    [anon_sym_COMMA] = ACTIONS(209),
    [anon_sym_CR_LF] = ACTIONS(211),
    [anon_sym_SEMI] = ACTIONS(209),
    [anon_sym_PIPE] = ACTIONS(209),
  },
  [112] = {
    [sym__statement] = STATE(106),
    [sym__definition_statement] = STATE(106),
    [sym_pipeline_statement] = STATE(106),
    [sym_if_statement] = STATE(106),
    [sym__non_array_expression] = STATE(107),
    [sym__expression] = STATE(110),
    [sym_array_expression] = STATE(110),
    [sym_flat_array_expression] = STATE(107),
    [sym_variable] = STATE(111),
    [sym__special_variable] = STATE(6),
    [sym_non_type_attribute] = STATE(30),
    [sym__attribute] = STATE(30),
    [sym_function_definition] = STATE(106),
    [sym_filter_definition] = STATE(106),
    [sym_enum_definition] = STATE(106),
    [sym_while_statement] = STATE(106),
    [sym_do_while_statement] = STATE(106),
    [sym_scriptblock] = STATE(107),
    [sym_hashtable_expression] = STATE(107),
    [sym_type_expr] = STATE(26),
    [sym__string_expr] = STATE(107),
    [sym_double_quote_string] = STATE(107),
    [aux_sym_class_method_body_repeat1] = STATE(225),
    [aux_sym_array_expression_repeat1] = STATE(109),
    [sym__newline] = STATE(226),
    [sym_class_definition] = STATE(106),
    [sym__expression_statement] = STATE(106),
    [sym_assignment_statement] = STATE(106),
    [sym_command_expression] = STATE(110),
    [sym__pipeline_expression] = STATE(110),
    [sym__attributed_variable] = STATE(111),
    [aux_sym__terminator_repeat1] = STATE(226),
    [aux_sym__attributed_variable_repeat1] = STATE(30),
    [aux_sym_do_while_statement_token1] = ACTIONS(5),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(61),
    [sym_number_expr] = ACTIONS(227),
    [anon_sym_COMMA] = ACTIONS(17),
    [anon_sym_LBRACE] = ACTIONS(69),
    [aux_sym_enum_definition_token1] = ACTIONS(23),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(61),
    [aux_sym_while_statement_token1] = ACTIONS(31),
    [aux_sym_if_statement_token1] = ACTIONS(229),
    [anon_sym_AMP] = ACTIONS(99),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(77),
    [sym_single_quote_string] = ACTIONS(227),
    [anon_sym_RBRACE] = ACTIONS(491),
    [aux_sym_function_definition_token1] = ACTIONS(7),
    [anon_sym_CR_LF] = ACTIONS(493),
    [aux_sym_filter_definition_token1] = ACTIONS(11),
    [anon_sym_AT_LPAREN] = ACTIONS(67),
    [anon_sym_DOLLAR_CARET] = ACTIONS(61),
    [sym_simple_variable] = ACTIONS(61),
    [sym_bareword_string] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(25),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(71),
    [anon_sym_LPAREN] = ACTIONS(73),
    [anon_sym_LF] = ACTIONS(495),
    [aux_sym_class_definition_token1] = ACTIONS(43),
    [anon_sym_AT_LBRACE] = ACTIONS(81),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(83),
    [sym__braced_variable] = ACTIONS(61),
  },
  [113] = {
    [sym__statement] = STATE(106),
    [sym__definition_statement] = STATE(106),
    [sym_pipeline_statement] = STATE(106),
    [sym_if_statement] = STATE(106),
    [sym__non_array_expression] = STATE(107),
    [sym__expression] = STATE(110),
    [sym_array_expression] = STATE(110),
    [sym_flat_array_expression] = STATE(107),
    [sym_variable] = STATE(111),
    [sym__special_variable] = STATE(6),
    [sym_non_type_attribute] = STATE(30),
    [sym__attribute] = STATE(30),
    [sym_function_definition] = STATE(106),
    [sym_filter_definition] = STATE(106),
    [sym_enum_definition] = STATE(106),
    [sym_while_statement] = STATE(106),
    [sym_do_while_statement] = STATE(106),
    [sym_scriptblock] = STATE(107),
    [sym_hashtable_expression] = STATE(107),
    [sym_type_expr] = STATE(26),
    [sym__string_expr] = STATE(107),
    [sym_double_quote_string] = STATE(107),
    [aux_sym_class_method_body_repeat1] = STATE(225),
    [aux_sym_array_expression_repeat1] = STATE(109),
    [sym__newline] = STATE(227),
    [sym_class_definition] = STATE(106),
    [sym__expression_statement] = STATE(106),
    [sym_assignment_statement] = STATE(106),
    [sym_command_expression] = STATE(110),
    [sym__pipeline_expression] = STATE(110),
    [sym__attributed_variable] = STATE(111),
    [aux_sym__terminator_repeat1] = STATE(227),
    [aux_sym__attributed_variable_repeat1] = STATE(30),
    [aux_sym_do_while_statement_token1] = ACTIONS(5),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(61),
    [sym_number_expr] = ACTIONS(227),
    [anon_sym_COMMA] = ACTIONS(17),
    [anon_sym_LBRACE] = ACTIONS(69),
    [aux_sym_enum_definition_token1] = ACTIONS(23),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(61),
    [aux_sym_while_statement_token1] = ACTIONS(31),
    [aux_sym_if_statement_token1] = ACTIONS(229),
    [anon_sym_AMP] = ACTIONS(99),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(77),
    [sym_single_quote_string] = ACTIONS(227),
    [anon_sym_RBRACE] = ACTIONS(491),
    [aux_sym_function_definition_token1] = ACTIONS(7),
    [anon_sym_CR_LF] = ACTIONS(497),
    [aux_sym_filter_definition_token1] = ACTIONS(11),
    [anon_sym_AT_LPAREN] = ACTIONS(67),
    [anon_sym_DOLLAR_CARET] = ACTIONS(61),
    [sym_simple_variable] = ACTIONS(61),
    [sym_bareword_string] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(25),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(71),
    [anon_sym_LPAREN] = ACTIONS(73),
    [anon_sym_LF] = ACTIONS(499),
    [aux_sym_class_definition_token1] = ACTIONS(43),
    [anon_sym_AT_LBRACE] = ACTIONS(81),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(83),
    [sym__braced_variable] = ACTIONS(61),
  },
  [114] = {
    [aux_sym__terminator_repeat1] = STATE(114),
    [sym__newline] = STATE(114),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(501),
    [anon_sym_CR_LF] = ACTIONS(504),
    [anon_sym_LBRACE] = ACTIONS(507),
  },
  [115] = {
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(509),
    [ts_builtin_sym_end] = ACTIONS(511),
    [anon_sym_RBRACE] = ACTIONS(509),
    [anon_sym_CR_LF] = ACTIONS(511),
    [anon_sym_SEMI] = ACTIONS(509),
  },
  [116] = {
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(513),
    [ts_builtin_sym_end] = ACTIONS(515),
    [anon_sym_RBRACE] = ACTIONS(513),
    [anon_sym_CR_LF] = ACTIONS(515),
    [anon_sym_SEMI] = ACTIONS(513),
  },
  [117] = {
    [aux_sym_array_expression_repeat1] = STATE(118),
    [anon_sym_RPAREN] = ACTIONS(445),
    [anon_sym_LF] = ACTIONS(445),
    [sym_comment] = ACTIONS(39),
    [anon_sym_COMMA] = ACTIONS(17),
    [anon_sym_CR_LF] = ACTIONS(447),
    [anon_sym_SEMI] = ACTIONS(445),
  },
  [118] = {
    [aux_sym_array_expression_repeat1] = STATE(118),
    [anon_sym_RPAREN] = ACTIONS(309),
    [anon_sym_LF] = ACTIONS(309),
    [sym_comment] = ACTIONS(39),
    [anon_sym_COMMA] = ACTIONS(449),
    [anon_sym_CR_LF] = ACTIONS(311),
    [anon_sym_SEMI] = ACTIONS(309),
  },
  [119] = {
    [anon_sym_RBRACE] = ACTIONS(517),
    [ts_builtin_sym_end] = ACTIONS(519),
    [anon_sym_CR_LF] = ACTIONS(519),
    [anon_sym_PIPE] = ACTIONS(517),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(517),
    [anon_sym_RPAREN] = ACTIONS(517),
    [anon_sym_COMMA] = ACTIONS(517),
    [anon_sym_SEMI] = ACTIONS(517),
  },
  [120] = {
    [aux_sym__terminator_repeat1] = STATE(228),
    [sym__newline] = STATE(228),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(431),
    [sym_number_expr] = ACTIONS(431),
    [anon_sym_AT_LPAREN] = ACTIONS(431),
    [anon_sym_DOLLAR_CARET] = ACTIONS(431),
    [sym_simple_variable] = ACTIONS(431),
    [anon_sym_CR_LF] = ACTIONS(521),
    [anon_sym_COMMA] = ACTIONS(431),
    [anon_sym_LBRACE] = ACTIONS(431),
    [anon_sym_DQUOTE] = ACTIONS(431),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(431),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(431),
    [anon_sym_LPAREN] = ACTIONS(431),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(431),
    [sym_single_quote_string] = ACTIONS(431),
    [anon_sym_AT_LBRACE] = ACTIONS(431),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(431),
    [sym__braced_variable] = ACTIONS(431),
    [anon_sym_LF] = ACTIONS(523),
  },
  [121] = {
    [aux_sym_flat_array_expression_repeat1] = STATE(230),
    [aux_sym__terminator_repeat1] = STATE(231),
    [sym__newline] = STATE(231),
    [sym__terminator] = STATE(123),
    [anon_sym_RPAREN] = ACTIONS(525),
    [anon_sym_LF] = ACTIONS(527),
    [sym_comment] = ACTIONS(39),
    [anon_sym_CR_LF] = ACTIONS(529),
    [anon_sym_SEMI] = ACTIONS(253),
  },
  [122] = {
    [aux_sym__terminator_repeat1] = STATE(125),
    [sym__newline] = STATE(125),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(431),
    [sym_number_expr] = ACTIONS(431),
    [anon_sym_AT_LPAREN] = ACTIONS(431),
    [anon_sym_DOLLAR_CARET] = ACTIONS(431),
    [sym_simple_variable] = ACTIONS(431),
    [anon_sym_CR_LF] = ACTIONS(255),
    [anon_sym_COMMA] = ACTIONS(431),
    [anon_sym_LBRACE] = ACTIONS(431),
    [anon_sym_DQUOTE] = ACTIONS(431),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(431),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(431),
    [anon_sym_LPAREN] = ACTIONS(431),
    [anon_sym_RPAREN] = ACTIONS(525),
    [anon_sym_LBRACK] = ACTIONS(431),
    [sym_single_quote_string] = ACTIONS(431),
    [anon_sym_AT_LBRACE] = ACTIONS(431),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(431),
    [sym__braced_variable] = ACTIONS(431),
    [anon_sym_LF] = ACTIONS(257),
    [sym_comment] = ACTIONS(39),
  },
  [123] = {
    [sym_type_expr] = STATE(26),
    [sym__string_expr] = STATE(36),
    [sym_double_quote_string] = STATE(36),
    [aux_sym_array_expression_repeat1] = STATE(37),
    [sym__non_array_expression] = STATE(36),
    [sym_array_expression] = STATE(232),
    [sym_flat_array_expression] = STATE(36),
    [sym_variable] = STATE(36),
    [sym__special_variable] = STATE(6),
    [sym_non_type_attribute] = STATE(30),
    [sym__attribute] = STATE(30),
    [sym__expression] = STATE(232),
    [sym__attributed_variable] = STATE(36),
    [sym_scriptblock] = STATE(36),
    [aux_sym__attributed_variable_repeat1] = STATE(30),
    [sym_hashtable_expression] = STATE(36),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(9),
    [sym_number_expr] = ACTIONS(531),
    [anon_sym_AT_LPAREN] = ACTIONS(15),
    [anon_sym_DOLLAR_CARET] = ACTIONS(9),
    [sym_simple_variable] = ACTIONS(9),
    [anon_sym_COMMA] = ACTIONS(533),
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_DQUOTE] = ACTIONS(25),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(27),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(37),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(41),
    [sym_single_quote_string] = ACTIONS(531),
    [anon_sym_AT_LBRACE] = ACTIONS(45),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(47),
    [sym__braced_variable] = ACTIONS(9),
  },
  [124] = {
    [aux_sym_flat_array_expression_repeat1] = STATE(233),
    [aux_sym__terminator_repeat1] = STATE(231),
    [sym__newline] = STATE(231),
    [sym__terminator] = STATE(123),
    [anon_sym_RPAREN] = ACTIONS(525),
    [anon_sym_LF] = ACTIONS(527),
    [sym_comment] = ACTIONS(39),
    [anon_sym_CR_LF] = ACTIONS(529),
    [anon_sym_SEMI] = ACTIONS(253),
  },
  [125] = {
    [aux_sym__terminator_repeat1] = STATE(125),
    [sym__newline] = STATE(125),
    [anon_sym_CR_LF] = ACTIONS(535),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(507),
    [anon_sym_AT_LPAREN] = ACTIONS(507),
    [anon_sym_DOLLAR_CARET] = ACTIONS(507),
    [sym_simple_variable] = ACTIONS(507),
    [sym_number_expr] = ACTIONS(507),
    [anon_sym_COMMA] = ACTIONS(507),
    [anon_sym_LBRACE] = ACTIONS(507),
    [anon_sym_DQUOTE] = ACTIONS(507),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(507),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(507),
    [anon_sym_LPAREN] = ACTIONS(507),
    [anon_sym_RPAREN] = ACTIONS(507),
    [anon_sym_LF] = ACTIONS(538),
    [anon_sym_LBRACK] = ACTIONS(507),
    [anon_sym_AT_LBRACE] = ACTIONS(507),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(507),
    [sym__braced_variable] = ACTIONS(507),
    [sym_single_quote_string] = ACTIONS(507),
    [sym_comment] = ACTIONS(39),
  },
  [126] = {
    [sym_type_expr] = STATE(153),
    [aux_sym_param_block_variable_repeat1] = STATE(151),
    [sym_param_block_variable] = STATE(235),
    [sym_non_type_attribute] = STATE(153),
    [sym__attribute] = STATE(153),
    [sym_simple_variable] = ACTIONS(313),
    [anon_sym_LBRACK] = ACTIONS(315),
    [anon_sym_RPAREN] = ACTIONS(541),
    [sym_comment] = ACTIONS(3),
  },
  [127] = {
    [sym_type_expr] = STATE(75),
    [sym__string_expr] = STATE(89),
    [sym_double_quote_string] = STATE(89),
    [sym_pipeline_statement] = STATE(236),
    [sym__non_array_expression] = STATE(89),
    [sym__expression] = STATE(91),
    [sym_array_expression] = STATE(91),
    [sym_flat_array_expression] = STATE(89),
    [aux_sym_array_expression_repeat1] = STATE(90),
    [sym_variable] = STATE(89),
    [sym__special_variable] = STATE(64),
    [sym__attribute] = STATE(79),
    [sym_non_type_attribute] = STATE(79),
    [sym__newline] = STATE(237),
    [sym_command_expression] = STATE(91),
    [sym__pipeline_expression] = STATE(91),
    [sym__attributed_variable] = STATE(89),
    [aux_sym__terminator_repeat1] = STATE(237),
    [sym_scriptblock] = STATE(89),
    [aux_sym__attributed_variable_repeat1] = STATE(79),
    [sym_hashtable_expression] = STATE(89),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(181),
    [anon_sym_CR_LF] = ACTIONS(543),
    [sym_number_expr] = ACTIONS(191),
    [anon_sym_AT_LPAREN] = ACTIONS(333),
    [sym_simple_variable] = ACTIONS(181),
    [anon_sym_DOLLAR_CARET] = ACTIONS(181),
    [sym_bareword_string] = ACTIONS(149),
    [anon_sym_LBRACE] = ACTIONS(335),
    [anon_sym_DQUOTE] = ACTIONS(153),
    [anon_sym_COMMA] = ACTIONS(155),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(189),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(181),
    [anon_sym_AMP] = ACTIONS(337),
    [anon_sym_LPAREN] = ACTIONS(339),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(545),
    [anon_sym_LBRACK] = ACTIONS(343),
    [anon_sym_AT_LBRACE] = ACTIONS(345),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(347),
    [sym__braced_variable] = ACTIONS(181),
    [sym_single_quote_string] = ACTIONS(191),
  },
  [128] = {
    [aux_sym__terminator_repeat1] = STATE(160),
    [sym__newline] = STATE(160),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(325),
    [anon_sym_CR_LF] = ACTIONS(327),
    [anon_sym_LPAREN] = ACTIONS(547),
  },
  [129] = {
    [anon_sym_RBRACE] = ACTIONS(549),
    [ts_builtin_sym_end] = ACTIONS(551),
    [anon_sym_CR_LF] = ACTIONS(551),
    [anon_sym_PIPE] = ACTIONS(549),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(549),
    [anon_sym_RPAREN] = ACTIONS(549),
    [anon_sym_COMMA] = ACTIONS(549),
    [anon_sym_SEMI] = ACTIONS(549),
  },
  [130] = {
    [aux_sym__terminator_repeat1] = STATE(239),
    [sym__newline] = STATE(239),
    [aux_sym_do_while_statement_token1] = ACTIONS(431),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(431),
    [sym_number_expr] = ACTIONS(431),
    [anon_sym_COMMA] = ACTIONS(431),
    [anon_sym_LBRACE] = ACTIONS(431),
    [aux_sym_enum_definition_token1] = ACTIONS(431),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(431),
    [aux_sym_while_statement_token1] = ACTIONS(431),
    [aux_sym_if_statement_token1] = ACTIONS(431),
    [anon_sym_AMP] = ACTIONS(431),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(431),
    [sym_single_quote_string] = ACTIONS(431),
    [anon_sym_RBRACE] = ACTIONS(431),
    [aux_sym_function_definition_token1] = ACTIONS(431),
    [anon_sym_CR_LF] = ACTIONS(553),
    [aux_sym_filter_definition_token1] = ACTIONS(431),
    [anon_sym_AT_LPAREN] = ACTIONS(431),
    [anon_sym_DOLLAR_CARET] = ACTIONS(431),
    [sym_simple_variable] = ACTIONS(431),
    [sym_bareword_string] = ACTIONS(431),
    [anon_sym_DQUOTE] = ACTIONS(431),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(431),
    [anon_sym_LPAREN] = ACTIONS(431),
    [anon_sym_LF] = ACTIONS(555),
    [aux_sym_class_definition_token1] = ACTIONS(431),
    [anon_sym_AT_LBRACE] = ACTIONS(431),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(431),
    [sym__braced_variable] = ACTIONS(431),
  },
  [131] = {
    [aux_sym_source_file_repeat1] = STATE(241),
    [aux_sym__terminator_repeat1] = STATE(132),
    [sym__newline] = STATE(132),
    [sym__terminator] = STATE(242),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(267),
    [anon_sym_RBRACE] = ACTIONS(557),
    [anon_sym_CR_LF] = ACTIONS(271),
    [anon_sym_SEMI] = ACTIONS(273),
  },
  [132] = {
    [aux_sym__terminator_repeat1] = STATE(226),
    [sym__newline] = STATE(226),
    [aux_sym_do_while_statement_token1] = ACTIONS(431),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(431),
    [sym_number_expr] = ACTIONS(431),
    [anon_sym_COMMA] = ACTIONS(431),
    [anon_sym_LBRACE] = ACTIONS(431),
    [aux_sym_enum_definition_token1] = ACTIONS(431),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(431),
    [aux_sym_while_statement_token1] = ACTIONS(431),
    [aux_sym_if_statement_token1] = ACTIONS(431),
    [anon_sym_AMP] = ACTIONS(431),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(431),
    [sym_single_quote_string] = ACTIONS(431),
    [anon_sym_RBRACE] = ACTIONS(431),
    [aux_sym_function_definition_token1] = ACTIONS(431),
    [anon_sym_CR_LF] = ACTIONS(493),
    [aux_sym_filter_definition_token1] = ACTIONS(431),
    [anon_sym_AT_LPAREN] = ACTIONS(431),
    [anon_sym_DOLLAR_CARET] = ACTIONS(431),
    [sym_simple_variable] = ACTIONS(431),
    [sym_bareword_string] = ACTIONS(431),
    [anon_sym_DQUOTE] = ACTIONS(431),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(431),
    [anon_sym_LPAREN] = ACTIONS(431),
    [anon_sym_LF] = ACTIONS(495),
    [aux_sym_class_definition_token1] = ACTIONS(431),
    [anon_sym_AT_LBRACE] = ACTIONS(431),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(431),
    [sym__braced_variable] = ACTIONS(431),
  },
  [133] = {
    [sym__statement] = STATE(207),
    [sym__definition_statement] = STATE(207),
    [sym_pipeline_statement] = STATE(207),
    [sym_if_statement] = STATE(207),
    [sym__non_array_expression] = STATE(43),
    [sym__expression] = STATE(46),
    [sym_array_expression] = STATE(46),
    [sym_flat_array_expression] = STATE(43),
    [sym_variable] = STATE(47),
    [sym__special_variable] = STATE(6),
    [sym_non_type_attribute] = STATE(30),
    [sym__attribute] = STATE(30),
    [sym_function_definition] = STATE(207),
    [sym_filter_definition] = STATE(207),
    [sym_enum_definition] = STATE(207),
    [sym_while_statement] = STATE(207),
    [sym_do_while_statement] = STATE(207),
    [sym_scriptblock] = STATE(43),
    [sym_hashtable_expression] = STATE(43),
    [sym_type_expr] = STATE(26),
    [sym__string_expr] = STATE(43),
    [sym_double_quote_string] = STATE(43),
    [aux_sym_array_expression_repeat1] = STATE(45),
    [sym_class_definition] = STATE(207),
    [sym__expression_statement] = STATE(207),
    [sym_assignment_statement] = STATE(207),
    [sym_command_expression] = STATE(46),
    [sym__pipeline_expression] = STATE(46),
    [sym__attributed_variable] = STATE(47),
    [aux_sym__attributed_variable_repeat1] = STATE(30),
    [aux_sym_do_while_statement_token1] = ACTIONS(5),
    [anon_sym_RBRACE] = ACTIONS(559),
    [aux_sym_function_definition_token1] = ACTIONS(7),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(9),
    [aux_sym_filter_definition_token1] = ACTIONS(11),
    [sym_number_expr] = ACTIONS(93),
    [anon_sym_AT_LPAREN] = ACTIONS(15),
    [sym_simple_variable] = ACTIONS(9),
    [anon_sym_DOLLAR_CARET] = ACTIONS(9),
    [sym_bareword_string] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [aux_sym_enum_definition_token1] = ACTIONS(23),
    [anon_sym_DQUOTE] = ACTIONS(25),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(17),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(9),
    [aux_sym_while_statement_token1] = ACTIONS(31),
    [aux_sym_if_statement_token1] = ACTIONS(97),
    [anon_sym_AMP] = ACTIONS(35),
    [anon_sym_LPAREN] = ACTIONS(37),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(41),
    [aux_sym_class_definition_token1] = ACTIONS(43),
    [anon_sym_AT_LBRACE] = ACTIONS(45),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(47),
    [sym__braced_variable] = ACTIONS(9),
    [sym_single_quote_string] = ACTIONS(561),
  },
  [134] = {
    [aux_sym_array_expression_repeat1] = STATE(137),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(445),
    [anon_sym_RBRACE] = ACTIONS(445),
    [anon_sym_COMMA] = ACTIONS(17),
    [anon_sym_CR_LF] = ACTIONS(447),
    [anon_sym_SEMI] = ACTIONS(445),
    [anon_sym_PIPE] = ACTIONS(445),
  },
  [135] = {
    [aux_sym_source_file_repeat1] = STATE(243),
    [aux_sym__terminator_repeat1] = STATE(132),
    [sym__newline] = STATE(132),
    [sym__terminator] = STATE(242),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(267),
    [anon_sym_RBRACE] = ACTIONS(557),
    [anon_sym_CR_LF] = ACTIONS(271),
    [anon_sym_SEMI] = ACTIONS(273),
  },
  [136] = {
    [sym__statement] = STATE(244),
    [sym__definition_statement] = STATE(244),
    [sym_pipeline_statement] = STATE(244),
    [sym_if_statement] = STATE(244),
    [sym__non_array_expression] = STATE(43),
    [sym__expression] = STATE(46),
    [sym_array_expression] = STATE(46),
    [sym_flat_array_expression] = STATE(43),
    [sym_variable] = STATE(47),
    [sym__special_variable] = STATE(6),
    [sym_non_type_attribute] = STATE(30),
    [sym__attribute] = STATE(30),
    [sym_function_definition] = STATE(244),
    [sym_filter_definition] = STATE(244),
    [sym_enum_definition] = STATE(244),
    [sym_while_statement] = STATE(244),
    [sym_do_while_statement] = STATE(244),
    [sym_scriptblock] = STATE(43),
    [sym_hashtable_expression] = STATE(43),
    [sym_type_expr] = STATE(26),
    [sym__string_expr] = STATE(43),
    [sym_double_quote_string] = STATE(43),
    [aux_sym_array_expression_repeat1] = STATE(45),
    [sym__newline] = STATE(140),
    [sym_class_definition] = STATE(244),
    [sym__expression_statement] = STATE(244),
    [sym_assignment_statement] = STATE(244),
    [sym_command_expression] = STATE(46),
    [sym__pipeline_expression] = STATE(46),
    [sym__attributed_variable] = STATE(47),
    [aux_sym__terminator_repeat1] = STATE(140),
    [aux_sym__attributed_variable_repeat1] = STATE(30),
    [aux_sym_do_while_statement_token1] = ACTIONS(5),
    [aux_sym_function_definition_token1] = ACTIONS(7),
    [anon_sym_CR_LF] = ACTIONS(281),
    [aux_sym_filter_definition_token1] = ACTIONS(11),
    [sym_number_expr] = ACTIONS(93),
    [anon_sym_AT_LPAREN] = ACTIONS(67),
    [sym_simple_variable] = ACTIONS(61),
    [anon_sym_DOLLAR_CARET] = ACTIONS(61),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(61),
    [sym_bareword_string] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(69),
    [aux_sym_enum_definition_token1] = ACTIONS(23),
    [anon_sym_DQUOTE] = ACTIONS(25),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(71),
    [anon_sym_COMMA] = ACTIONS(17),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(61),
    [aux_sym_while_statement_token1] = ACTIONS(31),
    [aux_sym_if_statement_token1] = ACTIONS(97),
    [anon_sym_AMP] = ACTIONS(99),
    [anon_sym_LPAREN] = ACTIONS(73),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(283),
    [aux_sym_class_definition_token1] = ACTIONS(43),
    [anon_sym_AT_LBRACE] = ACTIONS(81),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(83),
    [sym__braced_variable] = ACTIONS(61),
    [anon_sym_LBRACK] = ACTIONS(77),
    [sym_single_quote_string] = ACTIONS(93),
  },
  [137] = {
    [aux_sym_array_expression_repeat1] = STATE(137),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(309),
    [anon_sym_RBRACE] = ACTIONS(309),
    [anon_sym_COMMA] = ACTIONS(449),
    [anon_sym_CR_LF] = ACTIONS(311),
    [anon_sym_SEMI] = ACTIONS(309),
    [anon_sym_PIPE] = ACTIONS(309),
  },
  [138] = {
    [aux_sym_pipeline_statement_repeat1] = STATE(245),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(456),
    [anon_sym_RBRACE] = ACTIONS(456),
    [anon_sym_CR_LF] = ACTIONS(458),
    [anon_sym_SEMI] = ACTIONS(456),
    [anon_sym_PIPE] = ACTIONS(223),
  },
  [139] = {
    [sym_type_expr] = STATE(26),
    [sym__string_expr] = STATE(43),
    [sym_double_quote_string] = STATE(43),
    [sym_pipeline_statement] = STATE(212),
    [sym_if_statement] = STATE(212),
    [sym__non_array_expression] = STATE(43),
    [sym__expression] = STATE(46),
    [sym_array_expression] = STATE(46),
    [sym_flat_array_expression] = STATE(43),
    [aux_sym_array_expression_repeat1] = STATE(45),
    [sym_variable] = STATE(47),
    [sym__special_variable] = STATE(6),
    [sym_non_type_attribute] = STATE(30),
    [sym__newline] = STATE(246),
    [sym_assignment_statement] = STATE(212),
    [sym_command_expression] = STATE(46),
    [sym__attribute] = STATE(30),
    [sym__expression_statement] = STATE(212),
    [sym__pipeline_expression] = STATE(46),
    [sym__attributed_variable] = STATE(47),
    [aux_sym__terminator_repeat1] = STATE(246),
    [sym_while_statement] = STATE(212),
    [sym_do_while_statement] = STATE(212),
    [sym_scriptblock] = STATE(43),
    [aux_sym__attributed_variable_repeat1] = STATE(30),
    [sym_hashtable_expression] = STATE(43),
    [aux_sym_do_while_statement_token1] = ACTIONS(5),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(61),
    [anon_sym_CR_LF] = ACTIONS(563),
    [sym_number_expr] = ACTIONS(93),
    [anon_sym_AT_LPAREN] = ACTIONS(67),
    [sym_simple_variable] = ACTIONS(61),
    [anon_sym_DOLLAR_CARET] = ACTIONS(61),
    [sym_bareword_string] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(69),
    [anon_sym_DQUOTE] = ACTIONS(25),
    [anon_sym_COMMA] = ACTIONS(17),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(71),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(61),
    [aux_sym_while_statement_token1] = ACTIONS(31),
    [aux_sym_if_statement_token1] = ACTIONS(97),
    [anon_sym_AMP] = ACTIONS(99),
    [anon_sym_LPAREN] = ACTIONS(73),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(565),
    [anon_sym_LBRACK] = ACTIONS(77),
    [anon_sym_AT_LBRACE] = ACTIONS(81),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(83),
    [sym__braced_variable] = ACTIONS(61),
    [sym_single_quote_string] = ACTIONS(93),
  },
  [140] = {
    [aux_sym__terminator_repeat1] = STATE(140),
    [sym__newline] = STATE(140),
    [aux_sym_do_while_statement_token1] = ACTIONS(507),
    [aux_sym_function_definition_token1] = ACTIONS(507),
    [anon_sym_CR_LF] = ACTIONS(567),
    [aux_sym_filter_definition_token1] = ACTIONS(507),
    [anon_sym_AT_LPAREN] = ACTIONS(507),
    [anon_sym_DOLLAR_CARET] = ACTIONS(507),
    [sym_simple_variable] = ACTIONS(507),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(507),
    [sym_number_expr] = ACTIONS(507),
    [anon_sym_COMMA] = ACTIONS(507),
    [anon_sym_LBRACE] = ACTIONS(507),
    [aux_sym_enum_definition_token1] = ACTIONS(507),
    [anon_sym_DQUOTE] = ACTIONS(507),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(507),
    [sym_bareword_string] = ACTIONS(507),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(507),
    [aux_sym_while_statement_token1] = ACTIONS(507),
    [aux_sym_if_statement_token1] = ACTIONS(507),
    [anon_sym_AMP] = ACTIONS(507),
    [anon_sym_LPAREN] = ACTIONS(507),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(570),
    [aux_sym_class_definition_token1] = ACTIONS(507),
    [anon_sym_AT_LBRACE] = ACTIONS(507),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(507),
    [sym__braced_variable] = ACTIONS(507),
    [anon_sym_LBRACK] = ACTIONS(507),
    [sym_single_quote_string] = ACTIONS(507),
  },
  [141] = {
    [sym__newline] = STATE(249),
    [aux_sym_enum_definition_repeat1] = STATE(248),
    [aux_sym__terminator_repeat1] = STATE(249),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(573),
    [anon_sym_RBRACE] = ACTIONS(575),
    [sym_bareword_string] = ACTIONS(577),
    [anon_sym_CR_LF] = ACTIONS(579),
  },
  [142] = {
    [aux_sym__terminator_repeat1] = STATE(114),
    [sym__newline] = STATE(114),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(237),
    [anon_sym_CR_LF] = ACTIONS(239),
    [anon_sym_LBRACE] = ACTIONS(581),
  },
  [143] = {
    [aux_sym__terminator_repeat1] = STATE(251),
    [sym__newline] = STATE(251),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(583),
    [anon_sym_CR_LF] = ACTIONS(585),
    [anon_sym_LBRACE] = ACTIONS(581),
  },
  [144] = {
    [aux_sym__terminator_repeat1] = STATE(144),
    [sym__newline] = STATE(144),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(587),
    [anon_sym_CR_LF] = ACTIONS(590),
    [aux_sym_class_definition_token2] = ACTIONS(507),
  },
  [145] = {
    [anon_sym_RBRACE] = ACTIONS(593),
    [ts_builtin_sym_end] = ACTIONS(595),
    [anon_sym_CR_LF] = ACTIONS(595),
    [anon_sym_PIPE] = ACTIONS(593),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(593),
    [anon_sym_RPAREN] = ACTIONS(593),
    [anon_sym_COMMA] = ACTIONS(593),
    [anon_sym_SEMI] = ACTIONS(593),
  },
  [146] = {
    [anon_sym_DQUOTE] = ACTIONS(597),
    [sym_comment] = ACTIONS(3),
  },
  [147] = {
    [sym__special_variable] = STATE(52),
    [aux_sym_double_quote_string_repeat1] = STATE(147),
    [sym_variable] = STATE(147),
    [aux_sym_double_quote_string_token1] = ACTIONS(599),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(602),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(602),
    [anon_sym_DOLLAR] = ACTIONS(605),
    [anon_sym_DOLLAR_CARET] = ACTIONS(602),
    [sym_simple_variable] = ACTIONS(602),
    [sym_comment] = ACTIONS(39),
    [anon_sym_DQUOTE] = ACTIONS(605),
    [sym__braced_variable] = ACTIONS(602),
  },
  [148] = {
    [anon_sym_RPAREN] = ACTIONS(607),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(607),
  },
  [149] = {
    [sym__typename_generic] = STATE(81),
    [sym__typename] = STATE(81),
    [sym__typename_array] = STATE(81),
    [sym_comment] = ACTIONS(3),
    [sym__typename_simple] = ACTIONS(609),
  },
  [150] = {
    [aux_sym_do_while_statement_token1] = ACTIONS(611),
    [aux_sym_function_definition_token1] = ACTIONS(611),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(613),
    [aux_sym_filter_definition_token1] = ACTIONS(611),
    [anon_sym_AT_LPAREN] = ACTIONS(613),
    [anon_sym_DOLLAR_CARET] = ACTIONS(613),
    [sym_simple_variable] = ACTIONS(613),
    [sym_number_expr] = ACTIONS(611),
    [anon_sym_COMMA] = ACTIONS(611),
    [anon_sym_LBRACE] = ACTIONS(613),
    [aux_sym_enum_definition_token1] = ACTIONS(611),
    [anon_sym_DQUOTE] = ACTIONS(611),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(613),
    [sym_bareword_string] = ACTIONS(611),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(613),
    [aux_sym_while_statement_token1] = ACTIONS(611),
    [aux_sym_if_statement_token1] = ACTIONS(611),
    [anon_sym_AMP] = ACTIONS(613),
    [anon_sym_LPAREN] = ACTIONS(613),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(613),
    [aux_sym_class_definition_token1] = ACTIONS(611),
    [anon_sym_AT_LBRACE] = ACTIONS(613),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(613),
    [sym__braced_variable] = ACTIONS(613),
    [sym_single_quote_string] = ACTIONS(613),
  },
  [151] = {
    [sym_type_expr] = STATE(153),
    [aux_sym_param_block_variable_repeat1] = STATE(255),
    [sym_non_type_attribute] = STATE(153),
    [sym__attribute] = STATE(153),
    [sym_simple_variable] = ACTIONS(615),
    [anon_sym_LBRACK] = ACTIONS(315),
    [sym_comment] = ACTIONS(3),
  },
  [152] = {
    [aux_sym_param_block_repeat1] = STATE(258),
    [anon_sym_RPAREN] = ACTIONS(617),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(619),
  },
  [153] = {
    [aux_sym__terminator_repeat1] = STATE(259),
    [sym__newline] = STATE(259),
    [sym_simple_variable] = ACTIONS(621),
    [anon_sym_LBRACK] = ACTIONS(621),
    [anon_sym_LF] = ACTIONS(623),
    [sym_comment] = ACTIONS(39),
    [anon_sym_CR_LF] = ACTIONS(625),
  },
  [154] = {
    [aux_sym__terminator_repeat1] = STATE(261),
    [sym__newline] = STATE(261),
    [anon_sym_RPAREN] = ACTIONS(627),
    [anon_sym_LF] = ACTIONS(629),
    [sym_comment] = ACTIONS(39),
    [anon_sym_CR_LF] = ACTIONS(631),
  },
  [155] = {
    [aux_sym_array_expression_repeat1] = STATE(262),
    [anon_sym_RPAREN] = ACTIONS(203),
    [anon_sym_LF] = ACTIONS(203),
    [sym_comment] = ACTIONS(39),
    [anon_sym_COMMA] = ACTIONS(17),
    [anon_sym_CR_LF] = ACTIONS(205),
    [anon_sym_PIPE] = ACTIONS(203),
  },
  [156] = {
    [aux_sym_array_expression_repeat1] = STATE(263),
    [anon_sym_RPAREN] = ACTIONS(215),
    [anon_sym_LF] = ACTIONS(215),
    [sym_comment] = ACTIONS(39),
    [anon_sym_COMMA] = ACTIONS(17),
    [anon_sym_CR_LF] = ACTIONS(217),
    [anon_sym_PIPE] = ACTIONS(215),
  },
  [157] = {
    [aux_sym_pipeline_statement_repeat1] = STATE(264),
    [anon_sym_RPAREN] = ACTIONS(219),
    [anon_sym_LF] = ACTIONS(219),
    [sym_comment] = ACTIONS(39),
    [anon_sym_CR_LF] = ACTIONS(221),
    [anon_sym_PIPE] = ACTIONS(223),
  },
  [158] = {
    [sym_type_expr] = STATE(26),
    [sym__string_expr] = STATE(155),
    [sym_double_quote_string] = STATE(155),
    [sym_pipeline_statement] = STATE(265),
    [sym__non_array_expression] = STATE(155),
    [sym__expression] = STATE(157),
    [sym_array_expression] = STATE(157),
    [sym_flat_array_expression] = STATE(155),
    [aux_sym_array_expression_repeat1] = STATE(156),
    [sym_variable] = STATE(155),
    [sym__special_variable] = STATE(6),
    [sym__attribute] = STATE(30),
    [sym_non_type_attribute] = STATE(30),
    [sym__newline] = STATE(266),
    [sym_command_expression] = STATE(157),
    [sym__pipeline_expression] = STATE(157),
    [sym__attributed_variable] = STATE(155),
    [aux_sym__terminator_repeat1] = STATE(266),
    [sym_scriptblock] = STATE(155),
    [aux_sym__attributed_variable_repeat1] = STATE(30),
    [sym_hashtable_expression] = STATE(155),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(61),
    [anon_sym_CR_LF] = ACTIONS(633),
    [sym_number_expr] = ACTIONS(321),
    [anon_sym_AT_LPAREN] = ACTIONS(67),
    [sym_simple_variable] = ACTIONS(61),
    [anon_sym_DOLLAR_CARET] = ACTIONS(61),
    [sym_bareword_string] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(69),
    [anon_sym_DQUOTE] = ACTIONS(25),
    [anon_sym_COMMA] = ACTIONS(17),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(71),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(61),
    [anon_sym_AMP] = ACTIONS(99),
    [anon_sym_LPAREN] = ACTIONS(73),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(635),
    [anon_sym_LBRACK] = ACTIONS(77),
    [anon_sym_AT_LBRACE] = ACTIONS(81),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(83),
    [sym__braced_variable] = ACTIONS(61),
    [sym_single_quote_string] = ACTIONS(321),
  },
  [159] = {
    [sym_type_expr] = STATE(26),
    [sym__string_expr] = STATE(155),
    [sym_double_quote_string] = STATE(155),
    [sym_pipeline_statement] = STATE(265),
    [sym__non_array_expression] = STATE(155),
    [sym__expression] = STATE(157),
    [sym_array_expression] = STATE(157),
    [sym_flat_array_expression] = STATE(155),
    [aux_sym_array_expression_repeat1] = STATE(156),
    [sym_variable] = STATE(155),
    [sym__special_variable] = STATE(6),
    [sym__attribute] = STATE(30),
    [sym_non_type_attribute] = STATE(30),
    [sym__newline] = STATE(267),
    [sym_command_expression] = STATE(157),
    [sym__pipeline_expression] = STATE(157),
    [sym__attributed_variable] = STATE(155),
    [aux_sym__terminator_repeat1] = STATE(267),
    [sym_scriptblock] = STATE(155),
    [aux_sym__attributed_variable_repeat1] = STATE(30),
    [sym_hashtable_expression] = STATE(155),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(61),
    [anon_sym_CR_LF] = ACTIONS(637),
    [sym_number_expr] = ACTIONS(321),
    [anon_sym_AT_LPAREN] = ACTIONS(67),
    [sym_simple_variable] = ACTIONS(61),
    [anon_sym_DOLLAR_CARET] = ACTIONS(61),
    [sym_bareword_string] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(69),
    [anon_sym_DQUOTE] = ACTIONS(25),
    [anon_sym_COMMA] = ACTIONS(17),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(71),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(61),
    [anon_sym_AMP] = ACTIONS(99),
    [anon_sym_LPAREN] = ACTIONS(73),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(639),
    [anon_sym_LBRACK] = ACTIONS(77),
    [anon_sym_AT_LBRACE] = ACTIONS(81),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(83),
    [sym__braced_variable] = ACTIONS(61),
    [sym_single_quote_string] = ACTIONS(321),
  },
  [160] = {
    [aux_sym__terminator_repeat1] = STATE(160),
    [sym__newline] = STATE(160),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(641),
    [anon_sym_CR_LF] = ACTIONS(644),
    [anon_sym_LPAREN] = ACTIONS(507),
  },
  [161] = {
    [anon_sym_RPAREN] = ACTIONS(647),
    [sym_comment] = ACTIONS(3),
  },
  [162] = {
    [sym_type_expr] = STATE(75),
    [sym__string_expr] = STATE(89),
    [sym_double_quote_string] = STATE(89),
    [sym_pipeline_statement] = STATE(269),
    [sym__non_array_expression] = STATE(89),
    [sym__expression] = STATE(91),
    [sym_array_expression] = STATE(91),
    [sym_flat_array_expression] = STATE(89),
    [aux_sym_array_expression_repeat1] = STATE(90),
    [sym_variable] = STATE(89),
    [sym__special_variable] = STATE(64),
    [sym__attribute] = STATE(79),
    [sym_non_type_attribute] = STATE(79),
    [sym__newline] = STATE(266),
    [sym_command_expression] = STATE(91),
    [sym__pipeline_expression] = STATE(91),
    [sym__attributed_variable] = STATE(89),
    [aux_sym__terminator_repeat1] = STATE(266),
    [sym_scriptblock] = STATE(89),
    [aux_sym__attributed_variable_repeat1] = STATE(79),
    [sym_hashtable_expression] = STATE(89),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(181),
    [anon_sym_CR_LF] = ACTIONS(633),
    [sym_number_expr] = ACTIONS(191),
    [anon_sym_AT_LPAREN] = ACTIONS(333),
    [sym_simple_variable] = ACTIONS(181),
    [anon_sym_DOLLAR_CARET] = ACTIONS(181),
    [sym_bareword_string] = ACTIONS(149),
    [anon_sym_LBRACE] = ACTIONS(335),
    [anon_sym_DQUOTE] = ACTIONS(153),
    [anon_sym_COMMA] = ACTIONS(155),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(189),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(181),
    [anon_sym_AMP] = ACTIONS(337),
    [anon_sym_LPAREN] = ACTIONS(339),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(635),
    [anon_sym_LBRACK] = ACTIONS(343),
    [anon_sym_AT_LBRACE] = ACTIONS(345),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(347),
    [sym__braced_variable] = ACTIONS(181),
    [sym_single_quote_string] = ACTIONS(191),
  },
  [163] = {
    [sym_type_expr] = STATE(75),
    [sym__string_expr] = STATE(89),
    [sym_double_quote_string] = STATE(89),
    [sym_pipeline_statement] = STATE(269),
    [sym__non_array_expression] = STATE(89),
    [sym__expression] = STATE(91),
    [sym_array_expression] = STATE(91),
    [sym_flat_array_expression] = STATE(89),
    [aux_sym_array_expression_repeat1] = STATE(90),
    [sym_variable] = STATE(89),
    [sym__special_variable] = STATE(64),
    [sym__attribute] = STATE(79),
    [sym_non_type_attribute] = STATE(79),
    [sym__newline] = STATE(270),
    [sym_command_expression] = STATE(91),
    [sym__pipeline_expression] = STATE(91),
    [sym__attributed_variable] = STATE(89),
    [aux_sym__terminator_repeat1] = STATE(270),
    [sym_scriptblock] = STATE(89),
    [aux_sym__attributed_variable_repeat1] = STATE(79),
    [sym_hashtable_expression] = STATE(89),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(181),
    [anon_sym_CR_LF] = ACTIONS(649),
    [sym_number_expr] = ACTIONS(191),
    [anon_sym_AT_LPAREN] = ACTIONS(333),
    [sym_simple_variable] = ACTIONS(181),
    [anon_sym_DOLLAR_CARET] = ACTIONS(181),
    [sym_bareword_string] = ACTIONS(149),
    [anon_sym_LBRACE] = ACTIONS(335),
    [anon_sym_DQUOTE] = ACTIONS(153),
    [anon_sym_COMMA] = ACTIONS(155),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(189),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(181),
    [anon_sym_AMP] = ACTIONS(337),
    [anon_sym_LPAREN] = ACTIONS(339),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(651),
    [anon_sym_LBRACK] = ACTIONS(343),
    [anon_sym_AT_LBRACE] = ACTIONS(345),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(347),
    [sym__braced_variable] = ACTIONS(181),
    [sym_single_quote_string] = ACTIONS(191),
  },
  [164] = {
    [anon_sym_RPAREN] = ACTIONS(245),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(245),
    [anon_sym_PIPE] = ACTIONS(245),
  },
  [165] = {
    [aux_sym_flat_array_expression_repeat1] = STATE(272),
    [aux_sym__terminator_repeat1] = STATE(273),
    [sym__newline] = STATE(273),
    [sym__terminator] = STATE(123),
    [anon_sym_RPAREN] = ACTIONS(653),
    [anon_sym_LF] = ACTIONS(655),
    [sym_comment] = ACTIONS(39),
    [anon_sym_CR_LF] = ACTIONS(657),
    [anon_sym_SEMI] = ACTIONS(253),
  },
  [166] = {
    [sym_type_expr] = STATE(26),
    [sym__string_expr] = STATE(36),
    [sym_double_quote_string] = STATE(36),
    [aux_sym_array_expression_repeat1] = STATE(37),
    [sym__expression] = STATE(274),
    [sym__non_array_expression] = STATE(36),
    [sym_array_expression] = STATE(274),
    [sym_flat_array_expression] = STATE(36),
    [sym_variable] = STATE(36),
    [sym__special_variable] = STATE(6),
    [sym_non_type_attribute] = STATE(30),
    [sym__newline] = STATE(125),
    [sym__attribute] = STATE(30),
    [sym__attributed_variable] = STATE(36),
    [aux_sym__terminator_repeat1] = STATE(125),
    [sym_scriptblock] = STATE(36),
    [aux_sym__attributed_variable_repeat1] = STATE(30),
    [sym_hashtable_expression] = STATE(36),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(61),
    [anon_sym_CR_LF] = ACTIONS(255),
    [sym_number_expr] = ACTIONS(65),
    [anon_sym_AT_LPAREN] = ACTIONS(67),
    [sym_simple_variable] = ACTIONS(61),
    [anon_sym_DOLLAR_CARET] = ACTIONS(61),
    [anon_sym_COMMA] = ACTIONS(17),
    [anon_sym_LBRACE] = ACTIONS(69),
    [anon_sym_DQUOTE] = ACTIONS(25),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(71),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(61),
    [anon_sym_LPAREN] = ACTIONS(73),
    [anon_sym_RPAREN] = ACTIONS(653),
    [anon_sym_LBRACK] = ACTIONS(77),
    [anon_sym_LF] = ACTIONS(257),
    [anon_sym_AT_LBRACE] = ACTIONS(81),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(83),
    [sym__braced_variable] = ACTIONS(61),
    [sym_single_quote_string] = ACTIONS(65),
    [sym_comment] = ACTIONS(39),
  },
  [167] = {
    [aux_sym_source_file_repeat1] = STATE(276),
    [aux_sym__terminator_repeat1] = STATE(132),
    [sym__newline] = STATE(132),
    [sym__terminator] = STATE(277),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(267),
    [anon_sym_RBRACE] = ACTIONS(659),
    [anon_sym_CR_LF] = ACTIONS(271),
    [anon_sym_SEMI] = ACTIONS(273),
  },
  [168] = {
    [sym__statement] = STATE(278),
    [sym__definition_statement] = STATE(278),
    [sym_pipeline_statement] = STATE(278),
    [sym_if_statement] = STATE(278),
    [sym__non_array_expression] = STATE(43),
    [sym__expression] = STATE(46),
    [sym_array_expression] = STATE(46),
    [sym_flat_array_expression] = STATE(43),
    [sym_variable] = STATE(47),
    [sym__special_variable] = STATE(6),
    [sym_non_type_attribute] = STATE(30),
    [sym__attribute] = STATE(30),
    [sym_function_definition] = STATE(278),
    [sym_filter_definition] = STATE(278),
    [sym_enum_definition] = STATE(278),
    [sym_while_statement] = STATE(278),
    [sym_do_while_statement] = STATE(278),
    [sym_scriptblock] = STATE(43),
    [sym_hashtable_expression] = STATE(43),
    [sym_type_expr] = STATE(26),
    [sym__string_expr] = STATE(43),
    [sym_double_quote_string] = STATE(43),
    [aux_sym_array_expression_repeat1] = STATE(45),
    [sym__newline] = STATE(279),
    [sym_class_definition] = STATE(278),
    [sym__expression_statement] = STATE(278),
    [sym_assignment_statement] = STATE(278),
    [sym_command_expression] = STATE(46),
    [sym__pipeline_expression] = STATE(46),
    [sym__attributed_variable] = STATE(47),
    [aux_sym__terminator_repeat1] = STATE(279),
    [aux_sym__attributed_variable_repeat1] = STATE(30),
    [aux_sym_do_while_statement_token1] = ACTIONS(5),
    [aux_sym_function_definition_token1] = ACTIONS(7),
    [anon_sym_CR_LF] = ACTIONS(661),
    [aux_sym_filter_definition_token1] = ACTIONS(11),
    [sym_number_expr] = ACTIONS(93),
    [anon_sym_AT_LPAREN] = ACTIONS(67),
    [sym_simple_variable] = ACTIONS(61),
    [anon_sym_DOLLAR_CARET] = ACTIONS(61),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(61),
    [sym_bareword_string] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(69),
    [aux_sym_enum_definition_token1] = ACTIONS(23),
    [anon_sym_DQUOTE] = ACTIONS(25),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(71),
    [anon_sym_COMMA] = ACTIONS(17),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(61),
    [aux_sym_while_statement_token1] = ACTIONS(31),
    [aux_sym_if_statement_token1] = ACTIONS(97),
    [anon_sym_AMP] = ACTIONS(99),
    [anon_sym_LPAREN] = ACTIONS(73),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(663),
    [aux_sym_class_definition_token1] = ACTIONS(43),
    [anon_sym_AT_LBRACE] = ACTIONS(81),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(83),
    [sym__braced_variable] = ACTIONS(61),
    [anon_sym_LBRACK] = ACTIONS(77),
    [sym_single_quote_string] = ACTIONS(93),
  },
  [169] = {
    [sym__statement] = STATE(278),
    [sym__definition_statement] = STATE(278),
    [sym_pipeline_statement] = STATE(278),
    [sym_if_statement] = STATE(278),
    [sym__non_array_expression] = STATE(43),
    [sym__expression] = STATE(46),
    [sym_array_expression] = STATE(46),
    [sym_flat_array_expression] = STATE(43),
    [sym_variable] = STATE(47),
    [sym__special_variable] = STATE(6),
    [sym_non_type_attribute] = STATE(30),
    [sym__attribute] = STATE(30),
    [sym_function_definition] = STATE(278),
    [sym_filter_definition] = STATE(278),
    [sym_enum_definition] = STATE(278),
    [sym_while_statement] = STATE(278),
    [sym_do_while_statement] = STATE(278),
    [sym_scriptblock] = STATE(43),
    [sym_hashtable_expression] = STATE(43),
    [sym_type_expr] = STATE(26),
    [sym__string_expr] = STATE(43),
    [sym_double_quote_string] = STATE(43),
    [aux_sym_array_expression_repeat1] = STATE(45),
    [sym__newline] = STATE(140),
    [sym_class_definition] = STATE(278),
    [sym__expression_statement] = STATE(278),
    [sym_assignment_statement] = STATE(278),
    [sym_command_expression] = STATE(46),
    [sym__pipeline_expression] = STATE(46),
    [sym__attributed_variable] = STATE(47),
    [aux_sym__terminator_repeat1] = STATE(140),
    [aux_sym__attributed_variable_repeat1] = STATE(30),
    [aux_sym_do_while_statement_token1] = ACTIONS(5),
    [aux_sym_function_definition_token1] = ACTIONS(7),
    [anon_sym_CR_LF] = ACTIONS(281),
    [aux_sym_filter_definition_token1] = ACTIONS(11),
    [sym_number_expr] = ACTIONS(93),
    [anon_sym_AT_LPAREN] = ACTIONS(67),
    [sym_simple_variable] = ACTIONS(61),
    [anon_sym_DOLLAR_CARET] = ACTIONS(61),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(61),
    [sym_bareword_string] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(69),
    [aux_sym_enum_definition_token1] = ACTIONS(23),
    [anon_sym_DQUOTE] = ACTIONS(25),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(71),
    [anon_sym_COMMA] = ACTIONS(17),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(61),
    [aux_sym_while_statement_token1] = ACTIONS(31),
    [aux_sym_if_statement_token1] = ACTIONS(97),
    [anon_sym_AMP] = ACTIONS(99),
    [anon_sym_LPAREN] = ACTIONS(73),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(283),
    [aux_sym_class_definition_token1] = ACTIONS(43),
    [anon_sym_AT_LBRACE] = ACTIONS(81),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(83),
    [sym__braced_variable] = ACTIONS(61),
    [anon_sym_LBRACK] = ACTIONS(77),
    [sym_single_quote_string] = ACTIONS(93),
  },
  [170] = {
    [anon_sym_DQUOTE] = ACTIONS(665),
    [sym_comment] = ACTIONS(3),
  },
  [171] = {
    [anon_sym_RPAREN] = ACTIONS(301),
    [sym_comment] = ACTIONS(3),
    [anon_sym_EQ] = ACTIONS(301),
    [anon_sym_COMMA] = ACTIONS(301),
    [anon_sym_PIPE] = ACTIONS(301),
  },
  [172] = {
    [sym__special_variable] = STATE(52),
    [aux_sym_double_quote_string_repeat1] = STATE(147),
    [sym_variable] = STATE(147),
    [aux_sym_double_quote_string_token1] = ACTIONS(303),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(113),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(113),
    [anon_sym_DOLLAR] = ACTIONS(667),
    [anon_sym_DOLLAR_CARET] = ACTIONS(113),
    [sym_simple_variable] = ACTIONS(113),
    [sym_comment] = ACTIONS(39),
    [anon_sym_DQUOTE] = ACTIONS(669),
    [sym__braced_variable] = ACTIONS(113),
  },
  [173] = {
    [anon_sym_RPAREN] = ACTIONS(311),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(311),
    [anon_sym_PIPE] = ACTIONS(311),
  },
  [174] = {
    [anon_sym_RPAREN] = ACTIONS(357),
    [sym_comment] = ACTIONS(3),
    [anon_sym_PIPE] = ACTIONS(357),
  },
  [175] = {
    [anon_sym_RPAREN] = ACTIONS(671),
    [sym_comment] = ACTIONS(3),
  },
  [176] = {
    [anon_sym_LBRACK_RBRACK] = ACTIONS(397),
    [anon_sym_LBRACK] = ACTIONS(399),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACK] = ACTIONS(673),
  },
  [177] = {
    [anon_sym_RPAREN] = ACTIONS(413),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(413),
    [anon_sym_PIPE] = ACTIONS(413),
  },
  [178] = {
    [aux_sym__terminator_repeat1] = STATE(193),
    [sym__newline] = STATE(193),
    [sym__terminator] = STATE(285),
    [aux_sym_hashtable_expression_repeat1] = STATE(286),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(415),
    [anon_sym_RBRACE] = ACTIONS(675),
    [anon_sym_CR_LF] = ACTIONS(419),
    [anon_sym_SEMI] = ACTIONS(421),
  },
  [179] = {
    [sym_hashtable_entry] = STATE(287),
    [sym__string_expr] = STATE(85),
    [sym_double_quote_string] = STATE(85),
    [sym_property_name] = STATE(87),
    [aux_sym__terminator_repeat1] = STATE(198),
    [sym__newline] = STATE(198),
    [sym_variable] = STATE(85),
    [sym__special_variable] = STATE(64),
    [anon_sym_RBRACE] = ACTIONS(675),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(181),
    [anon_sym_CR_LF] = ACTIONS(425),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(181),
    [anon_sym_DOLLAR_CARET] = ACTIONS(181),
    [sym_simple_variable] = ACTIONS(181),
    [anon_sym_LF] = ACTIONS(427),
    [sym_single_quote_string] = ACTIONS(187),
    [sym_bareword_string] = ACTIONS(187),
    [anon_sym_DQUOTE] = ACTIONS(153),
    [sym__braced_variable] = ACTIONS(181),
    [sym_comment] = ACTIONS(39),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(189),
  },
  [180] = {
    [aux_sym_array_expression_repeat1] = STATE(181),
    [anon_sym_RPAREN] = ACTIONS(447),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(387),
  },
  [181] = {
    [aux_sym_array_expression_repeat1] = STATE(181),
    [anon_sym_RPAREN] = ACTIONS(311),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(677),
  },
  [182] = {
    [anon_sym_RBRACE] = ACTIONS(680),
    [ts_builtin_sym_end] = ACTIONS(682),
    [anon_sym_CR_LF] = ACTIONS(682),
    [anon_sym_PIPE] = ACTIONS(680),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(680),
    [anon_sym_RPAREN] = ACTIONS(680),
    [anon_sym_COMMA] = ACTIONS(680),
    [anon_sym_SEMI] = ACTIONS(680),
  },
  [183] = {
    [anon_sym_RPAREN] = ACTIONS(466),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(466),
    [anon_sym_PIPE] = ACTIONS(466),
  },
  [184] = {
    [aux_sym__attributed_variable_repeat1] = STATE(79),
    [sym_type_expr] = STATE(75),
    [sym_hashtable_expression] = STATE(289),
    [sym__string_expr] = STATE(289),
    [sym_double_quote_string] = STATE(289),
    [sym__attributed_variable] = STATE(289),
    [sym__non_array_expression] = STATE(289),
    [sym_flat_array_expression] = STATE(289),
    [sym_variable] = STATE(289),
    [sym__special_variable] = STATE(64),
    [sym_non_type_attribute] = STATE(79),
    [sym__attribute] = STATE(79),
    [sym_scriptblock] = STATE(289),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(143),
    [sym_number_expr] = ACTIONS(684),
    [anon_sym_AT_LPAREN] = ACTIONS(147),
    [anon_sym_DOLLAR_CARET] = ACTIONS(143),
    [sym_simple_variable] = ACTIONS(143),
    [anon_sym_LBRACE] = ACTIONS(151),
    [anon_sym_DQUOTE] = ACTIONS(153),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(157),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(143),
    [anon_sym_LPAREN] = ACTIONS(161),
    [anon_sym_RPAREN] = ACTIONS(686),
    [anon_sym_LBRACK] = ACTIONS(163),
    [sym_single_quote_string] = ACTIONS(684),
    [anon_sym_AT_LBRACE] = ACTIONS(167),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(169),
    [sym__braced_variable] = ACTIONS(143),
    [sym_comment] = ACTIONS(3),
  },
  [185] = {
    [anon_sym_LBRACK_RBRACK] = ACTIONS(688),
    [anon_sym_LBRACK] = ACTIONS(690),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(688),
    [anon_sym_RBRACK] = ACTIONS(688),
  },
  [186] = {
    [sym__typename_generic] = STATE(290),
    [sym__typename] = STATE(290),
    [sym__typename_array] = STATE(290),
    [sym_comment] = ACTIONS(3),
    [sym__typename_simple] = ACTIONS(692),
  },
  [187] = {
    [anon_sym_RBRACE] = ACTIONS(694),
    [anon_sym_CR_LF] = ACTIONS(696),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(694),
    [anon_sym_DOLLAR_CARET] = ACTIONS(694),
    [sym_simple_variable] = ACTIONS(694),
    [anon_sym_COMMA] = ACTIONS(694),
    [anon_sym_SEMI] = ACTIONS(694),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(694),
    [ts_builtin_sym_end] = ACTIONS(696),
    [anon_sym_PIPE] = ACTIONS(694),
    [anon_sym_RPAREN] = ACTIONS(694),
    [anon_sym_LF] = ACTIONS(694),
    [anon_sym_LBRACK] = ACTIONS(694),
    [sym_comment] = ACTIONS(39),
    [sym__braced_variable] = ACTIONS(694),
  },
  [188] = {
    [sym_type_expr] = STATE(295),
    [sym_class_method] = STATE(297),
    [sym_class_property] = STATE(296),
    [aux_sym_class_definition_repeat1] = STATE(297),
    [sym_simple_variable] = ACTIONS(698),
    [anon_sym_LBRACK] = ACTIONS(700),
    [anon_sym_RBRACE] = ACTIONS(702),
    [sym_bareword_string] = ACTIONS(704),
    [sym_comment] = ACTIONS(39),
  },
  [189] = {
    [aux_sym__terminator_repeat1] = STATE(114),
    [sym__newline] = STATE(114),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(237),
    [anon_sym_CR_LF] = ACTIONS(239),
    [anon_sym_LBRACE] = ACTIONS(706),
  },
  [190] = {
    [aux_sym__terminator_repeat1] = STATE(299),
    [sym__newline] = STATE(299),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(708),
    [anon_sym_CR_LF] = ACTIONS(710),
    [anon_sym_LBRACE] = ACTIONS(706),
  },
  [191] = {
    [anon_sym_RBRACE] = ACTIONS(712),
    [ts_builtin_sym_end] = ACTIONS(714),
    [anon_sym_CR_LF] = ACTIONS(714),
    [anon_sym_PIPE] = ACTIONS(712),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(712),
    [anon_sym_RPAREN] = ACTIONS(712),
    [anon_sym_COMMA] = ACTIONS(712),
    [anon_sym_SEMI] = ACTIONS(712),
  },
  [192] = {
    [aux_sym__terminator_repeat1] = STATE(300),
    [sym__newline] = STATE(300),
    [anon_sym_RBRACE] = ACTIONS(431),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(431),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(431),
    [anon_sym_CR_LF] = ACTIONS(716),
    [anon_sym_DOLLAR_CARET] = ACTIONS(431),
    [sym_simple_variable] = ACTIONS(431),
    [anon_sym_LF] = ACTIONS(718),
    [sym_single_quote_string] = ACTIONS(431),
    [sym_bareword_string] = ACTIONS(431),
    [anon_sym_DQUOTE] = ACTIONS(431),
    [sym__braced_variable] = ACTIONS(431),
    [sym_comment] = ACTIONS(39),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(431),
  },
  [193] = {
    [aux_sym__terminator_repeat1] = STATE(198),
    [sym__newline] = STATE(198),
    [anon_sym_RBRACE] = ACTIONS(431),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(431),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(431),
    [anon_sym_CR_LF] = ACTIONS(425),
    [anon_sym_DOLLAR_CARET] = ACTIONS(431),
    [sym_simple_variable] = ACTIONS(431),
    [anon_sym_LF] = ACTIONS(427),
    [sym_single_quote_string] = ACTIONS(431),
    [sym_bareword_string] = ACTIONS(431),
    [anon_sym_DQUOTE] = ACTIONS(431),
    [sym__braced_variable] = ACTIONS(431),
    [sym_comment] = ACTIONS(39),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(431),
  },
  [194] = {
    [sym_hashtable_entry] = STATE(302),
    [sym_variable] = STATE(85),
    [sym__string_expr] = STATE(85),
    [sym_property_name] = STATE(87),
    [sym__special_variable] = STATE(64),
    [sym_double_quote_string] = STATE(85),
    [anon_sym_RBRACE] = ACTIONS(720),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(143),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(143),
    [anon_sym_DOLLAR_CARET] = ACTIONS(143),
    [sym_simple_variable] = ACTIONS(143),
    [sym_comment] = ACTIONS(39),
    [sym_single_quote_string] = ACTIONS(377),
    [sym_bareword_string] = ACTIONS(187),
    [anon_sym_DQUOTE] = ACTIONS(153),
    [sym__braced_variable] = ACTIONS(143),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(157),
  },
  [195] = {
    [aux_sym__terminator_repeat1] = STATE(193),
    [sym__newline] = STATE(193),
    [sym__terminator] = STATE(303),
    [aux_sym_hashtable_expression_repeat1] = STATE(304),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(415),
    [anon_sym_RBRACE] = ACTIONS(722),
    [anon_sym_CR_LF] = ACTIONS(419),
    [anon_sym_SEMI] = ACTIONS(421),
  },
  [196] = {
    [sym_type_expr] = STATE(26),
    [sym__string_expr] = STATE(305),
    [sym_double_quote_string] = STATE(305),
    [aux_sym_array_expression_repeat1] = STATE(306),
    [sym__expression] = STATE(307),
    [sym__non_array_expression] = STATE(305),
    [sym_array_expression] = STATE(307),
    [sym_flat_array_expression] = STATE(305),
    [sym_variable] = STATE(305),
    [sym__special_variable] = STATE(6),
    [sym_non_type_attribute] = STATE(30),
    [sym__newline] = STATE(308),
    [sym__attribute] = STATE(30),
    [sym__attributed_variable] = STATE(305),
    [aux_sym__terminator_repeat1] = STATE(308),
    [sym_scriptblock] = STATE(305),
    [aux_sym__attributed_variable_repeat1] = STATE(30),
    [sym_hashtable_expression] = STATE(305),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(61),
    [anon_sym_CR_LF] = ACTIONS(724),
    [sym_number_expr] = ACTIONS(726),
    [anon_sym_AT_LPAREN] = ACTIONS(67),
    [sym_simple_variable] = ACTIONS(61),
    [anon_sym_DOLLAR_CARET] = ACTIONS(61),
    [anon_sym_COMMA] = ACTIONS(17),
    [anon_sym_LBRACE] = ACTIONS(69),
    [anon_sym_DQUOTE] = ACTIONS(25),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(71),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(61),
    [anon_sym_LPAREN] = ACTIONS(73),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(728),
    [anon_sym_LBRACK] = ACTIONS(77),
    [anon_sym_AT_LBRACE] = ACTIONS(81),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(83),
    [sym__braced_variable] = ACTIONS(61),
    [sym_single_quote_string] = ACTIONS(726),
  },
  [197] = {
    [aux_sym__terminator_repeat1] = STATE(193),
    [sym__newline] = STATE(193),
    [sym__terminator] = STATE(303),
    [aux_sym_hashtable_expression_repeat1] = STATE(309),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(415),
    [anon_sym_RBRACE] = ACTIONS(722),
    [anon_sym_CR_LF] = ACTIONS(419),
    [anon_sym_SEMI] = ACTIONS(421),
  },
  [198] = {
    [aux_sym__terminator_repeat1] = STATE(198),
    [sym__newline] = STATE(198),
    [anon_sym_RBRACE] = ACTIONS(507),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(507),
    [anon_sym_CR_LF] = ACTIONS(730),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(507),
    [anon_sym_DOLLAR_CARET] = ACTIONS(507),
    [sym_simple_variable] = ACTIONS(507),
    [anon_sym_LF] = ACTIONS(733),
    [sym_single_quote_string] = ACTIONS(507),
    [sym_bareword_string] = ACTIONS(507),
    [anon_sym_DQUOTE] = ACTIONS(507),
    [sym__braced_variable] = ACTIONS(507),
    [sym_comment] = ACTIONS(39),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(507),
  },
  [199] = {
    [aux_sym_array_expression_repeat1] = STATE(200),
    [anon_sym_RPAREN] = ACTIONS(447),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(387),
    [anon_sym_PIPE] = ACTIONS(447),
  },
  [200] = {
    [aux_sym_array_expression_repeat1] = STATE(200),
    [anon_sym_RPAREN] = ACTIONS(311),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(677),
    [anon_sym_PIPE] = ACTIONS(311),
  },
  [201] = {
    [sym_command_expression] = STATE(310),
    [sym__newline] = STATE(311),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(736),
    [sym_bareword_string] = ACTIONS(149),
    [anon_sym_CR_LF] = ACTIONS(738),
    [anon_sym_AMP] = ACTIONS(337),
  },
  [202] = {
    [aux_sym_pipeline_statement_repeat1] = STATE(312),
    [anon_sym_RPAREN] = ACTIONS(458),
    [sym_comment] = ACTIONS(3),
    [anon_sym_PIPE] = ACTIONS(429),
  },
  [203] = {
    [aux_sym__terminator_repeat1] = STATE(206),
    [sym__newline] = STATE(206),
    [aux_sym_do_while_statement_token1] = ACTIONS(740),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(740),
    [sym_number_expr] = ACTIONS(740),
    [anon_sym_COMMA] = ACTIONS(740),
    [anon_sym_LBRACE] = ACTIONS(740),
    [aux_sym_enum_definition_token1] = ACTIONS(740),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(740),
    [aux_sym_while_statement_token1] = ACTIONS(740),
    [aux_sym_if_statement_token1] = ACTIONS(740),
    [anon_sym_AMP] = ACTIONS(740),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(740),
    [sym_single_quote_string] = ACTIONS(740),
    [aux_sym_function_definition_token1] = ACTIONS(740),
    [anon_sym_CR_LF] = ACTIONS(441),
    [aux_sym_filter_definition_token1] = ACTIONS(740),
    [anon_sym_AT_LPAREN] = ACTIONS(740),
    [anon_sym_DOLLAR_CARET] = ACTIONS(740),
    [sym_simple_variable] = ACTIONS(740),
    [sym_bareword_string] = ACTIONS(740),
    [anon_sym_DQUOTE] = ACTIONS(740),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(740),
    [ts_builtin_sym_end] = ACTIONS(742),
    [anon_sym_LPAREN] = ACTIONS(740),
    [anon_sym_LF] = ACTIONS(443),
    [aux_sym_class_definition_token1] = ACTIONS(740),
    [anon_sym_AT_LBRACE] = ACTIONS(740),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(740),
    [sym__braced_variable] = ACTIONS(740),
  },
  [204] = {
    [aux_sym_source_file_repeat1] = STATE(204),
    [aux_sym__terminator_repeat1] = STATE(314),
    [sym__newline] = STATE(314),
    [sym__terminator] = STATE(315),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(744),
    [ts_builtin_sym_end] = ACTIONS(747),
    [anon_sym_CR_LF] = ACTIONS(749),
    [anon_sym_SEMI] = ACTIONS(752),
  },
  [205] = {
    [sym__statement] = STATE(207),
    [sym__definition_statement] = STATE(207),
    [sym_pipeline_statement] = STATE(207),
    [sym_if_statement] = STATE(207),
    [sym__non_array_expression] = STATE(23),
    [sym__expression] = STATE(28),
    [sym_array_expression] = STATE(28),
    [sym_flat_array_expression] = STATE(23),
    [sym_variable] = STATE(29),
    [sym__special_variable] = STATE(6),
    [sym_non_type_attribute] = STATE(30),
    [sym__attribute] = STATE(30),
    [sym_function_definition] = STATE(207),
    [sym_filter_definition] = STATE(207),
    [sym_enum_definition] = STATE(207),
    [sym_while_statement] = STATE(207),
    [sym_do_while_statement] = STATE(207),
    [sym_scriptblock] = STATE(23),
    [sym_hashtable_expression] = STATE(23),
    [sym_type_expr] = STATE(26),
    [sym__string_expr] = STATE(23),
    [sym_double_quote_string] = STATE(23),
    [aux_sym_array_expression_repeat1] = STATE(27),
    [sym_class_definition] = STATE(207),
    [sym__expression_statement] = STATE(207),
    [sym_assignment_statement] = STATE(207),
    [sym_command_expression] = STATE(28),
    [sym__pipeline_expression] = STATE(28),
    [sym__attributed_variable] = STATE(29),
    [aux_sym__attributed_variable_repeat1] = STATE(30),
    [aux_sym_do_while_statement_token1] = ACTIONS(5),
    [aux_sym_function_definition_token1] = ACTIONS(7),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(9),
    [aux_sym_filter_definition_token1] = ACTIONS(11),
    [sym_number_expr] = ACTIONS(13),
    [anon_sym_AT_LPAREN] = ACTIONS(15),
    [sym_simple_variable] = ACTIONS(9),
    [anon_sym_DOLLAR_CARET] = ACTIONS(9),
    [sym_bareword_string] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [aux_sym_enum_definition_token1] = ACTIONS(23),
    [anon_sym_DQUOTE] = ACTIONS(25),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(17),
    [ts_builtin_sym_end] = ACTIONS(755),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(9),
    [aux_sym_while_statement_token1] = ACTIONS(31),
    [aux_sym_if_statement_token1] = ACTIONS(33),
    [anon_sym_AMP] = ACTIONS(35),
    [anon_sym_LPAREN] = ACTIONS(37),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(41),
    [aux_sym_class_definition_token1] = ACTIONS(43),
    [anon_sym_AT_LBRACE] = ACTIONS(45),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(47),
    [sym__braced_variable] = ACTIONS(9),
    [sym_single_quote_string] = ACTIONS(49),
  },
  [206] = {
    [aux_sym__terminator_repeat1] = STATE(206),
    [sym__newline] = STATE(206),
    [aux_sym_do_while_statement_token1] = ACTIONS(507),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(507),
    [sym_number_expr] = ACTIONS(507),
    [anon_sym_COMMA] = ACTIONS(507),
    [anon_sym_LBRACE] = ACTIONS(507),
    [aux_sym_enum_definition_token1] = ACTIONS(507),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(507),
    [aux_sym_while_statement_token1] = ACTIONS(507),
    [aux_sym_if_statement_token1] = ACTIONS(507),
    [anon_sym_AMP] = ACTIONS(507),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(507),
    [sym_single_quote_string] = ACTIONS(507),
    [aux_sym_function_definition_token1] = ACTIONS(507),
    [anon_sym_CR_LF] = ACTIONS(757),
    [aux_sym_filter_definition_token1] = ACTIONS(507),
    [anon_sym_AT_LPAREN] = ACTIONS(507),
    [anon_sym_DOLLAR_CARET] = ACTIONS(507),
    [sym_simple_variable] = ACTIONS(507),
    [sym_bareword_string] = ACTIONS(507),
    [anon_sym_DQUOTE] = ACTIONS(507),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(507),
    [ts_builtin_sym_end] = ACTIONS(760),
    [anon_sym_LPAREN] = ACTIONS(507),
    [anon_sym_LF] = ACTIONS(762),
    [aux_sym_class_definition_token1] = ACTIONS(507),
    [anon_sym_AT_LBRACE] = ACTIONS(507),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(507),
    [sym__braced_variable] = ACTIONS(507),
  },
  [207] = {
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(765),
    [ts_builtin_sym_end] = ACTIONS(747),
    [anon_sym_RBRACE] = ACTIONS(765),
    [anon_sym_CR_LF] = ACTIONS(747),
    [anon_sym_SEMI] = ACTIONS(765),
  },
  [208] = {
    [aux_sym_source_file_repeat1] = STATE(204),
    [aux_sym__terminator_repeat1] = STATE(94),
    [sym__newline] = STATE(94),
    [sym__terminator] = STATE(316),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(195),
    [ts_builtin_sym_end] = ACTIONS(755),
    [anon_sym_CR_LF] = ACTIONS(199),
    [anon_sym_SEMI] = ACTIONS(201),
  },
  [209] = {
    [anon_sym_RBRACE] = ACTIONS(767),
    [ts_builtin_sym_end] = ACTIONS(769),
    [anon_sym_CR_LF] = ACTIONS(769),
    [anon_sym_PIPE] = ACTIONS(767),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(767),
    [anon_sym_RPAREN] = ACTIONS(767),
    [anon_sym_SEMI] = ACTIONS(767),
  },
  [210] = {
    [sym_command_expression] = STATE(317),
    [sym_comment] = ACTIONS(39),
    [anon_sym_AMP] = ACTIONS(35),
    [sym_bareword_string] = ACTIONS(19),
  },
  [211] = {
    [aux_sym_pipeline_statement_repeat1] = STATE(211),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(767),
    [ts_builtin_sym_end] = ACTIONS(769),
    [anon_sym_CR_LF] = ACTIONS(769),
    [anon_sym_SEMI] = ACTIONS(767),
    [anon_sym_PIPE] = ACTIONS(771),
  },
  [212] = {
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(774),
    [ts_builtin_sym_end] = ACTIONS(776),
    [anon_sym_RBRACE] = ACTIONS(774),
    [anon_sym_CR_LF] = ACTIONS(776),
    [anon_sym_SEMI] = ACTIONS(774),
  },
  [213] = {
    [sym_type_expr] = STATE(26),
    [sym__string_expr] = STATE(23),
    [sym_double_quote_string] = STATE(23),
    [sym_pipeline_statement] = STATE(318),
    [sym_if_statement] = STATE(318),
    [sym__non_array_expression] = STATE(23),
    [sym__expression] = STATE(28),
    [sym_array_expression] = STATE(28),
    [sym_flat_array_expression] = STATE(23),
    [aux_sym_array_expression_repeat1] = STATE(27),
    [sym_variable] = STATE(29),
    [sym__special_variable] = STATE(6),
    [sym_non_type_attribute] = STATE(30),
    [sym__newline] = STATE(319),
    [sym_assignment_statement] = STATE(318),
    [sym_command_expression] = STATE(28),
    [sym__attribute] = STATE(30),
    [sym__expression_statement] = STATE(318),
    [sym__pipeline_expression] = STATE(28),
    [sym__attributed_variable] = STATE(29),
    [aux_sym__terminator_repeat1] = STATE(319),
    [sym_while_statement] = STATE(318),
    [sym_do_while_statement] = STATE(318),
    [sym_scriptblock] = STATE(23),
    [aux_sym__attributed_variable_repeat1] = STATE(30),
    [sym_hashtable_expression] = STATE(23),
    [aux_sym_do_while_statement_token1] = ACTIONS(5),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(61),
    [anon_sym_CR_LF] = ACTIONS(778),
    [sym_number_expr] = ACTIONS(13),
    [anon_sym_AT_LPAREN] = ACTIONS(67),
    [sym_simple_variable] = ACTIONS(61),
    [anon_sym_DOLLAR_CARET] = ACTIONS(61),
    [sym_bareword_string] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(69),
    [anon_sym_DQUOTE] = ACTIONS(25),
    [anon_sym_COMMA] = ACTIONS(17),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(71),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(61),
    [aux_sym_while_statement_token1] = ACTIONS(31),
    [aux_sym_if_statement_token1] = ACTIONS(33),
    [anon_sym_AMP] = ACTIONS(99),
    [anon_sym_LPAREN] = ACTIONS(73),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(780),
    [anon_sym_LBRACK] = ACTIONS(77),
    [anon_sym_AT_LBRACE] = ACTIONS(81),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(83),
    [sym__braced_variable] = ACTIONS(61),
    [sym_single_quote_string] = ACTIONS(13),
  },
  [214] = {
    [aux_sym__terminator_repeat1] = STATE(321),
    [sym__newline] = STATE(321),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(782),
    [anon_sym_CR_LF] = ACTIONS(784),
    [anon_sym_LPAREN] = ACTIONS(786),
  },
  [215] = {
    [aux_sym__terminator_repeat1] = STATE(323),
    [sym__newline] = STATE(323),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(788),
    [aux_sym_while_statement_token1] = ACTIONS(790),
    [anon_sym_CR_LF] = ACTIONS(792),
  },
  [216] = {
    [sym_type_expr] = STATE(75),
    [sym__string_expr] = STATE(89),
    [sym_double_quote_string] = STATE(89),
    [sym_pipeline_statement] = STATE(324),
    [sym__non_array_expression] = STATE(89),
    [sym__expression] = STATE(91),
    [sym_array_expression] = STATE(91),
    [sym_flat_array_expression] = STATE(89),
    [aux_sym_array_expression_repeat1] = STATE(90),
    [sym_variable] = STATE(89),
    [sym__special_variable] = STATE(64),
    [sym__attribute] = STATE(79),
    [sym_non_type_attribute] = STATE(79),
    [sym__newline] = STATE(325),
    [sym_command_expression] = STATE(91),
    [sym__pipeline_expression] = STATE(91),
    [sym__attributed_variable] = STATE(89),
    [aux_sym__terminator_repeat1] = STATE(325),
    [sym_scriptblock] = STATE(89),
    [aux_sym__attributed_variable_repeat1] = STATE(79),
    [sym_hashtable_expression] = STATE(89),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(181),
    [anon_sym_CR_LF] = ACTIONS(794),
    [sym_number_expr] = ACTIONS(191),
    [anon_sym_AT_LPAREN] = ACTIONS(333),
    [sym_simple_variable] = ACTIONS(181),
    [anon_sym_DOLLAR_CARET] = ACTIONS(181),
    [sym_bareword_string] = ACTIONS(149),
    [anon_sym_LBRACE] = ACTIONS(335),
    [anon_sym_DQUOTE] = ACTIONS(153),
    [anon_sym_COMMA] = ACTIONS(155),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(189),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(181),
    [anon_sym_AMP] = ACTIONS(337),
    [anon_sym_LPAREN] = ACTIONS(339),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(796),
    [anon_sym_LBRACK] = ACTIONS(343),
    [anon_sym_AT_LBRACE] = ACTIONS(345),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(347),
    [sym__braced_variable] = ACTIONS(181),
    [sym_single_quote_string] = ACTIONS(191),
  },
  [217] = {
    [aux_sym__terminator_repeat1] = STATE(160),
    [sym__newline] = STATE(160),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(325),
    [anon_sym_CR_LF] = ACTIONS(327),
    [anon_sym_LPAREN] = ACTIONS(798),
  },
  [218] = {
    [aux_sym_do_while_statement_token1] = ACTIONS(800),
    [anon_sym_RBRACE] = ACTIONS(802),
    [aux_sym_function_definition_token1] = ACTIONS(800),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(802),
    [aux_sym_filter_definition_token1] = ACTIONS(800),
    [anon_sym_AT_LPAREN] = ACTIONS(802),
    [anon_sym_DOLLAR_CARET] = ACTIONS(802),
    [sym_simple_variable] = ACTIONS(802),
    [sym_number_expr] = ACTIONS(800),
    [anon_sym_COMMA] = ACTIONS(800),
    [anon_sym_LBRACE] = ACTIONS(802),
    [aux_sym_enum_definition_token1] = ACTIONS(800),
    [anon_sym_DQUOTE] = ACTIONS(800),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(802),
    [sym_bareword_string] = ACTIONS(800),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(802),
    [aux_sym_while_statement_token1] = ACTIONS(800),
    [aux_sym_if_statement_token1] = ACTIONS(800),
    [anon_sym_AMP] = ACTIONS(802),
    [anon_sym_LPAREN] = ACTIONS(802),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(802),
    [aux_sym_class_definition_token1] = ACTIONS(800),
    [anon_sym_AT_LBRACE] = ACTIONS(802),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(802),
    [sym__braced_variable] = ACTIONS(802),
    [sym_single_quote_string] = ACTIONS(802),
  },
  [219] = {
    [aux_sym_array_expression_repeat1] = STATE(222),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(445),
    [anon_sym_COMMA] = ACTIONS(17),
    [anon_sym_CR_LF] = ACTIONS(447),
    [anon_sym_SEMI] = ACTIONS(445),
    [anon_sym_PIPE] = ACTIONS(445),
  },
  [220] = {
    [aux_sym__terminator_repeat1] = STATE(327),
    [sym__newline] = STATE(327),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(804),
    [aux_sym_while_statement_token1] = ACTIONS(790),
    [anon_sym_CR_LF] = ACTIONS(806),
  },
  [221] = {
    [sym__statement] = STATE(106),
    [sym__definition_statement] = STATE(106),
    [sym_pipeline_statement] = STATE(106),
    [sym_if_statement] = STATE(106),
    [sym__non_array_expression] = STATE(107),
    [sym__expression] = STATE(110),
    [sym_array_expression] = STATE(110),
    [sym_flat_array_expression] = STATE(107),
    [sym_variable] = STATE(111),
    [sym__special_variable] = STATE(6),
    [sym_non_type_attribute] = STATE(30),
    [sym__attribute] = STATE(30),
    [sym_function_definition] = STATE(106),
    [sym_filter_definition] = STATE(106),
    [sym_enum_definition] = STATE(106),
    [sym_while_statement] = STATE(106),
    [sym_do_while_statement] = STATE(106),
    [sym_scriptblock] = STATE(107),
    [sym_hashtable_expression] = STATE(107),
    [sym_type_expr] = STATE(26),
    [sym__string_expr] = STATE(107),
    [sym_double_quote_string] = STATE(107),
    [aux_sym_class_method_body_repeat1] = STATE(221),
    [aux_sym_array_expression_repeat1] = STATE(109),
    [sym_class_definition] = STATE(106),
    [sym__expression_statement] = STATE(106),
    [sym_assignment_statement] = STATE(106),
    [sym_command_expression] = STATE(110),
    [sym__pipeline_expression] = STATE(110),
    [sym__attributed_variable] = STATE(111),
    [aux_sym__attributed_variable_repeat1] = STATE(30),
    [aux_sym_do_while_statement_token1] = ACTIONS(808),
    [anon_sym_RBRACE] = ACTIONS(802),
    [aux_sym_function_definition_token1] = ACTIONS(811),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(814),
    [aux_sym_filter_definition_token1] = ACTIONS(817),
    [anon_sym_AT_LPAREN] = ACTIONS(820),
    [anon_sym_DOLLAR_CARET] = ACTIONS(814),
    [sym_simple_variable] = ACTIONS(814),
    [sym_number_expr] = ACTIONS(823),
    [anon_sym_COMMA] = ACTIONS(826),
    [anon_sym_LBRACE] = ACTIONS(829),
    [aux_sym_enum_definition_token1] = ACTIONS(832),
    [anon_sym_DQUOTE] = ACTIONS(835),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(838),
    [sym_bareword_string] = ACTIONS(841),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(814),
    [aux_sym_while_statement_token1] = ACTIONS(844),
    [aux_sym_if_statement_token1] = ACTIONS(847),
    [anon_sym_AMP] = ACTIONS(850),
    [anon_sym_LPAREN] = ACTIONS(853),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(856),
    [aux_sym_class_definition_token1] = ACTIONS(859),
    [anon_sym_AT_LBRACE] = ACTIONS(862),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(865),
    [sym__braced_variable] = ACTIONS(814),
    [sym_single_quote_string] = ACTIONS(868),
  },
  [222] = {
    [aux_sym_array_expression_repeat1] = STATE(222),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(309),
    [anon_sym_COMMA] = ACTIONS(449),
    [anon_sym_CR_LF] = ACTIONS(311),
    [anon_sym_SEMI] = ACTIONS(309),
    [anon_sym_PIPE] = ACTIONS(309),
  },
  [223] = {
    [aux_sym_pipeline_statement_repeat1] = STATE(328),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(456),
    [anon_sym_CR_LF] = ACTIONS(458),
    [anon_sym_SEMI] = ACTIONS(456),
    [anon_sym_PIPE] = ACTIONS(223),
  },
  [224] = {
    [sym_type_expr] = STATE(26),
    [sym__string_expr] = STATE(107),
    [sym_double_quote_string] = STATE(107),
    [sym_pipeline_statement] = STATE(212),
    [sym_if_statement] = STATE(212),
    [sym__non_array_expression] = STATE(107),
    [sym__expression] = STATE(110),
    [sym_array_expression] = STATE(110),
    [sym_flat_array_expression] = STATE(107),
    [aux_sym_array_expression_repeat1] = STATE(109),
    [sym_variable] = STATE(111),
    [sym__special_variable] = STATE(6),
    [sym_non_type_attribute] = STATE(30),
    [sym__newline] = STATE(329),
    [sym_assignment_statement] = STATE(212),
    [sym_command_expression] = STATE(110),
    [sym__attribute] = STATE(30),
    [sym__expression_statement] = STATE(212),
    [sym__pipeline_expression] = STATE(110),
    [sym__attributed_variable] = STATE(111),
    [aux_sym__terminator_repeat1] = STATE(329),
    [sym_while_statement] = STATE(212),
    [sym_do_while_statement] = STATE(212),
    [sym_scriptblock] = STATE(107),
    [aux_sym__attributed_variable_repeat1] = STATE(30),
    [sym_hashtable_expression] = STATE(107),
    [aux_sym_do_while_statement_token1] = ACTIONS(5),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(61),
    [anon_sym_CR_LF] = ACTIONS(871),
    [sym_number_expr] = ACTIONS(227),
    [anon_sym_AT_LPAREN] = ACTIONS(67),
    [sym_simple_variable] = ACTIONS(61),
    [anon_sym_DOLLAR_CARET] = ACTIONS(61),
    [sym_bareword_string] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(69),
    [anon_sym_DQUOTE] = ACTIONS(25),
    [anon_sym_COMMA] = ACTIONS(17),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(71),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(61),
    [aux_sym_while_statement_token1] = ACTIONS(31),
    [aux_sym_if_statement_token1] = ACTIONS(229),
    [anon_sym_AMP] = ACTIONS(99),
    [anon_sym_LPAREN] = ACTIONS(73),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(873),
    [anon_sym_LBRACK] = ACTIONS(77),
    [anon_sym_AT_LBRACE] = ACTIONS(81),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(83),
    [sym__braced_variable] = ACTIONS(61),
    [sym_single_quote_string] = ACTIONS(227),
  },
  [225] = {
    [sym__statement] = STATE(106),
    [sym__definition_statement] = STATE(106),
    [sym_pipeline_statement] = STATE(106),
    [sym_if_statement] = STATE(106),
    [sym__non_array_expression] = STATE(107),
    [sym__expression] = STATE(110),
    [sym_array_expression] = STATE(110),
    [sym_flat_array_expression] = STATE(107),
    [sym_variable] = STATE(111),
    [sym__special_variable] = STATE(6),
    [sym_non_type_attribute] = STATE(30),
    [sym__attribute] = STATE(30),
    [sym_function_definition] = STATE(106),
    [sym_filter_definition] = STATE(106),
    [sym_enum_definition] = STATE(106),
    [sym_while_statement] = STATE(106),
    [sym_do_while_statement] = STATE(106),
    [sym_scriptblock] = STATE(107),
    [sym_hashtable_expression] = STATE(107),
    [sym_type_expr] = STATE(26),
    [sym__string_expr] = STATE(107),
    [sym_double_quote_string] = STATE(107),
    [aux_sym_class_method_body_repeat1] = STATE(221),
    [aux_sym_array_expression_repeat1] = STATE(109),
    [sym_class_definition] = STATE(106),
    [sym__expression_statement] = STATE(106),
    [sym_assignment_statement] = STATE(106),
    [sym_command_expression] = STATE(110),
    [sym__pipeline_expression] = STATE(110),
    [sym__attributed_variable] = STATE(111),
    [aux_sym__attributed_variable_repeat1] = STATE(30),
    [aux_sym_do_while_statement_token1] = ACTIONS(5),
    [anon_sym_RBRACE] = ACTIONS(875),
    [aux_sym_function_definition_token1] = ACTIONS(7),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(9),
    [aux_sym_filter_definition_token1] = ACTIONS(11),
    [sym_number_expr] = ACTIONS(227),
    [anon_sym_AT_LPAREN] = ACTIONS(15),
    [sym_simple_variable] = ACTIONS(9),
    [anon_sym_DOLLAR_CARET] = ACTIONS(9),
    [sym_bareword_string] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [aux_sym_enum_definition_token1] = ACTIONS(23),
    [anon_sym_DQUOTE] = ACTIONS(25),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(17),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(9),
    [aux_sym_while_statement_token1] = ACTIONS(31),
    [aux_sym_if_statement_token1] = ACTIONS(229),
    [anon_sym_AMP] = ACTIONS(35),
    [anon_sym_LPAREN] = ACTIONS(37),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(41),
    [aux_sym_class_definition_token1] = ACTIONS(43),
    [anon_sym_AT_LBRACE] = ACTIONS(45),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(47),
    [sym__braced_variable] = ACTIONS(9),
    [sym_single_quote_string] = ACTIONS(487),
  },
  [226] = {
    [aux_sym__terminator_repeat1] = STATE(226),
    [sym__newline] = STATE(226),
    [aux_sym_do_while_statement_token1] = ACTIONS(507),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(507),
    [sym_number_expr] = ACTIONS(507),
    [anon_sym_COMMA] = ACTIONS(507),
    [anon_sym_LBRACE] = ACTIONS(507),
    [aux_sym_enum_definition_token1] = ACTIONS(507),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(507),
    [aux_sym_while_statement_token1] = ACTIONS(507),
    [aux_sym_if_statement_token1] = ACTIONS(507),
    [anon_sym_AMP] = ACTIONS(507),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(507),
    [sym_single_quote_string] = ACTIONS(507),
    [anon_sym_RBRACE] = ACTIONS(507),
    [aux_sym_function_definition_token1] = ACTIONS(507),
    [anon_sym_CR_LF] = ACTIONS(877),
    [aux_sym_filter_definition_token1] = ACTIONS(507),
    [anon_sym_AT_LPAREN] = ACTIONS(507),
    [anon_sym_DOLLAR_CARET] = ACTIONS(507),
    [sym_simple_variable] = ACTIONS(507),
    [sym_bareword_string] = ACTIONS(507),
    [anon_sym_DQUOTE] = ACTIONS(507),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(507),
    [anon_sym_LPAREN] = ACTIONS(507),
    [anon_sym_LF] = ACTIONS(880),
    [aux_sym_class_definition_token1] = ACTIONS(507),
    [anon_sym_AT_LBRACE] = ACTIONS(507),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(507),
    [sym__braced_variable] = ACTIONS(507),
  },
  [227] = {
    [sym__statement] = STATE(106),
    [sym__definition_statement] = STATE(106),
    [sym_pipeline_statement] = STATE(106),
    [sym_if_statement] = STATE(106),
    [sym__non_array_expression] = STATE(107),
    [sym__expression] = STATE(110),
    [sym_array_expression] = STATE(110),
    [sym_flat_array_expression] = STATE(107),
    [sym_variable] = STATE(111),
    [sym__special_variable] = STATE(6),
    [sym_non_type_attribute] = STATE(30),
    [sym__attribute] = STATE(30),
    [sym_function_definition] = STATE(106),
    [sym_filter_definition] = STATE(106),
    [sym_enum_definition] = STATE(106),
    [sym_while_statement] = STATE(106),
    [sym_do_while_statement] = STATE(106),
    [sym_scriptblock] = STATE(107),
    [sym_hashtable_expression] = STATE(107),
    [sym_type_expr] = STATE(26),
    [sym__string_expr] = STATE(107),
    [sym_double_quote_string] = STATE(107),
    [aux_sym_class_method_body_repeat1] = STATE(331),
    [aux_sym_array_expression_repeat1] = STATE(109),
    [sym__newline] = STATE(226),
    [sym_class_definition] = STATE(106),
    [sym__expression_statement] = STATE(106),
    [sym_assignment_statement] = STATE(106),
    [sym_command_expression] = STATE(110),
    [sym__pipeline_expression] = STATE(110),
    [sym__attributed_variable] = STATE(111),
    [aux_sym__terminator_repeat1] = STATE(226),
    [aux_sym__attributed_variable_repeat1] = STATE(30),
    [aux_sym_do_while_statement_token1] = ACTIONS(5),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(61),
    [sym_number_expr] = ACTIONS(227),
    [anon_sym_COMMA] = ACTIONS(17),
    [anon_sym_LBRACE] = ACTIONS(69),
    [aux_sym_enum_definition_token1] = ACTIONS(23),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(61),
    [aux_sym_while_statement_token1] = ACTIONS(31),
    [aux_sym_if_statement_token1] = ACTIONS(229),
    [anon_sym_AMP] = ACTIONS(99),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(77),
    [sym_single_quote_string] = ACTIONS(227),
    [anon_sym_RBRACE] = ACTIONS(883),
    [aux_sym_function_definition_token1] = ACTIONS(7),
    [anon_sym_CR_LF] = ACTIONS(493),
    [aux_sym_filter_definition_token1] = ACTIONS(11),
    [anon_sym_AT_LPAREN] = ACTIONS(67),
    [anon_sym_DOLLAR_CARET] = ACTIONS(61),
    [sym_simple_variable] = ACTIONS(61),
    [sym_bareword_string] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(25),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(71),
    [anon_sym_LPAREN] = ACTIONS(73),
    [anon_sym_LF] = ACTIONS(495),
    [aux_sym_class_definition_token1] = ACTIONS(43),
    [anon_sym_AT_LBRACE] = ACTIONS(81),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(83),
    [sym__braced_variable] = ACTIONS(61),
  },
  [228] = {
    [aux_sym__terminator_repeat1] = STATE(332),
    [sym__newline] = STATE(332),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(740),
    [sym_number_expr] = ACTIONS(740),
    [anon_sym_AT_LPAREN] = ACTIONS(740),
    [anon_sym_DOLLAR_CARET] = ACTIONS(740),
    [sym_simple_variable] = ACTIONS(740),
    [anon_sym_CR_LF] = ACTIONS(885),
    [anon_sym_COMMA] = ACTIONS(740),
    [anon_sym_LBRACE] = ACTIONS(740),
    [anon_sym_DQUOTE] = ACTIONS(740),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(740),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(740),
    [anon_sym_LPAREN] = ACTIONS(740),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(740),
    [sym_single_quote_string] = ACTIONS(740),
    [anon_sym_AT_LBRACE] = ACTIONS(740),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(740),
    [sym__braced_variable] = ACTIONS(740),
    [anon_sym_LF] = ACTIONS(887),
  },
  [229] = {
    [anon_sym_RBRACE] = ACTIONS(889),
    [ts_builtin_sym_end] = ACTIONS(891),
    [anon_sym_CR_LF] = ACTIONS(891),
    [anon_sym_PIPE] = ACTIONS(889),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(889),
    [anon_sym_RPAREN] = ACTIONS(889),
    [anon_sym_COMMA] = ACTIONS(889),
    [anon_sym_SEMI] = ACTIONS(889),
  },
  [230] = {
    [aux_sym_flat_array_expression_repeat1] = STATE(230),
    [aux_sym__terminator_repeat1] = STATE(333),
    [sym__newline] = STATE(333),
    [sym__terminator] = STATE(123),
    [anon_sym_RPAREN] = ACTIONS(893),
    [anon_sym_LF] = ACTIONS(895),
    [sym_comment] = ACTIONS(39),
    [anon_sym_CR_LF] = ACTIONS(898),
    [anon_sym_SEMI] = ACTIONS(901),
  },
  [231] = {
    [aux_sym__terminator_repeat1] = STATE(125),
    [sym__newline] = STATE(125),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(431),
    [sym_number_expr] = ACTIONS(431),
    [anon_sym_AT_LPAREN] = ACTIONS(431),
    [anon_sym_DOLLAR_CARET] = ACTIONS(431),
    [sym_simple_variable] = ACTIONS(431),
    [anon_sym_CR_LF] = ACTIONS(255),
    [anon_sym_COMMA] = ACTIONS(431),
    [anon_sym_LBRACE] = ACTIONS(431),
    [anon_sym_DQUOTE] = ACTIONS(431),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(431),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(431),
    [anon_sym_LPAREN] = ACTIONS(431),
    [anon_sym_RPAREN] = ACTIONS(904),
    [anon_sym_LBRACK] = ACTIONS(431),
    [sym_single_quote_string] = ACTIONS(431),
    [anon_sym_AT_LBRACE] = ACTIONS(431),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(431),
    [sym__braced_variable] = ACTIONS(431),
    [anon_sym_LF] = ACTIONS(257),
    [sym_comment] = ACTIONS(39),
  },
  [232] = {
    [anon_sym_RPAREN] = ACTIONS(893),
    [anon_sym_LF] = ACTIONS(893),
    [sym_comment] = ACTIONS(39),
    [anon_sym_CR_LF] = ACTIONS(906),
    [anon_sym_SEMI] = ACTIONS(893),
  },
  [233] = {
    [aux_sym_flat_array_expression_repeat1] = STATE(230),
    [aux_sym__terminator_repeat1] = STATE(335),
    [sym__newline] = STATE(335),
    [sym__terminator] = STATE(123),
    [anon_sym_RPAREN] = ACTIONS(904),
    [anon_sym_LF] = ACTIONS(908),
    [sym_comment] = ACTIONS(39),
    [anon_sym_CR_LF] = ACTIONS(910),
    [anon_sym_SEMI] = ACTIONS(253),
  },
  [234] = {
    [aux_sym_do_while_statement_token1] = ACTIONS(611),
    [aux_sym_function_definition_token1] = ACTIONS(611),
    [anon_sym_CR_LF] = ACTIONS(613),
    [aux_sym_filter_definition_token1] = ACTIONS(611),
    [anon_sym_AT_LPAREN] = ACTIONS(611),
    [anon_sym_DOLLAR_CARET] = ACTIONS(611),
    [sym_simple_variable] = ACTIONS(611),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(611),
    [sym_number_expr] = ACTIONS(611),
    [anon_sym_COMMA] = ACTIONS(611),
    [anon_sym_LBRACE] = ACTIONS(611),
    [aux_sym_enum_definition_token1] = ACTIONS(611),
    [anon_sym_DQUOTE] = ACTIONS(611),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(611),
    [sym_bareword_string] = ACTIONS(611),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(611),
    [aux_sym_while_statement_token1] = ACTIONS(611),
    [aux_sym_if_statement_token1] = ACTIONS(611),
    [anon_sym_AMP] = ACTIONS(611),
    [anon_sym_LPAREN] = ACTIONS(611),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(611),
    [aux_sym_class_definition_token1] = ACTIONS(611),
    [anon_sym_AT_LBRACE] = ACTIONS(611),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(611),
    [sym__braced_variable] = ACTIONS(611),
    [anon_sym_LBRACK] = ACTIONS(611),
    [sym_single_quote_string] = ACTIONS(611),
  },
  [235] = {
    [aux_sym_param_block_repeat1] = STATE(338),
    [anon_sym_RPAREN] = ACTIONS(912),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(914),
  },
  [236] = {
    [anon_sym_RPAREN] = ACTIONS(916),
    [sym_comment] = ACTIONS(3),
  },
  [237] = {
    [sym_type_expr] = STATE(75),
    [sym__string_expr] = STATE(89),
    [sym_double_quote_string] = STATE(89),
    [sym_pipeline_statement] = STATE(340),
    [sym__non_array_expression] = STATE(89),
    [sym__expression] = STATE(91),
    [sym_array_expression] = STATE(91),
    [sym_flat_array_expression] = STATE(89),
    [aux_sym_array_expression_repeat1] = STATE(90),
    [sym_variable] = STATE(89),
    [sym__special_variable] = STATE(64),
    [sym__attribute] = STATE(79),
    [sym_non_type_attribute] = STATE(79),
    [sym__newline] = STATE(266),
    [sym_command_expression] = STATE(91),
    [sym__pipeline_expression] = STATE(91),
    [sym__attributed_variable] = STATE(89),
    [aux_sym__terminator_repeat1] = STATE(266),
    [sym_scriptblock] = STATE(89),
    [aux_sym__attributed_variable_repeat1] = STATE(79),
    [sym_hashtable_expression] = STATE(89),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(181),
    [anon_sym_CR_LF] = ACTIONS(633),
    [sym_number_expr] = ACTIONS(191),
    [anon_sym_AT_LPAREN] = ACTIONS(333),
    [sym_simple_variable] = ACTIONS(181),
    [anon_sym_DOLLAR_CARET] = ACTIONS(181),
    [sym_bareword_string] = ACTIONS(149),
    [anon_sym_LBRACE] = ACTIONS(335),
    [anon_sym_DQUOTE] = ACTIONS(153),
    [anon_sym_COMMA] = ACTIONS(155),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(189),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(181),
    [anon_sym_AMP] = ACTIONS(337),
    [anon_sym_LPAREN] = ACTIONS(339),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(635),
    [anon_sym_LBRACK] = ACTIONS(343),
    [anon_sym_AT_LBRACE] = ACTIONS(345),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(347),
    [sym__braced_variable] = ACTIONS(181),
    [sym_single_quote_string] = ACTIONS(191),
  },
  [238] = {
    [sym_type_expr] = STATE(75),
    [sym__string_expr] = STATE(89),
    [sym_double_quote_string] = STATE(89),
    [sym_pipeline_statement] = STATE(340),
    [sym__non_array_expression] = STATE(89),
    [sym__expression] = STATE(91),
    [sym_array_expression] = STATE(91),
    [sym_flat_array_expression] = STATE(89),
    [aux_sym_array_expression_repeat1] = STATE(90),
    [sym_variable] = STATE(89),
    [sym__special_variable] = STATE(64),
    [sym__attribute] = STATE(79),
    [sym_non_type_attribute] = STATE(79),
    [sym__newline] = STATE(341),
    [sym_command_expression] = STATE(91),
    [sym__pipeline_expression] = STATE(91),
    [sym__attributed_variable] = STATE(89),
    [aux_sym__terminator_repeat1] = STATE(341),
    [sym_scriptblock] = STATE(89),
    [aux_sym__attributed_variable_repeat1] = STATE(79),
    [sym_hashtable_expression] = STATE(89),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(181),
    [anon_sym_CR_LF] = ACTIONS(918),
    [sym_number_expr] = ACTIONS(191),
    [anon_sym_AT_LPAREN] = ACTIONS(333),
    [sym_simple_variable] = ACTIONS(181),
    [anon_sym_DOLLAR_CARET] = ACTIONS(181),
    [sym_bareword_string] = ACTIONS(149),
    [anon_sym_LBRACE] = ACTIONS(335),
    [anon_sym_DQUOTE] = ACTIONS(153),
    [anon_sym_COMMA] = ACTIONS(155),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(189),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(181),
    [anon_sym_AMP] = ACTIONS(337),
    [anon_sym_LPAREN] = ACTIONS(339),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(920),
    [anon_sym_LBRACK] = ACTIONS(343),
    [anon_sym_AT_LBRACE] = ACTIONS(345),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(347),
    [sym__braced_variable] = ACTIONS(181),
    [sym_single_quote_string] = ACTIONS(191),
  },
  [239] = {
    [aux_sym__terminator_repeat1] = STATE(226),
    [sym__newline] = STATE(226),
    [aux_sym_do_while_statement_token1] = ACTIONS(740),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(740),
    [sym_number_expr] = ACTIONS(740),
    [anon_sym_COMMA] = ACTIONS(740),
    [anon_sym_LBRACE] = ACTIONS(740),
    [aux_sym_enum_definition_token1] = ACTIONS(740),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(740),
    [aux_sym_while_statement_token1] = ACTIONS(740),
    [aux_sym_if_statement_token1] = ACTIONS(740),
    [anon_sym_AMP] = ACTIONS(740),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(740),
    [sym_single_quote_string] = ACTIONS(740),
    [anon_sym_RBRACE] = ACTIONS(740),
    [aux_sym_function_definition_token1] = ACTIONS(740),
    [anon_sym_CR_LF] = ACTIONS(493),
    [aux_sym_filter_definition_token1] = ACTIONS(740),
    [anon_sym_AT_LPAREN] = ACTIONS(740),
    [anon_sym_DOLLAR_CARET] = ACTIONS(740),
    [sym_simple_variable] = ACTIONS(740),
    [sym_bareword_string] = ACTIONS(740),
    [anon_sym_DQUOTE] = ACTIONS(740),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(740),
    [anon_sym_LPAREN] = ACTIONS(740),
    [anon_sym_LF] = ACTIONS(495),
    [aux_sym_class_definition_token1] = ACTIONS(740),
    [anon_sym_AT_LBRACE] = ACTIONS(740),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(740),
    [sym__braced_variable] = ACTIONS(740),
  },
  [240] = {
    [anon_sym_RBRACE] = ACTIONS(922),
    [ts_builtin_sym_end] = ACTIONS(924),
    [anon_sym_CR_LF] = ACTIONS(924),
    [anon_sym_PIPE] = ACTIONS(922),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(922),
    [anon_sym_RPAREN] = ACTIONS(922),
    [anon_sym_COMMA] = ACTIONS(922),
    [anon_sym_SEMI] = ACTIONS(922),
  },
  [241] = {
    [aux_sym_source_file_repeat1] = STATE(241),
    [aux_sym__terminator_repeat1] = STATE(314),
    [sym__newline] = STATE(314),
    [sym__terminator] = STATE(342),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(744),
    [anon_sym_RBRACE] = ACTIONS(765),
    [anon_sym_CR_LF] = ACTIONS(749),
    [anon_sym_SEMI] = ACTIONS(752),
  },
  [242] = {
    [sym__statement] = STATE(207),
    [sym__definition_statement] = STATE(207),
    [sym_pipeline_statement] = STATE(207),
    [sym_if_statement] = STATE(207),
    [sym__non_array_expression] = STATE(43),
    [sym__expression] = STATE(46),
    [sym_array_expression] = STATE(46),
    [sym_flat_array_expression] = STATE(43),
    [sym_variable] = STATE(47),
    [sym__special_variable] = STATE(6),
    [sym_non_type_attribute] = STATE(30),
    [sym__attribute] = STATE(30),
    [sym_function_definition] = STATE(207),
    [sym_filter_definition] = STATE(207),
    [sym_enum_definition] = STATE(207),
    [sym_while_statement] = STATE(207),
    [sym_do_while_statement] = STATE(207),
    [sym_scriptblock] = STATE(43),
    [sym_hashtable_expression] = STATE(43),
    [sym_type_expr] = STATE(26),
    [sym__string_expr] = STATE(43),
    [sym_double_quote_string] = STATE(43),
    [aux_sym_array_expression_repeat1] = STATE(45),
    [sym_class_definition] = STATE(207),
    [sym__expression_statement] = STATE(207),
    [sym_assignment_statement] = STATE(207),
    [sym_command_expression] = STATE(46),
    [sym__pipeline_expression] = STATE(46),
    [sym__attributed_variable] = STATE(47),
    [aux_sym__attributed_variable_repeat1] = STATE(30),
    [aux_sym_do_while_statement_token1] = ACTIONS(5),
    [anon_sym_RBRACE] = ACTIONS(926),
    [aux_sym_function_definition_token1] = ACTIONS(7),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(9),
    [aux_sym_filter_definition_token1] = ACTIONS(11),
    [sym_number_expr] = ACTIONS(93),
    [anon_sym_AT_LPAREN] = ACTIONS(15),
    [sym_simple_variable] = ACTIONS(9),
    [anon_sym_DOLLAR_CARET] = ACTIONS(9),
    [sym_bareword_string] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [aux_sym_enum_definition_token1] = ACTIONS(23),
    [anon_sym_DQUOTE] = ACTIONS(25),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(17),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(9),
    [aux_sym_while_statement_token1] = ACTIONS(31),
    [aux_sym_if_statement_token1] = ACTIONS(97),
    [anon_sym_AMP] = ACTIONS(35),
    [anon_sym_LPAREN] = ACTIONS(37),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(41),
    [aux_sym_class_definition_token1] = ACTIONS(43),
    [anon_sym_AT_LBRACE] = ACTIONS(45),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(47),
    [sym__braced_variable] = ACTIONS(9),
    [sym_single_quote_string] = ACTIONS(561),
  },
  [243] = {
    [aux_sym_source_file_repeat1] = STATE(241),
    [aux_sym__terminator_repeat1] = STATE(132),
    [sym__newline] = STATE(132),
    [sym__terminator] = STATE(344),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(267),
    [anon_sym_RBRACE] = ACTIONS(928),
    [anon_sym_CR_LF] = ACTIONS(271),
    [anon_sym_SEMI] = ACTIONS(273),
  },
  [244] = {
    [aux_sym_source_file_repeat1] = STATE(345),
    [aux_sym__terminator_repeat1] = STATE(132),
    [sym__newline] = STATE(132),
    [sym__terminator] = STATE(344),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(267),
    [anon_sym_RBRACE] = ACTIONS(928),
    [anon_sym_CR_LF] = ACTIONS(271),
    [anon_sym_SEMI] = ACTIONS(273),
  },
  [245] = {
    [aux_sym_pipeline_statement_repeat1] = STATE(245),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(767),
    [anon_sym_RBRACE] = ACTIONS(767),
    [anon_sym_CR_LF] = ACTIONS(769),
    [anon_sym_SEMI] = ACTIONS(767),
    [anon_sym_PIPE] = ACTIONS(771),
  },
  [246] = {
    [sym_type_expr] = STATE(26),
    [sym__string_expr] = STATE(43),
    [sym_double_quote_string] = STATE(43),
    [sym_pipeline_statement] = STATE(318),
    [sym_if_statement] = STATE(318),
    [sym__non_array_expression] = STATE(43),
    [sym__expression] = STATE(46),
    [sym_array_expression] = STATE(46),
    [sym_flat_array_expression] = STATE(43),
    [aux_sym_array_expression_repeat1] = STATE(45),
    [sym_variable] = STATE(47),
    [sym__special_variable] = STATE(6),
    [sym_non_type_attribute] = STATE(30),
    [sym__newline] = STATE(319),
    [sym_assignment_statement] = STATE(318),
    [sym_command_expression] = STATE(46),
    [sym__attribute] = STATE(30),
    [sym__expression_statement] = STATE(318),
    [sym__pipeline_expression] = STATE(46),
    [sym__attributed_variable] = STATE(47),
    [aux_sym__terminator_repeat1] = STATE(319),
    [sym_while_statement] = STATE(318),
    [sym_do_while_statement] = STATE(318),
    [sym_scriptblock] = STATE(43),
    [aux_sym__attributed_variable_repeat1] = STATE(30),
    [sym_hashtable_expression] = STATE(43),
    [aux_sym_do_while_statement_token1] = ACTIONS(5),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(61),
    [anon_sym_CR_LF] = ACTIONS(778),
    [sym_number_expr] = ACTIONS(93),
    [anon_sym_AT_LPAREN] = ACTIONS(67),
    [sym_simple_variable] = ACTIONS(61),
    [anon_sym_DOLLAR_CARET] = ACTIONS(61),
    [sym_bareword_string] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(69),
    [anon_sym_DQUOTE] = ACTIONS(25),
    [anon_sym_COMMA] = ACTIONS(17),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(71),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(61),
    [aux_sym_while_statement_token1] = ACTIONS(31),
    [aux_sym_if_statement_token1] = ACTIONS(97),
    [anon_sym_AMP] = ACTIONS(99),
    [anon_sym_LPAREN] = ACTIONS(73),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(780),
    [anon_sym_LBRACK] = ACTIONS(77),
    [anon_sym_AT_LBRACE] = ACTIONS(81),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(83),
    [sym__braced_variable] = ACTIONS(61),
    [sym_single_quote_string] = ACTIONS(93),
  },
  [247] = {
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(930),
    [ts_builtin_sym_end] = ACTIONS(932),
    [anon_sym_RBRACE] = ACTIONS(930),
    [anon_sym_CR_LF] = ACTIONS(932),
    [anon_sym_SEMI] = ACTIONS(930),
  },
  [248] = {
    [sym__newline] = STATE(348),
    [aux_sym_enum_definition_repeat1] = STATE(347),
    [aux_sym__terminator_repeat1] = STATE(348),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(934),
    [anon_sym_RBRACE] = ACTIONS(936),
    [sym_bareword_string] = ACTIONS(938),
    [anon_sym_CR_LF] = ACTIONS(940),
  },
  [249] = {
    [aux_sym__terminator_repeat1] = STATE(350),
    [sym__newline] = STATE(350),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(942),
    [anon_sym_RBRACE] = ACTIONS(936),
    [sym_bareword_string] = ACTIONS(944),
    [anon_sym_CR_LF] = ACTIONS(946),
  },
  [250] = {
    [sym__newline] = STATE(348),
    [aux_sym_enum_definition_repeat1] = STATE(351),
    [aux_sym__terminator_repeat1] = STATE(348),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(934),
    [anon_sym_RBRACE] = ACTIONS(936),
    [sym_bareword_string] = ACTIONS(948),
    [anon_sym_CR_LF] = ACTIONS(940),
  },
  [251] = {
    [aux_sym__terminator_repeat1] = STATE(114),
    [sym__newline] = STATE(114),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(237),
    [anon_sym_CR_LF] = ACTIONS(239),
    [anon_sym_LBRACE] = ACTIONS(950),
  },
  [252] = {
    [anon_sym_RBRACE] = ACTIONS(952),
    [ts_builtin_sym_end] = ACTIONS(954),
    [anon_sym_CR_LF] = ACTIONS(954),
    [anon_sym_PIPE] = ACTIONS(952),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(952),
    [anon_sym_RPAREN] = ACTIONS(952),
    [anon_sym_COMMA] = ACTIONS(952),
    [anon_sym_SEMI] = ACTIONS(952),
  },
  [253] = {
    [anon_sym_LBRACK_RBRACK] = ACTIONS(391),
    [anon_sym_LBRACK] = ACTIONS(393),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACK] = ACTIONS(391),
    [anon_sym_LPAREN] = ACTIONS(956),
  },
  [254] = {
    [anon_sym_RPAREN] = ACTIONS(958),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(958),
  },
  [255] = {
    [sym_type_expr] = STATE(153),
    [aux_sym_param_block_variable_repeat1] = STATE(255),
    [sym_non_type_attribute] = STATE(153),
    [sym__attribute] = STATE(153),
    [sym_simple_variable] = ACTIONS(960),
    [anon_sym_LBRACK] = ACTIONS(962),
    [sym_comment] = ACTIONS(3),
  },
  [256] = {
    [aux_sym_do_while_statement_token1] = ACTIONS(965),
    [aux_sym_function_definition_token1] = ACTIONS(965),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(967),
    [aux_sym_filter_definition_token1] = ACTIONS(965),
    [anon_sym_AT_LPAREN] = ACTIONS(967),
    [anon_sym_DOLLAR_CARET] = ACTIONS(967),
    [sym_simple_variable] = ACTIONS(967),
    [sym_number_expr] = ACTIONS(965),
    [anon_sym_COMMA] = ACTIONS(965),
    [anon_sym_LBRACE] = ACTIONS(967),
    [aux_sym_enum_definition_token1] = ACTIONS(965),
    [anon_sym_DQUOTE] = ACTIONS(965),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(967),
    [sym_bareword_string] = ACTIONS(965),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(967),
    [aux_sym_while_statement_token1] = ACTIONS(965),
    [aux_sym_if_statement_token1] = ACTIONS(965),
    [anon_sym_AMP] = ACTIONS(967),
    [anon_sym_LPAREN] = ACTIONS(967),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(967),
    [aux_sym_class_definition_token1] = ACTIONS(965),
    [anon_sym_AT_LBRACE] = ACTIONS(967),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(967),
    [sym__braced_variable] = ACTIONS(967),
    [sym_single_quote_string] = ACTIONS(967),
  },
  [257] = {
    [sym_type_expr] = STATE(153),
    [aux_sym_param_block_variable_repeat1] = STATE(151),
    [sym_param_block_variable] = STATE(355),
    [sym_non_type_attribute] = STATE(153),
    [sym__attribute] = STATE(153),
    [sym_simple_variable] = ACTIONS(313),
    [anon_sym_LBRACK] = ACTIONS(315),
    [anon_sym_RPAREN] = ACTIONS(969),
    [sym_comment] = ACTIONS(3),
  },
  [258] = {
    [aux_sym_param_block_repeat1] = STATE(357),
    [anon_sym_RPAREN] = ACTIONS(969),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(971),
  },
  [259] = {
    [aux_sym__terminator_repeat1] = STATE(358),
    [sym__newline] = STATE(358),
    [sym_simple_variable] = ACTIONS(973),
    [anon_sym_LBRACK] = ACTIONS(973),
    [anon_sym_LF] = ACTIONS(975),
    [sym_comment] = ACTIONS(39),
    [anon_sym_CR_LF] = ACTIONS(977),
  },
  [260] = {
    [aux_sym__terminator_repeat1] = STATE(360),
    [sym__newline] = STATE(360),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(979),
    [anon_sym_CR_LF] = ACTIONS(981),
    [anon_sym_LBRACE] = ACTIONS(983),
  },
  [261] = {
    [aux_sym__terminator_repeat1] = STATE(362),
    [sym__newline] = STATE(362),
    [anon_sym_RPAREN] = ACTIONS(985),
    [anon_sym_LF] = ACTIONS(987),
    [sym_comment] = ACTIONS(39),
    [anon_sym_CR_LF] = ACTIONS(989),
  },
  [262] = {
    [aux_sym_array_expression_repeat1] = STATE(263),
    [anon_sym_RPAREN] = ACTIONS(445),
    [anon_sym_LF] = ACTIONS(445),
    [sym_comment] = ACTIONS(39),
    [anon_sym_COMMA] = ACTIONS(17),
    [anon_sym_CR_LF] = ACTIONS(447),
    [anon_sym_PIPE] = ACTIONS(445),
  },
  [263] = {
    [aux_sym_array_expression_repeat1] = STATE(263),
    [anon_sym_RPAREN] = ACTIONS(309),
    [anon_sym_LF] = ACTIONS(309),
    [sym_comment] = ACTIONS(39),
    [anon_sym_COMMA] = ACTIONS(449),
    [anon_sym_CR_LF] = ACTIONS(311),
    [anon_sym_PIPE] = ACTIONS(309),
  },
  [264] = {
    [aux_sym_pipeline_statement_repeat1] = STATE(363),
    [anon_sym_RPAREN] = ACTIONS(456),
    [anon_sym_LF] = ACTIONS(456),
    [sym_comment] = ACTIONS(39),
    [anon_sym_CR_LF] = ACTIONS(458),
    [anon_sym_PIPE] = ACTIONS(223),
  },
  [265] = {
    [aux_sym__terminator_repeat1] = STATE(364),
    [sym__newline] = STATE(364),
    [anon_sym_RPAREN] = ACTIONS(985),
    [anon_sym_LF] = ACTIONS(991),
    [sym_comment] = ACTIONS(39),
    [anon_sym_CR_LF] = ACTIONS(993),
  },
  [266] = {
    [aux_sym__terminator_repeat1] = STATE(266),
    [sym__newline] = STATE(266),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(507),
    [anon_sym_CR_LF] = ACTIONS(995),
    [anon_sym_AT_LPAREN] = ACTIONS(507),
    [anon_sym_DOLLAR_CARET] = ACTIONS(507),
    [sym_simple_variable] = ACTIONS(507),
    [sym_number_expr] = ACTIONS(507),
    [anon_sym_COMMA] = ACTIONS(507),
    [anon_sym_LBRACE] = ACTIONS(507),
    [anon_sym_DQUOTE] = ACTIONS(507),
    [sym_bareword_string] = ACTIONS(507),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(507),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(507),
    [anon_sym_AMP] = ACTIONS(507),
    [anon_sym_LPAREN] = ACTIONS(507),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(998),
    [anon_sym_LBRACK] = ACTIONS(507),
    [anon_sym_AT_LBRACE] = ACTIONS(507),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(507),
    [sym__braced_variable] = ACTIONS(507),
    [sym_single_quote_string] = ACTIONS(507),
  },
  [267] = {
    [sym_type_expr] = STATE(26),
    [sym__string_expr] = STATE(155),
    [sym_double_quote_string] = STATE(155),
    [sym_pipeline_statement] = STATE(365),
    [sym__non_array_expression] = STATE(155),
    [sym__expression] = STATE(157),
    [sym_array_expression] = STATE(157),
    [sym_flat_array_expression] = STATE(155),
    [aux_sym_array_expression_repeat1] = STATE(156),
    [sym_variable] = STATE(155),
    [sym__special_variable] = STATE(6),
    [sym__attribute] = STATE(30),
    [sym_non_type_attribute] = STATE(30),
    [sym__newline] = STATE(266),
    [sym_command_expression] = STATE(157),
    [sym__pipeline_expression] = STATE(157),
    [sym__attributed_variable] = STATE(155),
    [aux_sym__terminator_repeat1] = STATE(266),
    [sym_scriptblock] = STATE(155),
    [aux_sym__attributed_variable_repeat1] = STATE(30),
    [sym_hashtable_expression] = STATE(155),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(61),
    [anon_sym_CR_LF] = ACTIONS(633),
    [sym_number_expr] = ACTIONS(321),
    [anon_sym_AT_LPAREN] = ACTIONS(67),
    [sym_simple_variable] = ACTIONS(61),
    [anon_sym_DOLLAR_CARET] = ACTIONS(61),
    [sym_bareword_string] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(69),
    [anon_sym_DQUOTE] = ACTIONS(25),
    [anon_sym_COMMA] = ACTIONS(17),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(71),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(61),
    [anon_sym_AMP] = ACTIONS(99),
    [anon_sym_LPAREN] = ACTIONS(73),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(635),
    [anon_sym_LBRACK] = ACTIONS(77),
    [anon_sym_AT_LBRACE] = ACTIONS(81),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(83),
    [sym__braced_variable] = ACTIONS(61),
    [sym_single_quote_string] = ACTIONS(321),
  },
  [268] = {
    [aux_sym__terminator_repeat1] = STATE(367),
    [sym__newline] = STATE(367),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(1001),
    [anon_sym_CR_LF] = ACTIONS(1003),
    [anon_sym_LBRACE] = ACTIONS(1005),
  },
  [269] = {
    [anon_sym_RPAREN] = ACTIONS(1007),
    [sym_comment] = ACTIONS(3),
  },
  [270] = {
    [sym_type_expr] = STATE(75),
    [sym__string_expr] = STATE(89),
    [sym_double_quote_string] = STATE(89),
    [sym_pipeline_statement] = STATE(369),
    [sym__non_array_expression] = STATE(89),
    [sym__expression] = STATE(91),
    [sym_array_expression] = STATE(91),
    [sym_flat_array_expression] = STATE(89),
    [aux_sym_array_expression_repeat1] = STATE(90),
    [sym_variable] = STATE(89),
    [sym__special_variable] = STATE(64),
    [sym__attribute] = STATE(79),
    [sym_non_type_attribute] = STATE(79),
    [sym__newline] = STATE(266),
    [sym_command_expression] = STATE(91),
    [sym__pipeline_expression] = STATE(91),
    [sym__attributed_variable] = STATE(89),
    [aux_sym__terminator_repeat1] = STATE(266),
    [sym_scriptblock] = STATE(89),
    [aux_sym__attributed_variable_repeat1] = STATE(79),
    [sym_hashtable_expression] = STATE(89),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(181),
    [anon_sym_CR_LF] = ACTIONS(633),
    [sym_number_expr] = ACTIONS(191),
    [anon_sym_AT_LPAREN] = ACTIONS(333),
    [sym_simple_variable] = ACTIONS(181),
    [anon_sym_DOLLAR_CARET] = ACTIONS(181),
    [sym_bareword_string] = ACTIONS(149),
    [anon_sym_LBRACE] = ACTIONS(335),
    [anon_sym_DQUOTE] = ACTIONS(153),
    [anon_sym_COMMA] = ACTIONS(155),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(189),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(181),
    [anon_sym_AMP] = ACTIONS(337),
    [anon_sym_LPAREN] = ACTIONS(339),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(635),
    [anon_sym_LBRACK] = ACTIONS(343),
    [anon_sym_AT_LBRACE] = ACTIONS(345),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(347),
    [sym__braced_variable] = ACTIONS(181),
    [sym_single_quote_string] = ACTIONS(191),
  },
  [271] = {
    [anon_sym_RPAREN] = ACTIONS(519),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(519),
    [anon_sym_PIPE] = ACTIONS(519),
  },
  [272] = {
    [aux_sym_flat_array_expression_repeat1] = STATE(230),
    [aux_sym__terminator_repeat1] = STATE(371),
    [sym__newline] = STATE(371),
    [sym__terminator] = STATE(123),
    [anon_sym_RPAREN] = ACTIONS(1009),
    [anon_sym_LF] = ACTIONS(1011),
    [sym_comment] = ACTIONS(39),
    [anon_sym_CR_LF] = ACTIONS(1013),
    [anon_sym_SEMI] = ACTIONS(253),
  },
  [273] = {
    [aux_sym__terminator_repeat1] = STATE(125),
    [sym__newline] = STATE(125),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(431),
    [sym_number_expr] = ACTIONS(431),
    [anon_sym_AT_LPAREN] = ACTIONS(431),
    [anon_sym_DOLLAR_CARET] = ACTIONS(431),
    [sym_simple_variable] = ACTIONS(431),
    [anon_sym_CR_LF] = ACTIONS(255),
    [anon_sym_COMMA] = ACTIONS(431),
    [anon_sym_LBRACE] = ACTIONS(431),
    [anon_sym_DQUOTE] = ACTIONS(431),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(431),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(431),
    [anon_sym_LPAREN] = ACTIONS(431),
    [anon_sym_RPAREN] = ACTIONS(1009),
    [anon_sym_LBRACK] = ACTIONS(431),
    [sym_single_quote_string] = ACTIONS(431),
    [anon_sym_AT_LBRACE] = ACTIONS(431),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(431),
    [sym__braced_variable] = ACTIONS(431),
    [anon_sym_LF] = ACTIONS(257),
    [sym_comment] = ACTIONS(39),
  },
  [274] = {
    [aux_sym_flat_array_expression_repeat1] = STATE(372),
    [aux_sym__terminator_repeat1] = STATE(371),
    [sym__newline] = STATE(371),
    [sym__terminator] = STATE(123),
    [anon_sym_RPAREN] = ACTIONS(1009),
    [anon_sym_LF] = ACTIONS(1011),
    [sym_comment] = ACTIONS(39),
    [anon_sym_CR_LF] = ACTIONS(1013),
    [anon_sym_SEMI] = ACTIONS(253),
  },
  [275] = {
    [anon_sym_RPAREN] = ACTIONS(551),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(551),
    [anon_sym_PIPE] = ACTIONS(551),
  },
  [276] = {
    [aux_sym_source_file_repeat1] = STATE(241),
    [aux_sym__terminator_repeat1] = STATE(132),
    [sym__newline] = STATE(132),
    [sym__terminator] = STATE(374),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(267),
    [anon_sym_RBRACE] = ACTIONS(1015),
    [anon_sym_CR_LF] = ACTIONS(271),
    [anon_sym_SEMI] = ACTIONS(273),
  },
  [277] = {
    [sym__statement] = STATE(207),
    [sym__definition_statement] = STATE(207),
    [sym_pipeline_statement] = STATE(207),
    [sym_if_statement] = STATE(207),
    [sym__non_array_expression] = STATE(43),
    [sym__expression] = STATE(46),
    [sym_array_expression] = STATE(46),
    [sym_flat_array_expression] = STATE(43),
    [sym_variable] = STATE(47),
    [sym__special_variable] = STATE(6),
    [sym_non_type_attribute] = STATE(30),
    [sym__attribute] = STATE(30),
    [sym_function_definition] = STATE(207),
    [sym_filter_definition] = STATE(207),
    [sym_enum_definition] = STATE(207),
    [sym_while_statement] = STATE(207),
    [sym_do_while_statement] = STATE(207),
    [sym_scriptblock] = STATE(43),
    [sym_hashtable_expression] = STATE(43),
    [sym_type_expr] = STATE(26),
    [sym__string_expr] = STATE(43),
    [sym_double_quote_string] = STATE(43),
    [aux_sym_array_expression_repeat1] = STATE(45),
    [sym_class_definition] = STATE(207),
    [sym__expression_statement] = STATE(207),
    [sym_assignment_statement] = STATE(207),
    [sym_command_expression] = STATE(46),
    [sym__pipeline_expression] = STATE(46),
    [sym__attributed_variable] = STATE(47),
    [aux_sym__attributed_variable_repeat1] = STATE(30),
    [aux_sym_do_while_statement_token1] = ACTIONS(5),
    [anon_sym_RBRACE] = ACTIONS(1017),
    [aux_sym_function_definition_token1] = ACTIONS(7),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(9),
    [aux_sym_filter_definition_token1] = ACTIONS(11),
    [sym_number_expr] = ACTIONS(93),
    [anon_sym_AT_LPAREN] = ACTIONS(15),
    [sym_simple_variable] = ACTIONS(9),
    [anon_sym_DOLLAR_CARET] = ACTIONS(9),
    [sym_bareword_string] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [aux_sym_enum_definition_token1] = ACTIONS(23),
    [anon_sym_DQUOTE] = ACTIONS(25),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(17),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(9),
    [aux_sym_while_statement_token1] = ACTIONS(31),
    [aux_sym_if_statement_token1] = ACTIONS(97),
    [anon_sym_AMP] = ACTIONS(35),
    [anon_sym_LPAREN] = ACTIONS(37),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(41),
    [aux_sym_class_definition_token1] = ACTIONS(43),
    [anon_sym_AT_LBRACE] = ACTIONS(45),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(47),
    [sym__braced_variable] = ACTIONS(9),
    [sym_single_quote_string] = ACTIONS(561),
  },
  [278] = {
    [aux_sym_source_file_repeat1] = STATE(375),
    [aux_sym__terminator_repeat1] = STATE(132),
    [sym__newline] = STATE(132),
    [sym__terminator] = STATE(374),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(267),
    [anon_sym_RBRACE] = ACTIONS(1015),
    [anon_sym_CR_LF] = ACTIONS(271),
    [anon_sym_SEMI] = ACTIONS(273),
  },
  [279] = {
    [sym__statement] = STATE(376),
    [sym__definition_statement] = STATE(376),
    [sym_pipeline_statement] = STATE(376),
    [sym_if_statement] = STATE(376),
    [sym__non_array_expression] = STATE(43),
    [sym__expression] = STATE(46),
    [sym_array_expression] = STATE(46),
    [sym_flat_array_expression] = STATE(43),
    [sym_variable] = STATE(47),
    [sym__special_variable] = STATE(6),
    [sym_non_type_attribute] = STATE(30),
    [sym__attribute] = STATE(30),
    [sym_function_definition] = STATE(376),
    [sym_filter_definition] = STATE(376),
    [sym_enum_definition] = STATE(376),
    [sym_while_statement] = STATE(376),
    [sym_do_while_statement] = STATE(376),
    [sym_scriptblock] = STATE(43),
    [sym_hashtable_expression] = STATE(43),
    [sym_type_expr] = STATE(26),
    [sym__string_expr] = STATE(43),
    [sym_double_quote_string] = STATE(43),
    [aux_sym_array_expression_repeat1] = STATE(45),
    [sym__newline] = STATE(140),
    [sym_class_definition] = STATE(376),
    [sym__expression_statement] = STATE(376),
    [sym_assignment_statement] = STATE(376),
    [sym_command_expression] = STATE(46),
    [sym__pipeline_expression] = STATE(46),
    [sym__attributed_variable] = STATE(47),
    [aux_sym__terminator_repeat1] = STATE(140),
    [aux_sym__attributed_variable_repeat1] = STATE(30),
    [aux_sym_do_while_statement_token1] = ACTIONS(5),
    [aux_sym_function_definition_token1] = ACTIONS(7),
    [anon_sym_CR_LF] = ACTIONS(281),
    [aux_sym_filter_definition_token1] = ACTIONS(11),
    [sym_number_expr] = ACTIONS(93),
    [anon_sym_AT_LPAREN] = ACTIONS(67),
    [sym_simple_variable] = ACTIONS(61),
    [anon_sym_DOLLAR_CARET] = ACTIONS(61),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(61),
    [sym_bareword_string] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(69),
    [aux_sym_enum_definition_token1] = ACTIONS(23),
    [anon_sym_DQUOTE] = ACTIONS(25),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(71),
    [anon_sym_COMMA] = ACTIONS(17),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(61),
    [aux_sym_while_statement_token1] = ACTIONS(31),
    [aux_sym_if_statement_token1] = ACTIONS(97),
    [anon_sym_AMP] = ACTIONS(99),
    [anon_sym_LPAREN] = ACTIONS(73),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(283),
    [aux_sym_class_definition_token1] = ACTIONS(43),
    [anon_sym_AT_LBRACE] = ACTIONS(81),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(83),
    [sym__braced_variable] = ACTIONS(61),
    [anon_sym_LBRACK] = ACTIONS(77),
    [sym_single_quote_string] = ACTIONS(93),
  },
  [280] = {
    [anon_sym_RPAREN] = ACTIONS(595),
    [sym_comment] = ACTIONS(3),
    [anon_sym_EQ] = ACTIONS(595),
    [anon_sym_COMMA] = ACTIONS(595),
    [anon_sym_PIPE] = ACTIONS(595),
  },
  [281] = {
    [anon_sym_DQUOTE] = ACTIONS(1019),
    [sym_comment] = ACTIONS(3),
  },
  [282] = {
    [anon_sym_RPAREN] = ACTIONS(682),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(682),
    [anon_sym_PIPE] = ACTIONS(682),
  },
  [283] = {
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(696),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(696),
    [anon_sym_DOLLAR_CARET] = ACTIONS(696),
    [anon_sym_RPAREN] = ACTIONS(696),
    [sym_simple_variable] = ACTIONS(696),
    [anon_sym_LBRACK] = ACTIONS(696),
    [anon_sym_COMMA] = ACTIONS(696),
    [sym_comment] = ACTIONS(3),
    [sym__braced_variable] = ACTIONS(696),
    [anon_sym_PIPE] = ACTIONS(696),
  },
  [284] = {
    [anon_sym_RPAREN] = ACTIONS(714),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(714),
    [anon_sym_PIPE] = ACTIONS(714),
  },
  [285] = {
    [sym_hashtable_entry] = STATE(302),
    [sym_variable] = STATE(85),
    [sym__string_expr] = STATE(85),
    [sym_property_name] = STATE(87),
    [sym__special_variable] = STATE(64),
    [sym_double_quote_string] = STATE(85),
    [anon_sym_RBRACE] = ACTIONS(1021),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(143),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(143),
    [anon_sym_DOLLAR_CARET] = ACTIONS(143),
    [sym_simple_variable] = ACTIONS(143),
    [sym_comment] = ACTIONS(39),
    [sym_single_quote_string] = ACTIONS(377),
    [sym_bareword_string] = ACTIONS(187),
    [anon_sym_DQUOTE] = ACTIONS(153),
    [sym__braced_variable] = ACTIONS(143),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(157),
  },
  [286] = {
    [aux_sym__terminator_repeat1] = STATE(193),
    [sym__newline] = STATE(193),
    [sym__terminator] = STATE(379),
    [aux_sym_hashtable_expression_repeat1] = STATE(304),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(415),
    [anon_sym_RBRACE] = ACTIONS(1023),
    [anon_sym_CR_LF] = ACTIONS(419),
    [anon_sym_SEMI] = ACTIONS(421),
  },
  [287] = {
    [aux_sym__terminator_repeat1] = STATE(193),
    [sym__newline] = STATE(193),
    [sym__terminator] = STATE(379),
    [aux_sym_hashtable_expression_repeat1] = STATE(380),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(415),
    [anon_sym_RBRACE] = ACTIONS(1023),
    [anon_sym_CR_LF] = ACTIONS(419),
    [anon_sym_SEMI] = ACTIONS(421),
  },
  [288] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACK] = ACTIONS(1025),
  },
  [289] = {
    [aux_sym_array_expression_repeat1] = STATE(383),
    [anon_sym_RPAREN] = ACTIONS(1027),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(387),
  },
  [290] = {
    [aux_sym__typename_generic_repeat1] = STATE(386),
    [anon_sym_LBRACK_RBRACK] = ACTIONS(397),
    [anon_sym_LBRACK] = ACTIONS(399),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(1029),
    [anon_sym_RBRACK] = ACTIONS(1031),
  },
  [291] = {
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(1033),
    [anon_sym_CR_LF] = ACTIONS(1035),
    [anon_sym_SEMI] = ACTIONS(1033),
  },
  [292] = {
    [sym__typename_generic] = STATE(387),
    [sym__typename] = STATE(387),
    [sym__typename_array] = STATE(387),
    [sym_comment] = ACTIONS(3),
    [sym__typename_simple] = ACTIONS(1037),
  },
  [293] = {
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(1039),
    [ts_builtin_sym_end] = ACTIONS(1041),
    [anon_sym_RBRACE] = ACTIONS(1039),
    [anon_sym_CR_LF] = ACTIONS(1041),
    [anon_sym_SEMI] = ACTIONS(1039),
  },
  [294] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(1043),
  },
  [295] = {
    [aux_sym__terminator_repeat1] = STATE(391),
    [sym__newline] = STATE(391),
    [sym_simple_variable] = ACTIONS(1045),
    [anon_sym_LF] = ACTIONS(1047),
    [sym_comment] = ACTIONS(39),
    [sym_bareword_string] = ACTIONS(1049),
    [anon_sym_CR_LF] = ACTIONS(1051),
  },
  [296] = {
    [sym__terminator] = STATE(393),
    [aux_sym__terminator_repeat1] = STATE(394),
    [sym__newline] = STATE(394),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(1053),
    [anon_sym_CR_LF] = ACTIONS(1055),
    [anon_sym_SEMI] = ACTIONS(1057),
  },
  [297] = {
    [sym_type_expr] = STATE(295),
    [sym_class_method] = STATE(396),
    [sym_class_property] = STATE(296),
    [aux_sym_class_definition_repeat1] = STATE(396),
    [sym_simple_variable] = ACTIONS(698),
    [anon_sym_LBRACK] = ACTIONS(700),
    [anon_sym_RBRACE] = ACTIONS(1059),
    [sym_bareword_string] = ACTIONS(704),
    [sym_comment] = ACTIONS(39),
  },
  [298] = {
    [sym_type_expr] = STATE(295),
    [sym_class_method] = STATE(397),
    [sym_class_property] = STATE(296),
    [aux_sym_class_definition_repeat1] = STATE(397),
    [sym_simple_variable] = ACTIONS(698),
    [anon_sym_LBRACK] = ACTIONS(700),
    [anon_sym_RBRACE] = ACTIONS(1059),
    [sym_bareword_string] = ACTIONS(704),
    [sym_comment] = ACTIONS(39),
  },
  [299] = {
    [aux_sym__terminator_repeat1] = STATE(114),
    [sym__newline] = STATE(114),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(237),
    [anon_sym_CR_LF] = ACTIONS(239),
    [anon_sym_LBRACE] = ACTIONS(1061),
  },
  [300] = {
    [aux_sym__terminator_repeat1] = STATE(198),
    [sym__newline] = STATE(198),
    [anon_sym_RBRACE] = ACTIONS(740),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(740),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(740),
    [anon_sym_CR_LF] = ACTIONS(425),
    [anon_sym_DOLLAR_CARET] = ACTIONS(740),
    [sym_simple_variable] = ACTIONS(740),
    [anon_sym_LF] = ACTIONS(427),
    [sym_single_quote_string] = ACTIONS(740),
    [sym_bareword_string] = ACTIONS(740),
    [anon_sym_DQUOTE] = ACTIONS(740),
    [sym__braced_variable] = ACTIONS(740),
    [sym_comment] = ACTIONS(39),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(740),
  },
  [301] = {
    [anon_sym_RBRACE] = ACTIONS(1063),
    [ts_builtin_sym_end] = ACTIONS(1065),
    [anon_sym_CR_LF] = ACTIONS(1065),
    [anon_sym_PIPE] = ACTIONS(1063),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(1063),
    [anon_sym_RPAREN] = ACTIONS(1063),
    [anon_sym_COMMA] = ACTIONS(1063),
    [anon_sym_SEMI] = ACTIONS(1063),
  },
  [302] = {
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(1067),
    [anon_sym_RBRACE] = ACTIONS(1067),
    [anon_sym_CR_LF] = ACTIONS(1069),
    [anon_sym_SEMI] = ACTIONS(1067),
  },
  [303] = {
    [sym_hashtable_entry] = STATE(302),
    [sym_variable] = STATE(85),
    [sym__string_expr] = STATE(85),
    [sym_property_name] = STATE(87),
    [sym__special_variable] = STATE(64),
    [sym_double_quote_string] = STATE(85),
    [anon_sym_RBRACE] = ACTIONS(1071),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(143),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(143),
    [anon_sym_DOLLAR_CARET] = ACTIONS(143),
    [sym_simple_variable] = ACTIONS(143),
    [sym_comment] = ACTIONS(39),
    [sym_single_quote_string] = ACTIONS(377),
    [sym_bareword_string] = ACTIONS(187),
    [anon_sym_DQUOTE] = ACTIONS(153),
    [sym__braced_variable] = ACTIONS(143),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(157),
  },
  [304] = {
    [aux_sym__terminator_repeat1] = STATE(401),
    [sym__newline] = STATE(401),
    [sym__terminator] = STATE(402),
    [aux_sym_hashtable_expression_repeat1] = STATE(304),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(1073),
    [anon_sym_RBRACE] = ACTIONS(1067),
    [anon_sym_CR_LF] = ACTIONS(1076),
    [anon_sym_SEMI] = ACTIONS(1079),
  },
  [305] = {
    [aux_sym_array_expression_repeat1] = STATE(403),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(203),
    [anon_sym_RBRACE] = ACTIONS(203),
    [anon_sym_COMMA] = ACTIONS(17),
    [anon_sym_CR_LF] = ACTIONS(205),
    [anon_sym_SEMI] = ACTIONS(203),
  },
  [306] = {
    [aux_sym_array_expression_repeat1] = STATE(404),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(215),
    [anon_sym_RBRACE] = ACTIONS(215),
    [anon_sym_COMMA] = ACTIONS(17),
    [anon_sym_CR_LF] = ACTIONS(217),
    [anon_sym_SEMI] = ACTIONS(215),
  },
  [307] = {
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(1082),
    [anon_sym_RBRACE] = ACTIONS(1082),
    [anon_sym_CR_LF] = ACTIONS(1084),
    [anon_sym_SEMI] = ACTIONS(1082),
  },
  [308] = {
    [sym_type_expr] = STATE(26),
    [sym__string_expr] = STATE(305),
    [sym_double_quote_string] = STATE(305),
    [aux_sym_array_expression_repeat1] = STATE(306),
    [sym__expression] = STATE(405),
    [sym__non_array_expression] = STATE(305),
    [sym_array_expression] = STATE(405),
    [sym_flat_array_expression] = STATE(305),
    [sym_variable] = STATE(305),
    [sym__special_variable] = STATE(6),
    [sym_non_type_attribute] = STATE(30),
    [sym__newline] = STATE(332),
    [sym__attribute] = STATE(30),
    [sym__attributed_variable] = STATE(305),
    [aux_sym__terminator_repeat1] = STATE(332),
    [sym_scriptblock] = STATE(305),
    [aux_sym__attributed_variable_repeat1] = STATE(30),
    [sym_hashtable_expression] = STATE(305),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(61),
    [anon_sym_CR_LF] = ACTIONS(885),
    [sym_number_expr] = ACTIONS(726),
    [anon_sym_AT_LPAREN] = ACTIONS(67),
    [sym_simple_variable] = ACTIONS(61),
    [anon_sym_DOLLAR_CARET] = ACTIONS(61),
    [anon_sym_COMMA] = ACTIONS(17),
    [anon_sym_LBRACE] = ACTIONS(69),
    [anon_sym_DQUOTE] = ACTIONS(25),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(71),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(61),
    [anon_sym_LPAREN] = ACTIONS(73),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(887),
    [anon_sym_LBRACK] = ACTIONS(77),
    [anon_sym_AT_LBRACE] = ACTIONS(81),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(83),
    [sym__braced_variable] = ACTIONS(61),
    [sym_single_quote_string] = ACTIONS(726),
  },
  [309] = {
    [aux_sym__terminator_repeat1] = STATE(193),
    [sym__newline] = STATE(193),
    [sym__terminator] = STATE(406),
    [aux_sym_hashtable_expression_repeat1] = STATE(304),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(415),
    [anon_sym_RBRACE] = ACTIONS(1086),
    [anon_sym_CR_LF] = ACTIONS(419),
    [anon_sym_SEMI] = ACTIONS(421),
  },
  [310] = {
    [anon_sym_RPAREN] = ACTIONS(769),
    [sym_comment] = ACTIONS(3),
    [anon_sym_PIPE] = ACTIONS(769),
  },
  [311] = {
    [sym_command_expression] = STATE(407),
    [sym_comment] = ACTIONS(39),
    [anon_sym_AMP] = ACTIONS(159),
    [sym_bareword_string] = ACTIONS(149),
  },
  [312] = {
    [aux_sym_pipeline_statement_repeat1] = STATE(312),
    [anon_sym_RPAREN] = ACTIONS(769),
    [sym_comment] = ACTIONS(3),
    [anon_sym_PIPE] = ACTIONS(1088),
  },
  [313] = {
    [aux_sym__terminator_repeat1] = STATE(408),
    [sym__newline] = STATE(408),
    [aux_sym_do_while_statement_token1] = ACTIONS(431),
    [aux_sym_function_definition_token1] = ACTIONS(431),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(431),
    [aux_sym_filter_definition_token1] = ACTIONS(431),
    [anon_sym_AT_LPAREN] = ACTIONS(431),
    [anon_sym_DOLLAR_CARET] = ACTIONS(431),
    [sym_simple_variable] = ACTIONS(431),
    [sym_number_expr] = ACTIONS(431),
    [anon_sym_CR_LF] = ACTIONS(1091),
    [anon_sym_COMMA] = ACTIONS(431),
    [anon_sym_LBRACE] = ACTIONS(431),
    [aux_sym_enum_definition_token1] = ACTIONS(431),
    [anon_sym_DQUOTE] = ACTIONS(431),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(431),
    [sym_bareword_string] = ACTIONS(431),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(431),
    [aux_sym_while_statement_token1] = ACTIONS(431),
    [aux_sym_if_statement_token1] = ACTIONS(431),
    [anon_sym_AMP] = ACTIONS(431),
    [anon_sym_LPAREN] = ACTIONS(431),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(431),
    [aux_sym_class_definition_token1] = ACTIONS(431),
    [anon_sym_AT_LBRACE] = ACTIONS(431),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(431),
    [sym__braced_variable] = ACTIONS(431),
    [sym_single_quote_string] = ACTIONS(431),
    [anon_sym_LF] = ACTIONS(1093),
  },
  [314] = {
    [aux_sym__terminator_repeat1] = STATE(140),
    [sym__newline] = STATE(140),
    [aux_sym_do_while_statement_token1] = ACTIONS(431),
    [aux_sym_function_definition_token1] = ACTIONS(431),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(431),
    [aux_sym_filter_definition_token1] = ACTIONS(431),
    [anon_sym_AT_LPAREN] = ACTIONS(431),
    [anon_sym_DOLLAR_CARET] = ACTIONS(431),
    [sym_simple_variable] = ACTIONS(431),
    [sym_number_expr] = ACTIONS(431),
    [anon_sym_CR_LF] = ACTIONS(281),
    [anon_sym_COMMA] = ACTIONS(431),
    [anon_sym_LBRACE] = ACTIONS(431),
    [aux_sym_enum_definition_token1] = ACTIONS(431),
    [anon_sym_DQUOTE] = ACTIONS(431),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(431),
    [sym_bareword_string] = ACTIONS(431),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(431),
    [aux_sym_while_statement_token1] = ACTIONS(431),
    [aux_sym_if_statement_token1] = ACTIONS(431),
    [anon_sym_AMP] = ACTIONS(431),
    [anon_sym_LPAREN] = ACTIONS(431),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(431),
    [aux_sym_class_definition_token1] = ACTIONS(431),
    [anon_sym_AT_LBRACE] = ACTIONS(431),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(431),
    [sym__braced_variable] = ACTIONS(431),
    [sym_single_quote_string] = ACTIONS(431),
    [anon_sym_LF] = ACTIONS(283),
  },
  [315] = {
    [sym__statement] = STATE(207),
    [sym__definition_statement] = STATE(207),
    [sym_pipeline_statement] = STATE(207),
    [sym_if_statement] = STATE(207),
    [sym__non_array_expression] = STATE(23),
    [sym__expression] = STATE(28),
    [sym_array_expression] = STATE(28),
    [sym_flat_array_expression] = STATE(23),
    [sym_variable] = STATE(29),
    [sym__special_variable] = STATE(6),
    [sym_non_type_attribute] = STATE(30),
    [sym__attribute] = STATE(30),
    [sym_function_definition] = STATE(207),
    [sym_filter_definition] = STATE(207),
    [sym_enum_definition] = STATE(207),
    [sym_while_statement] = STATE(207),
    [sym_do_while_statement] = STATE(207),
    [sym_scriptblock] = STATE(23),
    [sym_hashtable_expression] = STATE(23),
    [sym_type_expr] = STATE(26),
    [sym__string_expr] = STATE(23),
    [sym_double_quote_string] = STATE(23),
    [aux_sym_array_expression_repeat1] = STATE(27),
    [sym_class_definition] = STATE(207),
    [sym__expression_statement] = STATE(207),
    [sym_assignment_statement] = STATE(207),
    [sym_command_expression] = STATE(28),
    [sym__pipeline_expression] = STATE(28),
    [sym__attributed_variable] = STATE(29),
    [aux_sym__attributed_variable_repeat1] = STATE(30),
    [aux_sym_do_while_statement_token1] = ACTIONS(5),
    [aux_sym_function_definition_token1] = ACTIONS(7),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(9),
    [aux_sym_filter_definition_token1] = ACTIONS(11),
    [sym_number_expr] = ACTIONS(13),
    [anon_sym_AT_LPAREN] = ACTIONS(15),
    [sym_simple_variable] = ACTIONS(9),
    [anon_sym_DOLLAR_CARET] = ACTIONS(9),
    [anon_sym_COMMA] = ACTIONS(17),
    [sym_bareword_string] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [aux_sym_enum_definition_token1] = ACTIONS(23),
    [anon_sym_DQUOTE] = ACTIONS(25),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(27),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(9),
    [aux_sym_while_statement_token1] = ACTIONS(31),
    [aux_sym_if_statement_token1] = ACTIONS(33),
    [anon_sym_AMP] = ACTIONS(35),
    [anon_sym_LPAREN] = ACTIONS(37),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(41),
    [aux_sym_class_definition_token1] = ACTIONS(43),
    [anon_sym_AT_LBRACE] = ACTIONS(45),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(47),
    [sym__braced_variable] = ACTIONS(9),
    [sym_single_quote_string] = ACTIONS(49),
  },
  [316] = {
    [sym__statement] = STATE(207),
    [sym__definition_statement] = STATE(207),
    [sym_pipeline_statement] = STATE(207),
    [sym_if_statement] = STATE(207),
    [sym__non_array_expression] = STATE(23),
    [sym__expression] = STATE(28),
    [sym_array_expression] = STATE(28),
    [sym_flat_array_expression] = STATE(23),
    [sym_variable] = STATE(29),
    [sym__special_variable] = STATE(6),
    [sym_non_type_attribute] = STATE(30),
    [sym__attribute] = STATE(30),
    [sym_function_definition] = STATE(207),
    [sym_filter_definition] = STATE(207),
    [sym_enum_definition] = STATE(207),
    [sym_while_statement] = STATE(207),
    [sym_do_while_statement] = STATE(207),
    [sym_scriptblock] = STATE(23),
    [sym_hashtable_expression] = STATE(23),
    [sym_type_expr] = STATE(26),
    [sym__string_expr] = STATE(23),
    [sym_double_quote_string] = STATE(23),
    [aux_sym_array_expression_repeat1] = STATE(27),
    [sym_class_definition] = STATE(207),
    [sym__expression_statement] = STATE(207),
    [sym_assignment_statement] = STATE(207),
    [sym_command_expression] = STATE(28),
    [sym__pipeline_expression] = STATE(28),
    [sym__attributed_variable] = STATE(29),
    [aux_sym__attributed_variable_repeat1] = STATE(30),
    [aux_sym_do_while_statement_token1] = ACTIONS(5),
    [aux_sym_function_definition_token1] = ACTIONS(7),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(9),
    [aux_sym_filter_definition_token1] = ACTIONS(11),
    [sym_number_expr] = ACTIONS(13),
    [anon_sym_AT_LPAREN] = ACTIONS(15),
    [sym_simple_variable] = ACTIONS(9),
    [anon_sym_DOLLAR_CARET] = ACTIONS(9),
    [sym_bareword_string] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [aux_sym_enum_definition_token1] = ACTIONS(23),
    [anon_sym_DQUOTE] = ACTIONS(25),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(17),
    [ts_builtin_sym_end] = ACTIONS(1095),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(9),
    [aux_sym_while_statement_token1] = ACTIONS(31),
    [aux_sym_if_statement_token1] = ACTIONS(33),
    [anon_sym_AMP] = ACTIONS(35),
    [anon_sym_LPAREN] = ACTIONS(37),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(41),
    [aux_sym_class_definition_token1] = ACTIONS(43),
    [anon_sym_AT_LBRACE] = ACTIONS(45),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(47),
    [sym__braced_variable] = ACTIONS(9),
    [sym_single_quote_string] = ACTIONS(49),
  },
  [317] = {
    [anon_sym_RBRACE] = ACTIONS(1097),
    [ts_builtin_sym_end] = ACTIONS(1099),
    [anon_sym_CR_LF] = ACTIONS(1099),
    [anon_sym_PIPE] = ACTIONS(1097),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(1097),
    [anon_sym_RPAREN] = ACTIONS(1097),
    [anon_sym_SEMI] = ACTIONS(1097),
  },
  [318] = {
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(1101),
    [ts_builtin_sym_end] = ACTIONS(1103),
    [anon_sym_RBRACE] = ACTIONS(1101),
    [anon_sym_CR_LF] = ACTIONS(1103),
    [anon_sym_SEMI] = ACTIONS(1101),
  },
  [319] = {
    [aux_sym__terminator_repeat1] = STATE(319),
    [sym__newline] = STATE(319),
    [aux_sym_do_while_statement_token1] = ACTIONS(507),
    [anon_sym_CR_LF] = ACTIONS(1105),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(507),
    [anon_sym_AT_LPAREN] = ACTIONS(507),
    [anon_sym_DOLLAR_CARET] = ACTIONS(507),
    [sym_simple_variable] = ACTIONS(507),
    [sym_number_expr] = ACTIONS(507),
    [anon_sym_COMMA] = ACTIONS(507),
    [anon_sym_LBRACE] = ACTIONS(507),
    [anon_sym_DQUOTE] = ACTIONS(507),
    [sym_bareword_string] = ACTIONS(507),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(507),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(507),
    [aux_sym_while_statement_token1] = ACTIONS(507),
    [aux_sym_if_statement_token1] = ACTIONS(507),
    [anon_sym_AMP] = ACTIONS(507),
    [anon_sym_LPAREN] = ACTIONS(507),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(1108),
    [anon_sym_LBRACK] = ACTIONS(507),
    [anon_sym_AT_LBRACE] = ACTIONS(507),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(507),
    [sym__braced_variable] = ACTIONS(507),
    [sym_single_quote_string] = ACTIONS(507),
  },
  [320] = {
    [sym_type_expr] = STATE(75),
    [sym__string_expr] = STATE(89),
    [sym_double_quote_string] = STATE(89),
    [sym_pipeline_statement] = STATE(409),
    [sym__non_array_expression] = STATE(89),
    [sym__expression] = STATE(91),
    [sym_array_expression] = STATE(91),
    [sym_flat_array_expression] = STATE(89),
    [aux_sym_array_expression_repeat1] = STATE(90),
    [sym_variable] = STATE(89),
    [sym__special_variable] = STATE(64),
    [sym_non_type_attribute] = STATE(79),
    [sym__attribute] = STATE(79),
    [sym_command_expression] = STATE(91),
    [sym__pipeline_expression] = STATE(91),
    [sym__attributed_variable] = STATE(89),
    [sym_scriptblock] = STATE(89),
    [aux_sym__attributed_variable_repeat1] = STATE(79),
    [sym_hashtable_expression] = STATE(89),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(143),
    [sym_number_expr] = ACTIONS(191),
    [anon_sym_AT_LPAREN] = ACTIONS(147),
    [anon_sym_DOLLAR_CARET] = ACTIONS(143),
    [sym_simple_variable] = ACTIONS(143),
    [sym_bareword_string] = ACTIONS(149),
    [anon_sym_LBRACE] = ACTIONS(151),
    [anon_sym_DQUOTE] = ACTIONS(153),
    [anon_sym_COMMA] = ACTIONS(155),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(157),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(143),
    [anon_sym_AMP] = ACTIONS(159),
    [anon_sym_LPAREN] = ACTIONS(161),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(163),
    [sym_single_quote_string] = ACTIONS(193),
    [anon_sym_AT_LBRACE] = ACTIONS(167),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(169),
    [sym__braced_variable] = ACTIONS(143),
  },
  [321] = {
    [aux_sym__terminator_repeat1] = STATE(160),
    [sym__newline] = STATE(160),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(325),
    [anon_sym_CR_LF] = ACTIONS(327),
    [anon_sym_LPAREN] = ACTIONS(1111),
  },
  [322] = {
    [aux_sym__terminator_repeat1] = STATE(411),
    [sym__newline] = STATE(411),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(1113),
    [anon_sym_CR_LF] = ACTIONS(1115),
    [anon_sym_LPAREN] = ACTIONS(1111),
  },
  [323] = {
    [aux_sym__terminator_repeat1] = STATE(323),
    [sym__newline] = STATE(323),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(1117),
    [aux_sym_while_statement_token1] = ACTIONS(507),
    [anon_sym_CR_LF] = ACTIONS(1120),
  },
  [324] = {
    [anon_sym_RPAREN] = ACTIONS(1123),
    [sym_comment] = ACTIONS(3),
  },
  [325] = {
    [sym_type_expr] = STATE(75),
    [sym__string_expr] = STATE(89),
    [sym_double_quote_string] = STATE(89),
    [sym_pipeline_statement] = STATE(413),
    [sym__non_array_expression] = STATE(89),
    [sym__expression] = STATE(91),
    [sym_array_expression] = STATE(91),
    [sym_flat_array_expression] = STATE(89),
    [aux_sym_array_expression_repeat1] = STATE(90),
    [sym_variable] = STATE(89),
    [sym__special_variable] = STATE(64),
    [sym__attribute] = STATE(79),
    [sym_non_type_attribute] = STATE(79),
    [sym__newline] = STATE(266),
    [sym_command_expression] = STATE(91),
    [sym__pipeline_expression] = STATE(91),
    [sym__attributed_variable] = STATE(89),
    [aux_sym__terminator_repeat1] = STATE(266),
    [sym_scriptblock] = STATE(89),
    [aux_sym__attributed_variable_repeat1] = STATE(79),
    [sym_hashtable_expression] = STATE(89),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(181),
    [anon_sym_CR_LF] = ACTIONS(633),
    [sym_number_expr] = ACTIONS(191),
    [anon_sym_AT_LPAREN] = ACTIONS(333),
    [sym_simple_variable] = ACTIONS(181),
    [anon_sym_DOLLAR_CARET] = ACTIONS(181),
    [sym_bareword_string] = ACTIONS(149),
    [anon_sym_LBRACE] = ACTIONS(335),
    [anon_sym_DQUOTE] = ACTIONS(153),
    [anon_sym_COMMA] = ACTIONS(155),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(189),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(181),
    [anon_sym_AMP] = ACTIONS(337),
    [anon_sym_LPAREN] = ACTIONS(339),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(635),
    [anon_sym_LBRACK] = ACTIONS(343),
    [anon_sym_AT_LBRACE] = ACTIONS(345),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(347),
    [sym__braced_variable] = ACTIONS(181),
    [sym_single_quote_string] = ACTIONS(191),
  },
  [326] = {
    [sym_type_expr] = STATE(75),
    [sym__string_expr] = STATE(89),
    [sym_double_quote_string] = STATE(89),
    [sym_pipeline_statement] = STATE(413),
    [sym__non_array_expression] = STATE(89),
    [sym__expression] = STATE(91),
    [sym_array_expression] = STATE(91),
    [sym_flat_array_expression] = STATE(89),
    [aux_sym_array_expression_repeat1] = STATE(90),
    [sym_variable] = STATE(89),
    [sym__special_variable] = STATE(64),
    [sym__attribute] = STATE(79),
    [sym_non_type_attribute] = STATE(79),
    [sym__newline] = STATE(414),
    [sym_command_expression] = STATE(91),
    [sym__pipeline_expression] = STATE(91),
    [sym__attributed_variable] = STATE(89),
    [aux_sym__terminator_repeat1] = STATE(414),
    [sym_scriptblock] = STATE(89),
    [aux_sym__attributed_variable_repeat1] = STATE(79),
    [sym_hashtable_expression] = STATE(89),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(181),
    [anon_sym_CR_LF] = ACTIONS(1125),
    [sym_number_expr] = ACTIONS(191),
    [anon_sym_AT_LPAREN] = ACTIONS(333),
    [sym_simple_variable] = ACTIONS(181),
    [anon_sym_DOLLAR_CARET] = ACTIONS(181),
    [sym_bareword_string] = ACTIONS(149),
    [anon_sym_LBRACE] = ACTIONS(335),
    [anon_sym_DQUOTE] = ACTIONS(153),
    [anon_sym_COMMA] = ACTIONS(155),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(189),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(181),
    [anon_sym_AMP] = ACTIONS(337),
    [anon_sym_LPAREN] = ACTIONS(339),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(1127),
    [anon_sym_LBRACK] = ACTIONS(343),
    [anon_sym_AT_LBRACE] = ACTIONS(345),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(347),
    [sym__braced_variable] = ACTIONS(181),
    [sym_single_quote_string] = ACTIONS(191),
  },
  [327] = {
    [aux_sym__terminator_repeat1] = STATE(323),
    [sym__newline] = STATE(323),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(788),
    [aux_sym_while_statement_token1] = ACTIONS(1129),
    [anon_sym_CR_LF] = ACTIONS(792),
  },
  [328] = {
    [aux_sym_pipeline_statement_repeat1] = STATE(328),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(767),
    [anon_sym_CR_LF] = ACTIONS(769),
    [anon_sym_SEMI] = ACTIONS(767),
    [anon_sym_PIPE] = ACTIONS(771),
  },
  [329] = {
    [sym_type_expr] = STATE(26),
    [sym__string_expr] = STATE(107),
    [sym_double_quote_string] = STATE(107),
    [sym_pipeline_statement] = STATE(318),
    [sym_if_statement] = STATE(318),
    [sym__non_array_expression] = STATE(107),
    [sym__expression] = STATE(110),
    [sym_array_expression] = STATE(110),
    [sym_flat_array_expression] = STATE(107),
    [aux_sym_array_expression_repeat1] = STATE(109),
    [sym_variable] = STATE(111),
    [sym__special_variable] = STATE(6),
    [sym_non_type_attribute] = STATE(30),
    [sym__newline] = STATE(319),
    [sym_assignment_statement] = STATE(318),
    [sym_command_expression] = STATE(110),
    [sym__attribute] = STATE(30),
    [sym__expression_statement] = STATE(318),
    [sym__pipeline_expression] = STATE(110),
    [sym__attributed_variable] = STATE(111),
    [aux_sym__terminator_repeat1] = STATE(319),
    [sym_while_statement] = STATE(318),
    [sym_do_while_statement] = STATE(318),
    [sym_scriptblock] = STATE(107),
    [aux_sym__attributed_variable_repeat1] = STATE(30),
    [sym_hashtable_expression] = STATE(107),
    [aux_sym_do_while_statement_token1] = ACTIONS(5),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(61),
    [anon_sym_CR_LF] = ACTIONS(778),
    [sym_number_expr] = ACTIONS(227),
    [anon_sym_AT_LPAREN] = ACTIONS(67),
    [sym_simple_variable] = ACTIONS(61),
    [anon_sym_DOLLAR_CARET] = ACTIONS(61),
    [sym_bareword_string] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(69),
    [anon_sym_DQUOTE] = ACTIONS(25),
    [anon_sym_COMMA] = ACTIONS(17),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(71),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(61),
    [aux_sym_while_statement_token1] = ACTIONS(31),
    [aux_sym_if_statement_token1] = ACTIONS(229),
    [anon_sym_AMP] = ACTIONS(99),
    [anon_sym_LPAREN] = ACTIONS(73),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(780),
    [anon_sym_LBRACK] = ACTIONS(77),
    [anon_sym_AT_LBRACE] = ACTIONS(81),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(83),
    [sym__braced_variable] = ACTIONS(61),
    [sym_single_quote_string] = ACTIONS(227),
  },
  [330] = {
    [aux_sym__terminator_repeat1] = STATE(416),
    [sym__newline] = STATE(416),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(1131),
    [aux_sym_while_statement_token1] = ACTIONS(1129),
    [anon_sym_CR_LF] = ACTIONS(1133),
  },
  [331] = {
    [sym__statement] = STATE(106),
    [sym__definition_statement] = STATE(106),
    [sym_pipeline_statement] = STATE(106),
    [sym_if_statement] = STATE(106),
    [sym__non_array_expression] = STATE(107),
    [sym__expression] = STATE(110),
    [sym_array_expression] = STATE(110),
    [sym_flat_array_expression] = STATE(107),
    [sym_variable] = STATE(111),
    [sym__special_variable] = STATE(6),
    [sym_non_type_attribute] = STATE(30),
    [sym__attribute] = STATE(30),
    [sym_function_definition] = STATE(106),
    [sym_filter_definition] = STATE(106),
    [sym_enum_definition] = STATE(106),
    [sym_while_statement] = STATE(106),
    [sym_do_while_statement] = STATE(106),
    [sym_scriptblock] = STATE(107),
    [sym_hashtable_expression] = STATE(107),
    [sym_type_expr] = STATE(26),
    [sym__string_expr] = STATE(107),
    [sym_double_quote_string] = STATE(107),
    [aux_sym_class_method_body_repeat1] = STATE(221),
    [aux_sym_array_expression_repeat1] = STATE(109),
    [sym_class_definition] = STATE(106),
    [sym__expression_statement] = STATE(106),
    [sym_assignment_statement] = STATE(106),
    [sym_command_expression] = STATE(110),
    [sym__pipeline_expression] = STATE(110),
    [sym__attributed_variable] = STATE(111),
    [aux_sym__attributed_variable_repeat1] = STATE(30),
    [aux_sym_do_while_statement_token1] = ACTIONS(5),
    [anon_sym_RBRACE] = ACTIONS(1135),
    [aux_sym_function_definition_token1] = ACTIONS(7),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(9),
    [aux_sym_filter_definition_token1] = ACTIONS(11),
    [sym_number_expr] = ACTIONS(227),
    [anon_sym_AT_LPAREN] = ACTIONS(15),
    [sym_simple_variable] = ACTIONS(9),
    [anon_sym_DOLLAR_CARET] = ACTIONS(9),
    [sym_bareword_string] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [aux_sym_enum_definition_token1] = ACTIONS(23),
    [anon_sym_DQUOTE] = ACTIONS(25),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(17),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(9),
    [aux_sym_while_statement_token1] = ACTIONS(31),
    [aux_sym_if_statement_token1] = ACTIONS(229),
    [anon_sym_AMP] = ACTIONS(35),
    [anon_sym_LPAREN] = ACTIONS(37),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(41),
    [aux_sym_class_definition_token1] = ACTIONS(43),
    [anon_sym_AT_LBRACE] = ACTIONS(45),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(47),
    [sym__braced_variable] = ACTIONS(9),
    [sym_single_quote_string] = ACTIONS(487),
  },
  [332] = {
    [aux_sym__terminator_repeat1] = STATE(332),
    [sym__newline] = STATE(332),
    [anon_sym_CR_LF] = ACTIONS(1137),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(507),
    [anon_sym_AT_LPAREN] = ACTIONS(507),
    [anon_sym_DOLLAR_CARET] = ACTIONS(507),
    [sym_simple_variable] = ACTIONS(507),
    [sym_number_expr] = ACTIONS(507),
    [anon_sym_COMMA] = ACTIONS(507),
    [anon_sym_LBRACE] = ACTIONS(507),
    [anon_sym_DQUOTE] = ACTIONS(507),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(507),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(507),
    [anon_sym_LPAREN] = ACTIONS(507),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(507),
    [anon_sym_LF] = ACTIONS(1140),
    [anon_sym_AT_LBRACE] = ACTIONS(507),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(507),
    [sym__braced_variable] = ACTIONS(507),
    [sym_single_quote_string] = ACTIONS(507),
  },
  [333] = {
    [aux_sym__terminator_repeat1] = STATE(332),
    [sym__newline] = STATE(332),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(431),
    [sym_number_expr] = ACTIONS(431),
    [anon_sym_AT_LPAREN] = ACTIONS(431),
    [anon_sym_DOLLAR_CARET] = ACTIONS(431),
    [sym_simple_variable] = ACTIONS(431),
    [anon_sym_CR_LF] = ACTIONS(885),
    [anon_sym_COMMA] = ACTIONS(431),
    [anon_sym_LBRACE] = ACTIONS(431),
    [anon_sym_DQUOTE] = ACTIONS(431),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(431),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(431),
    [anon_sym_LPAREN] = ACTIONS(431),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(431),
    [sym_single_quote_string] = ACTIONS(431),
    [anon_sym_AT_LBRACE] = ACTIONS(431),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(431),
    [sym__braced_variable] = ACTIONS(431),
    [anon_sym_LF] = ACTIONS(887),
  },
  [334] = {
    [anon_sym_RBRACE] = ACTIONS(1143),
    [ts_builtin_sym_end] = ACTIONS(1145),
    [anon_sym_CR_LF] = ACTIONS(1145),
    [anon_sym_PIPE] = ACTIONS(1143),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(1143),
    [anon_sym_RPAREN] = ACTIONS(1143),
    [anon_sym_COMMA] = ACTIONS(1143),
    [anon_sym_SEMI] = ACTIONS(1143),
  },
  [335] = {
    [aux_sym__terminator_repeat1] = STATE(125),
    [sym__newline] = STATE(125),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(431),
    [sym_number_expr] = ACTIONS(431),
    [anon_sym_AT_LPAREN] = ACTIONS(431),
    [anon_sym_DOLLAR_CARET] = ACTIONS(431),
    [sym_simple_variable] = ACTIONS(431),
    [anon_sym_CR_LF] = ACTIONS(255),
    [anon_sym_COMMA] = ACTIONS(431),
    [anon_sym_LBRACE] = ACTIONS(431),
    [anon_sym_DQUOTE] = ACTIONS(431),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(431),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(431),
    [anon_sym_LPAREN] = ACTIONS(431),
    [anon_sym_RPAREN] = ACTIONS(1147),
    [anon_sym_LBRACK] = ACTIONS(431),
    [sym_single_quote_string] = ACTIONS(431),
    [anon_sym_AT_LBRACE] = ACTIONS(431),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(431),
    [sym__braced_variable] = ACTIONS(431),
    [anon_sym_LF] = ACTIONS(257),
    [sym_comment] = ACTIONS(39),
  },
  [336] = {
    [aux_sym_do_while_statement_token1] = ACTIONS(965),
    [aux_sym_function_definition_token1] = ACTIONS(965),
    [anon_sym_CR_LF] = ACTIONS(967),
    [aux_sym_filter_definition_token1] = ACTIONS(965),
    [anon_sym_AT_LPAREN] = ACTIONS(965),
    [anon_sym_DOLLAR_CARET] = ACTIONS(965),
    [sym_simple_variable] = ACTIONS(965),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(965),
    [sym_number_expr] = ACTIONS(965),
    [anon_sym_COMMA] = ACTIONS(965),
    [anon_sym_LBRACE] = ACTIONS(965),
    [aux_sym_enum_definition_token1] = ACTIONS(965),
    [anon_sym_DQUOTE] = ACTIONS(965),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(965),
    [sym_bareword_string] = ACTIONS(965),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(965),
    [aux_sym_while_statement_token1] = ACTIONS(965),
    [aux_sym_if_statement_token1] = ACTIONS(965),
    [anon_sym_AMP] = ACTIONS(965),
    [anon_sym_LPAREN] = ACTIONS(965),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(965),
    [aux_sym_class_definition_token1] = ACTIONS(965),
    [anon_sym_AT_LBRACE] = ACTIONS(965),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(965),
    [sym__braced_variable] = ACTIONS(965),
    [anon_sym_LBRACK] = ACTIONS(965),
    [sym_single_quote_string] = ACTIONS(965),
  },
  [337] = {
    [sym_type_expr] = STATE(153),
    [aux_sym_param_block_variable_repeat1] = STATE(151),
    [sym_param_block_variable] = STATE(355),
    [sym_non_type_attribute] = STATE(153),
    [sym__attribute] = STATE(153),
    [sym_simple_variable] = ACTIONS(313),
    [anon_sym_LBRACK] = ACTIONS(315),
    [anon_sym_RPAREN] = ACTIONS(1149),
    [sym_comment] = ACTIONS(3),
  },
  [338] = {
    [aux_sym_param_block_repeat1] = STATE(357),
    [anon_sym_RPAREN] = ACTIONS(1149),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(1151),
  },
  [339] = {
    [aux_sym__terminator_repeat1] = STATE(422),
    [sym__newline] = STATE(422),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(1153),
    [anon_sym_CR_LF] = ACTIONS(1155),
    [anon_sym_LBRACE] = ACTIONS(1157),
  },
  [340] = {
    [anon_sym_RPAREN] = ACTIONS(1159),
    [sym_comment] = ACTIONS(3),
  },
  [341] = {
    [sym_type_expr] = STATE(75),
    [sym__string_expr] = STATE(89),
    [sym_double_quote_string] = STATE(89),
    [sym_pipeline_statement] = STATE(424),
    [sym__non_array_expression] = STATE(89),
    [sym__expression] = STATE(91),
    [sym_array_expression] = STATE(91),
    [sym_flat_array_expression] = STATE(89),
    [aux_sym_array_expression_repeat1] = STATE(90),
    [sym_variable] = STATE(89),
    [sym__special_variable] = STATE(64),
    [sym__attribute] = STATE(79),
    [sym_non_type_attribute] = STATE(79),
    [sym__newline] = STATE(266),
    [sym_command_expression] = STATE(91),
    [sym__pipeline_expression] = STATE(91),
    [sym__attributed_variable] = STATE(89),
    [aux_sym__terminator_repeat1] = STATE(266),
    [sym_scriptblock] = STATE(89),
    [aux_sym__attributed_variable_repeat1] = STATE(79),
    [sym_hashtable_expression] = STATE(89),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(181),
    [anon_sym_CR_LF] = ACTIONS(633),
    [sym_number_expr] = ACTIONS(191),
    [anon_sym_AT_LPAREN] = ACTIONS(333),
    [sym_simple_variable] = ACTIONS(181),
    [anon_sym_DOLLAR_CARET] = ACTIONS(181),
    [sym_bareword_string] = ACTIONS(149),
    [anon_sym_LBRACE] = ACTIONS(335),
    [anon_sym_DQUOTE] = ACTIONS(153),
    [anon_sym_COMMA] = ACTIONS(155),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(189),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(181),
    [anon_sym_AMP] = ACTIONS(337),
    [anon_sym_LPAREN] = ACTIONS(339),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(635),
    [anon_sym_LBRACK] = ACTIONS(343),
    [anon_sym_AT_LBRACE] = ACTIONS(345),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(347),
    [sym__braced_variable] = ACTIONS(181),
    [sym_single_quote_string] = ACTIONS(191),
  },
  [342] = {
    [sym__statement] = STATE(207),
    [sym__definition_statement] = STATE(207),
    [sym_pipeline_statement] = STATE(207),
    [sym_if_statement] = STATE(207),
    [sym__non_array_expression] = STATE(43),
    [sym__expression] = STATE(46),
    [sym_array_expression] = STATE(46),
    [sym_flat_array_expression] = STATE(43),
    [sym_variable] = STATE(47),
    [sym__special_variable] = STATE(6),
    [sym_non_type_attribute] = STATE(30),
    [sym__attribute] = STATE(30),
    [sym_function_definition] = STATE(207),
    [sym_filter_definition] = STATE(207),
    [sym_enum_definition] = STATE(207),
    [sym_while_statement] = STATE(207),
    [sym_do_while_statement] = STATE(207),
    [sym_scriptblock] = STATE(43),
    [sym_hashtable_expression] = STATE(43),
    [sym_type_expr] = STATE(26),
    [sym__string_expr] = STATE(43),
    [sym_double_quote_string] = STATE(43),
    [aux_sym_array_expression_repeat1] = STATE(45),
    [sym_class_definition] = STATE(207),
    [sym__expression_statement] = STATE(207),
    [sym_assignment_statement] = STATE(207),
    [sym_command_expression] = STATE(46),
    [sym__pipeline_expression] = STATE(46),
    [sym__attributed_variable] = STATE(47),
    [aux_sym__attributed_variable_repeat1] = STATE(30),
    [aux_sym_do_while_statement_token1] = ACTIONS(5),
    [aux_sym_function_definition_token1] = ACTIONS(7),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(9),
    [aux_sym_filter_definition_token1] = ACTIONS(11),
    [sym_number_expr] = ACTIONS(93),
    [anon_sym_AT_LPAREN] = ACTIONS(15),
    [sym_simple_variable] = ACTIONS(9),
    [anon_sym_DOLLAR_CARET] = ACTIONS(9),
    [anon_sym_COMMA] = ACTIONS(17),
    [sym_bareword_string] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [aux_sym_enum_definition_token1] = ACTIONS(23),
    [anon_sym_DQUOTE] = ACTIONS(25),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(27),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(9),
    [aux_sym_while_statement_token1] = ACTIONS(31),
    [aux_sym_if_statement_token1] = ACTIONS(97),
    [anon_sym_AMP] = ACTIONS(35),
    [anon_sym_LPAREN] = ACTIONS(37),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(41),
    [aux_sym_class_definition_token1] = ACTIONS(43),
    [anon_sym_AT_LBRACE] = ACTIONS(45),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(47),
    [sym__braced_variable] = ACTIONS(9),
    [sym_single_quote_string] = ACTIONS(561),
  },
  [343] = {
    [anon_sym_RBRACE] = ACTIONS(1161),
    [ts_builtin_sym_end] = ACTIONS(1163),
    [anon_sym_CR_LF] = ACTIONS(1163),
    [anon_sym_PIPE] = ACTIONS(1161),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(1161),
    [anon_sym_RPAREN] = ACTIONS(1161),
    [anon_sym_COMMA] = ACTIONS(1161),
    [anon_sym_SEMI] = ACTIONS(1161),
  },
  [344] = {
    [sym__statement] = STATE(207),
    [sym__definition_statement] = STATE(207),
    [sym_pipeline_statement] = STATE(207),
    [sym_if_statement] = STATE(207),
    [sym__non_array_expression] = STATE(43),
    [sym__expression] = STATE(46),
    [sym_array_expression] = STATE(46),
    [sym_flat_array_expression] = STATE(43),
    [sym_variable] = STATE(47),
    [sym__special_variable] = STATE(6),
    [sym_non_type_attribute] = STATE(30),
    [sym__attribute] = STATE(30),
    [sym_function_definition] = STATE(207),
    [sym_filter_definition] = STATE(207),
    [sym_enum_definition] = STATE(207),
    [sym_while_statement] = STATE(207),
    [sym_do_while_statement] = STATE(207),
    [sym_scriptblock] = STATE(43),
    [sym_hashtable_expression] = STATE(43),
    [sym_type_expr] = STATE(26),
    [sym__string_expr] = STATE(43),
    [sym_double_quote_string] = STATE(43),
    [aux_sym_array_expression_repeat1] = STATE(45),
    [sym_class_definition] = STATE(207),
    [sym__expression_statement] = STATE(207),
    [sym_assignment_statement] = STATE(207),
    [sym_command_expression] = STATE(46),
    [sym__pipeline_expression] = STATE(46),
    [sym__attributed_variable] = STATE(47),
    [aux_sym__attributed_variable_repeat1] = STATE(30),
    [aux_sym_do_while_statement_token1] = ACTIONS(5),
    [anon_sym_RBRACE] = ACTIONS(1165),
    [aux_sym_function_definition_token1] = ACTIONS(7),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(9),
    [aux_sym_filter_definition_token1] = ACTIONS(11),
    [sym_number_expr] = ACTIONS(93),
    [anon_sym_AT_LPAREN] = ACTIONS(15),
    [sym_simple_variable] = ACTIONS(9),
    [anon_sym_DOLLAR_CARET] = ACTIONS(9),
    [sym_bareword_string] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [aux_sym_enum_definition_token1] = ACTIONS(23),
    [anon_sym_DQUOTE] = ACTIONS(25),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(17),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(9),
    [aux_sym_while_statement_token1] = ACTIONS(31),
    [aux_sym_if_statement_token1] = ACTIONS(97),
    [anon_sym_AMP] = ACTIONS(35),
    [anon_sym_LPAREN] = ACTIONS(37),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(41),
    [aux_sym_class_definition_token1] = ACTIONS(43),
    [anon_sym_AT_LBRACE] = ACTIONS(45),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(47),
    [sym__braced_variable] = ACTIONS(9),
    [sym_single_quote_string] = ACTIONS(561),
  },
  [345] = {
    [aux_sym_source_file_repeat1] = STATE(241),
    [aux_sym__terminator_repeat1] = STATE(132),
    [sym__newline] = STATE(132),
    [sym__terminator] = STATE(426),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(267),
    [anon_sym_RBRACE] = ACTIONS(1167),
    [anon_sym_CR_LF] = ACTIONS(271),
    [anon_sym_SEMI] = ACTIONS(273),
  },
  [346] = {
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(1169),
    [ts_builtin_sym_end] = ACTIONS(1171),
    [anon_sym_RBRACE] = ACTIONS(1169),
    [anon_sym_CR_LF] = ACTIONS(1171),
    [anon_sym_SEMI] = ACTIONS(1169),
  },
  [347] = {
    [sym__newline] = STATE(427),
    [aux_sym_enum_definition_repeat1] = STATE(347),
    [aux_sym__terminator_repeat1] = STATE(427),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(1173),
    [anon_sym_RBRACE] = ACTIONS(1176),
    [sym_bareword_string] = ACTIONS(1178),
    [anon_sym_CR_LF] = ACTIONS(1181),
  },
  [348] = {
    [aux_sym__terminator_repeat1] = STATE(350),
    [sym__newline] = STATE(350),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(942),
    [anon_sym_RBRACE] = ACTIONS(1184),
    [sym_bareword_string] = ACTIONS(944),
    [anon_sym_CR_LF] = ACTIONS(946),
  },
  [349] = {
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(1176),
    [anon_sym_RBRACE] = ACTIONS(1176),
    [sym_bareword_string] = ACTIONS(1176),
    [anon_sym_CR_LF] = ACTIONS(1186),
  },
  [350] = {
    [aux_sym__terminator_repeat1] = STATE(350),
    [sym__newline] = STATE(350),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(1188),
    [anon_sym_RBRACE] = ACTIONS(507),
    [sym_bareword_string] = ACTIONS(507),
    [anon_sym_CR_LF] = ACTIONS(1191),
  },
  [351] = {
    [sym__newline] = STATE(429),
    [aux_sym_enum_definition_repeat1] = STATE(347),
    [aux_sym__terminator_repeat1] = STATE(429),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(1194),
    [anon_sym_RBRACE] = ACTIONS(1184),
    [sym_bareword_string] = ACTIONS(938),
    [anon_sym_CR_LF] = ACTIONS(1196),
  },
  [352] = {
    [sym__newline] = STATE(429),
    [aux_sym_enum_definition_repeat1] = STATE(430),
    [aux_sym__terminator_repeat1] = STATE(429),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(1194),
    [anon_sym_RBRACE] = ACTIONS(1184),
    [sym_bareword_string] = ACTIONS(1198),
    [anon_sym_CR_LF] = ACTIONS(1196),
  },
  [353] = {
    [aux_sym__attributed_variable_repeat1] = STATE(79),
    [sym_type_expr] = STATE(75),
    [sym_hashtable_expression] = STATE(432),
    [sym__string_expr] = STATE(432),
    [sym_double_quote_string] = STATE(432),
    [sym__attributed_variable] = STATE(432),
    [sym__non_array_expression] = STATE(432),
    [sym_flat_array_expression] = STATE(432),
    [sym_variable] = STATE(432),
    [sym__special_variable] = STATE(64),
    [sym_non_type_attribute] = STATE(79),
    [sym__attribute] = STATE(79),
    [sym_scriptblock] = STATE(432),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(143),
    [sym_number_expr] = ACTIONS(1200),
    [anon_sym_AT_LPAREN] = ACTIONS(147),
    [anon_sym_DOLLAR_CARET] = ACTIONS(143),
    [sym_simple_variable] = ACTIONS(143),
    [anon_sym_LBRACE] = ACTIONS(151),
    [anon_sym_DQUOTE] = ACTIONS(153),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(157),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(143),
    [anon_sym_LPAREN] = ACTIONS(161),
    [anon_sym_RPAREN] = ACTIONS(1202),
    [anon_sym_LBRACK] = ACTIONS(163),
    [sym_single_quote_string] = ACTIONS(1200),
    [anon_sym_AT_LBRACE] = ACTIONS(167),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(169),
    [sym__braced_variable] = ACTIONS(143),
    [sym_comment] = ACTIONS(3),
  },
  [354] = {
    [aux_sym_do_while_statement_token1] = ACTIONS(1204),
    [aux_sym_function_definition_token1] = ACTIONS(1204),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(1206),
    [aux_sym_filter_definition_token1] = ACTIONS(1204),
    [anon_sym_AT_LPAREN] = ACTIONS(1206),
    [anon_sym_DOLLAR_CARET] = ACTIONS(1206),
    [sym_simple_variable] = ACTIONS(1206),
    [sym_number_expr] = ACTIONS(1204),
    [anon_sym_COMMA] = ACTIONS(1204),
    [anon_sym_LBRACE] = ACTIONS(1206),
    [aux_sym_enum_definition_token1] = ACTIONS(1204),
    [anon_sym_DQUOTE] = ACTIONS(1204),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(1206),
    [sym_bareword_string] = ACTIONS(1204),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(1206),
    [aux_sym_while_statement_token1] = ACTIONS(1204),
    [aux_sym_if_statement_token1] = ACTIONS(1204),
    [anon_sym_AMP] = ACTIONS(1206),
    [anon_sym_LPAREN] = ACTIONS(1206),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(1206),
    [aux_sym_class_definition_token1] = ACTIONS(1204),
    [anon_sym_AT_LBRACE] = ACTIONS(1206),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(1206),
    [sym__braced_variable] = ACTIONS(1206),
    [sym_single_quote_string] = ACTIONS(1206),
  },
  [355] = {
    [anon_sym_RPAREN] = ACTIONS(1208),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(1208),
  },
  [356] = {
    [sym_type_expr] = STATE(153),
    [aux_sym_param_block_variable_repeat1] = STATE(151),
    [sym_param_block_variable] = STATE(355),
    [sym_non_type_attribute] = STATE(153),
    [sym__attribute] = STATE(153),
    [sym_simple_variable] = ACTIONS(313),
    [anon_sym_LBRACK] = ACTIONS(315),
    [anon_sym_RPAREN] = ACTIONS(1210),
    [sym_comment] = ACTIONS(3),
  },
  [357] = {
    [aux_sym_param_block_repeat1] = STATE(357),
    [anon_sym_RPAREN] = ACTIONS(1208),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(1212),
  },
  [358] = {
    [aux_sym__terminator_repeat1] = STATE(358),
    [sym__newline] = STATE(358),
    [sym_simple_variable] = ACTIONS(507),
    [anon_sym_LF] = ACTIONS(1215),
    [anon_sym_LBRACK] = ACTIONS(507),
    [sym_comment] = ACTIONS(39),
    [anon_sym_CR_LF] = ACTIONS(1218),
  },
  [359] = {
    [sym__statement] = STATE(106),
    [sym__definition_statement] = STATE(106),
    [sym_pipeline_statement] = STATE(106),
    [sym_if_statement] = STATE(106),
    [sym__non_array_expression] = STATE(107),
    [sym__expression] = STATE(110),
    [sym_array_expression] = STATE(110),
    [sym_flat_array_expression] = STATE(107),
    [sym_variable] = STATE(111),
    [sym__special_variable] = STATE(6),
    [sym_non_type_attribute] = STATE(30),
    [sym__attribute] = STATE(30),
    [sym_function_definition] = STATE(106),
    [sym_filter_definition] = STATE(106),
    [sym_enum_definition] = STATE(106),
    [sym_while_statement] = STATE(106),
    [sym_do_while_statement] = STATE(106),
    [sym_scriptblock] = STATE(107),
    [sym_hashtable_expression] = STATE(107),
    [sym_type_expr] = STATE(26),
    [sym__string_expr] = STATE(107),
    [sym_double_quote_string] = STATE(107),
    [aux_sym_class_method_body_repeat1] = STATE(436),
    [aux_sym_array_expression_repeat1] = STATE(109),
    [sym_class_definition] = STATE(106),
    [sym__expression_statement] = STATE(106),
    [sym_assignment_statement] = STATE(106),
    [sym_command_expression] = STATE(110),
    [sym__pipeline_expression] = STATE(110),
    [sym__attributed_variable] = STATE(111),
    [aux_sym__attributed_variable_repeat1] = STATE(30),
    [aux_sym_do_while_statement_token1] = ACTIONS(5),
    [anon_sym_RBRACE] = ACTIONS(1221),
    [aux_sym_function_definition_token1] = ACTIONS(7),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(9),
    [aux_sym_filter_definition_token1] = ACTIONS(11),
    [sym_number_expr] = ACTIONS(227),
    [anon_sym_AT_LPAREN] = ACTIONS(15),
    [sym_simple_variable] = ACTIONS(9),
    [anon_sym_DOLLAR_CARET] = ACTIONS(9),
    [sym_bareword_string] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [aux_sym_enum_definition_token1] = ACTIONS(23),
    [anon_sym_DQUOTE] = ACTIONS(25),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(17),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(9),
    [aux_sym_while_statement_token1] = ACTIONS(31),
    [aux_sym_if_statement_token1] = ACTIONS(229),
    [anon_sym_AMP] = ACTIONS(35),
    [anon_sym_LPAREN] = ACTIONS(37),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(41),
    [aux_sym_class_definition_token1] = ACTIONS(43),
    [anon_sym_AT_LBRACE] = ACTIONS(45),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(47),
    [sym__braced_variable] = ACTIONS(9),
    [sym_single_quote_string] = ACTIONS(487),
  },
  [360] = {
    [aux_sym__terminator_repeat1] = STATE(114),
    [sym__newline] = STATE(114),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(237),
    [anon_sym_CR_LF] = ACTIONS(239),
    [anon_sym_LBRACE] = ACTIONS(1223),
  },
  [361] = {
    [aux_sym__terminator_repeat1] = STATE(438),
    [sym__newline] = STATE(438),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(1225),
    [anon_sym_CR_LF] = ACTIONS(1227),
    [anon_sym_LBRACE] = ACTIONS(1223),
  },
  [362] = {
    [aux_sym__terminator_repeat1] = STATE(362),
    [sym__newline] = STATE(362),
    [anon_sym_RPAREN] = ACTIONS(507),
    [anon_sym_LF] = ACTIONS(1229),
    [sym_comment] = ACTIONS(39),
    [anon_sym_CR_LF] = ACTIONS(1232),
  },
  [363] = {
    [aux_sym_pipeline_statement_repeat1] = STATE(363),
    [anon_sym_RPAREN] = ACTIONS(767),
    [anon_sym_LF] = ACTIONS(767),
    [sym_comment] = ACTIONS(39),
    [anon_sym_CR_LF] = ACTIONS(769),
    [anon_sym_PIPE] = ACTIONS(771),
  },
  [364] = {
    [aux_sym__terminator_repeat1] = STATE(362),
    [sym__newline] = STATE(362),
    [anon_sym_RPAREN] = ACTIONS(1235),
    [anon_sym_LF] = ACTIONS(987),
    [sym_comment] = ACTIONS(39),
    [anon_sym_CR_LF] = ACTIONS(989),
  },
  [365] = {
    [aux_sym__terminator_repeat1] = STATE(440),
    [sym__newline] = STATE(440),
    [anon_sym_RPAREN] = ACTIONS(1235),
    [anon_sym_LF] = ACTIONS(1237),
    [sym_comment] = ACTIONS(39),
    [anon_sym_CR_LF] = ACTIONS(1239),
  },
  [366] = {
    [sym__statement] = STATE(106),
    [sym__definition_statement] = STATE(106),
    [sym_pipeline_statement] = STATE(106),
    [sym_if_statement] = STATE(106),
    [sym__non_array_expression] = STATE(107),
    [sym__expression] = STATE(110),
    [sym_array_expression] = STATE(110),
    [sym_flat_array_expression] = STATE(107),
    [sym_variable] = STATE(111),
    [sym__special_variable] = STATE(6),
    [sym_non_type_attribute] = STATE(30),
    [sym__attribute] = STATE(30),
    [sym_function_definition] = STATE(106),
    [sym_filter_definition] = STATE(106),
    [sym_enum_definition] = STATE(106),
    [sym_while_statement] = STATE(106),
    [sym_do_while_statement] = STATE(106),
    [sym_scriptblock] = STATE(107),
    [sym_hashtable_expression] = STATE(107),
    [sym_type_expr] = STATE(26),
    [sym__string_expr] = STATE(107),
    [sym_double_quote_string] = STATE(107),
    [aux_sym_class_method_body_repeat1] = STATE(442),
    [aux_sym_array_expression_repeat1] = STATE(109),
    [sym_class_definition] = STATE(106),
    [sym__expression_statement] = STATE(106),
    [sym_assignment_statement] = STATE(106),
    [sym_command_expression] = STATE(110),
    [sym__pipeline_expression] = STATE(110),
    [sym__attributed_variable] = STATE(111),
    [aux_sym__attributed_variable_repeat1] = STATE(30),
    [aux_sym_do_while_statement_token1] = ACTIONS(5),
    [anon_sym_RBRACE] = ACTIONS(1241),
    [aux_sym_function_definition_token1] = ACTIONS(7),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(9),
    [aux_sym_filter_definition_token1] = ACTIONS(11),
    [sym_number_expr] = ACTIONS(227),
    [anon_sym_AT_LPAREN] = ACTIONS(15),
    [sym_simple_variable] = ACTIONS(9),
    [anon_sym_DOLLAR_CARET] = ACTIONS(9),
    [sym_bareword_string] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [aux_sym_enum_definition_token1] = ACTIONS(23),
    [anon_sym_DQUOTE] = ACTIONS(25),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(17),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(9),
    [aux_sym_while_statement_token1] = ACTIONS(31),
    [aux_sym_if_statement_token1] = ACTIONS(229),
    [anon_sym_AMP] = ACTIONS(35),
    [anon_sym_LPAREN] = ACTIONS(37),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(41),
    [aux_sym_class_definition_token1] = ACTIONS(43),
    [anon_sym_AT_LBRACE] = ACTIONS(45),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(47),
    [sym__braced_variable] = ACTIONS(9),
    [sym_single_quote_string] = ACTIONS(487),
  },
  [367] = {
    [aux_sym__terminator_repeat1] = STATE(114),
    [sym__newline] = STATE(114),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(237),
    [anon_sym_CR_LF] = ACTIONS(239),
    [anon_sym_LBRACE] = ACTIONS(1243),
  },
  [368] = {
    [aux_sym__terminator_repeat1] = STATE(444),
    [sym__newline] = STATE(444),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(1245),
    [anon_sym_CR_LF] = ACTIONS(1247),
    [anon_sym_LBRACE] = ACTIONS(1243),
  },
  [369] = {
    [anon_sym_RPAREN] = ACTIONS(1249),
    [sym_comment] = ACTIONS(3),
  },
  [370] = {
    [anon_sym_RPAREN] = ACTIONS(891),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(891),
    [anon_sym_PIPE] = ACTIONS(891),
  },
  [371] = {
    [aux_sym__terminator_repeat1] = STATE(125),
    [sym__newline] = STATE(125),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(431),
    [sym_number_expr] = ACTIONS(431),
    [anon_sym_AT_LPAREN] = ACTIONS(431),
    [anon_sym_DOLLAR_CARET] = ACTIONS(431),
    [sym_simple_variable] = ACTIONS(431),
    [anon_sym_CR_LF] = ACTIONS(255),
    [anon_sym_COMMA] = ACTIONS(431),
    [anon_sym_LBRACE] = ACTIONS(431),
    [anon_sym_DQUOTE] = ACTIONS(431),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(431),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(431),
    [anon_sym_LPAREN] = ACTIONS(431),
    [anon_sym_RPAREN] = ACTIONS(1251),
    [anon_sym_LBRACK] = ACTIONS(431),
    [sym_single_quote_string] = ACTIONS(431),
    [anon_sym_AT_LBRACE] = ACTIONS(431),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(431),
    [sym__braced_variable] = ACTIONS(431),
    [anon_sym_LF] = ACTIONS(257),
    [sym_comment] = ACTIONS(39),
  },
  [372] = {
    [aux_sym_flat_array_expression_repeat1] = STATE(230),
    [aux_sym__terminator_repeat1] = STATE(447),
    [sym__newline] = STATE(447),
    [sym__terminator] = STATE(123),
    [anon_sym_RPAREN] = ACTIONS(1251),
    [anon_sym_LF] = ACTIONS(1253),
    [sym_comment] = ACTIONS(39),
    [anon_sym_CR_LF] = ACTIONS(1255),
    [anon_sym_SEMI] = ACTIONS(253),
  },
  [373] = {
    [anon_sym_RPAREN] = ACTIONS(924),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(924),
    [anon_sym_PIPE] = ACTIONS(924),
  },
  [374] = {
    [sym__statement] = STATE(207),
    [sym__definition_statement] = STATE(207),
    [sym_pipeline_statement] = STATE(207),
    [sym_if_statement] = STATE(207),
    [sym__non_array_expression] = STATE(43),
    [sym__expression] = STATE(46),
    [sym_array_expression] = STATE(46),
    [sym_flat_array_expression] = STATE(43),
    [sym_variable] = STATE(47),
    [sym__special_variable] = STATE(6),
    [sym_non_type_attribute] = STATE(30),
    [sym__attribute] = STATE(30),
    [sym_function_definition] = STATE(207),
    [sym_filter_definition] = STATE(207),
    [sym_enum_definition] = STATE(207),
    [sym_while_statement] = STATE(207),
    [sym_do_while_statement] = STATE(207),
    [sym_scriptblock] = STATE(43),
    [sym_hashtable_expression] = STATE(43),
    [sym_type_expr] = STATE(26),
    [sym__string_expr] = STATE(43),
    [sym_double_quote_string] = STATE(43),
    [aux_sym_array_expression_repeat1] = STATE(45),
    [sym_class_definition] = STATE(207),
    [sym__expression_statement] = STATE(207),
    [sym_assignment_statement] = STATE(207),
    [sym_command_expression] = STATE(46),
    [sym__pipeline_expression] = STATE(46),
    [sym__attributed_variable] = STATE(47),
    [aux_sym__attributed_variable_repeat1] = STATE(30),
    [aux_sym_do_while_statement_token1] = ACTIONS(5),
    [anon_sym_RBRACE] = ACTIONS(1257),
    [aux_sym_function_definition_token1] = ACTIONS(7),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(9),
    [aux_sym_filter_definition_token1] = ACTIONS(11),
    [sym_number_expr] = ACTIONS(93),
    [anon_sym_AT_LPAREN] = ACTIONS(15),
    [sym_simple_variable] = ACTIONS(9),
    [anon_sym_DOLLAR_CARET] = ACTIONS(9),
    [sym_bareword_string] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [aux_sym_enum_definition_token1] = ACTIONS(23),
    [anon_sym_DQUOTE] = ACTIONS(25),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(17),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(9),
    [aux_sym_while_statement_token1] = ACTIONS(31),
    [aux_sym_if_statement_token1] = ACTIONS(97),
    [anon_sym_AMP] = ACTIONS(35),
    [anon_sym_LPAREN] = ACTIONS(37),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(41),
    [aux_sym_class_definition_token1] = ACTIONS(43),
    [anon_sym_AT_LBRACE] = ACTIONS(45),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(47),
    [sym__braced_variable] = ACTIONS(9),
    [sym_single_quote_string] = ACTIONS(561),
  },
  [375] = {
    [aux_sym_source_file_repeat1] = STATE(241),
    [aux_sym__terminator_repeat1] = STATE(132),
    [sym__newline] = STATE(132),
    [sym__terminator] = STATE(449),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(267),
    [anon_sym_RBRACE] = ACTIONS(1259),
    [anon_sym_CR_LF] = ACTIONS(271),
    [anon_sym_SEMI] = ACTIONS(273),
  },
  [376] = {
    [aux_sym_source_file_repeat1] = STATE(450),
    [aux_sym__terminator_repeat1] = STATE(132),
    [sym__newline] = STATE(132),
    [sym__terminator] = STATE(449),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(267),
    [anon_sym_RBRACE] = ACTIONS(1259),
    [anon_sym_CR_LF] = ACTIONS(271),
    [anon_sym_SEMI] = ACTIONS(273),
  },
  [377] = {
    [anon_sym_RPAREN] = ACTIONS(954),
    [sym_comment] = ACTIONS(3),
    [anon_sym_EQ] = ACTIONS(954),
    [anon_sym_COMMA] = ACTIONS(954),
    [anon_sym_PIPE] = ACTIONS(954),
  },
  [378] = {
    [anon_sym_RPAREN] = ACTIONS(1065),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(1065),
    [anon_sym_PIPE] = ACTIONS(1065),
  },
  [379] = {
    [sym_hashtable_entry] = STATE(302),
    [sym_variable] = STATE(85),
    [sym__string_expr] = STATE(85),
    [sym_property_name] = STATE(87),
    [sym__special_variable] = STATE(64),
    [sym_double_quote_string] = STATE(85),
    [anon_sym_RBRACE] = ACTIONS(1261),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(143),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(143),
    [anon_sym_DOLLAR_CARET] = ACTIONS(143),
    [sym_simple_variable] = ACTIONS(143),
    [sym_comment] = ACTIONS(39),
    [sym_single_quote_string] = ACTIONS(377),
    [sym_bareword_string] = ACTIONS(187),
    [anon_sym_DQUOTE] = ACTIONS(153),
    [sym__braced_variable] = ACTIONS(143),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(157),
  },
  [380] = {
    [aux_sym__terminator_repeat1] = STATE(193),
    [sym__newline] = STATE(193),
    [sym__terminator] = STATE(452),
    [aux_sym_hashtable_expression_repeat1] = STATE(304),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(415),
    [anon_sym_RBRACE] = ACTIONS(1263),
    [anon_sym_CR_LF] = ACTIONS(419),
    [anon_sym_SEMI] = ACTIONS(421),
  },
  [381] = {
    [sym_simple_variable] = ACTIONS(1265),
    [anon_sym_LBRACK] = ACTIONS(1265),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(1265),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(1265),
    [sym__braced_variable] = ACTIONS(1265),
    [anon_sym_DOLLAR_CARET] = ACTIONS(1265),
  },
  [382] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACK] = ACTIONS(1267),
  },
  [383] = {
    [aux_sym_array_expression_repeat1] = STATE(181),
    [anon_sym_RPAREN] = ACTIONS(1269),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(387),
  },
  [384] = {
    [sym__typename_generic] = STATE(455),
    [sym__typename] = STATE(455),
    [sym__typename_array] = STATE(455),
    [sym_comment] = ACTIONS(3),
    [sym__typename_simple] = ACTIONS(1271),
  },
  [385] = {
    [anon_sym_LBRACK_RBRACK] = ACTIONS(1273),
    [anon_sym_LBRACK] = ACTIONS(1275),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(1273),
    [anon_sym_RBRACK] = ACTIONS(1273),
  },
  [386] = {
    [aux_sym__typename_generic_repeat1] = STATE(457),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACK] = ACTIONS(1277),
    [anon_sym_COMMA] = ACTIONS(1029),
  },
  [387] = {
    [anon_sym_LBRACK_RBRACK] = ACTIONS(397),
    [anon_sym_LBRACK] = ACTIONS(399),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACK] = ACTIONS(1279),
  },
  [388] = {
    [sym_type_expr] = STATE(462),
    [aux_sym__terminator_repeat1] = STATE(463),
    [sym__newline] = STATE(463),
    [sym_class_parameter] = STATE(464),
    [sym_simple_variable] = ACTIONS(1281),
    [anon_sym_LF] = ACTIONS(1283),
    [anon_sym_LBRACK] = ACTIONS(1285),
    [anon_sym_RPAREN] = ACTIONS(1287),
    [anon_sym_CR_LF] = ACTIONS(1289),
    [sym_comment] = ACTIONS(39),
  },
  [389] = {
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(1291),
    [anon_sym_CR_LF] = ACTIONS(1293),
    [anon_sym_SEMI] = ACTIONS(1291),
  },
  [390] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(1295),
  },
  [391] = {
    [aux_sym__terminator_repeat1] = STATE(467),
    [sym__newline] = STATE(467),
    [sym_simple_variable] = ACTIONS(1297),
    [anon_sym_LF] = ACTIONS(1299),
    [sym_comment] = ACTIONS(39),
    [anon_sym_CR_LF] = ACTIONS(1301),
  },
  [392] = {
    [aux_sym__terminator_repeat1] = STATE(468),
    [sym__newline] = STATE(468),
    [sym_simple_variable] = ACTIONS(431),
    [anon_sym_RBRACE] = ACTIONS(431),
    [anon_sym_LBRACK] = ACTIONS(431),
    [sym_bareword_string] = ACTIONS(431),
    [anon_sym_CR_LF] = ACTIONS(1303),
    [anon_sym_LF] = ACTIONS(1305),
    [sym_comment] = ACTIONS(39),
  },
  [393] = {
    [sym_simple_variable] = ACTIONS(1307),
    [anon_sym_RBRACE] = ACTIONS(1307),
    [anon_sym_LBRACK] = ACTIONS(1307),
    [sym_bareword_string] = ACTIONS(1309),
    [sym_comment] = ACTIONS(39),
  },
  [394] = {
    [aux_sym__terminator_repeat1] = STATE(469),
    [sym__newline] = STATE(469),
    [sym_simple_variable] = ACTIONS(431),
    [anon_sym_RBRACE] = ACTIONS(431),
    [anon_sym_LBRACK] = ACTIONS(431),
    [sym_bareword_string] = ACTIONS(431),
    [anon_sym_CR_LF] = ACTIONS(1311),
    [anon_sym_LF] = ACTIONS(1313),
    [sym_comment] = ACTIONS(39),
  },
  [395] = {
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(1315),
    [ts_builtin_sym_end] = ACTIONS(1317),
    [anon_sym_RBRACE] = ACTIONS(1315),
    [anon_sym_CR_LF] = ACTIONS(1317),
    [anon_sym_SEMI] = ACTIONS(1315),
  },
  [396] = {
    [sym_type_expr] = STATE(295),
    [sym_class_method] = STATE(396),
    [sym_class_property] = STATE(296),
    [aux_sym_class_definition_repeat1] = STATE(396),
    [sym_simple_variable] = ACTIONS(1319),
    [anon_sym_RBRACE] = ACTIONS(1307),
    [anon_sym_LBRACK] = ACTIONS(1322),
    [sym_bareword_string] = ACTIONS(1325),
    [sym_comment] = ACTIONS(39),
  },
  [397] = {
    [sym_type_expr] = STATE(295),
    [sym_class_method] = STATE(396),
    [sym_class_property] = STATE(296),
    [aux_sym_class_definition_repeat1] = STATE(396),
    [sym_simple_variable] = ACTIONS(698),
    [anon_sym_LBRACK] = ACTIONS(700),
    [anon_sym_RBRACE] = ACTIONS(1328),
    [sym_bareword_string] = ACTIONS(704),
    [sym_comment] = ACTIONS(39),
  },
  [398] = {
    [sym_type_expr] = STATE(295),
    [sym_class_method] = STATE(471),
    [sym_class_property] = STATE(296),
    [aux_sym_class_definition_repeat1] = STATE(471),
    [sym_simple_variable] = ACTIONS(698),
    [anon_sym_LBRACK] = ACTIONS(700),
    [anon_sym_RBRACE] = ACTIONS(1328),
    [sym_bareword_string] = ACTIONS(704),
    [sym_comment] = ACTIONS(39),
  },
  [399] = {
    [anon_sym_RBRACE] = ACTIONS(1330),
    [ts_builtin_sym_end] = ACTIONS(1332),
    [anon_sym_CR_LF] = ACTIONS(1332),
    [anon_sym_PIPE] = ACTIONS(1330),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(1330),
    [anon_sym_RPAREN] = ACTIONS(1330),
    [anon_sym_COMMA] = ACTIONS(1330),
    [anon_sym_SEMI] = ACTIONS(1330),
  },
  [400] = {
    [aux_sym__terminator_repeat1] = STATE(472),
    [sym__newline] = STATE(472),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(431),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(431),
    [anon_sym_CR_LF] = ACTIONS(1334),
    [anon_sym_DOLLAR_CARET] = ACTIONS(431),
    [sym_simple_variable] = ACTIONS(431),
    [anon_sym_LF] = ACTIONS(1336),
    [sym_single_quote_string] = ACTIONS(431),
    [sym_bareword_string] = ACTIONS(431),
    [anon_sym_DQUOTE] = ACTIONS(431),
    [sym__braced_variable] = ACTIONS(431),
    [sym_comment] = ACTIONS(39),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(431),
  },
  [401] = {
    [aux_sym__terminator_repeat1] = STATE(473),
    [sym__newline] = STATE(473),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(431),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(431),
    [anon_sym_CR_LF] = ACTIONS(1338),
    [anon_sym_DOLLAR_CARET] = ACTIONS(431),
    [sym_simple_variable] = ACTIONS(431),
    [anon_sym_LF] = ACTIONS(1340),
    [sym_single_quote_string] = ACTIONS(431),
    [sym_bareword_string] = ACTIONS(431),
    [anon_sym_DQUOTE] = ACTIONS(431),
    [sym__braced_variable] = ACTIONS(431),
    [sym_comment] = ACTIONS(39),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(431),
  },
  [402] = {
    [sym_hashtable_entry] = STATE(302),
    [sym_variable] = STATE(85),
    [sym__string_expr] = STATE(85),
    [sym_property_name] = STATE(87),
    [sym__special_variable] = STATE(64),
    [sym_double_quote_string] = STATE(85),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(143),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(143),
    [anon_sym_DOLLAR_CARET] = ACTIONS(143),
    [sym_simple_variable] = ACTIONS(143),
    [sym_comment] = ACTIONS(39),
    [sym_single_quote_string] = ACTIONS(377),
    [sym_bareword_string] = ACTIONS(187),
    [anon_sym_DQUOTE] = ACTIONS(153),
    [sym__braced_variable] = ACTIONS(143),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(157),
  },
  [403] = {
    [aux_sym_array_expression_repeat1] = STATE(404),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(445),
    [anon_sym_RBRACE] = ACTIONS(445),
    [anon_sym_COMMA] = ACTIONS(17),
    [anon_sym_CR_LF] = ACTIONS(447),
    [anon_sym_SEMI] = ACTIONS(445),
  },
  [404] = {
    [aux_sym_array_expression_repeat1] = STATE(404),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(309),
    [anon_sym_RBRACE] = ACTIONS(309),
    [anon_sym_COMMA] = ACTIONS(449),
    [anon_sym_CR_LF] = ACTIONS(311),
    [anon_sym_SEMI] = ACTIONS(309),
  },
  [405] = {
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(1342),
    [anon_sym_RBRACE] = ACTIONS(1342),
    [anon_sym_CR_LF] = ACTIONS(1344),
    [anon_sym_SEMI] = ACTIONS(1342),
  },
  [406] = {
    [sym_hashtable_entry] = STATE(302),
    [sym_variable] = STATE(85),
    [sym__string_expr] = STATE(85),
    [sym_property_name] = STATE(87),
    [sym__special_variable] = STATE(64),
    [sym_double_quote_string] = STATE(85),
    [anon_sym_RBRACE] = ACTIONS(1346),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(143),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(143),
    [anon_sym_DOLLAR_CARET] = ACTIONS(143),
    [sym_simple_variable] = ACTIONS(143),
    [sym_comment] = ACTIONS(39),
    [sym_single_quote_string] = ACTIONS(377),
    [sym_bareword_string] = ACTIONS(187),
    [anon_sym_DQUOTE] = ACTIONS(153),
    [sym__braced_variable] = ACTIONS(143),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(157),
  },
  [407] = {
    [anon_sym_RPAREN] = ACTIONS(1099),
    [sym_comment] = ACTIONS(3),
    [anon_sym_PIPE] = ACTIONS(1099),
  },
  [408] = {
    [aux_sym__terminator_repeat1] = STATE(140),
    [sym__newline] = STATE(140),
    [aux_sym_do_while_statement_token1] = ACTIONS(740),
    [aux_sym_function_definition_token1] = ACTIONS(740),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(740),
    [aux_sym_filter_definition_token1] = ACTIONS(740),
    [anon_sym_AT_LPAREN] = ACTIONS(740),
    [anon_sym_DOLLAR_CARET] = ACTIONS(740),
    [sym_simple_variable] = ACTIONS(740),
    [sym_number_expr] = ACTIONS(740),
    [anon_sym_CR_LF] = ACTIONS(281),
    [anon_sym_COMMA] = ACTIONS(740),
    [anon_sym_LBRACE] = ACTIONS(740),
    [aux_sym_enum_definition_token1] = ACTIONS(740),
    [anon_sym_DQUOTE] = ACTIONS(740),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(740),
    [sym_bareword_string] = ACTIONS(740),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(740),
    [aux_sym_while_statement_token1] = ACTIONS(740),
    [aux_sym_if_statement_token1] = ACTIONS(740),
    [anon_sym_AMP] = ACTIONS(740),
    [anon_sym_LPAREN] = ACTIONS(740),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(740),
    [aux_sym_class_definition_token1] = ACTIONS(740),
    [anon_sym_AT_LBRACE] = ACTIONS(740),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(740),
    [sym__braced_variable] = ACTIONS(740),
    [sym_single_quote_string] = ACTIONS(740),
    [anon_sym_LF] = ACTIONS(283),
  },
  [409] = {
    [anon_sym_RPAREN] = ACTIONS(1348),
    [sym_comment] = ACTIONS(3),
  },
  [410] = {
    [sym_type_expr] = STATE(75),
    [sym__string_expr] = STATE(89),
    [sym_double_quote_string] = STATE(89),
    [sym_pipeline_statement] = STATE(476),
    [sym__non_array_expression] = STATE(89),
    [sym__expression] = STATE(91),
    [sym_array_expression] = STATE(91),
    [sym_flat_array_expression] = STATE(89),
    [aux_sym_array_expression_repeat1] = STATE(90),
    [sym_variable] = STATE(89),
    [sym__special_variable] = STATE(64),
    [sym_non_type_attribute] = STATE(79),
    [sym__attribute] = STATE(79),
    [sym_command_expression] = STATE(91),
    [sym__pipeline_expression] = STATE(91),
    [sym__attributed_variable] = STATE(89),
    [sym_scriptblock] = STATE(89),
    [aux_sym__attributed_variable_repeat1] = STATE(79),
    [sym_hashtable_expression] = STATE(89),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(143),
    [sym_number_expr] = ACTIONS(191),
    [anon_sym_AT_LPAREN] = ACTIONS(147),
    [anon_sym_DOLLAR_CARET] = ACTIONS(143),
    [sym_simple_variable] = ACTIONS(143),
    [sym_bareword_string] = ACTIONS(149),
    [anon_sym_LBRACE] = ACTIONS(151),
    [anon_sym_DQUOTE] = ACTIONS(153),
    [anon_sym_COMMA] = ACTIONS(155),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(157),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(143),
    [anon_sym_AMP] = ACTIONS(159),
    [anon_sym_LPAREN] = ACTIONS(161),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(163),
    [sym_single_quote_string] = ACTIONS(193),
    [anon_sym_AT_LBRACE] = ACTIONS(167),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(169),
    [sym__braced_variable] = ACTIONS(143),
  },
  [411] = {
    [aux_sym__terminator_repeat1] = STATE(160),
    [sym__newline] = STATE(160),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(325),
    [anon_sym_CR_LF] = ACTIONS(327),
    [anon_sym_LPAREN] = ACTIONS(1350),
  },
  [412] = {
    [aux_sym__terminator_repeat1] = STATE(479),
    [sym__newline] = STATE(479),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(1352),
    [anon_sym_CR_LF] = ACTIONS(1354),
    [anon_sym_LBRACE] = ACTIONS(1356),
  },
  [413] = {
    [anon_sym_RPAREN] = ACTIONS(1358),
    [sym_comment] = ACTIONS(3),
  },
  [414] = {
    [sym_type_expr] = STATE(75),
    [sym__string_expr] = STATE(89),
    [sym_double_quote_string] = STATE(89),
    [sym_pipeline_statement] = STATE(481),
    [sym__non_array_expression] = STATE(89),
    [sym__expression] = STATE(91),
    [sym_array_expression] = STATE(91),
    [sym_flat_array_expression] = STATE(89),
    [aux_sym_array_expression_repeat1] = STATE(90),
    [sym_variable] = STATE(89),
    [sym__special_variable] = STATE(64),
    [sym__attribute] = STATE(79),
    [sym_non_type_attribute] = STATE(79),
    [sym__newline] = STATE(266),
    [sym_command_expression] = STATE(91),
    [sym__pipeline_expression] = STATE(91),
    [sym__attributed_variable] = STATE(89),
    [aux_sym__terminator_repeat1] = STATE(266),
    [sym_scriptblock] = STATE(89),
    [aux_sym__attributed_variable_repeat1] = STATE(79),
    [sym_hashtable_expression] = STATE(89),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(181),
    [anon_sym_CR_LF] = ACTIONS(633),
    [sym_number_expr] = ACTIONS(191),
    [anon_sym_AT_LPAREN] = ACTIONS(333),
    [sym_simple_variable] = ACTIONS(181),
    [anon_sym_DOLLAR_CARET] = ACTIONS(181),
    [sym_bareword_string] = ACTIONS(149),
    [anon_sym_LBRACE] = ACTIONS(335),
    [anon_sym_DQUOTE] = ACTIONS(153),
    [anon_sym_COMMA] = ACTIONS(155),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(189),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(181),
    [anon_sym_AMP] = ACTIONS(337),
    [anon_sym_LPAREN] = ACTIONS(339),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(635),
    [anon_sym_LBRACK] = ACTIONS(343),
    [anon_sym_AT_LBRACE] = ACTIONS(345),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(347),
    [sym__braced_variable] = ACTIONS(181),
    [sym_single_quote_string] = ACTIONS(191),
  },
  [415] = {
    [aux_sym__terminator_repeat1] = STATE(482),
    [sym__newline] = STATE(482),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(1360),
    [anon_sym_CR_LF] = ACTIONS(1362),
    [anon_sym_LPAREN] = ACTIONS(1350),
  },
  [416] = {
    [aux_sym__terminator_repeat1] = STATE(323),
    [sym__newline] = STATE(323),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(788),
    [aux_sym_while_statement_token1] = ACTIONS(1364),
    [anon_sym_CR_LF] = ACTIONS(792),
  },
  [417] = {
    [aux_sym__terminator_repeat1] = STATE(484),
    [sym__newline] = STATE(484),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(1366),
    [aux_sym_while_statement_token1] = ACTIONS(1364),
    [anon_sym_CR_LF] = ACTIONS(1368),
  },
  [418] = {
    [anon_sym_RBRACE] = ACTIONS(1370),
    [ts_builtin_sym_end] = ACTIONS(1372),
    [anon_sym_CR_LF] = ACTIONS(1372),
    [anon_sym_PIPE] = ACTIONS(1370),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(1370),
    [anon_sym_RPAREN] = ACTIONS(1370),
    [anon_sym_COMMA] = ACTIONS(1370),
    [anon_sym_SEMI] = ACTIONS(1370),
  },
  [419] = {
    [aux_sym_do_while_statement_token1] = ACTIONS(1204),
    [aux_sym_function_definition_token1] = ACTIONS(1204),
    [anon_sym_CR_LF] = ACTIONS(1206),
    [aux_sym_filter_definition_token1] = ACTIONS(1204),
    [anon_sym_AT_LPAREN] = ACTIONS(1204),
    [anon_sym_DOLLAR_CARET] = ACTIONS(1204),
    [sym_simple_variable] = ACTIONS(1204),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(1204),
    [sym_number_expr] = ACTIONS(1204),
    [anon_sym_COMMA] = ACTIONS(1204),
    [anon_sym_LBRACE] = ACTIONS(1204),
    [aux_sym_enum_definition_token1] = ACTIONS(1204),
    [anon_sym_DQUOTE] = ACTIONS(1204),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(1204),
    [sym_bareword_string] = ACTIONS(1204),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(1204),
    [aux_sym_while_statement_token1] = ACTIONS(1204),
    [aux_sym_if_statement_token1] = ACTIONS(1204),
    [anon_sym_AMP] = ACTIONS(1204),
    [anon_sym_LPAREN] = ACTIONS(1204),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(1204),
    [aux_sym_class_definition_token1] = ACTIONS(1204),
    [anon_sym_AT_LBRACE] = ACTIONS(1204),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(1204),
    [sym__braced_variable] = ACTIONS(1204),
    [anon_sym_LBRACK] = ACTIONS(1204),
    [sym_single_quote_string] = ACTIONS(1204),
  },
  [420] = {
    [sym_type_expr] = STATE(153),
    [aux_sym_param_block_variable_repeat1] = STATE(151),
    [sym_param_block_variable] = STATE(355),
    [sym_non_type_attribute] = STATE(153),
    [sym__attribute] = STATE(153),
    [sym_simple_variable] = ACTIONS(313),
    [anon_sym_LBRACK] = ACTIONS(315),
    [anon_sym_RPAREN] = ACTIONS(1374),
    [sym_comment] = ACTIONS(3),
  },
  [421] = {
    [sym__statement] = STATE(106),
    [sym__definition_statement] = STATE(106),
    [sym_pipeline_statement] = STATE(106),
    [sym_if_statement] = STATE(106),
    [sym__non_array_expression] = STATE(107),
    [sym__expression] = STATE(110),
    [sym_array_expression] = STATE(110),
    [sym_flat_array_expression] = STATE(107),
    [sym_variable] = STATE(111),
    [sym__special_variable] = STATE(6),
    [sym_non_type_attribute] = STATE(30),
    [sym__attribute] = STATE(30),
    [sym_function_definition] = STATE(106),
    [sym_filter_definition] = STATE(106),
    [sym_enum_definition] = STATE(106),
    [sym_while_statement] = STATE(106),
    [sym_do_while_statement] = STATE(106),
    [sym_scriptblock] = STATE(107),
    [sym_hashtable_expression] = STATE(107),
    [sym_type_expr] = STATE(26),
    [sym__string_expr] = STATE(107),
    [sym_double_quote_string] = STATE(107),
    [aux_sym_class_method_body_repeat1] = STATE(487),
    [aux_sym_array_expression_repeat1] = STATE(109),
    [sym_class_definition] = STATE(106),
    [sym__expression_statement] = STATE(106),
    [sym_assignment_statement] = STATE(106),
    [sym_command_expression] = STATE(110),
    [sym__pipeline_expression] = STATE(110),
    [sym__attributed_variable] = STATE(111),
    [aux_sym__attributed_variable_repeat1] = STATE(30),
    [aux_sym_do_while_statement_token1] = ACTIONS(5),
    [anon_sym_RBRACE] = ACTIONS(1376),
    [aux_sym_function_definition_token1] = ACTIONS(7),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(9),
    [aux_sym_filter_definition_token1] = ACTIONS(11),
    [sym_number_expr] = ACTIONS(227),
    [anon_sym_AT_LPAREN] = ACTIONS(15),
    [sym_simple_variable] = ACTIONS(9),
    [anon_sym_DOLLAR_CARET] = ACTIONS(9),
    [sym_bareword_string] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [aux_sym_enum_definition_token1] = ACTIONS(23),
    [anon_sym_DQUOTE] = ACTIONS(25),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(17),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(9),
    [aux_sym_while_statement_token1] = ACTIONS(31),
    [aux_sym_if_statement_token1] = ACTIONS(229),
    [anon_sym_AMP] = ACTIONS(35),
    [anon_sym_LPAREN] = ACTIONS(37),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(41),
    [aux_sym_class_definition_token1] = ACTIONS(43),
    [anon_sym_AT_LBRACE] = ACTIONS(45),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(47),
    [sym__braced_variable] = ACTIONS(9),
    [sym_single_quote_string] = ACTIONS(487),
  },
  [422] = {
    [aux_sym__terminator_repeat1] = STATE(114),
    [sym__newline] = STATE(114),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(237),
    [anon_sym_CR_LF] = ACTIONS(239),
    [anon_sym_LBRACE] = ACTIONS(1378),
  },
  [423] = {
    [aux_sym__terminator_repeat1] = STATE(489),
    [sym__newline] = STATE(489),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(1380),
    [anon_sym_CR_LF] = ACTIONS(1382),
    [anon_sym_LBRACE] = ACTIONS(1378),
  },
  [424] = {
    [anon_sym_RPAREN] = ACTIONS(1384),
    [sym_comment] = ACTIONS(3),
  },
  [425] = {
    [anon_sym_RBRACE] = ACTIONS(1386),
    [ts_builtin_sym_end] = ACTIONS(1388),
    [anon_sym_CR_LF] = ACTIONS(1388),
    [anon_sym_PIPE] = ACTIONS(1386),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(1386),
    [anon_sym_RPAREN] = ACTIONS(1386),
    [anon_sym_COMMA] = ACTIONS(1386),
    [anon_sym_SEMI] = ACTIONS(1386),
  },
  [426] = {
    [sym__statement] = STATE(207),
    [sym__definition_statement] = STATE(207),
    [sym_pipeline_statement] = STATE(207),
    [sym_if_statement] = STATE(207),
    [sym__non_array_expression] = STATE(43),
    [sym__expression] = STATE(46),
    [sym_array_expression] = STATE(46),
    [sym_flat_array_expression] = STATE(43),
    [sym_variable] = STATE(47),
    [sym__special_variable] = STATE(6),
    [sym_non_type_attribute] = STATE(30),
    [sym__attribute] = STATE(30),
    [sym_function_definition] = STATE(207),
    [sym_filter_definition] = STATE(207),
    [sym_enum_definition] = STATE(207),
    [sym_while_statement] = STATE(207),
    [sym_do_while_statement] = STATE(207),
    [sym_scriptblock] = STATE(43),
    [sym_hashtable_expression] = STATE(43),
    [sym_type_expr] = STATE(26),
    [sym__string_expr] = STATE(43),
    [sym_double_quote_string] = STATE(43),
    [aux_sym_array_expression_repeat1] = STATE(45),
    [sym_class_definition] = STATE(207),
    [sym__expression_statement] = STATE(207),
    [sym_assignment_statement] = STATE(207),
    [sym_command_expression] = STATE(46),
    [sym__pipeline_expression] = STATE(46),
    [sym__attributed_variable] = STATE(47),
    [aux_sym__attributed_variable_repeat1] = STATE(30),
    [aux_sym_do_while_statement_token1] = ACTIONS(5),
    [anon_sym_RBRACE] = ACTIONS(1390),
    [aux_sym_function_definition_token1] = ACTIONS(7),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(9),
    [aux_sym_filter_definition_token1] = ACTIONS(11),
    [sym_number_expr] = ACTIONS(93),
    [anon_sym_AT_LPAREN] = ACTIONS(15),
    [sym_simple_variable] = ACTIONS(9),
    [anon_sym_DOLLAR_CARET] = ACTIONS(9),
    [sym_bareword_string] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [aux_sym_enum_definition_token1] = ACTIONS(23),
    [anon_sym_DQUOTE] = ACTIONS(25),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(17),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(9),
    [aux_sym_while_statement_token1] = ACTIONS(31),
    [aux_sym_if_statement_token1] = ACTIONS(97),
    [anon_sym_AMP] = ACTIONS(35),
    [anon_sym_LPAREN] = ACTIONS(37),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(41),
    [aux_sym_class_definition_token1] = ACTIONS(43),
    [anon_sym_AT_LBRACE] = ACTIONS(45),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(47),
    [sym__braced_variable] = ACTIONS(9),
    [sym_single_quote_string] = ACTIONS(561),
  },
  [427] = {
    [aux_sym__terminator_repeat1] = STATE(492),
    [sym__newline] = STATE(492),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(1392),
    [sym_bareword_string] = ACTIONS(944),
    [anon_sym_CR_LF] = ACTIONS(1394),
  },
  [428] = {
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(1396),
    [ts_builtin_sym_end] = ACTIONS(1398),
    [anon_sym_RBRACE] = ACTIONS(1396),
    [anon_sym_CR_LF] = ACTIONS(1398),
    [anon_sym_SEMI] = ACTIONS(1396),
  },
  [429] = {
    [aux_sym__terminator_repeat1] = STATE(350),
    [sym__newline] = STATE(350),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(942),
    [anon_sym_RBRACE] = ACTIONS(1400),
    [sym_bareword_string] = ACTIONS(944),
    [anon_sym_CR_LF] = ACTIONS(946),
  },
  [430] = {
    [sym__newline] = STATE(494),
    [aux_sym_enum_definition_repeat1] = STATE(347),
    [aux_sym__terminator_repeat1] = STATE(494),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(1402),
    [anon_sym_RBRACE] = ACTIONS(1400),
    [sym_bareword_string] = ACTIONS(938),
    [anon_sym_CR_LF] = ACTIONS(1404),
  },
  [431] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACK] = ACTIONS(1406),
  },
  [432] = {
    [aux_sym_array_expression_repeat1] = STATE(497),
    [anon_sym_RPAREN] = ACTIONS(1408),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(387),
  },
  [433] = {
    [aux_sym_do_while_statement_token1] = ACTIONS(1410),
    [aux_sym_function_definition_token1] = ACTIONS(1410),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(1412),
    [aux_sym_filter_definition_token1] = ACTIONS(1410),
    [anon_sym_AT_LPAREN] = ACTIONS(1412),
    [anon_sym_DOLLAR_CARET] = ACTIONS(1412),
    [sym_simple_variable] = ACTIONS(1412),
    [sym_number_expr] = ACTIONS(1410),
    [anon_sym_COMMA] = ACTIONS(1410),
    [anon_sym_LBRACE] = ACTIONS(1412),
    [aux_sym_enum_definition_token1] = ACTIONS(1410),
    [anon_sym_DQUOTE] = ACTIONS(1410),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(1412),
    [sym_bareword_string] = ACTIONS(1410),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(1412),
    [aux_sym_while_statement_token1] = ACTIONS(1410),
    [aux_sym_if_statement_token1] = ACTIONS(1410),
    [anon_sym_AMP] = ACTIONS(1412),
    [anon_sym_LPAREN] = ACTIONS(1412),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(1412),
    [aux_sym_class_definition_token1] = ACTIONS(1410),
    [anon_sym_AT_LBRACE] = ACTIONS(1412),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(1412),
    [sym__braced_variable] = ACTIONS(1412),
    [sym_single_quote_string] = ACTIONS(1412),
  },
  [434] = {
    [sym_type_expr] = STATE(153),
    [aux_sym_param_block_variable_repeat1] = STATE(151),
    [sym_param_block_variable] = STATE(355),
    [sym_non_type_attribute] = STATE(153),
    [sym__attribute] = STATE(153),
    [sym_simple_variable] = ACTIONS(313),
    [anon_sym_LBRACK] = ACTIONS(315),
    [sym_comment] = ACTIONS(3),
  },
  [435] = {
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(1414),
    [ts_builtin_sym_end] = ACTIONS(1416),
    [anon_sym_RBRACE] = ACTIONS(1414),
    [anon_sym_CR_LF] = ACTIONS(1416),
    [anon_sym_SEMI] = ACTIONS(1414),
  },
  [436] = {
    [sym__statement] = STATE(106),
    [sym__definition_statement] = STATE(106),
    [sym_pipeline_statement] = STATE(106),
    [sym_if_statement] = STATE(106),
    [sym__non_array_expression] = STATE(107),
    [sym__expression] = STATE(110),
    [sym_array_expression] = STATE(110),
    [sym_flat_array_expression] = STATE(107),
    [sym_variable] = STATE(111),
    [sym__special_variable] = STATE(6),
    [sym_non_type_attribute] = STATE(30),
    [sym__attribute] = STATE(30),
    [sym_function_definition] = STATE(106),
    [sym_filter_definition] = STATE(106),
    [sym_enum_definition] = STATE(106),
    [sym_while_statement] = STATE(106),
    [sym_do_while_statement] = STATE(106),
    [sym_scriptblock] = STATE(107),
    [sym_hashtable_expression] = STATE(107),
    [sym_type_expr] = STATE(26),
    [sym__string_expr] = STATE(107),
    [sym_double_quote_string] = STATE(107),
    [aux_sym_class_method_body_repeat1] = STATE(221),
    [aux_sym_array_expression_repeat1] = STATE(109),
    [sym_class_definition] = STATE(106),
    [sym__expression_statement] = STATE(106),
    [sym_assignment_statement] = STATE(106),
    [sym_command_expression] = STATE(110),
    [sym__pipeline_expression] = STATE(110),
    [sym__attributed_variable] = STATE(111),
    [aux_sym__attributed_variable_repeat1] = STATE(30),
    [aux_sym_do_while_statement_token1] = ACTIONS(5),
    [anon_sym_RBRACE] = ACTIONS(1418),
    [aux_sym_function_definition_token1] = ACTIONS(7),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(9),
    [aux_sym_filter_definition_token1] = ACTIONS(11),
    [sym_number_expr] = ACTIONS(227),
    [anon_sym_AT_LPAREN] = ACTIONS(15),
    [sym_simple_variable] = ACTIONS(9),
    [anon_sym_DOLLAR_CARET] = ACTIONS(9),
    [sym_bareword_string] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [aux_sym_enum_definition_token1] = ACTIONS(23),
    [anon_sym_DQUOTE] = ACTIONS(25),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(17),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(9),
    [aux_sym_while_statement_token1] = ACTIONS(31),
    [aux_sym_if_statement_token1] = ACTIONS(229),
    [anon_sym_AMP] = ACTIONS(35),
    [anon_sym_LPAREN] = ACTIONS(37),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(41),
    [aux_sym_class_definition_token1] = ACTIONS(43),
    [anon_sym_AT_LBRACE] = ACTIONS(45),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(47),
    [sym__braced_variable] = ACTIONS(9),
    [sym_single_quote_string] = ACTIONS(487),
  },
  [437] = {
    [sym__statement] = STATE(106),
    [sym__definition_statement] = STATE(106),
    [sym_pipeline_statement] = STATE(106),
    [sym_if_statement] = STATE(106),
    [sym__non_array_expression] = STATE(107),
    [sym__expression] = STATE(110),
    [sym_array_expression] = STATE(110),
    [sym_flat_array_expression] = STATE(107),
    [sym_variable] = STATE(111),
    [sym__special_variable] = STATE(6),
    [sym_non_type_attribute] = STATE(30),
    [sym__attribute] = STATE(30),
    [sym_function_definition] = STATE(106),
    [sym_filter_definition] = STATE(106),
    [sym_enum_definition] = STATE(106),
    [sym_while_statement] = STATE(106),
    [sym_do_while_statement] = STATE(106),
    [sym_scriptblock] = STATE(107),
    [sym_hashtable_expression] = STATE(107),
    [sym_type_expr] = STATE(26),
    [sym__string_expr] = STATE(107),
    [sym_double_quote_string] = STATE(107),
    [aux_sym_class_method_body_repeat1] = STATE(499),
    [aux_sym_array_expression_repeat1] = STATE(109),
    [sym_class_definition] = STATE(106),
    [sym__expression_statement] = STATE(106),
    [sym_assignment_statement] = STATE(106),
    [sym_command_expression] = STATE(110),
    [sym__pipeline_expression] = STATE(110),
    [sym__attributed_variable] = STATE(111),
    [aux_sym__attributed_variable_repeat1] = STATE(30),
    [aux_sym_do_while_statement_token1] = ACTIONS(5),
    [anon_sym_RBRACE] = ACTIONS(1418),
    [aux_sym_function_definition_token1] = ACTIONS(7),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(9),
    [aux_sym_filter_definition_token1] = ACTIONS(11),
    [sym_number_expr] = ACTIONS(227),
    [anon_sym_AT_LPAREN] = ACTIONS(15),
    [sym_simple_variable] = ACTIONS(9),
    [anon_sym_DOLLAR_CARET] = ACTIONS(9),
    [sym_bareword_string] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [aux_sym_enum_definition_token1] = ACTIONS(23),
    [anon_sym_DQUOTE] = ACTIONS(25),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(17),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(9),
    [aux_sym_while_statement_token1] = ACTIONS(31),
    [aux_sym_if_statement_token1] = ACTIONS(229),
    [anon_sym_AMP] = ACTIONS(35),
    [anon_sym_LPAREN] = ACTIONS(37),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(41),
    [aux_sym_class_definition_token1] = ACTIONS(43),
    [anon_sym_AT_LBRACE] = ACTIONS(45),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(47),
    [sym__braced_variable] = ACTIONS(9),
    [sym_single_quote_string] = ACTIONS(487),
  },
  [438] = {
    [aux_sym__terminator_repeat1] = STATE(114),
    [sym__newline] = STATE(114),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(237),
    [anon_sym_CR_LF] = ACTIONS(239),
    [anon_sym_LBRACE] = ACTIONS(1420),
  },
  [439] = {
    [aux_sym__terminator_repeat1] = STATE(501),
    [sym__newline] = STATE(501),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(1422),
    [anon_sym_CR_LF] = ACTIONS(1424),
    [anon_sym_LBRACE] = ACTIONS(1420),
  },
  [440] = {
    [aux_sym__terminator_repeat1] = STATE(362),
    [sym__newline] = STATE(362),
    [anon_sym_RPAREN] = ACTIONS(1426),
    [anon_sym_LF] = ACTIONS(987),
    [sym_comment] = ACTIONS(39),
    [anon_sym_CR_LF] = ACTIONS(989),
  },
  [441] = {
    [aux_sym_if_statement_repeat1] = STATE(505),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(1428),
    [ts_builtin_sym_end] = ACTIONS(1430),
    [aux_sym_if_statement_token2] = ACTIONS(1432),
    [anon_sym_CR_LF] = ACTIONS(1430),
    [anon_sym_SEMI] = ACTIONS(1428),
    [aux_sym_if_statement_token3] = ACTIONS(1434),
  },
  [442] = {
    [sym__statement] = STATE(106),
    [sym__definition_statement] = STATE(106),
    [sym_pipeline_statement] = STATE(106),
    [sym_if_statement] = STATE(106),
    [sym__non_array_expression] = STATE(107),
    [sym__expression] = STATE(110),
    [sym_array_expression] = STATE(110),
    [sym_flat_array_expression] = STATE(107),
    [sym_variable] = STATE(111),
    [sym__special_variable] = STATE(6),
    [sym_non_type_attribute] = STATE(30),
    [sym__attribute] = STATE(30),
    [sym_function_definition] = STATE(106),
    [sym_filter_definition] = STATE(106),
    [sym_enum_definition] = STATE(106),
    [sym_while_statement] = STATE(106),
    [sym_do_while_statement] = STATE(106),
    [sym_scriptblock] = STATE(107),
    [sym_hashtable_expression] = STATE(107),
    [sym_type_expr] = STATE(26),
    [sym__string_expr] = STATE(107),
    [sym_double_quote_string] = STATE(107),
    [aux_sym_class_method_body_repeat1] = STATE(221),
    [aux_sym_array_expression_repeat1] = STATE(109),
    [sym_class_definition] = STATE(106),
    [sym__expression_statement] = STATE(106),
    [sym_assignment_statement] = STATE(106),
    [sym_command_expression] = STATE(110),
    [sym__pipeline_expression] = STATE(110),
    [sym__attributed_variable] = STATE(111),
    [aux_sym__attributed_variable_repeat1] = STATE(30),
    [aux_sym_do_while_statement_token1] = ACTIONS(5),
    [anon_sym_RBRACE] = ACTIONS(1436),
    [aux_sym_function_definition_token1] = ACTIONS(7),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(9),
    [aux_sym_filter_definition_token1] = ACTIONS(11),
    [sym_number_expr] = ACTIONS(227),
    [anon_sym_AT_LPAREN] = ACTIONS(15),
    [sym_simple_variable] = ACTIONS(9),
    [anon_sym_DOLLAR_CARET] = ACTIONS(9),
    [sym_bareword_string] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [aux_sym_enum_definition_token1] = ACTIONS(23),
    [anon_sym_DQUOTE] = ACTIONS(25),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(17),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(9),
    [aux_sym_while_statement_token1] = ACTIONS(31),
    [aux_sym_if_statement_token1] = ACTIONS(229),
    [anon_sym_AMP] = ACTIONS(35),
    [anon_sym_LPAREN] = ACTIONS(37),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(41),
    [aux_sym_class_definition_token1] = ACTIONS(43),
    [anon_sym_AT_LBRACE] = ACTIONS(45),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(47),
    [sym__braced_variable] = ACTIONS(9),
    [sym_single_quote_string] = ACTIONS(487),
  },
  [443] = {
    [sym__statement] = STATE(106),
    [sym__definition_statement] = STATE(106),
    [sym_pipeline_statement] = STATE(106),
    [sym_if_statement] = STATE(106),
    [sym__non_array_expression] = STATE(107),
    [sym__expression] = STATE(110),
    [sym_array_expression] = STATE(110),
    [sym_flat_array_expression] = STATE(107),
    [sym_variable] = STATE(111),
    [sym__special_variable] = STATE(6),
    [sym_non_type_attribute] = STATE(30),
    [sym__attribute] = STATE(30),
    [sym_function_definition] = STATE(106),
    [sym_filter_definition] = STATE(106),
    [sym_enum_definition] = STATE(106),
    [sym_while_statement] = STATE(106),
    [sym_do_while_statement] = STATE(106),
    [sym_scriptblock] = STATE(107),
    [sym_hashtable_expression] = STATE(107),
    [sym_type_expr] = STATE(26),
    [sym__string_expr] = STATE(107),
    [sym_double_quote_string] = STATE(107),
    [aux_sym_class_method_body_repeat1] = STATE(507),
    [aux_sym_array_expression_repeat1] = STATE(109),
    [sym_class_definition] = STATE(106),
    [sym__expression_statement] = STATE(106),
    [sym_assignment_statement] = STATE(106),
    [sym_command_expression] = STATE(110),
    [sym__pipeline_expression] = STATE(110),
    [sym__attributed_variable] = STATE(111),
    [aux_sym__attributed_variable_repeat1] = STATE(30),
    [aux_sym_do_while_statement_token1] = ACTIONS(5),
    [anon_sym_RBRACE] = ACTIONS(1436),
    [aux_sym_function_definition_token1] = ACTIONS(7),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(9),
    [aux_sym_filter_definition_token1] = ACTIONS(11),
    [sym_number_expr] = ACTIONS(227),
    [anon_sym_AT_LPAREN] = ACTIONS(15),
    [sym_simple_variable] = ACTIONS(9),
    [anon_sym_DOLLAR_CARET] = ACTIONS(9),
    [sym_bareword_string] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [aux_sym_enum_definition_token1] = ACTIONS(23),
    [anon_sym_DQUOTE] = ACTIONS(25),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(17),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(9),
    [aux_sym_while_statement_token1] = ACTIONS(31),
    [aux_sym_if_statement_token1] = ACTIONS(229),
    [anon_sym_AMP] = ACTIONS(35),
    [anon_sym_LPAREN] = ACTIONS(37),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(41),
    [aux_sym_class_definition_token1] = ACTIONS(43),
    [anon_sym_AT_LBRACE] = ACTIONS(45),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(47),
    [sym__braced_variable] = ACTIONS(9),
    [sym_single_quote_string] = ACTIONS(487),
  },
  [444] = {
    [aux_sym__terminator_repeat1] = STATE(114),
    [sym__newline] = STATE(114),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(237),
    [anon_sym_CR_LF] = ACTIONS(239),
    [anon_sym_LBRACE] = ACTIONS(1438),
  },
  [445] = {
    [aux_sym__terminator_repeat1] = STATE(509),
    [sym__newline] = STATE(509),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(1440),
    [anon_sym_CR_LF] = ACTIONS(1442),
    [anon_sym_LBRACE] = ACTIONS(1438),
  },
  [446] = {
    [anon_sym_RPAREN] = ACTIONS(1145),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(1145),
    [anon_sym_PIPE] = ACTIONS(1145),
  },
  [447] = {
    [aux_sym__terminator_repeat1] = STATE(125),
    [sym__newline] = STATE(125),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(431),
    [sym_number_expr] = ACTIONS(431),
    [anon_sym_AT_LPAREN] = ACTIONS(431),
    [anon_sym_DOLLAR_CARET] = ACTIONS(431),
    [sym_simple_variable] = ACTIONS(431),
    [anon_sym_CR_LF] = ACTIONS(255),
    [anon_sym_COMMA] = ACTIONS(431),
    [anon_sym_LBRACE] = ACTIONS(431),
    [anon_sym_DQUOTE] = ACTIONS(431),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(431),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(431),
    [anon_sym_LPAREN] = ACTIONS(431),
    [anon_sym_RPAREN] = ACTIONS(1444),
    [anon_sym_LBRACK] = ACTIONS(431),
    [sym_single_quote_string] = ACTIONS(431),
    [anon_sym_AT_LBRACE] = ACTIONS(431),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(431),
    [sym__braced_variable] = ACTIONS(431),
    [anon_sym_LF] = ACTIONS(257),
    [sym_comment] = ACTIONS(39),
  },
  [448] = {
    [anon_sym_RPAREN] = ACTIONS(1163),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(1163),
    [anon_sym_PIPE] = ACTIONS(1163),
  },
  [449] = {
    [sym__statement] = STATE(207),
    [sym__definition_statement] = STATE(207),
    [sym_pipeline_statement] = STATE(207),
    [sym_if_statement] = STATE(207),
    [sym__non_array_expression] = STATE(43),
    [sym__expression] = STATE(46),
    [sym_array_expression] = STATE(46),
    [sym_flat_array_expression] = STATE(43),
    [sym_variable] = STATE(47),
    [sym__special_variable] = STATE(6),
    [sym_non_type_attribute] = STATE(30),
    [sym__attribute] = STATE(30),
    [sym_function_definition] = STATE(207),
    [sym_filter_definition] = STATE(207),
    [sym_enum_definition] = STATE(207),
    [sym_while_statement] = STATE(207),
    [sym_do_while_statement] = STATE(207),
    [sym_scriptblock] = STATE(43),
    [sym_hashtable_expression] = STATE(43),
    [sym_type_expr] = STATE(26),
    [sym__string_expr] = STATE(43),
    [sym_double_quote_string] = STATE(43),
    [aux_sym_array_expression_repeat1] = STATE(45),
    [sym_class_definition] = STATE(207),
    [sym__expression_statement] = STATE(207),
    [sym_assignment_statement] = STATE(207),
    [sym_command_expression] = STATE(46),
    [sym__pipeline_expression] = STATE(46),
    [sym__attributed_variable] = STATE(47),
    [aux_sym__attributed_variable_repeat1] = STATE(30),
    [aux_sym_do_while_statement_token1] = ACTIONS(5),
    [anon_sym_RBRACE] = ACTIONS(1446),
    [aux_sym_function_definition_token1] = ACTIONS(7),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(9),
    [aux_sym_filter_definition_token1] = ACTIONS(11),
    [sym_number_expr] = ACTIONS(93),
    [anon_sym_AT_LPAREN] = ACTIONS(15),
    [sym_simple_variable] = ACTIONS(9),
    [anon_sym_DOLLAR_CARET] = ACTIONS(9),
    [sym_bareword_string] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [aux_sym_enum_definition_token1] = ACTIONS(23),
    [anon_sym_DQUOTE] = ACTIONS(25),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(17),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(9),
    [aux_sym_while_statement_token1] = ACTIONS(31),
    [aux_sym_if_statement_token1] = ACTIONS(97),
    [anon_sym_AMP] = ACTIONS(35),
    [anon_sym_LPAREN] = ACTIONS(37),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(41),
    [aux_sym_class_definition_token1] = ACTIONS(43),
    [anon_sym_AT_LBRACE] = ACTIONS(45),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(47),
    [sym__braced_variable] = ACTIONS(9),
    [sym_single_quote_string] = ACTIONS(561),
  },
  [450] = {
    [aux_sym_source_file_repeat1] = STATE(241),
    [aux_sym__terminator_repeat1] = STATE(132),
    [sym__newline] = STATE(132),
    [sym__terminator] = STATE(512),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(267),
    [anon_sym_RBRACE] = ACTIONS(1448),
    [anon_sym_CR_LF] = ACTIONS(271),
    [anon_sym_SEMI] = ACTIONS(273),
  },
  [451] = {
    [anon_sym_RPAREN] = ACTIONS(1332),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(1332),
    [anon_sym_PIPE] = ACTIONS(1332),
  },
  [452] = {
    [sym_hashtable_entry] = STATE(302),
    [sym_variable] = STATE(85),
    [sym__string_expr] = STATE(85),
    [sym_property_name] = STATE(87),
    [sym__special_variable] = STATE(64),
    [sym_double_quote_string] = STATE(85),
    [anon_sym_RBRACE] = ACTIONS(1450),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(143),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(143),
    [anon_sym_DOLLAR_CARET] = ACTIONS(143),
    [sym_simple_variable] = ACTIONS(143),
    [sym_comment] = ACTIONS(39),
    [sym_single_quote_string] = ACTIONS(377),
    [sym_bareword_string] = ACTIONS(187),
    [anon_sym_DQUOTE] = ACTIONS(153),
    [sym__braced_variable] = ACTIONS(143),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(157),
  },
  [453] = {
    [sym_simple_variable] = ACTIONS(1452),
    [anon_sym_LBRACK] = ACTIONS(1452),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(1452),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(1452),
    [sym__braced_variable] = ACTIONS(1452),
    [anon_sym_DOLLAR_CARET] = ACTIONS(1452),
  },
  [454] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACK] = ACTIONS(1454),
  },
  [455] = {
    [anon_sym_LBRACK_RBRACK] = ACTIONS(397),
    [anon_sym_LBRACK] = ACTIONS(399),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(1456),
    [anon_sym_RBRACK] = ACTIONS(1456),
  },
  [456] = {
    [anon_sym_LBRACK_RBRACK] = ACTIONS(1458),
    [anon_sym_LBRACK] = ACTIONS(1460),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(1458),
    [anon_sym_RBRACK] = ACTIONS(1458),
  },
  [457] = {
    [aux_sym__typename_generic_repeat1] = STATE(457),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACK] = ACTIONS(1456),
    [anon_sym_COMMA] = ACTIONS(1462),
  },
  [458] = {
    [sym_simple_variable] = ACTIONS(694),
    [anon_sym_LF] = ACTIONS(694),
    [sym_comment] = ACTIONS(39),
    [sym_bareword_string] = ACTIONS(694),
    [anon_sym_CR_LF] = ACTIONS(696),
  },
  [459] = {
    [anon_sym_RPAREN] = ACTIONS(1465),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(1465),
  },
  [460] = {
    [sym__typename_generic] = STATE(176),
    [sym__typename] = STATE(176),
    [sym__typename_array] = STATE(176),
    [sym_comment] = ACTIONS(3),
    [sym__typename_simple] = ACTIONS(1467),
  },
  [461] = {
    [sym_class_method_body] = STATE(516),
    [aux_sym__terminator_repeat1] = STATE(517),
    [sym__newline] = STATE(517),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(1469),
    [anon_sym_CR_LF] = ACTIONS(1471),
    [anon_sym_LBRACE] = ACTIONS(1473),
  },
  [462] = {
    [sym_simple_variable] = ACTIONS(1475),
    [sym_comment] = ACTIONS(3),
  },
  [463] = {
    [sym_type_expr] = STATE(462),
    [aux_sym__terminator_repeat1] = STATE(520),
    [sym__newline] = STATE(520),
    [sym_class_parameter] = STATE(521),
    [sym_simple_variable] = ACTIONS(1281),
    [anon_sym_LF] = ACTIONS(1477),
    [anon_sym_LBRACK] = ACTIONS(1285),
    [anon_sym_RPAREN] = ACTIONS(1479),
    [anon_sym_CR_LF] = ACTIONS(1481),
    [sym_comment] = ACTIONS(39),
  },
  [464] = {
    [aux_sym_class_method_repeat1] = STATE(523),
    [anon_sym_RPAREN] = ACTIONS(1483),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(1485),
  },
  [465] = {
    [sym_type_expr] = STATE(462),
    [aux_sym__terminator_repeat1] = STATE(524),
    [sym__newline] = STATE(524),
    [sym_class_parameter] = STATE(521),
    [sym_simple_variable] = ACTIONS(1281),
    [anon_sym_LF] = ACTIONS(1487),
    [anon_sym_LBRACK] = ACTIONS(1285),
    [anon_sym_RPAREN] = ACTIONS(1479),
    [anon_sym_CR_LF] = ACTIONS(1489),
    [sym_comment] = ACTIONS(39),
  },
  [466] = {
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(1491),
    [anon_sym_CR_LF] = ACTIONS(1493),
    [anon_sym_SEMI] = ACTIONS(1491),
  },
  [467] = {
    [aux_sym__terminator_repeat1] = STATE(467),
    [sym__newline] = STATE(467),
    [sym_simple_variable] = ACTIONS(507),
    [anon_sym_LF] = ACTIONS(1495),
    [sym_comment] = ACTIONS(39),
    [anon_sym_CR_LF] = ACTIONS(1498),
  },
  [468] = {
    [aux_sym__terminator_repeat1] = STATE(469),
    [sym__newline] = STATE(469),
    [sym_simple_variable] = ACTIONS(740),
    [anon_sym_RBRACE] = ACTIONS(740),
    [anon_sym_LBRACK] = ACTIONS(740),
    [sym_bareword_string] = ACTIONS(740),
    [anon_sym_CR_LF] = ACTIONS(1311),
    [anon_sym_LF] = ACTIONS(1313),
    [sym_comment] = ACTIONS(39),
  },
  [469] = {
    [aux_sym__terminator_repeat1] = STATE(469),
    [sym__newline] = STATE(469),
    [sym_simple_variable] = ACTIONS(507),
    [anon_sym_LF] = ACTIONS(1501),
    [anon_sym_RBRACE] = ACTIONS(507),
    [anon_sym_LBRACK] = ACTIONS(507),
    [anon_sym_CR_LF] = ACTIONS(1504),
    [sym_bareword_string] = ACTIONS(507),
    [sym_comment] = ACTIONS(39),
  },
  [470] = {
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(1507),
    [ts_builtin_sym_end] = ACTIONS(1509),
    [anon_sym_RBRACE] = ACTIONS(1507),
    [anon_sym_CR_LF] = ACTIONS(1509),
    [anon_sym_SEMI] = ACTIONS(1507),
  },
  [471] = {
    [sym_type_expr] = STATE(295),
    [sym_class_method] = STATE(396),
    [sym_class_property] = STATE(296),
    [aux_sym_class_definition_repeat1] = STATE(396),
    [sym_simple_variable] = ACTIONS(698),
    [anon_sym_LBRACK] = ACTIONS(700),
    [anon_sym_RBRACE] = ACTIONS(1511),
    [sym_bareword_string] = ACTIONS(704),
    [sym_comment] = ACTIONS(39),
  },
  [472] = {
    [aux_sym__terminator_repeat1] = STATE(473),
    [sym__newline] = STATE(473),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(740),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(740),
    [anon_sym_CR_LF] = ACTIONS(1338),
    [anon_sym_DOLLAR_CARET] = ACTIONS(740),
    [sym_simple_variable] = ACTIONS(740),
    [anon_sym_LF] = ACTIONS(1340),
    [sym_single_quote_string] = ACTIONS(740),
    [sym_bareword_string] = ACTIONS(740),
    [anon_sym_DQUOTE] = ACTIONS(740),
    [sym__braced_variable] = ACTIONS(740),
    [sym_comment] = ACTIONS(39),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(740),
  },
  [473] = {
    [aux_sym__terminator_repeat1] = STATE(473),
    [sym__newline] = STATE(473),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(507),
    [anon_sym_CR_LF] = ACTIONS(1513),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(507),
    [anon_sym_DOLLAR_CARET] = ACTIONS(507),
    [sym_simple_variable] = ACTIONS(507),
    [anon_sym_LF] = ACTIONS(1516),
    [sym_single_quote_string] = ACTIONS(507),
    [sym_bareword_string] = ACTIONS(507),
    [anon_sym_DQUOTE] = ACTIONS(507),
    [sym__braced_variable] = ACTIONS(507),
    [sym_comment] = ACTIONS(39),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(507),
  },
  [474] = {
    [anon_sym_RBRACE] = ACTIONS(1519),
    [ts_builtin_sym_end] = ACTIONS(1521),
    [anon_sym_CR_LF] = ACTIONS(1521),
    [anon_sym_PIPE] = ACTIONS(1519),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(1519),
    [anon_sym_RPAREN] = ACTIONS(1519),
    [anon_sym_COMMA] = ACTIONS(1519),
    [anon_sym_SEMI] = ACTIONS(1519),
  },
  [475] = {
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(1523),
    [ts_builtin_sym_end] = ACTIONS(1525),
    [anon_sym_RBRACE] = ACTIONS(1523),
    [anon_sym_CR_LF] = ACTIONS(1525),
    [anon_sym_SEMI] = ACTIONS(1523),
  },
  [476] = {
    [anon_sym_RPAREN] = ACTIONS(1527),
    [sym_comment] = ACTIONS(3),
  },
  [477] = {
    [sym_type_expr] = STATE(75),
    [sym__string_expr] = STATE(89),
    [sym_double_quote_string] = STATE(89),
    [sym_pipeline_statement] = STATE(527),
    [sym__non_array_expression] = STATE(89),
    [sym__expression] = STATE(91),
    [sym_array_expression] = STATE(91),
    [sym_flat_array_expression] = STATE(89),
    [aux_sym_array_expression_repeat1] = STATE(90),
    [sym_variable] = STATE(89),
    [sym__special_variable] = STATE(64),
    [sym_non_type_attribute] = STATE(79),
    [sym__attribute] = STATE(79),
    [sym_command_expression] = STATE(91),
    [sym__pipeline_expression] = STATE(91),
    [sym__attributed_variable] = STATE(89),
    [sym_scriptblock] = STATE(89),
    [aux_sym__attributed_variable_repeat1] = STATE(79),
    [sym_hashtable_expression] = STATE(89),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(143),
    [sym_number_expr] = ACTIONS(191),
    [anon_sym_AT_LPAREN] = ACTIONS(147),
    [anon_sym_DOLLAR_CARET] = ACTIONS(143),
    [sym_simple_variable] = ACTIONS(143),
    [sym_bareword_string] = ACTIONS(149),
    [anon_sym_LBRACE] = ACTIONS(151),
    [anon_sym_DQUOTE] = ACTIONS(153),
    [anon_sym_COMMA] = ACTIONS(155),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(157),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(143),
    [anon_sym_AMP] = ACTIONS(159),
    [anon_sym_LPAREN] = ACTIONS(161),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(163),
    [sym_single_quote_string] = ACTIONS(193),
    [anon_sym_AT_LBRACE] = ACTIONS(167),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(169),
    [sym__braced_variable] = ACTIONS(143),
  },
  [478] = {
    [sym__statement] = STATE(106),
    [sym__definition_statement] = STATE(106),
    [sym_pipeline_statement] = STATE(106),
    [sym_if_statement] = STATE(106),
    [sym__non_array_expression] = STATE(107),
    [sym__expression] = STATE(110),
    [sym_array_expression] = STATE(110),
    [sym_flat_array_expression] = STATE(107),
    [sym_variable] = STATE(111),
    [sym__special_variable] = STATE(6),
    [sym_non_type_attribute] = STATE(30),
    [sym__attribute] = STATE(30),
    [sym_function_definition] = STATE(106),
    [sym_filter_definition] = STATE(106),
    [sym_enum_definition] = STATE(106),
    [sym_while_statement] = STATE(106),
    [sym_do_while_statement] = STATE(106),
    [sym_scriptblock] = STATE(107),
    [sym_hashtable_expression] = STATE(107),
    [sym_type_expr] = STATE(26),
    [sym__string_expr] = STATE(107),
    [sym_double_quote_string] = STATE(107),
    [aux_sym_class_method_body_repeat1] = STATE(529),
    [aux_sym_array_expression_repeat1] = STATE(109),
    [sym_class_definition] = STATE(106),
    [sym__expression_statement] = STATE(106),
    [sym_assignment_statement] = STATE(106),
    [sym_command_expression] = STATE(110),
    [sym__pipeline_expression] = STATE(110),
    [sym__attributed_variable] = STATE(111),
    [aux_sym__attributed_variable_repeat1] = STATE(30),
    [aux_sym_do_while_statement_token1] = ACTIONS(5),
    [anon_sym_RBRACE] = ACTIONS(1529),
    [aux_sym_function_definition_token1] = ACTIONS(7),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(9),
    [aux_sym_filter_definition_token1] = ACTIONS(11),
    [sym_number_expr] = ACTIONS(227),
    [anon_sym_AT_LPAREN] = ACTIONS(15),
    [sym_simple_variable] = ACTIONS(9),
    [anon_sym_DOLLAR_CARET] = ACTIONS(9),
    [sym_bareword_string] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [aux_sym_enum_definition_token1] = ACTIONS(23),
    [anon_sym_DQUOTE] = ACTIONS(25),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(17),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(9),
    [aux_sym_while_statement_token1] = ACTIONS(31),
    [aux_sym_if_statement_token1] = ACTIONS(229),
    [anon_sym_AMP] = ACTIONS(35),
    [anon_sym_LPAREN] = ACTIONS(37),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(41),
    [aux_sym_class_definition_token1] = ACTIONS(43),
    [anon_sym_AT_LBRACE] = ACTIONS(45),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(47),
    [sym__braced_variable] = ACTIONS(9),
    [sym_single_quote_string] = ACTIONS(487),
  },
  [479] = {
    [aux_sym__terminator_repeat1] = STATE(114),
    [sym__newline] = STATE(114),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(237),
    [anon_sym_CR_LF] = ACTIONS(239),
    [anon_sym_LBRACE] = ACTIONS(1531),
  },
  [480] = {
    [aux_sym__terminator_repeat1] = STATE(531),
    [sym__newline] = STATE(531),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(1533),
    [anon_sym_CR_LF] = ACTIONS(1535),
    [anon_sym_LBRACE] = ACTIONS(1531),
  },
  [481] = {
    [anon_sym_RPAREN] = ACTIONS(1537),
    [sym_comment] = ACTIONS(3),
  },
  [482] = {
    [aux_sym__terminator_repeat1] = STATE(160),
    [sym__newline] = STATE(160),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(325),
    [anon_sym_CR_LF] = ACTIONS(327),
    [anon_sym_LPAREN] = ACTIONS(1539),
  },
  [483] = {
    [aux_sym__terminator_repeat1] = STATE(534),
    [sym__newline] = STATE(534),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(1541),
    [anon_sym_CR_LF] = ACTIONS(1543),
    [anon_sym_LPAREN] = ACTIONS(1539),
  },
  [484] = {
    [aux_sym__terminator_repeat1] = STATE(323),
    [sym__newline] = STATE(323),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(788),
    [aux_sym_while_statement_token1] = ACTIONS(1545),
    [anon_sym_CR_LF] = ACTIONS(792),
  },
  [485] = {
    [aux_sym_do_while_statement_token1] = ACTIONS(1410),
    [aux_sym_function_definition_token1] = ACTIONS(1410),
    [anon_sym_CR_LF] = ACTIONS(1412),
    [aux_sym_filter_definition_token1] = ACTIONS(1410),
    [anon_sym_AT_LPAREN] = ACTIONS(1410),
    [anon_sym_DOLLAR_CARET] = ACTIONS(1410),
    [sym_simple_variable] = ACTIONS(1410),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(1410),
    [sym_number_expr] = ACTIONS(1410),
    [anon_sym_COMMA] = ACTIONS(1410),
    [anon_sym_LBRACE] = ACTIONS(1410),
    [aux_sym_enum_definition_token1] = ACTIONS(1410),
    [anon_sym_DQUOTE] = ACTIONS(1410),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(1410),
    [sym_bareword_string] = ACTIONS(1410),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(1410),
    [aux_sym_while_statement_token1] = ACTIONS(1410),
    [aux_sym_if_statement_token1] = ACTIONS(1410),
    [anon_sym_AMP] = ACTIONS(1410),
    [anon_sym_LPAREN] = ACTIONS(1410),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(1410),
    [aux_sym_class_definition_token1] = ACTIONS(1410),
    [anon_sym_AT_LBRACE] = ACTIONS(1410),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(1410),
    [sym__braced_variable] = ACTIONS(1410),
    [anon_sym_LBRACK] = ACTIONS(1410),
    [sym_single_quote_string] = ACTIONS(1410),
  },
  [486] = {
    [aux_sym_if_statement_repeat1] = STATE(536),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(1428),
    [anon_sym_RBRACE] = ACTIONS(1428),
    [aux_sym_if_statement_token2] = ACTIONS(1432),
    [anon_sym_CR_LF] = ACTIONS(1430),
    [anon_sym_SEMI] = ACTIONS(1428),
    [aux_sym_if_statement_token3] = ACTIONS(1434),
  },
  [487] = {
    [sym__statement] = STATE(106),
    [sym__definition_statement] = STATE(106),
    [sym_pipeline_statement] = STATE(106),
    [sym_if_statement] = STATE(106),
    [sym__non_array_expression] = STATE(107),
    [sym__expression] = STATE(110),
    [sym_array_expression] = STATE(110),
    [sym_flat_array_expression] = STATE(107),
    [sym_variable] = STATE(111),
    [sym__special_variable] = STATE(6),
    [sym_non_type_attribute] = STATE(30),
    [sym__attribute] = STATE(30),
    [sym_function_definition] = STATE(106),
    [sym_filter_definition] = STATE(106),
    [sym_enum_definition] = STATE(106),
    [sym_while_statement] = STATE(106),
    [sym_do_while_statement] = STATE(106),
    [sym_scriptblock] = STATE(107),
    [sym_hashtable_expression] = STATE(107),
    [sym_type_expr] = STATE(26),
    [sym__string_expr] = STATE(107),
    [sym_double_quote_string] = STATE(107),
    [aux_sym_class_method_body_repeat1] = STATE(221),
    [aux_sym_array_expression_repeat1] = STATE(109),
    [sym_class_definition] = STATE(106),
    [sym__expression_statement] = STATE(106),
    [sym_assignment_statement] = STATE(106),
    [sym_command_expression] = STATE(110),
    [sym__pipeline_expression] = STATE(110),
    [sym__attributed_variable] = STATE(111),
    [aux_sym__attributed_variable_repeat1] = STATE(30),
    [aux_sym_do_while_statement_token1] = ACTIONS(5),
    [anon_sym_RBRACE] = ACTIONS(1547),
    [aux_sym_function_definition_token1] = ACTIONS(7),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(9),
    [aux_sym_filter_definition_token1] = ACTIONS(11),
    [sym_number_expr] = ACTIONS(227),
    [anon_sym_AT_LPAREN] = ACTIONS(15),
    [sym_simple_variable] = ACTIONS(9),
    [anon_sym_DOLLAR_CARET] = ACTIONS(9),
    [sym_bareword_string] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [aux_sym_enum_definition_token1] = ACTIONS(23),
    [anon_sym_DQUOTE] = ACTIONS(25),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(17),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(9),
    [aux_sym_while_statement_token1] = ACTIONS(31),
    [aux_sym_if_statement_token1] = ACTIONS(229),
    [anon_sym_AMP] = ACTIONS(35),
    [anon_sym_LPAREN] = ACTIONS(37),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(41),
    [aux_sym_class_definition_token1] = ACTIONS(43),
    [anon_sym_AT_LBRACE] = ACTIONS(45),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(47),
    [sym__braced_variable] = ACTIONS(9),
    [sym_single_quote_string] = ACTIONS(487),
  },
  [488] = {
    [sym__statement] = STATE(106),
    [sym__definition_statement] = STATE(106),
    [sym_pipeline_statement] = STATE(106),
    [sym_if_statement] = STATE(106),
    [sym__non_array_expression] = STATE(107),
    [sym__expression] = STATE(110),
    [sym_array_expression] = STATE(110),
    [sym_flat_array_expression] = STATE(107),
    [sym_variable] = STATE(111),
    [sym__special_variable] = STATE(6),
    [sym_non_type_attribute] = STATE(30),
    [sym__attribute] = STATE(30),
    [sym_function_definition] = STATE(106),
    [sym_filter_definition] = STATE(106),
    [sym_enum_definition] = STATE(106),
    [sym_while_statement] = STATE(106),
    [sym_do_while_statement] = STATE(106),
    [sym_scriptblock] = STATE(107),
    [sym_hashtable_expression] = STATE(107),
    [sym_type_expr] = STATE(26),
    [sym__string_expr] = STATE(107),
    [sym_double_quote_string] = STATE(107),
    [aux_sym_class_method_body_repeat1] = STATE(538),
    [aux_sym_array_expression_repeat1] = STATE(109),
    [sym_class_definition] = STATE(106),
    [sym__expression_statement] = STATE(106),
    [sym_assignment_statement] = STATE(106),
    [sym_command_expression] = STATE(110),
    [sym__pipeline_expression] = STATE(110),
    [sym__attributed_variable] = STATE(111),
    [aux_sym__attributed_variable_repeat1] = STATE(30),
    [aux_sym_do_while_statement_token1] = ACTIONS(5),
    [anon_sym_RBRACE] = ACTIONS(1547),
    [aux_sym_function_definition_token1] = ACTIONS(7),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(9),
    [aux_sym_filter_definition_token1] = ACTIONS(11),
    [sym_number_expr] = ACTIONS(227),
    [anon_sym_AT_LPAREN] = ACTIONS(15),
    [sym_simple_variable] = ACTIONS(9),
    [anon_sym_DOLLAR_CARET] = ACTIONS(9),
    [sym_bareword_string] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [aux_sym_enum_definition_token1] = ACTIONS(23),
    [anon_sym_DQUOTE] = ACTIONS(25),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(17),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(9),
    [aux_sym_while_statement_token1] = ACTIONS(31),
    [aux_sym_if_statement_token1] = ACTIONS(229),
    [anon_sym_AMP] = ACTIONS(35),
    [anon_sym_LPAREN] = ACTIONS(37),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(41),
    [aux_sym_class_definition_token1] = ACTIONS(43),
    [anon_sym_AT_LBRACE] = ACTIONS(45),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(47),
    [sym__braced_variable] = ACTIONS(9),
    [sym_single_quote_string] = ACTIONS(487),
  },
  [489] = {
    [aux_sym__terminator_repeat1] = STATE(114),
    [sym__newline] = STATE(114),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(237),
    [anon_sym_CR_LF] = ACTIONS(239),
    [anon_sym_LBRACE] = ACTIONS(1549),
  },
  [490] = {
    [aux_sym__terminator_repeat1] = STATE(540),
    [sym__newline] = STATE(540),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(1551),
    [anon_sym_CR_LF] = ACTIONS(1553),
    [anon_sym_LBRACE] = ACTIONS(1549),
  },
  [491] = {
    [anon_sym_RBRACE] = ACTIONS(1555),
    [ts_builtin_sym_end] = ACTIONS(1557),
    [anon_sym_CR_LF] = ACTIONS(1557),
    [anon_sym_PIPE] = ACTIONS(1555),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(1555),
    [anon_sym_RPAREN] = ACTIONS(1555),
    [anon_sym_COMMA] = ACTIONS(1555),
    [anon_sym_SEMI] = ACTIONS(1555),
  },
  [492] = {
    [aux_sym__terminator_repeat1] = STATE(492),
    [sym__newline] = STATE(492),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(1559),
    [sym_bareword_string] = ACTIONS(507),
    [anon_sym_CR_LF] = ACTIONS(1562),
  },
  [493] = {
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(1565),
    [ts_builtin_sym_end] = ACTIONS(1567),
    [anon_sym_RBRACE] = ACTIONS(1565),
    [anon_sym_CR_LF] = ACTIONS(1567),
    [anon_sym_SEMI] = ACTIONS(1565),
  },
  [494] = {
    [aux_sym__terminator_repeat1] = STATE(350),
    [sym__newline] = STATE(350),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(942),
    [anon_sym_RBRACE] = ACTIONS(1569),
    [sym_bareword_string] = ACTIONS(944),
    [anon_sym_CR_LF] = ACTIONS(946),
  },
  [495] = {
    [sym_simple_variable] = ACTIONS(1571),
    [anon_sym_LF] = ACTIONS(1571),
    [anon_sym_LBRACK] = ACTIONS(1571),
    [sym_comment] = ACTIONS(39),
    [anon_sym_CR_LF] = ACTIONS(1265),
  },
  [496] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACK] = ACTIONS(1573),
  },
  [497] = {
    [aux_sym_array_expression_repeat1] = STATE(181),
    [anon_sym_RPAREN] = ACTIONS(1575),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(387),
  },
  [498] = {
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(1577),
    [ts_builtin_sym_end] = ACTIONS(1579),
    [anon_sym_RBRACE] = ACTIONS(1577),
    [anon_sym_CR_LF] = ACTIONS(1579),
    [anon_sym_SEMI] = ACTIONS(1577),
  },
  [499] = {
    [sym__statement] = STATE(106),
    [sym__definition_statement] = STATE(106),
    [sym_pipeline_statement] = STATE(106),
    [sym_if_statement] = STATE(106),
    [sym__non_array_expression] = STATE(107),
    [sym__expression] = STATE(110),
    [sym_array_expression] = STATE(110),
    [sym_flat_array_expression] = STATE(107),
    [sym_variable] = STATE(111),
    [sym__special_variable] = STATE(6),
    [sym_non_type_attribute] = STATE(30),
    [sym__attribute] = STATE(30),
    [sym_function_definition] = STATE(106),
    [sym_filter_definition] = STATE(106),
    [sym_enum_definition] = STATE(106),
    [sym_while_statement] = STATE(106),
    [sym_do_while_statement] = STATE(106),
    [sym_scriptblock] = STATE(107),
    [sym_hashtable_expression] = STATE(107),
    [sym_type_expr] = STATE(26),
    [sym__string_expr] = STATE(107),
    [sym_double_quote_string] = STATE(107),
    [aux_sym_class_method_body_repeat1] = STATE(221),
    [aux_sym_array_expression_repeat1] = STATE(109),
    [sym_class_definition] = STATE(106),
    [sym__expression_statement] = STATE(106),
    [sym_assignment_statement] = STATE(106),
    [sym_command_expression] = STATE(110),
    [sym__pipeline_expression] = STATE(110),
    [sym__attributed_variable] = STATE(111),
    [aux_sym__attributed_variable_repeat1] = STATE(30),
    [aux_sym_do_while_statement_token1] = ACTIONS(5),
    [anon_sym_RBRACE] = ACTIONS(1581),
    [aux_sym_function_definition_token1] = ACTIONS(7),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(9),
    [aux_sym_filter_definition_token1] = ACTIONS(11),
    [sym_number_expr] = ACTIONS(227),
    [anon_sym_AT_LPAREN] = ACTIONS(15),
    [sym_simple_variable] = ACTIONS(9),
    [anon_sym_DOLLAR_CARET] = ACTIONS(9),
    [sym_bareword_string] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [aux_sym_enum_definition_token1] = ACTIONS(23),
    [anon_sym_DQUOTE] = ACTIONS(25),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(17),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(9),
    [aux_sym_while_statement_token1] = ACTIONS(31),
    [aux_sym_if_statement_token1] = ACTIONS(229),
    [anon_sym_AMP] = ACTIONS(35),
    [anon_sym_LPAREN] = ACTIONS(37),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(41),
    [aux_sym_class_definition_token1] = ACTIONS(43),
    [anon_sym_AT_LBRACE] = ACTIONS(45),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(47),
    [sym__braced_variable] = ACTIONS(9),
    [sym_single_quote_string] = ACTIONS(487),
  },
  [500] = {
    [sym__statement] = STATE(106),
    [sym__definition_statement] = STATE(106),
    [sym_pipeline_statement] = STATE(106),
    [sym_if_statement] = STATE(106),
    [sym__non_array_expression] = STATE(107),
    [sym__expression] = STATE(110),
    [sym_array_expression] = STATE(110),
    [sym_flat_array_expression] = STATE(107),
    [sym_variable] = STATE(111),
    [sym__special_variable] = STATE(6),
    [sym_non_type_attribute] = STATE(30),
    [sym__attribute] = STATE(30),
    [sym_function_definition] = STATE(106),
    [sym_filter_definition] = STATE(106),
    [sym_enum_definition] = STATE(106),
    [sym_while_statement] = STATE(106),
    [sym_do_while_statement] = STATE(106),
    [sym_scriptblock] = STATE(107),
    [sym_hashtable_expression] = STATE(107),
    [sym_type_expr] = STATE(26),
    [sym__string_expr] = STATE(107),
    [sym_double_quote_string] = STATE(107),
    [aux_sym_class_method_body_repeat1] = STATE(545),
    [aux_sym_array_expression_repeat1] = STATE(109),
    [sym_class_definition] = STATE(106),
    [sym__expression_statement] = STATE(106),
    [sym_assignment_statement] = STATE(106),
    [sym_command_expression] = STATE(110),
    [sym__pipeline_expression] = STATE(110),
    [sym__attributed_variable] = STATE(111),
    [aux_sym__attributed_variable_repeat1] = STATE(30),
    [aux_sym_do_while_statement_token1] = ACTIONS(5),
    [anon_sym_RBRACE] = ACTIONS(1581),
    [aux_sym_function_definition_token1] = ACTIONS(7),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(9),
    [aux_sym_filter_definition_token1] = ACTIONS(11),
    [sym_number_expr] = ACTIONS(227),
    [anon_sym_AT_LPAREN] = ACTIONS(15),
    [sym_simple_variable] = ACTIONS(9),
    [anon_sym_DOLLAR_CARET] = ACTIONS(9),
    [sym_bareword_string] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [aux_sym_enum_definition_token1] = ACTIONS(23),
    [anon_sym_DQUOTE] = ACTIONS(25),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(17),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(9),
    [aux_sym_while_statement_token1] = ACTIONS(31),
    [aux_sym_if_statement_token1] = ACTIONS(229),
    [anon_sym_AMP] = ACTIONS(35),
    [anon_sym_LPAREN] = ACTIONS(37),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(41),
    [aux_sym_class_definition_token1] = ACTIONS(43),
    [anon_sym_AT_LBRACE] = ACTIONS(45),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(47),
    [sym__braced_variable] = ACTIONS(9),
    [sym_single_quote_string] = ACTIONS(487),
  },
  [501] = {
    [aux_sym__terminator_repeat1] = STATE(114),
    [sym__newline] = STATE(114),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(237),
    [anon_sym_CR_LF] = ACTIONS(239),
    [anon_sym_LBRACE] = ACTIONS(1583),
  },
  [502] = {
    [aux_sym__terminator_repeat1] = STATE(547),
    [sym__newline] = STATE(547),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(1585),
    [anon_sym_CR_LF] = ACTIONS(1587),
    [anon_sym_LBRACE] = ACTIONS(1583),
  },
  [503] = {
    [aux_sym__terminator_repeat1] = STATE(549),
    [sym__newline] = STATE(549),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(1589),
    [anon_sym_CR_LF] = ACTIONS(1591),
    [anon_sym_LPAREN] = ACTIONS(1593),
  },
  [504] = {
    [aux_sym__terminator_repeat1] = STATE(551),
    [sym__newline] = STATE(551),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(1595),
    [anon_sym_CR_LF] = ACTIONS(1597),
    [anon_sym_LBRACE] = ACTIONS(1599),
  },
  [505] = {
    [aux_sym_if_statement_repeat1] = STATE(553),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(1601),
    [ts_builtin_sym_end] = ACTIONS(1603),
    [aux_sym_if_statement_token2] = ACTIONS(1432),
    [anon_sym_CR_LF] = ACTIONS(1603),
    [anon_sym_SEMI] = ACTIONS(1601),
    [aux_sym_if_statement_token3] = ACTIONS(1605),
  },
  [506] = {
    [aux_sym_if_statement_repeat1] = STATE(554),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(1601),
    [ts_builtin_sym_end] = ACTIONS(1603),
    [aux_sym_if_statement_token2] = ACTIONS(1432),
    [anon_sym_CR_LF] = ACTIONS(1603),
    [anon_sym_SEMI] = ACTIONS(1601),
    [aux_sym_if_statement_token3] = ACTIONS(1605),
  },
  [507] = {
    [sym__statement] = STATE(106),
    [sym__definition_statement] = STATE(106),
    [sym_pipeline_statement] = STATE(106),
    [sym_if_statement] = STATE(106),
    [sym__non_array_expression] = STATE(107),
    [sym__expression] = STATE(110),
    [sym_array_expression] = STATE(110),
    [sym_flat_array_expression] = STATE(107),
    [sym_variable] = STATE(111),
    [sym__special_variable] = STATE(6),
    [sym_non_type_attribute] = STATE(30),
    [sym__attribute] = STATE(30),
    [sym_function_definition] = STATE(106),
    [sym_filter_definition] = STATE(106),
    [sym_enum_definition] = STATE(106),
    [sym_while_statement] = STATE(106),
    [sym_do_while_statement] = STATE(106),
    [sym_scriptblock] = STATE(107),
    [sym_hashtable_expression] = STATE(107),
    [sym_type_expr] = STATE(26),
    [sym__string_expr] = STATE(107),
    [sym_double_quote_string] = STATE(107),
    [aux_sym_class_method_body_repeat1] = STATE(221),
    [aux_sym_array_expression_repeat1] = STATE(109),
    [sym_class_definition] = STATE(106),
    [sym__expression_statement] = STATE(106),
    [sym_assignment_statement] = STATE(106),
    [sym_command_expression] = STATE(110),
    [sym__pipeline_expression] = STATE(110),
    [sym__attributed_variable] = STATE(111),
    [aux_sym__attributed_variable_repeat1] = STATE(30),
    [aux_sym_do_while_statement_token1] = ACTIONS(5),
    [anon_sym_RBRACE] = ACTIONS(1607),
    [aux_sym_function_definition_token1] = ACTIONS(7),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(9),
    [aux_sym_filter_definition_token1] = ACTIONS(11),
    [sym_number_expr] = ACTIONS(227),
    [anon_sym_AT_LPAREN] = ACTIONS(15),
    [sym_simple_variable] = ACTIONS(9),
    [anon_sym_DOLLAR_CARET] = ACTIONS(9),
    [sym_bareword_string] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [aux_sym_enum_definition_token1] = ACTIONS(23),
    [anon_sym_DQUOTE] = ACTIONS(25),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(17),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(9),
    [aux_sym_while_statement_token1] = ACTIONS(31),
    [aux_sym_if_statement_token1] = ACTIONS(229),
    [anon_sym_AMP] = ACTIONS(35),
    [anon_sym_LPAREN] = ACTIONS(37),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(41),
    [aux_sym_class_definition_token1] = ACTIONS(43),
    [anon_sym_AT_LBRACE] = ACTIONS(45),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(47),
    [sym__braced_variable] = ACTIONS(9),
    [sym_single_quote_string] = ACTIONS(487),
  },
  [508] = {
    [sym__statement] = STATE(106),
    [sym__definition_statement] = STATE(106),
    [sym_pipeline_statement] = STATE(106),
    [sym_if_statement] = STATE(106),
    [sym__non_array_expression] = STATE(107),
    [sym__expression] = STATE(110),
    [sym_array_expression] = STATE(110),
    [sym_flat_array_expression] = STATE(107),
    [sym_variable] = STATE(111),
    [sym__special_variable] = STATE(6),
    [sym_non_type_attribute] = STATE(30),
    [sym__attribute] = STATE(30),
    [sym_function_definition] = STATE(106),
    [sym_filter_definition] = STATE(106),
    [sym_enum_definition] = STATE(106),
    [sym_while_statement] = STATE(106),
    [sym_do_while_statement] = STATE(106),
    [sym_scriptblock] = STATE(107),
    [sym_hashtable_expression] = STATE(107),
    [sym_type_expr] = STATE(26),
    [sym__string_expr] = STATE(107),
    [sym_double_quote_string] = STATE(107),
    [aux_sym_class_method_body_repeat1] = STATE(556),
    [aux_sym_array_expression_repeat1] = STATE(109),
    [sym_class_definition] = STATE(106),
    [sym__expression_statement] = STATE(106),
    [sym_assignment_statement] = STATE(106),
    [sym_command_expression] = STATE(110),
    [sym__pipeline_expression] = STATE(110),
    [sym__attributed_variable] = STATE(111),
    [aux_sym__attributed_variable_repeat1] = STATE(30),
    [aux_sym_do_while_statement_token1] = ACTIONS(5),
    [anon_sym_RBRACE] = ACTIONS(1607),
    [aux_sym_function_definition_token1] = ACTIONS(7),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(9),
    [aux_sym_filter_definition_token1] = ACTIONS(11),
    [sym_number_expr] = ACTIONS(227),
    [anon_sym_AT_LPAREN] = ACTIONS(15),
    [sym_simple_variable] = ACTIONS(9),
    [anon_sym_DOLLAR_CARET] = ACTIONS(9),
    [sym_bareword_string] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [aux_sym_enum_definition_token1] = ACTIONS(23),
    [anon_sym_DQUOTE] = ACTIONS(25),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(17),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(9),
    [aux_sym_while_statement_token1] = ACTIONS(31),
    [aux_sym_if_statement_token1] = ACTIONS(229),
    [anon_sym_AMP] = ACTIONS(35),
    [anon_sym_LPAREN] = ACTIONS(37),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(41),
    [aux_sym_class_definition_token1] = ACTIONS(43),
    [anon_sym_AT_LBRACE] = ACTIONS(45),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(47),
    [sym__braced_variable] = ACTIONS(9),
    [sym_single_quote_string] = ACTIONS(487),
  },
  [509] = {
    [aux_sym__terminator_repeat1] = STATE(114),
    [sym__newline] = STATE(114),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(237),
    [anon_sym_CR_LF] = ACTIONS(239),
    [anon_sym_LBRACE] = ACTIONS(1609),
  },
  [510] = {
    [anon_sym_RPAREN] = ACTIONS(1372),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(1372),
    [anon_sym_PIPE] = ACTIONS(1372),
  },
  [511] = {
    [anon_sym_RPAREN] = ACTIONS(1388),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(1388),
    [anon_sym_PIPE] = ACTIONS(1388),
  },
  [512] = {
    [sym__statement] = STATE(207),
    [sym__definition_statement] = STATE(207),
    [sym_pipeline_statement] = STATE(207),
    [sym_if_statement] = STATE(207),
    [sym__non_array_expression] = STATE(43),
    [sym__expression] = STATE(46),
    [sym_array_expression] = STATE(46),
    [sym_flat_array_expression] = STATE(43),
    [sym_variable] = STATE(47),
    [sym__special_variable] = STATE(6),
    [sym_non_type_attribute] = STATE(30),
    [sym__attribute] = STATE(30),
    [sym_function_definition] = STATE(207),
    [sym_filter_definition] = STATE(207),
    [sym_enum_definition] = STATE(207),
    [sym_while_statement] = STATE(207),
    [sym_do_while_statement] = STATE(207),
    [sym_scriptblock] = STATE(43),
    [sym_hashtable_expression] = STATE(43),
    [sym_type_expr] = STATE(26),
    [sym__string_expr] = STATE(43),
    [sym_double_quote_string] = STATE(43),
    [aux_sym_array_expression_repeat1] = STATE(45),
    [sym_class_definition] = STATE(207),
    [sym__expression_statement] = STATE(207),
    [sym_assignment_statement] = STATE(207),
    [sym_command_expression] = STATE(46),
    [sym__pipeline_expression] = STATE(46),
    [sym__attributed_variable] = STATE(47),
    [aux_sym__attributed_variable_repeat1] = STATE(30),
    [aux_sym_do_while_statement_token1] = ACTIONS(5),
    [anon_sym_RBRACE] = ACTIONS(1611),
    [aux_sym_function_definition_token1] = ACTIONS(7),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(9),
    [aux_sym_filter_definition_token1] = ACTIONS(11),
    [sym_number_expr] = ACTIONS(93),
    [anon_sym_AT_LPAREN] = ACTIONS(15),
    [sym_simple_variable] = ACTIONS(9),
    [anon_sym_DOLLAR_CARET] = ACTIONS(9),
    [sym_bareword_string] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [aux_sym_enum_definition_token1] = ACTIONS(23),
    [anon_sym_DQUOTE] = ACTIONS(25),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(17),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(9),
    [aux_sym_while_statement_token1] = ACTIONS(31),
    [aux_sym_if_statement_token1] = ACTIONS(97),
    [anon_sym_AMP] = ACTIONS(35),
    [anon_sym_LPAREN] = ACTIONS(37),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(41),
    [aux_sym_class_definition_token1] = ACTIONS(43),
    [anon_sym_AT_LBRACE] = ACTIONS(45),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(47),
    [sym__braced_variable] = ACTIONS(9),
    [sym_single_quote_string] = ACTIONS(561),
  },
  [513] = {
    [anon_sym_RPAREN] = ACTIONS(1521),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(1521),
    [anon_sym_PIPE] = ACTIONS(1521),
  },
  [514] = {
    [sym_simple_variable] = ACTIONS(1613),
    [anon_sym_LBRACK] = ACTIONS(1613),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(1613),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(1613),
    [sym__braced_variable] = ACTIONS(1613),
    [anon_sym_DOLLAR_CARET] = ACTIONS(1613),
  },
  [515] = {
    [sym__statement] = STATE(106),
    [sym__definition_statement] = STATE(106),
    [sym_pipeline_statement] = STATE(106),
    [sym_if_statement] = STATE(106),
    [sym__non_array_expression] = STATE(107),
    [sym__expression] = STATE(110),
    [sym_array_expression] = STATE(110),
    [sym_flat_array_expression] = STATE(107),
    [sym_variable] = STATE(111),
    [sym__special_variable] = STATE(6),
    [sym_non_type_attribute] = STATE(30),
    [sym__attribute] = STATE(30),
    [sym_function_definition] = STATE(106),
    [sym_filter_definition] = STATE(106),
    [sym_enum_definition] = STATE(106),
    [sym_while_statement] = STATE(106),
    [sym_do_while_statement] = STATE(106),
    [sym_scriptblock] = STATE(107),
    [sym_hashtable_expression] = STATE(107),
    [sym_type_expr] = STATE(26),
    [sym__string_expr] = STATE(107),
    [sym_double_quote_string] = STATE(107),
    [aux_sym_class_method_body_repeat1] = STATE(560),
    [aux_sym_array_expression_repeat1] = STATE(109),
    [sym_class_definition] = STATE(106),
    [sym__expression_statement] = STATE(106),
    [sym_assignment_statement] = STATE(106),
    [sym_command_expression] = STATE(110),
    [sym__pipeline_expression] = STATE(110),
    [sym__attributed_variable] = STATE(111),
    [aux_sym__attributed_variable_repeat1] = STATE(30),
    [aux_sym_do_while_statement_token1] = ACTIONS(5),
    [anon_sym_RBRACE] = ACTIONS(1615),
    [aux_sym_function_definition_token1] = ACTIONS(7),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(9),
    [aux_sym_filter_definition_token1] = ACTIONS(11),
    [sym_number_expr] = ACTIONS(227),
    [anon_sym_AT_LPAREN] = ACTIONS(15),
    [sym_simple_variable] = ACTIONS(9),
    [anon_sym_DOLLAR_CARET] = ACTIONS(9),
    [sym_bareword_string] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [aux_sym_enum_definition_token1] = ACTIONS(23),
    [anon_sym_DQUOTE] = ACTIONS(25),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(17),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(9),
    [aux_sym_while_statement_token1] = ACTIONS(31),
    [aux_sym_if_statement_token1] = ACTIONS(229),
    [anon_sym_AMP] = ACTIONS(35),
    [anon_sym_LPAREN] = ACTIONS(37),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(41),
    [aux_sym_class_definition_token1] = ACTIONS(43),
    [anon_sym_AT_LBRACE] = ACTIONS(45),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(47),
    [sym__braced_variable] = ACTIONS(9),
    [sym_single_quote_string] = ACTIONS(487),
  },
  [516] = {
    [sym_simple_variable] = ACTIONS(1617),
    [anon_sym_RBRACE] = ACTIONS(1617),
    [anon_sym_LBRACK] = ACTIONS(1617),
    [sym_bareword_string] = ACTIONS(1619),
    [sym_comment] = ACTIONS(39),
  },
  [517] = {
    [sym_class_method_body] = STATE(561),
    [aux_sym__terminator_repeat1] = STATE(114),
    [sym__newline] = STATE(114),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(237),
    [anon_sym_CR_LF] = ACTIONS(239),
    [anon_sym_LBRACE] = ACTIONS(1473),
  },
  [518] = {
    [anon_sym_RPAREN] = ACTIONS(1621),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(1621),
  },
  [519] = {
    [sym_class_method_body] = STATE(561),
    [aux_sym__terminator_repeat1] = STATE(562),
    [sym__newline] = STATE(562),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(1623),
    [anon_sym_CR_LF] = ACTIONS(1625),
    [anon_sym_LBRACE] = ACTIONS(1473),
  },
  [520] = {
    [aux_sym__terminator_repeat1] = STATE(520),
    [sym__newline] = STATE(520),
    [anon_sym_RPAREN] = ACTIONS(507),
    [anon_sym_LF] = ACTIONS(1627),
    [sym_simple_variable] = ACTIONS(507),
    [anon_sym_LBRACK] = ACTIONS(507),
    [anon_sym_CR_LF] = ACTIONS(1630),
    [sym_comment] = ACTIONS(39),
  },
  [521] = {
    [aux_sym_class_method_repeat1] = STATE(564),
    [anon_sym_RPAREN] = ACTIONS(1633),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(1485),
  },
  [522] = {
    [sym_type_expr] = STATE(462),
    [aux_sym__terminator_repeat1] = STATE(565),
    [sym__newline] = STATE(565),
    [sym_class_parameter] = STATE(566),
    [sym_simple_variable] = ACTIONS(1281),
    [anon_sym_LF] = ACTIONS(1635),
    [anon_sym_LBRACK] = ACTIONS(1285),
    [sym_comment] = ACTIONS(39),
    [anon_sym_CR_LF] = ACTIONS(1637),
  },
  [523] = {
    [aux_sym_class_method_repeat1] = STATE(567),
    [anon_sym_RPAREN] = ACTIONS(1633),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(1485),
  },
  [524] = {
    [sym_type_expr] = STATE(462),
    [aux_sym__terminator_repeat1] = STATE(520),
    [sym__newline] = STATE(520),
    [sym_class_parameter] = STATE(568),
    [sym_simple_variable] = ACTIONS(1281),
    [anon_sym_LF] = ACTIONS(1477),
    [anon_sym_LBRACK] = ACTIONS(1285),
    [anon_sym_RPAREN] = ACTIONS(1639),
    [anon_sym_CR_LF] = ACTIONS(1481),
    [sym_comment] = ACTIONS(39),
  },
  [525] = {
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(1641),
    [ts_builtin_sym_end] = ACTIONS(1643),
    [anon_sym_RBRACE] = ACTIONS(1641),
    [anon_sym_CR_LF] = ACTIONS(1643),
    [anon_sym_SEMI] = ACTIONS(1641),
  },
  [526] = {
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(1645),
    [ts_builtin_sym_end] = ACTIONS(1647),
    [anon_sym_RBRACE] = ACTIONS(1645),
    [anon_sym_CR_LF] = ACTIONS(1647),
    [anon_sym_SEMI] = ACTIONS(1645),
  },
  [527] = {
    [anon_sym_RPAREN] = ACTIONS(1649),
    [sym_comment] = ACTIONS(3),
  },
  [528] = {
    [aux_sym_if_statement_repeat1] = STATE(570),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(1428),
    [aux_sym_if_statement_token2] = ACTIONS(1432),
    [anon_sym_CR_LF] = ACTIONS(1430),
    [anon_sym_SEMI] = ACTIONS(1428),
    [aux_sym_if_statement_token3] = ACTIONS(1434),
  },
  [529] = {
    [sym__statement] = STATE(106),
    [sym__definition_statement] = STATE(106),
    [sym_pipeline_statement] = STATE(106),
    [sym_if_statement] = STATE(106),
    [sym__non_array_expression] = STATE(107),
    [sym__expression] = STATE(110),
    [sym_array_expression] = STATE(110),
    [sym_flat_array_expression] = STATE(107),
    [sym_variable] = STATE(111),
    [sym__special_variable] = STATE(6),
    [sym_non_type_attribute] = STATE(30),
    [sym__attribute] = STATE(30),
    [sym_function_definition] = STATE(106),
    [sym_filter_definition] = STATE(106),
    [sym_enum_definition] = STATE(106),
    [sym_while_statement] = STATE(106),
    [sym_do_while_statement] = STATE(106),
    [sym_scriptblock] = STATE(107),
    [sym_hashtable_expression] = STATE(107),
    [sym_type_expr] = STATE(26),
    [sym__string_expr] = STATE(107),
    [sym_double_quote_string] = STATE(107),
    [aux_sym_class_method_body_repeat1] = STATE(221),
    [aux_sym_array_expression_repeat1] = STATE(109),
    [sym_class_definition] = STATE(106),
    [sym__expression_statement] = STATE(106),
    [sym_assignment_statement] = STATE(106),
    [sym_command_expression] = STATE(110),
    [sym__pipeline_expression] = STATE(110),
    [sym__attributed_variable] = STATE(111),
    [aux_sym__attributed_variable_repeat1] = STATE(30),
    [aux_sym_do_while_statement_token1] = ACTIONS(5),
    [anon_sym_RBRACE] = ACTIONS(1651),
    [aux_sym_function_definition_token1] = ACTIONS(7),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(9),
    [aux_sym_filter_definition_token1] = ACTIONS(11),
    [sym_number_expr] = ACTIONS(227),
    [anon_sym_AT_LPAREN] = ACTIONS(15),
    [sym_simple_variable] = ACTIONS(9),
    [anon_sym_DOLLAR_CARET] = ACTIONS(9),
    [sym_bareword_string] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [aux_sym_enum_definition_token1] = ACTIONS(23),
    [anon_sym_DQUOTE] = ACTIONS(25),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(17),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(9),
    [aux_sym_while_statement_token1] = ACTIONS(31),
    [aux_sym_if_statement_token1] = ACTIONS(229),
    [anon_sym_AMP] = ACTIONS(35),
    [anon_sym_LPAREN] = ACTIONS(37),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(41),
    [aux_sym_class_definition_token1] = ACTIONS(43),
    [anon_sym_AT_LBRACE] = ACTIONS(45),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(47),
    [sym__braced_variable] = ACTIONS(9),
    [sym_single_quote_string] = ACTIONS(487),
  },
  [530] = {
    [sym__statement] = STATE(106),
    [sym__definition_statement] = STATE(106),
    [sym_pipeline_statement] = STATE(106),
    [sym_if_statement] = STATE(106),
    [sym__non_array_expression] = STATE(107),
    [sym__expression] = STATE(110),
    [sym_array_expression] = STATE(110),
    [sym_flat_array_expression] = STATE(107),
    [sym_variable] = STATE(111),
    [sym__special_variable] = STATE(6),
    [sym_non_type_attribute] = STATE(30),
    [sym__attribute] = STATE(30),
    [sym_function_definition] = STATE(106),
    [sym_filter_definition] = STATE(106),
    [sym_enum_definition] = STATE(106),
    [sym_while_statement] = STATE(106),
    [sym_do_while_statement] = STATE(106),
    [sym_scriptblock] = STATE(107),
    [sym_hashtable_expression] = STATE(107),
    [sym_type_expr] = STATE(26),
    [sym__string_expr] = STATE(107),
    [sym_double_quote_string] = STATE(107),
    [aux_sym_class_method_body_repeat1] = STATE(572),
    [aux_sym_array_expression_repeat1] = STATE(109),
    [sym_class_definition] = STATE(106),
    [sym__expression_statement] = STATE(106),
    [sym_assignment_statement] = STATE(106),
    [sym_command_expression] = STATE(110),
    [sym__pipeline_expression] = STATE(110),
    [sym__attributed_variable] = STATE(111),
    [aux_sym__attributed_variable_repeat1] = STATE(30),
    [aux_sym_do_while_statement_token1] = ACTIONS(5),
    [anon_sym_RBRACE] = ACTIONS(1651),
    [aux_sym_function_definition_token1] = ACTIONS(7),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(9),
    [aux_sym_filter_definition_token1] = ACTIONS(11),
    [sym_number_expr] = ACTIONS(227),
    [anon_sym_AT_LPAREN] = ACTIONS(15),
    [sym_simple_variable] = ACTIONS(9),
    [anon_sym_DOLLAR_CARET] = ACTIONS(9),
    [sym_bareword_string] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [aux_sym_enum_definition_token1] = ACTIONS(23),
    [anon_sym_DQUOTE] = ACTIONS(25),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(17),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(9),
    [aux_sym_while_statement_token1] = ACTIONS(31),
    [aux_sym_if_statement_token1] = ACTIONS(229),
    [anon_sym_AMP] = ACTIONS(35),
    [anon_sym_LPAREN] = ACTIONS(37),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(41),
    [aux_sym_class_definition_token1] = ACTIONS(43),
    [anon_sym_AT_LBRACE] = ACTIONS(45),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(47),
    [sym__braced_variable] = ACTIONS(9),
    [sym_single_quote_string] = ACTIONS(487),
  },
  [531] = {
    [aux_sym__terminator_repeat1] = STATE(114),
    [sym__newline] = STATE(114),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(237),
    [anon_sym_CR_LF] = ACTIONS(239),
    [anon_sym_LBRACE] = ACTIONS(1653),
  },
  [532] = {
    [aux_sym__terminator_repeat1] = STATE(574),
    [sym__newline] = STATE(574),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(1655),
    [anon_sym_CR_LF] = ACTIONS(1657),
    [anon_sym_LBRACE] = ACTIONS(1653),
  },
  [533] = {
    [sym_type_expr] = STATE(75),
    [sym__string_expr] = STATE(89),
    [sym_double_quote_string] = STATE(89),
    [sym_pipeline_statement] = STATE(575),
    [sym__non_array_expression] = STATE(89),
    [sym__expression] = STATE(91),
    [sym_array_expression] = STATE(91),
    [sym_flat_array_expression] = STATE(89),
    [aux_sym_array_expression_repeat1] = STATE(90),
    [sym_variable] = STATE(89),
    [sym__special_variable] = STATE(64),
    [sym_non_type_attribute] = STATE(79),
    [sym__attribute] = STATE(79),
    [sym_command_expression] = STATE(91),
    [sym__pipeline_expression] = STATE(91),
    [sym__attributed_variable] = STATE(89),
    [sym_scriptblock] = STATE(89),
    [aux_sym__attributed_variable_repeat1] = STATE(79),
    [sym_hashtable_expression] = STATE(89),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(143),
    [sym_number_expr] = ACTIONS(191),
    [anon_sym_AT_LPAREN] = ACTIONS(147),
    [anon_sym_DOLLAR_CARET] = ACTIONS(143),
    [sym_simple_variable] = ACTIONS(143),
    [sym_bareword_string] = ACTIONS(149),
    [anon_sym_LBRACE] = ACTIONS(151),
    [anon_sym_DQUOTE] = ACTIONS(153),
    [anon_sym_COMMA] = ACTIONS(155),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(157),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(143),
    [anon_sym_AMP] = ACTIONS(159),
    [anon_sym_LPAREN] = ACTIONS(161),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(163),
    [sym_single_quote_string] = ACTIONS(193),
    [anon_sym_AT_LBRACE] = ACTIONS(167),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(169),
    [sym__braced_variable] = ACTIONS(143),
  },
  [534] = {
    [aux_sym__terminator_repeat1] = STATE(160),
    [sym__newline] = STATE(160),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(325),
    [anon_sym_CR_LF] = ACTIONS(327),
    [anon_sym_LPAREN] = ACTIONS(1659),
  },
  [535] = {
    [aux_sym__terminator_repeat1] = STATE(577),
    [sym__newline] = STATE(577),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(1661),
    [anon_sym_CR_LF] = ACTIONS(1663),
    [anon_sym_LPAREN] = ACTIONS(1659),
  },
  [536] = {
    [aux_sym_if_statement_repeat1] = STATE(578),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(1601),
    [anon_sym_RBRACE] = ACTIONS(1601),
    [aux_sym_if_statement_token2] = ACTIONS(1432),
    [anon_sym_CR_LF] = ACTIONS(1603),
    [anon_sym_SEMI] = ACTIONS(1601),
    [aux_sym_if_statement_token3] = ACTIONS(1605),
  },
  [537] = {
    [aux_sym_if_statement_repeat1] = STATE(579),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(1601),
    [anon_sym_RBRACE] = ACTIONS(1601),
    [aux_sym_if_statement_token2] = ACTIONS(1432),
    [anon_sym_CR_LF] = ACTIONS(1603),
    [anon_sym_SEMI] = ACTIONS(1601),
    [aux_sym_if_statement_token3] = ACTIONS(1605),
  },
  [538] = {
    [sym__statement] = STATE(106),
    [sym__definition_statement] = STATE(106),
    [sym_pipeline_statement] = STATE(106),
    [sym_if_statement] = STATE(106),
    [sym__non_array_expression] = STATE(107),
    [sym__expression] = STATE(110),
    [sym_array_expression] = STATE(110),
    [sym_flat_array_expression] = STATE(107),
    [sym_variable] = STATE(111),
    [sym__special_variable] = STATE(6),
    [sym_non_type_attribute] = STATE(30),
    [sym__attribute] = STATE(30),
    [sym_function_definition] = STATE(106),
    [sym_filter_definition] = STATE(106),
    [sym_enum_definition] = STATE(106),
    [sym_while_statement] = STATE(106),
    [sym_do_while_statement] = STATE(106),
    [sym_scriptblock] = STATE(107),
    [sym_hashtable_expression] = STATE(107),
    [sym_type_expr] = STATE(26),
    [sym__string_expr] = STATE(107),
    [sym_double_quote_string] = STATE(107),
    [aux_sym_class_method_body_repeat1] = STATE(221),
    [aux_sym_array_expression_repeat1] = STATE(109),
    [sym_class_definition] = STATE(106),
    [sym__expression_statement] = STATE(106),
    [sym_assignment_statement] = STATE(106),
    [sym_command_expression] = STATE(110),
    [sym__pipeline_expression] = STATE(110),
    [sym__attributed_variable] = STATE(111),
    [aux_sym__attributed_variable_repeat1] = STATE(30),
    [aux_sym_do_while_statement_token1] = ACTIONS(5),
    [anon_sym_RBRACE] = ACTIONS(1665),
    [aux_sym_function_definition_token1] = ACTIONS(7),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(9),
    [aux_sym_filter_definition_token1] = ACTIONS(11),
    [sym_number_expr] = ACTIONS(227),
    [anon_sym_AT_LPAREN] = ACTIONS(15),
    [sym_simple_variable] = ACTIONS(9),
    [anon_sym_DOLLAR_CARET] = ACTIONS(9),
    [sym_bareword_string] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [aux_sym_enum_definition_token1] = ACTIONS(23),
    [anon_sym_DQUOTE] = ACTIONS(25),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(17),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(9),
    [aux_sym_while_statement_token1] = ACTIONS(31),
    [aux_sym_if_statement_token1] = ACTIONS(229),
    [anon_sym_AMP] = ACTIONS(35),
    [anon_sym_LPAREN] = ACTIONS(37),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(41),
    [aux_sym_class_definition_token1] = ACTIONS(43),
    [anon_sym_AT_LBRACE] = ACTIONS(45),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(47),
    [sym__braced_variable] = ACTIONS(9),
    [sym_single_quote_string] = ACTIONS(487),
  },
  [539] = {
    [sym__statement] = STATE(106),
    [sym__definition_statement] = STATE(106),
    [sym_pipeline_statement] = STATE(106),
    [sym_if_statement] = STATE(106),
    [sym__non_array_expression] = STATE(107),
    [sym__expression] = STATE(110),
    [sym_array_expression] = STATE(110),
    [sym_flat_array_expression] = STATE(107),
    [sym_variable] = STATE(111),
    [sym__special_variable] = STATE(6),
    [sym_non_type_attribute] = STATE(30),
    [sym__attribute] = STATE(30),
    [sym_function_definition] = STATE(106),
    [sym_filter_definition] = STATE(106),
    [sym_enum_definition] = STATE(106),
    [sym_while_statement] = STATE(106),
    [sym_do_while_statement] = STATE(106),
    [sym_scriptblock] = STATE(107),
    [sym_hashtable_expression] = STATE(107),
    [sym_type_expr] = STATE(26),
    [sym__string_expr] = STATE(107),
    [sym_double_quote_string] = STATE(107),
    [aux_sym_class_method_body_repeat1] = STATE(581),
    [aux_sym_array_expression_repeat1] = STATE(109),
    [sym_class_definition] = STATE(106),
    [sym__expression_statement] = STATE(106),
    [sym_assignment_statement] = STATE(106),
    [sym_command_expression] = STATE(110),
    [sym__pipeline_expression] = STATE(110),
    [sym__attributed_variable] = STATE(111),
    [aux_sym__attributed_variable_repeat1] = STATE(30),
    [aux_sym_do_while_statement_token1] = ACTIONS(5),
    [anon_sym_RBRACE] = ACTIONS(1665),
    [aux_sym_function_definition_token1] = ACTIONS(7),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(9),
    [aux_sym_filter_definition_token1] = ACTIONS(11),
    [sym_number_expr] = ACTIONS(227),
    [anon_sym_AT_LPAREN] = ACTIONS(15),
    [sym_simple_variable] = ACTIONS(9),
    [anon_sym_DOLLAR_CARET] = ACTIONS(9),
    [sym_bareword_string] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [aux_sym_enum_definition_token1] = ACTIONS(23),
    [anon_sym_DQUOTE] = ACTIONS(25),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(17),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(9),
    [aux_sym_while_statement_token1] = ACTIONS(31),
    [aux_sym_if_statement_token1] = ACTIONS(229),
    [anon_sym_AMP] = ACTIONS(35),
    [anon_sym_LPAREN] = ACTIONS(37),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(41),
    [aux_sym_class_definition_token1] = ACTIONS(43),
    [anon_sym_AT_LBRACE] = ACTIONS(45),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(47),
    [sym__braced_variable] = ACTIONS(9),
    [sym_single_quote_string] = ACTIONS(487),
  },
  [540] = {
    [aux_sym__terminator_repeat1] = STATE(114),
    [sym__newline] = STATE(114),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(237),
    [anon_sym_CR_LF] = ACTIONS(239),
    [anon_sym_LBRACE] = ACTIONS(1667),
  },
  [541] = {
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(1669),
    [ts_builtin_sym_end] = ACTIONS(1671),
    [anon_sym_RBRACE] = ACTIONS(1669),
    [anon_sym_CR_LF] = ACTIONS(1671),
    [anon_sym_SEMI] = ACTIONS(1669),
  },
  [542] = {
    [sym_simple_variable] = ACTIONS(1673),
    [anon_sym_LF] = ACTIONS(1673),
    [anon_sym_LBRACK] = ACTIONS(1673),
    [sym_comment] = ACTIONS(39),
    [anon_sym_CR_LF] = ACTIONS(1452),
  },
  [543] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACK] = ACTIONS(1675),
  },
  [544] = {
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(1677),
    [ts_builtin_sym_end] = ACTIONS(1679),
    [anon_sym_RBRACE] = ACTIONS(1677),
    [anon_sym_CR_LF] = ACTIONS(1679),
    [anon_sym_SEMI] = ACTIONS(1677),
  },
  [545] = {
    [sym__statement] = STATE(106),
    [sym__definition_statement] = STATE(106),
    [sym_pipeline_statement] = STATE(106),
    [sym_if_statement] = STATE(106),
    [sym__non_array_expression] = STATE(107),
    [sym__expression] = STATE(110),
    [sym_array_expression] = STATE(110),
    [sym_flat_array_expression] = STATE(107),
    [sym_variable] = STATE(111),
    [sym__special_variable] = STATE(6),
    [sym_non_type_attribute] = STATE(30),
    [sym__attribute] = STATE(30),
    [sym_function_definition] = STATE(106),
    [sym_filter_definition] = STATE(106),
    [sym_enum_definition] = STATE(106),
    [sym_while_statement] = STATE(106),
    [sym_do_while_statement] = STATE(106),
    [sym_scriptblock] = STATE(107),
    [sym_hashtable_expression] = STATE(107),
    [sym_type_expr] = STATE(26),
    [sym__string_expr] = STATE(107),
    [sym_double_quote_string] = STATE(107),
    [aux_sym_class_method_body_repeat1] = STATE(221),
    [aux_sym_array_expression_repeat1] = STATE(109),
    [sym_class_definition] = STATE(106),
    [sym__expression_statement] = STATE(106),
    [sym_assignment_statement] = STATE(106),
    [sym_command_expression] = STATE(110),
    [sym__pipeline_expression] = STATE(110),
    [sym__attributed_variable] = STATE(111),
    [aux_sym__attributed_variable_repeat1] = STATE(30),
    [aux_sym_do_while_statement_token1] = ACTIONS(5),
    [anon_sym_RBRACE] = ACTIONS(1681),
    [aux_sym_function_definition_token1] = ACTIONS(7),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(9),
    [aux_sym_filter_definition_token1] = ACTIONS(11),
    [sym_number_expr] = ACTIONS(227),
    [anon_sym_AT_LPAREN] = ACTIONS(15),
    [sym_simple_variable] = ACTIONS(9),
    [anon_sym_DOLLAR_CARET] = ACTIONS(9),
    [sym_bareword_string] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [aux_sym_enum_definition_token1] = ACTIONS(23),
    [anon_sym_DQUOTE] = ACTIONS(25),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(17),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(9),
    [aux_sym_while_statement_token1] = ACTIONS(31),
    [aux_sym_if_statement_token1] = ACTIONS(229),
    [anon_sym_AMP] = ACTIONS(35),
    [anon_sym_LPAREN] = ACTIONS(37),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(41),
    [aux_sym_class_definition_token1] = ACTIONS(43),
    [anon_sym_AT_LBRACE] = ACTIONS(45),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(47),
    [sym__braced_variable] = ACTIONS(9),
    [sym_single_quote_string] = ACTIONS(487),
  },
  [546] = {
    [sym__statement] = STATE(106),
    [sym__definition_statement] = STATE(106),
    [sym_pipeline_statement] = STATE(106),
    [sym_if_statement] = STATE(106),
    [sym__non_array_expression] = STATE(107),
    [sym__expression] = STATE(110),
    [sym_array_expression] = STATE(110),
    [sym_flat_array_expression] = STATE(107),
    [sym_variable] = STATE(111),
    [sym__special_variable] = STATE(6),
    [sym_non_type_attribute] = STATE(30),
    [sym__attribute] = STATE(30),
    [sym_function_definition] = STATE(106),
    [sym_filter_definition] = STATE(106),
    [sym_enum_definition] = STATE(106),
    [sym_while_statement] = STATE(106),
    [sym_do_while_statement] = STATE(106),
    [sym_scriptblock] = STATE(107),
    [sym_hashtable_expression] = STATE(107),
    [sym_type_expr] = STATE(26),
    [sym__string_expr] = STATE(107),
    [sym_double_quote_string] = STATE(107),
    [aux_sym_class_method_body_repeat1] = STATE(585),
    [aux_sym_array_expression_repeat1] = STATE(109),
    [sym_class_definition] = STATE(106),
    [sym__expression_statement] = STATE(106),
    [sym_assignment_statement] = STATE(106),
    [sym_command_expression] = STATE(110),
    [sym__pipeline_expression] = STATE(110),
    [sym__attributed_variable] = STATE(111),
    [aux_sym__attributed_variable_repeat1] = STATE(30),
    [aux_sym_do_while_statement_token1] = ACTIONS(5),
    [anon_sym_RBRACE] = ACTIONS(1681),
    [aux_sym_function_definition_token1] = ACTIONS(7),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(9),
    [aux_sym_filter_definition_token1] = ACTIONS(11),
    [sym_number_expr] = ACTIONS(227),
    [anon_sym_AT_LPAREN] = ACTIONS(15),
    [sym_simple_variable] = ACTIONS(9),
    [anon_sym_DOLLAR_CARET] = ACTIONS(9),
    [sym_bareword_string] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [aux_sym_enum_definition_token1] = ACTIONS(23),
    [anon_sym_DQUOTE] = ACTIONS(25),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(17),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(9),
    [aux_sym_while_statement_token1] = ACTIONS(31),
    [aux_sym_if_statement_token1] = ACTIONS(229),
    [anon_sym_AMP] = ACTIONS(35),
    [anon_sym_LPAREN] = ACTIONS(37),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(41),
    [aux_sym_class_definition_token1] = ACTIONS(43),
    [anon_sym_AT_LBRACE] = ACTIONS(45),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(47),
    [sym__braced_variable] = ACTIONS(9),
    [sym_single_quote_string] = ACTIONS(487),
  },
  [547] = {
    [aux_sym__terminator_repeat1] = STATE(114),
    [sym__newline] = STATE(114),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(237),
    [anon_sym_CR_LF] = ACTIONS(239),
    [anon_sym_LBRACE] = ACTIONS(1683),
  },
  [548] = {
    [sym_type_expr] = STATE(26),
    [sym__string_expr] = STATE(155),
    [sym_double_quote_string] = STATE(155),
    [sym_pipeline_statement] = STATE(587),
    [sym__non_array_expression] = STATE(155),
    [sym__expression] = STATE(157),
    [sym_array_expression] = STATE(157),
    [sym_flat_array_expression] = STATE(155),
    [aux_sym_array_expression_repeat1] = STATE(156),
    [sym_variable] = STATE(155),
    [sym__special_variable] = STATE(6),
    [sym__attribute] = STATE(30),
    [sym_non_type_attribute] = STATE(30),
    [sym__newline] = STATE(588),
    [sym_command_expression] = STATE(157),
    [sym__pipeline_expression] = STATE(157),
    [sym__attributed_variable] = STATE(155),
    [aux_sym__terminator_repeat1] = STATE(588),
    [sym_scriptblock] = STATE(155),
    [aux_sym__attributed_variable_repeat1] = STATE(30),
    [sym_hashtable_expression] = STATE(155),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(61),
    [anon_sym_CR_LF] = ACTIONS(1685),
    [sym_number_expr] = ACTIONS(321),
    [anon_sym_AT_LPAREN] = ACTIONS(67),
    [sym_simple_variable] = ACTIONS(61),
    [anon_sym_DOLLAR_CARET] = ACTIONS(61),
    [sym_bareword_string] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(69),
    [anon_sym_DQUOTE] = ACTIONS(25),
    [anon_sym_COMMA] = ACTIONS(17),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(71),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(61),
    [anon_sym_AMP] = ACTIONS(99),
    [anon_sym_LPAREN] = ACTIONS(73),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(1687),
    [anon_sym_LBRACK] = ACTIONS(77),
    [anon_sym_AT_LBRACE] = ACTIONS(81),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(83),
    [sym__braced_variable] = ACTIONS(61),
    [sym_single_quote_string] = ACTIONS(321),
  },
  [549] = {
    [aux_sym__terminator_repeat1] = STATE(160),
    [sym__newline] = STATE(160),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(325),
    [anon_sym_CR_LF] = ACTIONS(327),
    [anon_sym_LPAREN] = ACTIONS(1689),
  },
  [550] = {
    [sym__statement] = STATE(106),
    [sym__definition_statement] = STATE(106),
    [sym_pipeline_statement] = STATE(106),
    [sym_if_statement] = STATE(106),
    [sym__non_array_expression] = STATE(107),
    [sym__expression] = STATE(110),
    [sym_array_expression] = STATE(110),
    [sym_flat_array_expression] = STATE(107),
    [sym_variable] = STATE(111),
    [sym__special_variable] = STATE(6),
    [sym_non_type_attribute] = STATE(30),
    [sym__attribute] = STATE(30),
    [sym_function_definition] = STATE(106),
    [sym_filter_definition] = STATE(106),
    [sym_enum_definition] = STATE(106),
    [sym_while_statement] = STATE(106),
    [sym_do_while_statement] = STATE(106),
    [sym_scriptblock] = STATE(107),
    [sym_hashtable_expression] = STATE(107),
    [sym_type_expr] = STATE(26),
    [sym__string_expr] = STATE(107),
    [sym_double_quote_string] = STATE(107),
    [aux_sym_class_method_body_repeat1] = STATE(591),
    [aux_sym_array_expression_repeat1] = STATE(109),
    [sym_class_definition] = STATE(106),
    [sym__expression_statement] = STATE(106),
    [sym_assignment_statement] = STATE(106),
    [sym_command_expression] = STATE(110),
    [sym__pipeline_expression] = STATE(110),
    [sym__attributed_variable] = STATE(111),
    [aux_sym__attributed_variable_repeat1] = STATE(30),
    [aux_sym_do_while_statement_token1] = ACTIONS(5),
    [anon_sym_RBRACE] = ACTIONS(1691),
    [aux_sym_function_definition_token1] = ACTIONS(7),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(9),
    [aux_sym_filter_definition_token1] = ACTIONS(11),
    [sym_number_expr] = ACTIONS(227),
    [anon_sym_AT_LPAREN] = ACTIONS(15),
    [sym_simple_variable] = ACTIONS(9),
    [anon_sym_DOLLAR_CARET] = ACTIONS(9),
    [sym_bareword_string] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [aux_sym_enum_definition_token1] = ACTIONS(23),
    [anon_sym_DQUOTE] = ACTIONS(25),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(17),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(9),
    [aux_sym_while_statement_token1] = ACTIONS(31),
    [aux_sym_if_statement_token1] = ACTIONS(229),
    [anon_sym_AMP] = ACTIONS(35),
    [anon_sym_LPAREN] = ACTIONS(37),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(41),
    [aux_sym_class_definition_token1] = ACTIONS(43),
    [anon_sym_AT_LBRACE] = ACTIONS(45),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(47),
    [sym__braced_variable] = ACTIONS(9),
    [sym_single_quote_string] = ACTIONS(487),
  },
  [551] = {
    [aux_sym__terminator_repeat1] = STATE(114),
    [sym__newline] = STATE(114),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(237),
    [anon_sym_CR_LF] = ACTIONS(239),
    [anon_sym_LBRACE] = ACTIONS(1693),
  },
  [552] = {
    [aux_sym__terminator_repeat1] = STATE(593),
    [sym__newline] = STATE(593),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(1695),
    [anon_sym_CR_LF] = ACTIONS(1697),
    [anon_sym_LBRACE] = ACTIONS(1693),
  },
  [553] = {
    [aux_sym_if_statement_repeat1] = STATE(553),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(1699),
    [aux_sym_if_statement_token2] = ACTIONS(1701),
    [ts_builtin_sym_end] = ACTIONS(1704),
    [anon_sym_CR_LF] = ACTIONS(1704),
    [anon_sym_SEMI] = ACTIONS(1699),
    [aux_sym_if_statement_token3] = ACTIONS(1699),
  },
  [554] = {
    [aux_sym_if_statement_repeat1] = STATE(553),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(1706),
    [ts_builtin_sym_end] = ACTIONS(1708),
    [aux_sym_if_statement_token2] = ACTIONS(1432),
    [anon_sym_CR_LF] = ACTIONS(1708),
    [anon_sym_SEMI] = ACTIONS(1706),
    [aux_sym_if_statement_token3] = ACTIONS(1710),
  },
  [555] = {
    [aux_sym_if_statement_repeat1] = STATE(595),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(1706),
    [ts_builtin_sym_end] = ACTIONS(1708),
    [aux_sym_if_statement_token2] = ACTIONS(1432),
    [anon_sym_CR_LF] = ACTIONS(1708),
    [anon_sym_SEMI] = ACTIONS(1706),
    [aux_sym_if_statement_token3] = ACTIONS(1710),
  },
  [556] = {
    [sym__statement] = STATE(106),
    [sym__definition_statement] = STATE(106),
    [sym_pipeline_statement] = STATE(106),
    [sym_if_statement] = STATE(106),
    [sym__non_array_expression] = STATE(107),
    [sym__expression] = STATE(110),
    [sym_array_expression] = STATE(110),
    [sym_flat_array_expression] = STATE(107),
    [sym_variable] = STATE(111),
    [sym__special_variable] = STATE(6),
    [sym_non_type_attribute] = STATE(30),
    [sym__attribute] = STATE(30),
    [sym_function_definition] = STATE(106),
    [sym_filter_definition] = STATE(106),
    [sym_enum_definition] = STATE(106),
    [sym_while_statement] = STATE(106),
    [sym_do_while_statement] = STATE(106),
    [sym_scriptblock] = STATE(107),
    [sym_hashtable_expression] = STATE(107),
    [sym_type_expr] = STATE(26),
    [sym__string_expr] = STATE(107),
    [sym_double_quote_string] = STATE(107),
    [aux_sym_class_method_body_repeat1] = STATE(221),
    [aux_sym_array_expression_repeat1] = STATE(109),
    [sym_class_definition] = STATE(106),
    [sym__expression_statement] = STATE(106),
    [sym_assignment_statement] = STATE(106),
    [sym_command_expression] = STATE(110),
    [sym__pipeline_expression] = STATE(110),
    [sym__attributed_variable] = STATE(111),
    [aux_sym__attributed_variable_repeat1] = STATE(30),
    [aux_sym_do_while_statement_token1] = ACTIONS(5),
    [anon_sym_RBRACE] = ACTIONS(1712),
    [aux_sym_function_definition_token1] = ACTIONS(7),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(9),
    [aux_sym_filter_definition_token1] = ACTIONS(11),
    [sym_number_expr] = ACTIONS(227),
    [anon_sym_AT_LPAREN] = ACTIONS(15),
    [sym_simple_variable] = ACTIONS(9),
    [anon_sym_DOLLAR_CARET] = ACTIONS(9),
    [sym_bareword_string] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [aux_sym_enum_definition_token1] = ACTIONS(23),
    [anon_sym_DQUOTE] = ACTIONS(25),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(17),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(9),
    [aux_sym_while_statement_token1] = ACTIONS(31),
    [aux_sym_if_statement_token1] = ACTIONS(229),
    [anon_sym_AMP] = ACTIONS(35),
    [anon_sym_LPAREN] = ACTIONS(37),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(41),
    [aux_sym_class_definition_token1] = ACTIONS(43),
    [anon_sym_AT_LBRACE] = ACTIONS(45),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(47),
    [sym__braced_variable] = ACTIONS(9),
    [sym_single_quote_string] = ACTIONS(487),
  },
  [557] = {
    [sym__statement] = STATE(106),
    [sym__definition_statement] = STATE(106),
    [sym_pipeline_statement] = STATE(106),
    [sym_if_statement] = STATE(106),
    [sym__non_array_expression] = STATE(107),
    [sym__expression] = STATE(110),
    [sym_array_expression] = STATE(110),
    [sym_flat_array_expression] = STATE(107),
    [sym_variable] = STATE(111),
    [sym__special_variable] = STATE(6),
    [sym_non_type_attribute] = STATE(30),
    [sym__attribute] = STATE(30),
    [sym_function_definition] = STATE(106),
    [sym_filter_definition] = STATE(106),
    [sym_enum_definition] = STATE(106),
    [sym_while_statement] = STATE(106),
    [sym_do_while_statement] = STATE(106),
    [sym_scriptblock] = STATE(107),
    [sym_hashtable_expression] = STATE(107),
    [sym_type_expr] = STATE(26),
    [sym__string_expr] = STATE(107),
    [sym_double_quote_string] = STATE(107),
    [aux_sym_class_method_body_repeat1] = STATE(597),
    [aux_sym_array_expression_repeat1] = STATE(109),
    [sym_class_definition] = STATE(106),
    [sym__expression_statement] = STATE(106),
    [sym_assignment_statement] = STATE(106),
    [sym_command_expression] = STATE(110),
    [sym__pipeline_expression] = STATE(110),
    [sym__attributed_variable] = STATE(111),
    [aux_sym__attributed_variable_repeat1] = STATE(30),
    [aux_sym_do_while_statement_token1] = ACTIONS(5),
    [anon_sym_RBRACE] = ACTIONS(1712),
    [aux_sym_function_definition_token1] = ACTIONS(7),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(9),
    [aux_sym_filter_definition_token1] = ACTIONS(11),
    [sym_number_expr] = ACTIONS(227),
    [anon_sym_AT_LPAREN] = ACTIONS(15),
    [sym_simple_variable] = ACTIONS(9),
    [anon_sym_DOLLAR_CARET] = ACTIONS(9),
    [sym_bareword_string] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [aux_sym_enum_definition_token1] = ACTIONS(23),
    [anon_sym_DQUOTE] = ACTIONS(25),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(17),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(9),
    [aux_sym_while_statement_token1] = ACTIONS(31),
    [aux_sym_if_statement_token1] = ACTIONS(229),
    [anon_sym_AMP] = ACTIONS(35),
    [anon_sym_LPAREN] = ACTIONS(37),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(41),
    [aux_sym_class_definition_token1] = ACTIONS(43),
    [anon_sym_AT_LBRACE] = ACTIONS(45),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(47),
    [sym__braced_variable] = ACTIONS(9),
    [sym_single_quote_string] = ACTIONS(487),
  },
  [558] = {
    [anon_sym_RPAREN] = ACTIONS(1557),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(1557),
    [anon_sym_PIPE] = ACTIONS(1557),
  },
  [559] = {
    [sym_simple_variable] = ACTIONS(1714),
    [anon_sym_RBRACE] = ACTIONS(1714),
    [anon_sym_LBRACK] = ACTIONS(1714),
    [sym_bareword_string] = ACTIONS(1716),
    [sym_comment] = ACTIONS(39),
  },
  [560] = {
    [sym__statement] = STATE(106),
    [sym__definition_statement] = STATE(106),
    [sym_pipeline_statement] = STATE(106),
    [sym_if_statement] = STATE(106),
    [sym__non_array_expression] = STATE(107),
    [sym__expression] = STATE(110),
    [sym_array_expression] = STATE(110),
    [sym_flat_array_expression] = STATE(107),
    [sym_variable] = STATE(111),
    [sym__special_variable] = STATE(6),
    [sym_non_type_attribute] = STATE(30),
    [sym__attribute] = STATE(30),
    [sym_function_definition] = STATE(106),
    [sym_filter_definition] = STATE(106),
    [sym_enum_definition] = STATE(106),
    [sym_while_statement] = STATE(106),
    [sym_do_while_statement] = STATE(106),
    [sym_scriptblock] = STATE(107),
    [sym_hashtable_expression] = STATE(107),
    [sym_type_expr] = STATE(26),
    [sym__string_expr] = STATE(107),
    [sym_double_quote_string] = STATE(107),
    [aux_sym_class_method_body_repeat1] = STATE(221),
    [aux_sym_array_expression_repeat1] = STATE(109),
    [sym_class_definition] = STATE(106),
    [sym__expression_statement] = STATE(106),
    [sym_assignment_statement] = STATE(106),
    [sym_command_expression] = STATE(110),
    [sym__pipeline_expression] = STATE(110),
    [sym__attributed_variable] = STATE(111),
    [aux_sym__attributed_variable_repeat1] = STATE(30),
    [aux_sym_do_while_statement_token1] = ACTIONS(5),
    [anon_sym_RBRACE] = ACTIONS(1718),
    [aux_sym_function_definition_token1] = ACTIONS(7),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(9),
    [aux_sym_filter_definition_token1] = ACTIONS(11),
    [sym_number_expr] = ACTIONS(227),
    [anon_sym_AT_LPAREN] = ACTIONS(15),
    [sym_simple_variable] = ACTIONS(9),
    [anon_sym_DOLLAR_CARET] = ACTIONS(9),
    [sym_bareword_string] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [aux_sym_enum_definition_token1] = ACTIONS(23),
    [anon_sym_DQUOTE] = ACTIONS(25),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(17),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(9),
    [aux_sym_while_statement_token1] = ACTIONS(31),
    [aux_sym_if_statement_token1] = ACTIONS(229),
    [anon_sym_AMP] = ACTIONS(35),
    [anon_sym_LPAREN] = ACTIONS(37),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(41),
    [aux_sym_class_definition_token1] = ACTIONS(43),
    [anon_sym_AT_LBRACE] = ACTIONS(45),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(47),
    [sym__braced_variable] = ACTIONS(9),
    [sym_single_quote_string] = ACTIONS(487),
  },
  [561] = {
    [sym_simple_variable] = ACTIONS(1720),
    [anon_sym_RBRACE] = ACTIONS(1720),
    [anon_sym_LBRACK] = ACTIONS(1720),
    [sym_bareword_string] = ACTIONS(1722),
    [sym_comment] = ACTIONS(39),
  },
  [562] = {
    [sym_class_method_body] = STATE(599),
    [aux_sym__terminator_repeat1] = STATE(114),
    [sym__newline] = STATE(114),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(237),
    [anon_sym_CR_LF] = ACTIONS(239),
    [anon_sym_LBRACE] = ACTIONS(1473),
  },
  [563] = {
    [sym_class_method_body] = STATE(599),
    [aux_sym__terminator_repeat1] = STATE(600),
    [sym__newline] = STATE(600),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(1724),
    [anon_sym_CR_LF] = ACTIONS(1726),
    [anon_sym_LBRACE] = ACTIONS(1473),
  },
  [564] = {
    [aux_sym_class_method_repeat1] = STATE(567),
    [anon_sym_RPAREN] = ACTIONS(1728),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(1485),
  },
  [565] = {
    [sym_type_expr] = STATE(462),
    [aux_sym__terminator_repeat1] = STATE(358),
    [sym__newline] = STATE(358),
    [sym_class_parameter] = STATE(602),
    [sym_simple_variable] = ACTIONS(1281),
    [anon_sym_LF] = ACTIONS(975),
    [anon_sym_LBRACK] = ACTIONS(1285),
    [sym_comment] = ACTIONS(39),
    [anon_sym_CR_LF] = ACTIONS(977),
  },
  [566] = {
    [anon_sym_RPAREN] = ACTIONS(1730),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(1730),
  },
  [567] = {
    [aux_sym_class_method_repeat1] = STATE(567),
    [anon_sym_RPAREN] = ACTIONS(1730),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(1732),
  },
  [568] = {
    [aux_sym_class_method_repeat1] = STATE(603),
    [anon_sym_RPAREN] = ACTIONS(1728),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(1485),
  },
  [569] = {
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(1735),
    [ts_builtin_sym_end] = ACTIONS(1737),
    [anon_sym_RBRACE] = ACTIONS(1735),
    [anon_sym_CR_LF] = ACTIONS(1737),
    [anon_sym_SEMI] = ACTIONS(1735),
  },
  [570] = {
    [aux_sym_if_statement_repeat1] = STATE(604),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(1601),
    [aux_sym_if_statement_token2] = ACTIONS(1432),
    [anon_sym_CR_LF] = ACTIONS(1603),
    [anon_sym_SEMI] = ACTIONS(1601),
    [aux_sym_if_statement_token3] = ACTIONS(1605),
  },
  [571] = {
    [aux_sym_if_statement_repeat1] = STATE(605),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(1601),
    [aux_sym_if_statement_token2] = ACTIONS(1432),
    [anon_sym_CR_LF] = ACTIONS(1603),
    [anon_sym_SEMI] = ACTIONS(1601),
    [aux_sym_if_statement_token3] = ACTIONS(1605),
  },
  [572] = {
    [sym__statement] = STATE(106),
    [sym__definition_statement] = STATE(106),
    [sym_pipeline_statement] = STATE(106),
    [sym_if_statement] = STATE(106),
    [sym__non_array_expression] = STATE(107),
    [sym__expression] = STATE(110),
    [sym_array_expression] = STATE(110),
    [sym_flat_array_expression] = STATE(107),
    [sym_variable] = STATE(111),
    [sym__special_variable] = STATE(6),
    [sym_non_type_attribute] = STATE(30),
    [sym__attribute] = STATE(30),
    [sym_function_definition] = STATE(106),
    [sym_filter_definition] = STATE(106),
    [sym_enum_definition] = STATE(106),
    [sym_while_statement] = STATE(106),
    [sym_do_while_statement] = STATE(106),
    [sym_scriptblock] = STATE(107),
    [sym_hashtable_expression] = STATE(107),
    [sym_type_expr] = STATE(26),
    [sym__string_expr] = STATE(107),
    [sym_double_quote_string] = STATE(107),
    [aux_sym_class_method_body_repeat1] = STATE(221),
    [aux_sym_array_expression_repeat1] = STATE(109),
    [sym_class_definition] = STATE(106),
    [sym__expression_statement] = STATE(106),
    [sym_assignment_statement] = STATE(106),
    [sym_command_expression] = STATE(110),
    [sym__pipeline_expression] = STATE(110),
    [sym__attributed_variable] = STATE(111),
    [aux_sym__attributed_variable_repeat1] = STATE(30),
    [aux_sym_do_while_statement_token1] = ACTIONS(5),
    [anon_sym_RBRACE] = ACTIONS(1739),
    [aux_sym_function_definition_token1] = ACTIONS(7),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(9),
    [aux_sym_filter_definition_token1] = ACTIONS(11),
    [sym_number_expr] = ACTIONS(227),
    [anon_sym_AT_LPAREN] = ACTIONS(15),
    [sym_simple_variable] = ACTIONS(9),
    [anon_sym_DOLLAR_CARET] = ACTIONS(9),
    [sym_bareword_string] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [aux_sym_enum_definition_token1] = ACTIONS(23),
    [anon_sym_DQUOTE] = ACTIONS(25),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(17),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(9),
    [aux_sym_while_statement_token1] = ACTIONS(31),
    [aux_sym_if_statement_token1] = ACTIONS(229),
    [anon_sym_AMP] = ACTIONS(35),
    [anon_sym_LPAREN] = ACTIONS(37),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(41),
    [aux_sym_class_definition_token1] = ACTIONS(43),
    [anon_sym_AT_LBRACE] = ACTIONS(45),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(47),
    [sym__braced_variable] = ACTIONS(9),
    [sym_single_quote_string] = ACTIONS(487),
  },
  [573] = {
    [sym__statement] = STATE(106),
    [sym__definition_statement] = STATE(106),
    [sym_pipeline_statement] = STATE(106),
    [sym_if_statement] = STATE(106),
    [sym__non_array_expression] = STATE(107),
    [sym__expression] = STATE(110),
    [sym_array_expression] = STATE(110),
    [sym_flat_array_expression] = STATE(107),
    [sym_variable] = STATE(111),
    [sym__special_variable] = STATE(6),
    [sym_non_type_attribute] = STATE(30),
    [sym__attribute] = STATE(30),
    [sym_function_definition] = STATE(106),
    [sym_filter_definition] = STATE(106),
    [sym_enum_definition] = STATE(106),
    [sym_while_statement] = STATE(106),
    [sym_do_while_statement] = STATE(106),
    [sym_scriptblock] = STATE(107),
    [sym_hashtable_expression] = STATE(107),
    [sym_type_expr] = STATE(26),
    [sym__string_expr] = STATE(107),
    [sym_double_quote_string] = STATE(107),
    [aux_sym_class_method_body_repeat1] = STATE(607),
    [aux_sym_array_expression_repeat1] = STATE(109),
    [sym_class_definition] = STATE(106),
    [sym__expression_statement] = STATE(106),
    [sym_assignment_statement] = STATE(106),
    [sym_command_expression] = STATE(110),
    [sym__pipeline_expression] = STATE(110),
    [sym__attributed_variable] = STATE(111),
    [aux_sym__attributed_variable_repeat1] = STATE(30),
    [aux_sym_do_while_statement_token1] = ACTIONS(5),
    [anon_sym_RBRACE] = ACTIONS(1739),
    [aux_sym_function_definition_token1] = ACTIONS(7),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(9),
    [aux_sym_filter_definition_token1] = ACTIONS(11),
    [sym_number_expr] = ACTIONS(227),
    [anon_sym_AT_LPAREN] = ACTIONS(15),
    [sym_simple_variable] = ACTIONS(9),
    [anon_sym_DOLLAR_CARET] = ACTIONS(9),
    [sym_bareword_string] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [aux_sym_enum_definition_token1] = ACTIONS(23),
    [anon_sym_DQUOTE] = ACTIONS(25),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(17),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(9),
    [aux_sym_while_statement_token1] = ACTIONS(31),
    [aux_sym_if_statement_token1] = ACTIONS(229),
    [anon_sym_AMP] = ACTIONS(35),
    [anon_sym_LPAREN] = ACTIONS(37),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(41),
    [aux_sym_class_definition_token1] = ACTIONS(43),
    [anon_sym_AT_LBRACE] = ACTIONS(45),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(47),
    [sym__braced_variable] = ACTIONS(9),
    [sym_single_quote_string] = ACTIONS(487),
  },
  [574] = {
    [aux_sym__terminator_repeat1] = STATE(114),
    [sym__newline] = STATE(114),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(237),
    [anon_sym_CR_LF] = ACTIONS(239),
    [anon_sym_LBRACE] = ACTIONS(1741),
  },
  [575] = {
    [anon_sym_RPAREN] = ACTIONS(1743),
    [sym_comment] = ACTIONS(3),
  },
  [576] = {
    [sym_type_expr] = STATE(75),
    [sym__string_expr] = STATE(89),
    [sym_double_quote_string] = STATE(89),
    [sym_pipeline_statement] = STATE(610),
    [sym__non_array_expression] = STATE(89),
    [sym__expression] = STATE(91),
    [sym_array_expression] = STATE(91),
    [sym_flat_array_expression] = STATE(89),
    [aux_sym_array_expression_repeat1] = STATE(90),
    [sym_variable] = STATE(89),
    [sym__special_variable] = STATE(64),
    [sym_non_type_attribute] = STATE(79),
    [sym__attribute] = STATE(79),
    [sym_command_expression] = STATE(91),
    [sym__pipeline_expression] = STATE(91),
    [sym__attributed_variable] = STATE(89),
    [sym_scriptblock] = STATE(89),
    [aux_sym__attributed_variable_repeat1] = STATE(79),
    [sym_hashtable_expression] = STATE(89),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(143),
    [sym_number_expr] = ACTIONS(191),
    [anon_sym_AT_LPAREN] = ACTIONS(147),
    [anon_sym_DOLLAR_CARET] = ACTIONS(143),
    [sym_simple_variable] = ACTIONS(143),
    [sym_bareword_string] = ACTIONS(149),
    [anon_sym_LBRACE] = ACTIONS(151),
    [anon_sym_DQUOTE] = ACTIONS(153),
    [anon_sym_COMMA] = ACTIONS(155),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(157),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(143),
    [anon_sym_AMP] = ACTIONS(159),
    [anon_sym_LPAREN] = ACTIONS(161),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(163),
    [sym_single_quote_string] = ACTIONS(193),
    [anon_sym_AT_LBRACE] = ACTIONS(167),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(169),
    [sym__braced_variable] = ACTIONS(143),
  },
  [577] = {
    [aux_sym__terminator_repeat1] = STATE(160),
    [sym__newline] = STATE(160),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(325),
    [anon_sym_CR_LF] = ACTIONS(327),
    [anon_sym_LPAREN] = ACTIONS(1745),
  },
  [578] = {
    [aux_sym_if_statement_repeat1] = STATE(578),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(1699),
    [anon_sym_RBRACE] = ACTIONS(1699),
    [aux_sym_if_statement_token2] = ACTIONS(1701),
    [anon_sym_CR_LF] = ACTIONS(1704),
    [anon_sym_SEMI] = ACTIONS(1699),
    [aux_sym_if_statement_token3] = ACTIONS(1699),
  },
  [579] = {
    [aux_sym_if_statement_repeat1] = STATE(578),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(1706),
    [anon_sym_RBRACE] = ACTIONS(1706),
    [aux_sym_if_statement_token2] = ACTIONS(1432),
    [anon_sym_CR_LF] = ACTIONS(1708),
    [anon_sym_SEMI] = ACTIONS(1706),
    [aux_sym_if_statement_token3] = ACTIONS(1710),
  },
  [580] = {
    [aux_sym_if_statement_repeat1] = STATE(612),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(1706),
    [anon_sym_RBRACE] = ACTIONS(1706),
    [aux_sym_if_statement_token2] = ACTIONS(1432),
    [anon_sym_CR_LF] = ACTIONS(1708),
    [anon_sym_SEMI] = ACTIONS(1706),
    [aux_sym_if_statement_token3] = ACTIONS(1710),
  },
  [581] = {
    [sym__statement] = STATE(106),
    [sym__definition_statement] = STATE(106),
    [sym_pipeline_statement] = STATE(106),
    [sym_if_statement] = STATE(106),
    [sym__non_array_expression] = STATE(107),
    [sym__expression] = STATE(110),
    [sym_array_expression] = STATE(110),
    [sym_flat_array_expression] = STATE(107),
    [sym_variable] = STATE(111),
    [sym__special_variable] = STATE(6),
    [sym_non_type_attribute] = STATE(30),
    [sym__attribute] = STATE(30),
    [sym_function_definition] = STATE(106),
    [sym_filter_definition] = STATE(106),
    [sym_enum_definition] = STATE(106),
    [sym_while_statement] = STATE(106),
    [sym_do_while_statement] = STATE(106),
    [sym_scriptblock] = STATE(107),
    [sym_hashtable_expression] = STATE(107),
    [sym_type_expr] = STATE(26),
    [sym__string_expr] = STATE(107),
    [sym_double_quote_string] = STATE(107),
    [aux_sym_class_method_body_repeat1] = STATE(221),
    [aux_sym_array_expression_repeat1] = STATE(109),
    [sym_class_definition] = STATE(106),
    [sym__expression_statement] = STATE(106),
    [sym_assignment_statement] = STATE(106),
    [sym_command_expression] = STATE(110),
    [sym__pipeline_expression] = STATE(110),
    [sym__attributed_variable] = STATE(111),
    [aux_sym__attributed_variable_repeat1] = STATE(30),
    [aux_sym_do_while_statement_token1] = ACTIONS(5),
    [anon_sym_RBRACE] = ACTIONS(1747),
    [aux_sym_function_definition_token1] = ACTIONS(7),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(9),
    [aux_sym_filter_definition_token1] = ACTIONS(11),
    [sym_number_expr] = ACTIONS(227),
    [anon_sym_AT_LPAREN] = ACTIONS(15),
    [sym_simple_variable] = ACTIONS(9),
    [anon_sym_DOLLAR_CARET] = ACTIONS(9),
    [sym_bareword_string] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [aux_sym_enum_definition_token1] = ACTIONS(23),
    [anon_sym_DQUOTE] = ACTIONS(25),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(17),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(9),
    [aux_sym_while_statement_token1] = ACTIONS(31),
    [aux_sym_if_statement_token1] = ACTIONS(229),
    [anon_sym_AMP] = ACTIONS(35),
    [anon_sym_LPAREN] = ACTIONS(37),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(41),
    [aux_sym_class_definition_token1] = ACTIONS(43),
    [anon_sym_AT_LBRACE] = ACTIONS(45),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(47),
    [sym__braced_variable] = ACTIONS(9),
    [sym_single_quote_string] = ACTIONS(487),
  },
  [582] = {
    [sym__statement] = STATE(106),
    [sym__definition_statement] = STATE(106),
    [sym_pipeline_statement] = STATE(106),
    [sym_if_statement] = STATE(106),
    [sym__non_array_expression] = STATE(107),
    [sym__expression] = STATE(110),
    [sym_array_expression] = STATE(110),
    [sym_flat_array_expression] = STATE(107),
    [sym_variable] = STATE(111),
    [sym__special_variable] = STATE(6),
    [sym_non_type_attribute] = STATE(30),
    [sym__attribute] = STATE(30),
    [sym_function_definition] = STATE(106),
    [sym_filter_definition] = STATE(106),
    [sym_enum_definition] = STATE(106),
    [sym_while_statement] = STATE(106),
    [sym_do_while_statement] = STATE(106),
    [sym_scriptblock] = STATE(107),
    [sym_hashtable_expression] = STATE(107),
    [sym_type_expr] = STATE(26),
    [sym__string_expr] = STATE(107),
    [sym_double_quote_string] = STATE(107),
    [aux_sym_class_method_body_repeat1] = STATE(614),
    [aux_sym_array_expression_repeat1] = STATE(109),
    [sym_class_definition] = STATE(106),
    [sym__expression_statement] = STATE(106),
    [sym_assignment_statement] = STATE(106),
    [sym_command_expression] = STATE(110),
    [sym__pipeline_expression] = STATE(110),
    [sym__attributed_variable] = STATE(111),
    [aux_sym__attributed_variable_repeat1] = STATE(30),
    [aux_sym_do_while_statement_token1] = ACTIONS(5),
    [anon_sym_RBRACE] = ACTIONS(1747),
    [aux_sym_function_definition_token1] = ACTIONS(7),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(9),
    [aux_sym_filter_definition_token1] = ACTIONS(11),
    [sym_number_expr] = ACTIONS(227),
    [anon_sym_AT_LPAREN] = ACTIONS(15),
    [sym_simple_variable] = ACTIONS(9),
    [anon_sym_DOLLAR_CARET] = ACTIONS(9),
    [sym_bareword_string] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [aux_sym_enum_definition_token1] = ACTIONS(23),
    [anon_sym_DQUOTE] = ACTIONS(25),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(17),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(9),
    [aux_sym_while_statement_token1] = ACTIONS(31),
    [aux_sym_if_statement_token1] = ACTIONS(229),
    [anon_sym_AMP] = ACTIONS(35),
    [anon_sym_LPAREN] = ACTIONS(37),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(41),
    [aux_sym_class_definition_token1] = ACTIONS(43),
    [anon_sym_AT_LBRACE] = ACTIONS(45),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(47),
    [sym__braced_variable] = ACTIONS(9),
    [sym_single_quote_string] = ACTIONS(487),
  },
  [583] = {
    [sym_simple_variable] = ACTIONS(1749),
    [anon_sym_LF] = ACTIONS(1749),
    [anon_sym_LBRACK] = ACTIONS(1749),
    [sym_comment] = ACTIONS(39),
    [anon_sym_CR_LF] = ACTIONS(1613),
  },
  [584] = {
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(1751),
    [ts_builtin_sym_end] = ACTIONS(1753),
    [anon_sym_RBRACE] = ACTIONS(1751),
    [anon_sym_CR_LF] = ACTIONS(1753),
    [anon_sym_SEMI] = ACTIONS(1751),
  },
  [585] = {
    [sym__statement] = STATE(106),
    [sym__definition_statement] = STATE(106),
    [sym_pipeline_statement] = STATE(106),
    [sym_if_statement] = STATE(106),
    [sym__non_array_expression] = STATE(107),
    [sym__expression] = STATE(110),
    [sym_array_expression] = STATE(110),
    [sym_flat_array_expression] = STATE(107),
    [sym_variable] = STATE(111),
    [sym__special_variable] = STATE(6),
    [sym_non_type_attribute] = STATE(30),
    [sym__attribute] = STATE(30),
    [sym_function_definition] = STATE(106),
    [sym_filter_definition] = STATE(106),
    [sym_enum_definition] = STATE(106),
    [sym_while_statement] = STATE(106),
    [sym_do_while_statement] = STATE(106),
    [sym_scriptblock] = STATE(107),
    [sym_hashtable_expression] = STATE(107),
    [sym_type_expr] = STATE(26),
    [sym__string_expr] = STATE(107),
    [sym_double_quote_string] = STATE(107),
    [aux_sym_class_method_body_repeat1] = STATE(221),
    [aux_sym_array_expression_repeat1] = STATE(109),
    [sym_class_definition] = STATE(106),
    [sym__expression_statement] = STATE(106),
    [sym_assignment_statement] = STATE(106),
    [sym_command_expression] = STATE(110),
    [sym__pipeline_expression] = STATE(110),
    [sym__attributed_variable] = STATE(111),
    [aux_sym__attributed_variable_repeat1] = STATE(30),
    [aux_sym_do_while_statement_token1] = ACTIONS(5),
    [anon_sym_RBRACE] = ACTIONS(1755),
    [aux_sym_function_definition_token1] = ACTIONS(7),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(9),
    [aux_sym_filter_definition_token1] = ACTIONS(11),
    [sym_number_expr] = ACTIONS(227),
    [anon_sym_AT_LPAREN] = ACTIONS(15),
    [sym_simple_variable] = ACTIONS(9),
    [anon_sym_DOLLAR_CARET] = ACTIONS(9),
    [sym_bareword_string] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [aux_sym_enum_definition_token1] = ACTIONS(23),
    [anon_sym_DQUOTE] = ACTIONS(25),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(17),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(9),
    [aux_sym_while_statement_token1] = ACTIONS(31),
    [aux_sym_if_statement_token1] = ACTIONS(229),
    [anon_sym_AMP] = ACTIONS(35),
    [anon_sym_LPAREN] = ACTIONS(37),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(41),
    [aux_sym_class_definition_token1] = ACTIONS(43),
    [anon_sym_AT_LBRACE] = ACTIONS(45),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(47),
    [sym__braced_variable] = ACTIONS(9),
    [sym_single_quote_string] = ACTIONS(487),
  },
  [586] = {
    [sym__statement] = STATE(106),
    [sym__definition_statement] = STATE(106),
    [sym_pipeline_statement] = STATE(106),
    [sym_if_statement] = STATE(106),
    [sym__non_array_expression] = STATE(107),
    [sym__expression] = STATE(110),
    [sym_array_expression] = STATE(110),
    [sym_flat_array_expression] = STATE(107),
    [sym_variable] = STATE(111),
    [sym__special_variable] = STATE(6),
    [sym_non_type_attribute] = STATE(30),
    [sym__attribute] = STATE(30),
    [sym_function_definition] = STATE(106),
    [sym_filter_definition] = STATE(106),
    [sym_enum_definition] = STATE(106),
    [sym_while_statement] = STATE(106),
    [sym_do_while_statement] = STATE(106),
    [sym_scriptblock] = STATE(107),
    [sym_hashtable_expression] = STATE(107),
    [sym_type_expr] = STATE(26),
    [sym__string_expr] = STATE(107),
    [sym_double_quote_string] = STATE(107),
    [aux_sym_class_method_body_repeat1] = STATE(616),
    [aux_sym_array_expression_repeat1] = STATE(109),
    [sym_class_definition] = STATE(106),
    [sym__expression_statement] = STATE(106),
    [sym_assignment_statement] = STATE(106),
    [sym_command_expression] = STATE(110),
    [sym__pipeline_expression] = STATE(110),
    [sym__attributed_variable] = STATE(111),
    [aux_sym__attributed_variable_repeat1] = STATE(30),
    [aux_sym_do_while_statement_token1] = ACTIONS(5),
    [anon_sym_RBRACE] = ACTIONS(1755),
    [aux_sym_function_definition_token1] = ACTIONS(7),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(9),
    [aux_sym_filter_definition_token1] = ACTIONS(11),
    [sym_number_expr] = ACTIONS(227),
    [anon_sym_AT_LPAREN] = ACTIONS(15),
    [sym_simple_variable] = ACTIONS(9),
    [anon_sym_DOLLAR_CARET] = ACTIONS(9),
    [sym_bareword_string] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [aux_sym_enum_definition_token1] = ACTIONS(23),
    [anon_sym_DQUOTE] = ACTIONS(25),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(17),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(9),
    [aux_sym_while_statement_token1] = ACTIONS(31),
    [aux_sym_if_statement_token1] = ACTIONS(229),
    [anon_sym_AMP] = ACTIONS(35),
    [anon_sym_LPAREN] = ACTIONS(37),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(41),
    [aux_sym_class_definition_token1] = ACTIONS(43),
    [anon_sym_AT_LBRACE] = ACTIONS(45),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(47),
    [sym__braced_variable] = ACTIONS(9),
    [sym_single_quote_string] = ACTIONS(487),
  },
  [587] = {
    [aux_sym__terminator_repeat1] = STATE(618),
    [sym__newline] = STATE(618),
    [anon_sym_RPAREN] = ACTIONS(1757),
    [anon_sym_LF] = ACTIONS(1759),
    [sym_comment] = ACTIONS(39),
    [anon_sym_CR_LF] = ACTIONS(1761),
  },
  [588] = {
    [sym_type_expr] = STATE(26),
    [sym__string_expr] = STATE(155),
    [sym_double_quote_string] = STATE(155),
    [sym_pipeline_statement] = STATE(619),
    [sym__non_array_expression] = STATE(155),
    [sym__expression] = STATE(157),
    [sym_array_expression] = STATE(157),
    [sym_flat_array_expression] = STATE(155),
    [aux_sym_array_expression_repeat1] = STATE(156),
    [sym_variable] = STATE(155),
    [sym__special_variable] = STATE(6),
    [sym__attribute] = STATE(30),
    [sym_non_type_attribute] = STATE(30),
    [sym__newline] = STATE(266),
    [sym_command_expression] = STATE(157),
    [sym__pipeline_expression] = STATE(157),
    [sym__attributed_variable] = STATE(155),
    [aux_sym__terminator_repeat1] = STATE(266),
    [sym_scriptblock] = STATE(155),
    [aux_sym__attributed_variable_repeat1] = STATE(30),
    [sym_hashtable_expression] = STATE(155),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(61),
    [anon_sym_CR_LF] = ACTIONS(633),
    [sym_number_expr] = ACTIONS(321),
    [anon_sym_AT_LPAREN] = ACTIONS(67),
    [sym_simple_variable] = ACTIONS(61),
    [anon_sym_DOLLAR_CARET] = ACTIONS(61),
    [sym_bareword_string] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(69),
    [anon_sym_DQUOTE] = ACTIONS(25),
    [anon_sym_COMMA] = ACTIONS(17),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(71),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(61),
    [anon_sym_AMP] = ACTIONS(99),
    [anon_sym_LPAREN] = ACTIONS(73),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(635),
    [anon_sym_LBRACK] = ACTIONS(77),
    [anon_sym_AT_LBRACE] = ACTIONS(81),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(83),
    [sym__braced_variable] = ACTIONS(61),
    [sym_single_quote_string] = ACTIONS(321),
  },
  [589] = {
    [sym_type_expr] = STATE(26),
    [sym__string_expr] = STATE(155),
    [sym_double_quote_string] = STATE(155),
    [sym_pipeline_statement] = STATE(619),
    [sym__non_array_expression] = STATE(155),
    [sym__expression] = STATE(157),
    [sym_array_expression] = STATE(157),
    [sym_flat_array_expression] = STATE(155),
    [aux_sym_array_expression_repeat1] = STATE(156),
    [sym_variable] = STATE(155),
    [sym__special_variable] = STATE(6),
    [sym__attribute] = STATE(30),
    [sym_non_type_attribute] = STATE(30),
    [sym__newline] = STATE(620),
    [sym_command_expression] = STATE(157),
    [sym__pipeline_expression] = STATE(157),
    [sym__attributed_variable] = STATE(155),
    [aux_sym__terminator_repeat1] = STATE(620),
    [sym_scriptblock] = STATE(155),
    [aux_sym__attributed_variable_repeat1] = STATE(30),
    [sym_hashtable_expression] = STATE(155),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(61),
    [anon_sym_CR_LF] = ACTIONS(1763),
    [sym_number_expr] = ACTIONS(321),
    [anon_sym_AT_LPAREN] = ACTIONS(67),
    [sym_simple_variable] = ACTIONS(61),
    [anon_sym_DOLLAR_CARET] = ACTIONS(61),
    [sym_bareword_string] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(69),
    [anon_sym_DQUOTE] = ACTIONS(25),
    [anon_sym_COMMA] = ACTIONS(17),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(71),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(61),
    [anon_sym_AMP] = ACTIONS(99),
    [anon_sym_LPAREN] = ACTIONS(73),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(1765),
    [anon_sym_LBRACK] = ACTIONS(77),
    [anon_sym_AT_LBRACE] = ACTIONS(81),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(83),
    [sym__braced_variable] = ACTIONS(61),
    [sym_single_quote_string] = ACTIONS(321),
  },
  [590] = {
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(1767),
    [ts_builtin_sym_end] = ACTIONS(1769),
    [anon_sym_RBRACE] = ACTIONS(1767),
    [anon_sym_CR_LF] = ACTIONS(1769),
    [anon_sym_SEMI] = ACTIONS(1767),
  },
  [591] = {
    [sym__statement] = STATE(106),
    [sym__definition_statement] = STATE(106),
    [sym_pipeline_statement] = STATE(106),
    [sym_if_statement] = STATE(106),
    [sym__non_array_expression] = STATE(107),
    [sym__expression] = STATE(110),
    [sym_array_expression] = STATE(110),
    [sym_flat_array_expression] = STATE(107),
    [sym_variable] = STATE(111),
    [sym__special_variable] = STATE(6),
    [sym_non_type_attribute] = STATE(30),
    [sym__attribute] = STATE(30),
    [sym_function_definition] = STATE(106),
    [sym_filter_definition] = STATE(106),
    [sym_enum_definition] = STATE(106),
    [sym_while_statement] = STATE(106),
    [sym_do_while_statement] = STATE(106),
    [sym_scriptblock] = STATE(107),
    [sym_hashtable_expression] = STATE(107),
    [sym_type_expr] = STATE(26),
    [sym__string_expr] = STATE(107),
    [sym_double_quote_string] = STATE(107),
    [aux_sym_class_method_body_repeat1] = STATE(221),
    [aux_sym_array_expression_repeat1] = STATE(109),
    [sym_class_definition] = STATE(106),
    [sym__expression_statement] = STATE(106),
    [sym_assignment_statement] = STATE(106),
    [sym_command_expression] = STATE(110),
    [sym__pipeline_expression] = STATE(110),
    [sym__attributed_variable] = STATE(111),
    [aux_sym__attributed_variable_repeat1] = STATE(30),
    [aux_sym_do_while_statement_token1] = ACTIONS(5),
    [anon_sym_RBRACE] = ACTIONS(1771),
    [aux_sym_function_definition_token1] = ACTIONS(7),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(9),
    [aux_sym_filter_definition_token1] = ACTIONS(11),
    [sym_number_expr] = ACTIONS(227),
    [anon_sym_AT_LPAREN] = ACTIONS(15),
    [sym_simple_variable] = ACTIONS(9),
    [anon_sym_DOLLAR_CARET] = ACTIONS(9),
    [sym_bareword_string] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [aux_sym_enum_definition_token1] = ACTIONS(23),
    [anon_sym_DQUOTE] = ACTIONS(25),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(17),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(9),
    [aux_sym_while_statement_token1] = ACTIONS(31),
    [aux_sym_if_statement_token1] = ACTIONS(229),
    [anon_sym_AMP] = ACTIONS(35),
    [anon_sym_LPAREN] = ACTIONS(37),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(41),
    [aux_sym_class_definition_token1] = ACTIONS(43),
    [anon_sym_AT_LBRACE] = ACTIONS(45),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(47),
    [sym__braced_variable] = ACTIONS(9),
    [sym_single_quote_string] = ACTIONS(487),
  },
  [592] = {
    [sym__statement] = STATE(106),
    [sym__definition_statement] = STATE(106),
    [sym_pipeline_statement] = STATE(106),
    [sym_if_statement] = STATE(106),
    [sym__non_array_expression] = STATE(107),
    [sym__expression] = STATE(110),
    [sym_array_expression] = STATE(110),
    [sym_flat_array_expression] = STATE(107),
    [sym_variable] = STATE(111),
    [sym__special_variable] = STATE(6),
    [sym_non_type_attribute] = STATE(30),
    [sym__attribute] = STATE(30),
    [sym_function_definition] = STATE(106),
    [sym_filter_definition] = STATE(106),
    [sym_enum_definition] = STATE(106),
    [sym_while_statement] = STATE(106),
    [sym_do_while_statement] = STATE(106),
    [sym_scriptblock] = STATE(107),
    [sym_hashtable_expression] = STATE(107),
    [sym_type_expr] = STATE(26),
    [sym__string_expr] = STATE(107),
    [sym_double_quote_string] = STATE(107),
    [aux_sym_class_method_body_repeat1] = STATE(622),
    [aux_sym_array_expression_repeat1] = STATE(109),
    [sym_class_definition] = STATE(106),
    [sym__expression_statement] = STATE(106),
    [sym_assignment_statement] = STATE(106),
    [sym_command_expression] = STATE(110),
    [sym__pipeline_expression] = STATE(110),
    [sym__attributed_variable] = STATE(111),
    [aux_sym__attributed_variable_repeat1] = STATE(30),
    [aux_sym_do_while_statement_token1] = ACTIONS(5),
    [anon_sym_RBRACE] = ACTIONS(1771),
    [aux_sym_function_definition_token1] = ACTIONS(7),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(9),
    [aux_sym_filter_definition_token1] = ACTIONS(11),
    [sym_number_expr] = ACTIONS(227),
    [anon_sym_AT_LPAREN] = ACTIONS(15),
    [sym_simple_variable] = ACTIONS(9),
    [anon_sym_DOLLAR_CARET] = ACTIONS(9),
    [sym_bareword_string] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [aux_sym_enum_definition_token1] = ACTIONS(23),
    [anon_sym_DQUOTE] = ACTIONS(25),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(17),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(9),
    [aux_sym_while_statement_token1] = ACTIONS(31),
    [aux_sym_if_statement_token1] = ACTIONS(229),
    [anon_sym_AMP] = ACTIONS(35),
    [anon_sym_LPAREN] = ACTIONS(37),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(41),
    [aux_sym_class_definition_token1] = ACTIONS(43),
    [anon_sym_AT_LBRACE] = ACTIONS(45),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(47),
    [sym__braced_variable] = ACTIONS(9),
    [sym_single_quote_string] = ACTIONS(487),
  },
  [593] = {
    [aux_sym__terminator_repeat1] = STATE(114),
    [sym__newline] = STATE(114),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(237),
    [anon_sym_CR_LF] = ACTIONS(239),
    [anon_sym_LBRACE] = ACTIONS(1773),
  },
  [594] = {
    [aux_sym__terminator_repeat1] = STATE(624),
    [sym__newline] = STATE(624),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(1775),
    [anon_sym_CR_LF] = ACTIONS(1777),
    [anon_sym_LBRACE] = ACTIONS(1773),
  },
  [595] = {
    [aux_sym_if_statement_repeat1] = STATE(553),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(1767),
    [ts_builtin_sym_end] = ACTIONS(1769),
    [aux_sym_if_statement_token2] = ACTIONS(1432),
    [anon_sym_CR_LF] = ACTIONS(1769),
    [anon_sym_SEMI] = ACTIONS(1767),
    [aux_sym_if_statement_token3] = ACTIONS(1779),
  },
  [596] = {
    [aux_sym_if_statement_repeat1] = STATE(626),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(1767),
    [ts_builtin_sym_end] = ACTIONS(1769),
    [aux_sym_if_statement_token2] = ACTIONS(1432),
    [anon_sym_CR_LF] = ACTIONS(1769),
    [anon_sym_SEMI] = ACTIONS(1767),
    [aux_sym_if_statement_token3] = ACTIONS(1779),
  },
  [597] = {
    [sym__statement] = STATE(106),
    [sym__definition_statement] = STATE(106),
    [sym_pipeline_statement] = STATE(106),
    [sym_if_statement] = STATE(106),
    [sym__non_array_expression] = STATE(107),
    [sym__expression] = STATE(110),
    [sym_array_expression] = STATE(110),
    [sym_flat_array_expression] = STATE(107),
    [sym_variable] = STATE(111),
    [sym__special_variable] = STATE(6),
    [sym_non_type_attribute] = STATE(30),
    [sym__attribute] = STATE(30),
    [sym_function_definition] = STATE(106),
    [sym_filter_definition] = STATE(106),
    [sym_enum_definition] = STATE(106),
    [sym_while_statement] = STATE(106),
    [sym_do_while_statement] = STATE(106),
    [sym_scriptblock] = STATE(107),
    [sym_hashtable_expression] = STATE(107),
    [sym_type_expr] = STATE(26),
    [sym__string_expr] = STATE(107),
    [sym_double_quote_string] = STATE(107),
    [aux_sym_class_method_body_repeat1] = STATE(221),
    [aux_sym_array_expression_repeat1] = STATE(109),
    [sym_class_definition] = STATE(106),
    [sym__expression_statement] = STATE(106),
    [sym_assignment_statement] = STATE(106),
    [sym_command_expression] = STATE(110),
    [sym__pipeline_expression] = STATE(110),
    [sym__attributed_variable] = STATE(111),
    [aux_sym__attributed_variable_repeat1] = STATE(30),
    [aux_sym_do_while_statement_token1] = ACTIONS(5),
    [anon_sym_RBRACE] = ACTIONS(1781),
    [aux_sym_function_definition_token1] = ACTIONS(7),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(9),
    [aux_sym_filter_definition_token1] = ACTIONS(11),
    [sym_number_expr] = ACTIONS(227),
    [anon_sym_AT_LPAREN] = ACTIONS(15),
    [sym_simple_variable] = ACTIONS(9),
    [anon_sym_DOLLAR_CARET] = ACTIONS(9),
    [sym_bareword_string] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [aux_sym_enum_definition_token1] = ACTIONS(23),
    [anon_sym_DQUOTE] = ACTIONS(25),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(17),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(9),
    [aux_sym_while_statement_token1] = ACTIONS(31),
    [aux_sym_if_statement_token1] = ACTIONS(229),
    [anon_sym_AMP] = ACTIONS(35),
    [anon_sym_LPAREN] = ACTIONS(37),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(41),
    [aux_sym_class_definition_token1] = ACTIONS(43),
    [anon_sym_AT_LBRACE] = ACTIONS(45),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(47),
    [sym__braced_variable] = ACTIONS(9),
    [sym_single_quote_string] = ACTIONS(487),
  },
  [598] = {
    [sym_simple_variable] = ACTIONS(1783),
    [anon_sym_RBRACE] = ACTIONS(1783),
    [anon_sym_LBRACK] = ACTIONS(1783),
    [sym_bareword_string] = ACTIONS(1785),
    [sym_comment] = ACTIONS(39),
  },
  [599] = {
    [sym_simple_variable] = ACTIONS(1787),
    [anon_sym_RBRACE] = ACTIONS(1787),
    [anon_sym_LBRACK] = ACTIONS(1787),
    [sym_bareword_string] = ACTIONS(1789),
    [sym_comment] = ACTIONS(39),
  },
  [600] = {
    [sym_class_method_body] = STATE(628),
    [aux_sym__terminator_repeat1] = STATE(114),
    [sym__newline] = STATE(114),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(237),
    [anon_sym_CR_LF] = ACTIONS(239),
    [anon_sym_LBRACE] = ACTIONS(1473),
  },
  [601] = {
    [sym_class_method_body] = STATE(628),
    [aux_sym__terminator_repeat1] = STATE(629),
    [sym__newline] = STATE(629),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(1791),
    [anon_sym_CR_LF] = ACTIONS(1793),
    [anon_sym_LBRACE] = ACTIONS(1473),
  },
  [602] = {
    [anon_sym_RPAREN] = ACTIONS(1795),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(1795),
  },
  [603] = {
    [aux_sym_class_method_repeat1] = STATE(567),
    [anon_sym_RPAREN] = ACTIONS(1797),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(1485),
  },
  [604] = {
    [aux_sym_if_statement_repeat1] = STATE(604),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(1699),
    [aux_sym_if_statement_token2] = ACTIONS(1701),
    [anon_sym_CR_LF] = ACTIONS(1704),
    [anon_sym_SEMI] = ACTIONS(1699),
    [aux_sym_if_statement_token3] = ACTIONS(1699),
  },
  [605] = {
    [aux_sym_if_statement_repeat1] = STATE(604),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(1706),
    [aux_sym_if_statement_token2] = ACTIONS(1432),
    [anon_sym_CR_LF] = ACTIONS(1708),
    [anon_sym_SEMI] = ACTIONS(1706),
    [aux_sym_if_statement_token3] = ACTIONS(1710),
  },
  [606] = {
    [aux_sym_if_statement_repeat1] = STATE(631),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(1706),
    [aux_sym_if_statement_token2] = ACTIONS(1432),
    [anon_sym_CR_LF] = ACTIONS(1708),
    [anon_sym_SEMI] = ACTIONS(1706),
    [aux_sym_if_statement_token3] = ACTIONS(1710),
  },
  [607] = {
    [sym__statement] = STATE(106),
    [sym__definition_statement] = STATE(106),
    [sym_pipeline_statement] = STATE(106),
    [sym_if_statement] = STATE(106),
    [sym__non_array_expression] = STATE(107),
    [sym__expression] = STATE(110),
    [sym_array_expression] = STATE(110),
    [sym_flat_array_expression] = STATE(107),
    [sym_variable] = STATE(111),
    [sym__special_variable] = STATE(6),
    [sym_non_type_attribute] = STATE(30),
    [sym__attribute] = STATE(30),
    [sym_function_definition] = STATE(106),
    [sym_filter_definition] = STATE(106),
    [sym_enum_definition] = STATE(106),
    [sym_while_statement] = STATE(106),
    [sym_do_while_statement] = STATE(106),
    [sym_scriptblock] = STATE(107),
    [sym_hashtable_expression] = STATE(107),
    [sym_type_expr] = STATE(26),
    [sym__string_expr] = STATE(107),
    [sym_double_quote_string] = STATE(107),
    [aux_sym_class_method_body_repeat1] = STATE(221),
    [aux_sym_array_expression_repeat1] = STATE(109),
    [sym_class_definition] = STATE(106),
    [sym__expression_statement] = STATE(106),
    [sym_assignment_statement] = STATE(106),
    [sym_command_expression] = STATE(110),
    [sym__pipeline_expression] = STATE(110),
    [sym__attributed_variable] = STATE(111),
    [aux_sym__attributed_variable_repeat1] = STATE(30),
    [aux_sym_do_while_statement_token1] = ACTIONS(5),
    [anon_sym_RBRACE] = ACTIONS(1799),
    [aux_sym_function_definition_token1] = ACTIONS(7),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(9),
    [aux_sym_filter_definition_token1] = ACTIONS(11),
    [sym_number_expr] = ACTIONS(227),
    [anon_sym_AT_LPAREN] = ACTIONS(15),
    [sym_simple_variable] = ACTIONS(9),
    [anon_sym_DOLLAR_CARET] = ACTIONS(9),
    [sym_bareword_string] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [aux_sym_enum_definition_token1] = ACTIONS(23),
    [anon_sym_DQUOTE] = ACTIONS(25),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(17),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(9),
    [aux_sym_while_statement_token1] = ACTIONS(31),
    [aux_sym_if_statement_token1] = ACTIONS(229),
    [anon_sym_AMP] = ACTIONS(35),
    [anon_sym_LPAREN] = ACTIONS(37),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(41),
    [aux_sym_class_definition_token1] = ACTIONS(43),
    [anon_sym_AT_LBRACE] = ACTIONS(45),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(47),
    [sym__braced_variable] = ACTIONS(9),
    [sym_single_quote_string] = ACTIONS(487),
  },
  [608] = {
    [sym__statement] = STATE(106),
    [sym__definition_statement] = STATE(106),
    [sym_pipeline_statement] = STATE(106),
    [sym_if_statement] = STATE(106),
    [sym__non_array_expression] = STATE(107),
    [sym__expression] = STATE(110),
    [sym_array_expression] = STATE(110),
    [sym_flat_array_expression] = STATE(107),
    [sym_variable] = STATE(111),
    [sym__special_variable] = STATE(6),
    [sym_non_type_attribute] = STATE(30),
    [sym__attribute] = STATE(30),
    [sym_function_definition] = STATE(106),
    [sym_filter_definition] = STATE(106),
    [sym_enum_definition] = STATE(106),
    [sym_while_statement] = STATE(106),
    [sym_do_while_statement] = STATE(106),
    [sym_scriptblock] = STATE(107),
    [sym_hashtable_expression] = STATE(107),
    [sym_type_expr] = STATE(26),
    [sym__string_expr] = STATE(107),
    [sym_double_quote_string] = STATE(107),
    [aux_sym_class_method_body_repeat1] = STATE(633),
    [aux_sym_array_expression_repeat1] = STATE(109),
    [sym_class_definition] = STATE(106),
    [sym__expression_statement] = STATE(106),
    [sym_assignment_statement] = STATE(106),
    [sym_command_expression] = STATE(110),
    [sym__pipeline_expression] = STATE(110),
    [sym__attributed_variable] = STATE(111),
    [aux_sym__attributed_variable_repeat1] = STATE(30),
    [aux_sym_do_while_statement_token1] = ACTIONS(5),
    [anon_sym_RBRACE] = ACTIONS(1799),
    [aux_sym_function_definition_token1] = ACTIONS(7),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(9),
    [aux_sym_filter_definition_token1] = ACTIONS(11),
    [sym_number_expr] = ACTIONS(227),
    [anon_sym_AT_LPAREN] = ACTIONS(15),
    [sym_simple_variable] = ACTIONS(9),
    [anon_sym_DOLLAR_CARET] = ACTIONS(9),
    [sym_bareword_string] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [aux_sym_enum_definition_token1] = ACTIONS(23),
    [anon_sym_DQUOTE] = ACTIONS(25),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(17),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(9),
    [aux_sym_while_statement_token1] = ACTIONS(31),
    [aux_sym_if_statement_token1] = ACTIONS(229),
    [anon_sym_AMP] = ACTIONS(35),
    [anon_sym_LPAREN] = ACTIONS(37),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(41),
    [aux_sym_class_definition_token1] = ACTIONS(43),
    [anon_sym_AT_LBRACE] = ACTIONS(45),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(47),
    [sym__braced_variable] = ACTIONS(9),
    [sym_single_quote_string] = ACTIONS(487),
  },
  [609] = {
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(1801),
    [ts_builtin_sym_end] = ACTIONS(1803),
    [anon_sym_RBRACE] = ACTIONS(1801),
    [anon_sym_CR_LF] = ACTIONS(1803),
    [anon_sym_SEMI] = ACTIONS(1801),
  },
  [610] = {
    [anon_sym_RPAREN] = ACTIONS(1805),
    [sym_comment] = ACTIONS(3),
  },
  [611] = {
    [sym_type_expr] = STATE(75),
    [sym__string_expr] = STATE(89),
    [sym_double_quote_string] = STATE(89),
    [sym_pipeline_statement] = STATE(635),
    [sym__non_array_expression] = STATE(89),
    [sym__expression] = STATE(91),
    [sym_array_expression] = STATE(91),
    [sym_flat_array_expression] = STATE(89),
    [aux_sym_array_expression_repeat1] = STATE(90),
    [sym_variable] = STATE(89),
    [sym__special_variable] = STATE(64),
    [sym_non_type_attribute] = STATE(79),
    [sym__attribute] = STATE(79),
    [sym_command_expression] = STATE(91),
    [sym__pipeline_expression] = STATE(91),
    [sym__attributed_variable] = STATE(89),
    [sym_scriptblock] = STATE(89),
    [aux_sym__attributed_variable_repeat1] = STATE(79),
    [sym_hashtable_expression] = STATE(89),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(143),
    [sym_number_expr] = ACTIONS(191),
    [anon_sym_AT_LPAREN] = ACTIONS(147),
    [anon_sym_DOLLAR_CARET] = ACTIONS(143),
    [sym_simple_variable] = ACTIONS(143),
    [sym_bareword_string] = ACTIONS(149),
    [anon_sym_LBRACE] = ACTIONS(151),
    [anon_sym_DQUOTE] = ACTIONS(153),
    [anon_sym_COMMA] = ACTIONS(155),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(157),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(143),
    [anon_sym_AMP] = ACTIONS(159),
    [anon_sym_LPAREN] = ACTIONS(161),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(163),
    [sym_single_quote_string] = ACTIONS(193),
    [anon_sym_AT_LBRACE] = ACTIONS(167),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(169),
    [sym__braced_variable] = ACTIONS(143),
  },
  [612] = {
    [aux_sym_if_statement_repeat1] = STATE(578),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(1767),
    [anon_sym_RBRACE] = ACTIONS(1767),
    [aux_sym_if_statement_token2] = ACTIONS(1432),
    [anon_sym_CR_LF] = ACTIONS(1769),
    [anon_sym_SEMI] = ACTIONS(1767),
    [aux_sym_if_statement_token3] = ACTIONS(1779),
  },
  [613] = {
    [aux_sym_if_statement_repeat1] = STATE(636),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(1767),
    [anon_sym_RBRACE] = ACTIONS(1767),
    [aux_sym_if_statement_token2] = ACTIONS(1432),
    [anon_sym_CR_LF] = ACTIONS(1769),
    [anon_sym_SEMI] = ACTIONS(1767),
    [aux_sym_if_statement_token3] = ACTIONS(1779),
  },
  [614] = {
    [sym__statement] = STATE(106),
    [sym__definition_statement] = STATE(106),
    [sym_pipeline_statement] = STATE(106),
    [sym_if_statement] = STATE(106),
    [sym__non_array_expression] = STATE(107),
    [sym__expression] = STATE(110),
    [sym_array_expression] = STATE(110),
    [sym_flat_array_expression] = STATE(107),
    [sym_variable] = STATE(111),
    [sym__special_variable] = STATE(6),
    [sym_non_type_attribute] = STATE(30),
    [sym__attribute] = STATE(30),
    [sym_function_definition] = STATE(106),
    [sym_filter_definition] = STATE(106),
    [sym_enum_definition] = STATE(106),
    [sym_while_statement] = STATE(106),
    [sym_do_while_statement] = STATE(106),
    [sym_scriptblock] = STATE(107),
    [sym_hashtable_expression] = STATE(107),
    [sym_type_expr] = STATE(26),
    [sym__string_expr] = STATE(107),
    [sym_double_quote_string] = STATE(107),
    [aux_sym_class_method_body_repeat1] = STATE(221),
    [aux_sym_array_expression_repeat1] = STATE(109),
    [sym_class_definition] = STATE(106),
    [sym__expression_statement] = STATE(106),
    [sym_assignment_statement] = STATE(106),
    [sym_command_expression] = STATE(110),
    [sym__pipeline_expression] = STATE(110),
    [sym__attributed_variable] = STATE(111),
    [aux_sym__attributed_variable_repeat1] = STATE(30),
    [aux_sym_do_while_statement_token1] = ACTIONS(5),
    [anon_sym_RBRACE] = ACTIONS(1807),
    [aux_sym_function_definition_token1] = ACTIONS(7),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(9),
    [aux_sym_filter_definition_token1] = ACTIONS(11),
    [sym_number_expr] = ACTIONS(227),
    [anon_sym_AT_LPAREN] = ACTIONS(15),
    [sym_simple_variable] = ACTIONS(9),
    [anon_sym_DOLLAR_CARET] = ACTIONS(9),
    [sym_bareword_string] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [aux_sym_enum_definition_token1] = ACTIONS(23),
    [anon_sym_DQUOTE] = ACTIONS(25),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(17),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(9),
    [aux_sym_while_statement_token1] = ACTIONS(31),
    [aux_sym_if_statement_token1] = ACTIONS(229),
    [anon_sym_AMP] = ACTIONS(35),
    [anon_sym_LPAREN] = ACTIONS(37),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(41),
    [aux_sym_class_definition_token1] = ACTIONS(43),
    [anon_sym_AT_LBRACE] = ACTIONS(45),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(47),
    [sym__braced_variable] = ACTIONS(9),
    [sym_single_quote_string] = ACTIONS(487),
  },
  [615] = {
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(1809),
    [ts_builtin_sym_end] = ACTIONS(1811),
    [anon_sym_RBRACE] = ACTIONS(1809),
    [anon_sym_CR_LF] = ACTIONS(1811),
    [anon_sym_SEMI] = ACTIONS(1809),
  },
  [616] = {
    [sym__statement] = STATE(106),
    [sym__definition_statement] = STATE(106),
    [sym_pipeline_statement] = STATE(106),
    [sym_if_statement] = STATE(106),
    [sym__non_array_expression] = STATE(107),
    [sym__expression] = STATE(110),
    [sym_array_expression] = STATE(110),
    [sym_flat_array_expression] = STATE(107),
    [sym_variable] = STATE(111),
    [sym__special_variable] = STATE(6),
    [sym_non_type_attribute] = STATE(30),
    [sym__attribute] = STATE(30),
    [sym_function_definition] = STATE(106),
    [sym_filter_definition] = STATE(106),
    [sym_enum_definition] = STATE(106),
    [sym_while_statement] = STATE(106),
    [sym_do_while_statement] = STATE(106),
    [sym_scriptblock] = STATE(107),
    [sym_hashtable_expression] = STATE(107),
    [sym_type_expr] = STATE(26),
    [sym__string_expr] = STATE(107),
    [sym_double_quote_string] = STATE(107),
    [aux_sym_class_method_body_repeat1] = STATE(221),
    [aux_sym_array_expression_repeat1] = STATE(109),
    [sym_class_definition] = STATE(106),
    [sym__expression_statement] = STATE(106),
    [sym_assignment_statement] = STATE(106),
    [sym_command_expression] = STATE(110),
    [sym__pipeline_expression] = STATE(110),
    [sym__attributed_variable] = STATE(111),
    [aux_sym__attributed_variable_repeat1] = STATE(30),
    [aux_sym_do_while_statement_token1] = ACTIONS(5),
    [anon_sym_RBRACE] = ACTIONS(1813),
    [aux_sym_function_definition_token1] = ACTIONS(7),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(9),
    [aux_sym_filter_definition_token1] = ACTIONS(11),
    [sym_number_expr] = ACTIONS(227),
    [anon_sym_AT_LPAREN] = ACTIONS(15),
    [sym_simple_variable] = ACTIONS(9),
    [anon_sym_DOLLAR_CARET] = ACTIONS(9),
    [sym_bareword_string] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [aux_sym_enum_definition_token1] = ACTIONS(23),
    [anon_sym_DQUOTE] = ACTIONS(25),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(17),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(9),
    [aux_sym_while_statement_token1] = ACTIONS(31),
    [aux_sym_if_statement_token1] = ACTIONS(229),
    [anon_sym_AMP] = ACTIONS(35),
    [anon_sym_LPAREN] = ACTIONS(37),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(41),
    [aux_sym_class_definition_token1] = ACTIONS(43),
    [anon_sym_AT_LBRACE] = ACTIONS(45),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(47),
    [sym__braced_variable] = ACTIONS(9),
    [sym_single_quote_string] = ACTIONS(487),
  },
  [617] = {
    [aux_sym__terminator_repeat1] = STATE(640),
    [sym__newline] = STATE(640),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(1815),
    [anon_sym_CR_LF] = ACTIONS(1817),
    [anon_sym_LBRACE] = ACTIONS(1819),
  },
  [618] = {
    [aux_sym__terminator_repeat1] = STATE(362),
    [sym__newline] = STATE(362),
    [anon_sym_RPAREN] = ACTIONS(1821),
    [anon_sym_LF] = ACTIONS(987),
    [sym_comment] = ACTIONS(39),
    [anon_sym_CR_LF] = ACTIONS(989),
  },
  [619] = {
    [aux_sym__terminator_repeat1] = STATE(642),
    [sym__newline] = STATE(642),
    [anon_sym_RPAREN] = ACTIONS(1821),
    [anon_sym_LF] = ACTIONS(1823),
    [sym_comment] = ACTIONS(39),
    [anon_sym_CR_LF] = ACTIONS(1825),
  },
  [620] = {
    [sym_type_expr] = STATE(26),
    [sym__string_expr] = STATE(155),
    [sym_double_quote_string] = STATE(155),
    [sym_pipeline_statement] = STATE(643),
    [sym__non_array_expression] = STATE(155),
    [sym__expression] = STATE(157),
    [sym_array_expression] = STATE(157),
    [sym_flat_array_expression] = STATE(155),
    [aux_sym_array_expression_repeat1] = STATE(156),
    [sym_variable] = STATE(155),
    [sym__special_variable] = STATE(6),
    [sym__attribute] = STATE(30),
    [sym_non_type_attribute] = STATE(30),
    [sym__newline] = STATE(266),
    [sym_command_expression] = STATE(157),
    [sym__pipeline_expression] = STATE(157),
    [sym__attributed_variable] = STATE(155),
    [aux_sym__terminator_repeat1] = STATE(266),
    [sym_scriptblock] = STATE(155),
    [aux_sym__attributed_variable_repeat1] = STATE(30),
    [sym_hashtable_expression] = STATE(155),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(61),
    [anon_sym_CR_LF] = ACTIONS(633),
    [sym_number_expr] = ACTIONS(321),
    [anon_sym_AT_LPAREN] = ACTIONS(67),
    [sym_simple_variable] = ACTIONS(61),
    [anon_sym_DOLLAR_CARET] = ACTIONS(61),
    [sym_bareword_string] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(69),
    [anon_sym_DQUOTE] = ACTIONS(25),
    [anon_sym_COMMA] = ACTIONS(17),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(71),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(61),
    [anon_sym_AMP] = ACTIONS(99),
    [anon_sym_LPAREN] = ACTIONS(73),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(635),
    [anon_sym_LBRACK] = ACTIONS(77),
    [anon_sym_AT_LBRACE] = ACTIONS(81),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(83),
    [sym__braced_variable] = ACTIONS(61),
    [sym_single_quote_string] = ACTIONS(321),
  },
  [621] = {
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(1827),
    [ts_builtin_sym_end] = ACTIONS(1829),
    [anon_sym_RBRACE] = ACTIONS(1827),
    [anon_sym_CR_LF] = ACTIONS(1829),
    [anon_sym_SEMI] = ACTIONS(1827),
  },
  [622] = {
    [sym__statement] = STATE(106),
    [sym__definition_statement] = STATE(106),
    [sym_pipeline_statement] = STATE(106),
    [sym_if_statement] = STATE(106),
    [sym__non_array_expression] = STATE(107),
    [sym__expression] = STATE(110),
    [sym_array_expression] = STATE(110),
    [sym_flat_array_expression] = STATE(107),
    [sym_variable] = STATE(111),
    [sym__special_variable] = STATE(6),
    [sym_non_type_attribute] = STATE(30),
    [sym__attribute] = STATE(30),
    [sym_function_definition] = STATE(106),
    [sym_filter_definition] = STATE(106),
    [sym_enum_definition] = STATE(106),
    [sym_while_statement] = STATE(106),
    [sym_do_while_statement] = STATE(106),
    [sym_scriptblock] = STATE(107),
    [sym_hashtable_expression] = STATE(107),
    [sym_type_expr] = STATE(26),
    [sym__string_expr] = STATE(107),
    [sym_double_quote_string] = STATE(107),
    [aux_sym_class_method_body_repeat1] = STATE(221),
    [aux_sym_array_expression_repeat1] = STATE(109),
    [sym_class_definition] = STATE(106),
    [sym__expression_statement] = STATE(106),
    [sym_assignment_statement] = STATE(106),
    [sym_command_expression] = STATE(110),
    [sym__pipeline_expression] = STATE(110),
    [sym__attributed_variable] = STATE(111),
    [aux_sym__attributed_variable_repeat1] = STATE(30),
    [aux_sym_do_while_statement_token1] = ACTIONS(5),
    [anon_sym_RBRACE] = ACTIONS(1831),
    [aux_sym_function_definition_token1] = ACTIONS(7),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(9),
    [aux_sym_filter_definition_token1] = ACTIONS(11),
    [sym_number_expr] = ACTIONS(227),
    [anon_sym_AT_LPAREN] = ACTIONS(15),
    [sym_simple_variable] = ACTIONS(9),
    [anon_sym_DOLLAR_CARET] = ACTIONS(9),
    [sym_bareword_string] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [aux_sym_enum_definition_token1] = ACTIONS(23),
    [anon_sym_DQUOTE] = ACTIONS(25),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(17),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(9),
    [aux_sym_while_statement_token1] = ACTIONS(31),
    [aux_sym_if_statement_token1] = ACTIONS(229),
    [anon_sym_AMP] = ACTIONS(35),
    [anon_sym_LPAREN] = ACTIONS(37),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(41),
    [aux_sym_class_definition_token1] = ACTIONS(43),
    [anon_sym_AT_LBRACE] = ACTIONS(45),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(47),
    [sym__braced_variable] = ACTIONS(9),
    [sym_single_quote_string] = ACTIONS(487),
  },
  [623] = {
    [sym__statement] = STATE(106),
    [sym__definition_statement] = STATE(106),
    [sym_pipeline_statement] = STATE(106),
    [sym_if_statement] = STATE(106),
    [sym__non_array_expression] = STATE(107),
    [sym__expression] = STATE(110),
    [sym_array_expression] = STATE(110),
    [sym_flat_array_expression] = STATE(107),
    [sym_variable] = STATE(111),
    [sym__special_variable] = STATE(6),
    [sym_non_type_attribute] = STATE(30),
    [sym__attribute] = STATE(30),
    [sym_function_definition] = STATE(106),
    [sym_filter_definition] = STATE(106),
    [sym_enum_definition] = STATE(106),
    [sym_while_statement] = STATE(106),
    [sym_do_while_statement] = STATE(106),
    [sym_scriptblock] = STATE(107),
    [sym_hashtable_expression] = STATE(107),
    [sym_type_expr] = STATE(26),
    [sym__string_expr] = STATE(107),
    [sym_double_quote_string] = STATE(107),
    [aux_sym_class_method_body_repeat1] = STATE(645),
    [aux_sym_array_expression_repeat1] = STATE(109),
    [sym_class_definition] = STATE(106),
    [sym__expression_statement] = STATE(106),
    [sym_assignment_statement] = STATE(106),
    [sym_command_expression] = STATE(110),
    [sym__pipeline_expression] = STATE(110),
    [sym__attributed_variable] = STATE(111),
    [aux_sym__attributed_variable_repeat1] = STATE(30),
    [aux_sym_do_while_statement_token1] = ACTIONS(5),
    [anon_sym_RBRACE] = ACTIONS(1831),
    [aux_sym_function_definition_token1] = ACTIONS(7),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(9),
    [aux_sym_filter_definition_token1] = ACTIONS(11),
    [sym_number_expr] = ACTIONS(227),
    [anon_sym_AT_LPAREN] = ACTIONS(15),
    [sym_simple_variable] = ACTIONS(9),
    [anon_sym_DOLLAR_CARET] = ACTIONS(9),
    [sym_bareword_string] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [aux_sym_enum_definition_token1] = ACTIONS(23),
    [anon_sym_DQUOTE] = ACTIONS(25),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(17),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(9),
    [aux_sym_while_statement_token1] = ACTIONS(31),
    [aux_sym_if_statement_token1] = ACTIONS(229),
    [anon_sym_AMP] = ACTIONS(35),
    [anon_sym_LPAREN] = ACTIONS(37),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(41),
    [aux_sym_class_definition_token1] = ACTIONS(43),
    [anon_sym_AT_LBRACE] = ACTIONS(45),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(47),
    [sym__braced_variable] = ACTIONS(9),
    [sym_single_quote_string] = ACTIONS(487),
  },
  [624] = {
    [aux_sym__terminator_repeat1] = STATE(114),
    [sym__newline] = STATE(114),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(237),
    [anon_sym_CR_LF] = ACTIONS(239),
    [anon_sym_LBRACE] = ACTIONS(1833),
  },
  [625] = {
    [aux_sym__terminator_repeat1] = STATE(647),
    [sym__newline] = STATE(647),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(1835),
    [anon_sym_CR_LF] = ACTIONS(1837),
    [anon_sym_LBRACE] = ACTIONS(1833),
  },
  [626] = {
    [aux_sym_if_statement_repeat1] = STATE(553),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(1827),
    [ts_builtin_sym_end] = ACTIONS(1829),
    [aux_sym_if_statement_token2] = ACTIONS(1432),
    [anon_sym_CR_LF] = ACTIONS(1829),
    [anon_sym_SEMI] = ACTIONS(1827),
    [aux_sym_if_statement_token3] = ACTIONS(1839),
  },
  [627] = {
    [aux_sym_if_statement_repeat1] = STATE(649),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(1827),
    [ts_builtin_sym_end] = ACTIONS(1829),
    [aux_sym_if_statement_token2] = ACTIONS(1432),
    [anon_sym_CR_LF] = ACTIONS(1829),
    [anon_sym_SEMI] = ACTIONS(1827),
    [aux_sym_if_statement_token3] = ACTIONS(1839),
  },
  [628] = {
    [sym_simple_variable] = ACTIONS(1841),
    [anon_sym_RBRACE] = ACTIONS(1841),
    [anon_sym_LBRACK] = ACTIONS(1841),
    [sym_bareword_string] = ACTIONS(1843),
    [sym_comment] = ACTIONS(39),
  },
  [629] = {
    [sym_class_method_body] = STATE(650),
    [aux_sym__terminator_repeat1] = STATE(114),
    [sym__newline] = STATE(114),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(237),
    [anon_sym_CR_LF] = ACTIONS(239),
    [anon_sym_LBRACE] = ACTIONS(1473),
  },
  [630] = {
    [sym_class_method_body] = STATE(650),
    [aux_sym__terminator_repeat1] = STATE(651),
    [sym__newline] = STATE(651),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(1845),
    [anon_sym_CR_LF] = ACTIONS(1847),
    [anon_sym_LBRACE] = ACTIONS(1473),
  },
  [631] = {
    [aux_sym_if_statement_repeat1] = STATE(604),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(1767),
    [aux_sym_if_statement_token2] = ACTIONS(1432),
    [anon_sym_CR_LF] = ACTIONS(1769),
    [anon_sym_SEMI] = ACTIONS(1767),
    [aux_sym_if_statement_token3] = ACTIONS(1779),
  },
  [632] = {
    [aux_sym_if_statement_repeat1] = STATE(652),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(1767),
    [aux_sym_if_statement_token2] = ACTIONS(1432),
    [anon_sym_CR_LF] = ACTIONS(1769),
    [anon_sym_SEMI] = ACTIONS(1767),
    [aux_sym_if_statement_token3] = ACTIONS(1779),
  },
  [633] = {
    [sym__statement] = STATE(106),
    [sym__definition_statement] = STATE(106),
    [sym_pipeline_statement] = STATE(106),
    [sym_if_statement] = STATE(106),
    [sym__non_array_expression] = STATE(107),
    [sym__expression] = STATE(110),
    [sym_array_expression] = STATE(110),
    [sym_flat_array_expression] = STATE(107),
    [sym_variable] = STATE(111),
    [sym__special_variable] = STATE(6),
    [sym_non_type_attribute] = STATE(30),
    [sym__attribute] = STATE(30),
    [sym_function_definition] = STATE(106),
    [sym_filter_definition] = STATE(106),
    [sym_enum_definition] = STATE(106),
    [sym_while_statement] = STATE(106),
    [sym_do_while_statement] = STATE(106),
    [sym_scriptblock] = STATE(107),
    [sym_hashtable_expression] = STATE(107),
    [sym_type_expr] = STATE(26),
    [sym__string_expr] = STATE(107),
    [sym_double_quote_string] = STATE(107),
    [aux_sym_class_method_body_repeat1] = STATE(221),
    [aux_sym_array_expression_repeat1] = STATE(109),
    [sym_class_definition] = STATE(106),
    [sym__expression_statement] = STATE(106),
    [sym_assignment_statement] = STATE(106),
    [sym_command_expression] = STATE(110),
    [sym__pipeline_expression] = STATE(110),
    [sym__attributed_variable] = STATE(111),
    [aux_sym__attributed_variable_repeat1] = STATE(30),
    [aux_sym_do_while_statement_token1] = ACTIONS(5),
    [anon_sym_RBRACE] = ACTIONS(1849),
    [aux_sym_function_definition_token1] = ACTIONS(7),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(9),
    [aux_sym_filter_definition_token1] = ACTIONS(11),
    [sym_number_expr] = ACTIONS(227),
    [anon_sym_AT_LPAREN] = ACTIONS(15),
    [sym_simple_variable] = ACTIONS(9),
    [anon_sym_DOLLAR_CARET] = ACTIONS(9),
    [sym_bareword_string] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [aux_sym_enum_definition_token1] = ACTIONS(23),
    [anon_sym_DQUOTE] = ACTIONS(25),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(17),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(9),
    [aux_sym_while_statement_token1] = ACTIONS(31),
    [aux_sym_if_statement_token1] = ACTIONS(229),
    [anon_sym_AMP] = ACTIONS(35),
    [anon_sym_LPAREN] = ACTIONS(37),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(41),
    [aux_sym_class_definition_token1] = ACTIONS(43),
    [anon_sym_AT_LBRACE] = ACTIONS(45),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(47),
    [sym__braced_variable] = ACTIONS(9),
    [sym_single_quote_string] = ACTIONS(487),
  },
  [634] = {
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(1851),
    [ts_builtin_sym_end] = ACTIONS(1853),
    [anon_sym_RBRACE] = ACTIONS(1851),
    [anon_sym_CR_LF] = ACTIONS(1853),
    [anon_sym_SEMI] = ACTIONS(1851),
  },
  [635] = {
    [anon_sym_RPAREN] = ACTIONS(1855),
    [sym_comment] = ACTIONS(3),
  },
  [636] = {
    [aux_sym_if_statement_repeat1] = STATE(578),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(1827),
    [anon_sym_RBRACE] = ACTIONS(1827),
    [aux_sym_if_statement_token2] = ACTIONS(1432),
    [anon_sym_CR_LF] = ACTIONS(1829),
    [anon_sym_SEMI] = ACTIONS(1827),
    [aux_sym_if_statement_token3] = ACTIONS(1839),
  },
  [637] = {
    [aux_sym_if_statement_repeat1] = STATE(655),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(1827),
    [anon_sym_RBRACE] = ACTIONS(1827),
    [aux_sym_if_statement_token2] = ACTIONS(1432),
    [anon_sym_CR_LF] = ACTIONS(1829),
    [anon_sym_SEMI] = ACTIONS(1827),
    [aux_sym_if_statement_token3] = ACTIONS(1839),
  },
  [638] = {
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(1857),
    [ts_builtin_sym_end] = ACTIONS(1859),
    [anon_sym_RBRACE] = ACTIONS(1857),
    [anon_sym_CR_LF] = ACTIONS(1859),
    [anon_sym_SEMI] = ACTIONS(1857),
  },
  [639] = {
    [sym__statement] = STATE(106),
    [sym__definition_statement] = STATE(106),
    [sym_pipeline_statement] = STATE(106),
    [sym_if_statement] = STATE(106),
    [sym__non_array_expression] = STATE(107),
    [sym__expression] = STATE(110),
    [sym_array_expression] = STATE(110),
    [sym_flat_array_expression] = STATE(107),
    [sym_variable] = STATE(111),
    [sym__special_variable] = STATE(6),
    [sym_non_type_attribute] = STATE(30),
    [sym__attribute] = STATE(30),
    [sym_function_definition] = STATE(106),
    [sym_filter_definition] = STATE(106),
    [sym_enum_definition] = STATE(106),
    [sym_while_statement] = STATE(106),
    [sym_do_while_statement] = STATE(106),
    [sym_scriptblock] = STATE(107),
    [sym_hashtable_expression] = STATE(107),
    [sym_type_expr] = STATE(26),
    [sym__string_expr] = STATE(107),
    [sym_double_quote_string] = STATE(107),
    [aux_sym_class_method_body_repeat1] = STATE(657),
    [aux_sym_array_expression_repeat1] = STATE(109),
    [sym_class_definition] = STATE(106),
    [sym__expression_statement] = STATE(106),
    [sym_assignment_statement] = STATE(106),
    [sym_command_expression] = STATE(110),
    [sym__pipeline_expression] = STATE(110),
    [sym__attributed_variable] = STATE(111),
    [aux_sym__attributed_variable_repeat1] = STATE(30),
    [aux_sym_do_while_statement_token1] = ACTIONS(5),
    [anon_sym_RBRACE] = ACTIONS(1861),
    [aux_sym_function_definition_token1] = ACTIONS(7),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(9),
    [aux_sym_filter_definition_token1] = ACTIONS(11),
    [sym_number_expr] = ACTIONS(227),
    [anon_sym_AT_LPAREN] = ACTIONS(15),
    [sym_simple_variable] = ACTIONS(9),
    [anon_sym_DOLLAR_CARET] = ACTIONS(9),
    [sym_bareword_string] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [aux_sym_enum_definition_token1] = ACTIONS(23),
    [anon_sym_DQUOTE] = ACTIONS(25),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(17),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(9),
    [aux_sym_while_statement_token1] = ACTIONS(31),
    [aux_sym_if_statement_token1] = ACTIONS(229),
    [anon_sym_AMP] = ACTIONS(35),
    [anon_sym_LPAREN] = ACTIONS(37),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(41),
    [aux_sym_class_definition_token1] = ACTIONS(43),
    [anon_sym_AT_LBRACE] = ACTIONS(45),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(47),
    [sym__braced_variable] = ACTIONS(9),
    [sym_single_quote_string] = ACTIONS(487),
  },
  [640] = {
    [aux_sym__terminator_repeat1] = STATE(114),
    [sym__newline] = STATE(114),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(237),
    [anon_sym_CR_LF] = ACTIONS(239),
    [anon_sym_LBRACE] = ACTIONS(1863),
  },
  [641] = {
    [aux_sym__terminator_repeat1] = STATE(659),
    [sym__newline] = STATE(659),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(1865),
    [anon_sym_CR_LF] = ACTIONS(1867),
    [anon_sym_LBRACE] = ACTIONS(1863),
  },
  [642] = {
    [aux_sym__terminator_repeat1] = STATE(362),
    [sym__newline] = STATE(362),
    [anon_sym_RPAREN] = ACTIONS(1869),
    [anon_sym_LF] = ACTIONS(987),
    [sym_comment] = ACTIONS(39),
    [anon_sym_CR_LF] = ACTIONS(989),
  },
  [643] = {
    [aux_sym__terminator_repeat1] = STATE(661),
    [sym__newline] = STATE(661),
    [anon_sym_RPAREN] = ACTIONS(1869),
    [anon_sym_LF] = ACTIONS(1871),
    [sym_comment] = ACTIONS(39),
    [anon_sym_CR_LF] = ACTIONS(1873),
  },
  [644] = {
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(1875),
    [ts_builtin_sym_end] = ACTIONS(1877),
    [anon_sym_RBRACE] = ACTIONS(1875),
    [anon_sym_CR_LF] = ACTIONS(1877),
    [anon_sym_SEMI] = ACTIONS(1875),
  },
  [645] = {
    [sym__statement] = STATE(106),
    [sym__definition_statement] = STATE(106),
    [sym_pipeline_statement] = STATE(106),
    [sym_if_statement] = STATE(106),
    [sym__non_array_expression] = STATE(107),
    [sym__expression] = STATE(110),
    [sym_array_expression] = STATE(110),
    [sym_flat_array_expression] = STATE(107),
    [sym_variable] = STATE(111),
    [sym__special_variable] = STATE(6),
    [sym_non_type_attribute] = STATE(30),
    [sym__attribute] = STATE(30),
    [sym_function_definition] = STATE(106),
    [sym_filter_definition] = STATE(106),
    [sym_enum_definition] = STATE(106),
    [sym_while_statement] = STATE(106),
    [sym_do_while_statement] = STATE(106),
    [sym_scriptblock] = STATE(107),
    [sym_hashtable_expression] = STATE(107),
    [sym_type_expr] = STATE(26),
    [sym__string_expr] = STATE(107),
    [sym_double_quote_string] = STATE(107),
    [aux_sym_class_method_body_repeat1] = STATE(221),
    [aux_sym_array_expression_repeat1] = STATE(109),
    [sym_class_definition] = STATE(106),
    [sym__expression_statement] = STATE(106),
    [sym_assignment_statement] = STATE(106),
    [sym_command_expression] = STATE(110),
    [sym__pipeline_expression] = STATE(110),
    [sym__attributed_variable] = STATE(111),
    [aux_sym__attributed_variable_repeat1] = STATE(30),
    [aux_sym_do_while_statement_token1] = ACTIONS(5),
    [anon_sym_RBRACE] = ACTIONS(1879),
    [aux_sym_function_definition_token1] = ACTIONS(7),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(9),
    [aux_sym_filter_definition_token1] = ACTIONS(11),
    [sym_number_expr] = ACTIONS(227),
    [anon_sym_AT_LPAREN] = ACTIONS(15),
    [sym_simple_variable] = ACTIONS(9),
    [anon_sym_DOLLAR_CARET] = ACTIONS(9),
    [sym_bareword_string] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [aux_sym_enum_definition_token1] = ACTIONS(23),
    [anon_sym_DQUOTE] = ACTIONS(25),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(17),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(9),
    [aux_sym_while_statement_token1] = ACTIONS(31),
    [aux_sym_if_statement_token1] = ACTIONS(229),
    [anon_sym_AMP] = ACTIONS(35),
    [anon_sym_LPAREN] = ACTIONS(37),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(41),
    [aux_sym_class_definition_token1] = ACTIONS(43),
    [anon_sym_AT_LBRACE] = ACTIONS(45),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(47),
    [sym__braced_variable] = ACTIONS(9),
    [sym_single_quote_string] = ACTIONS(487),
  },
  [646] = {
    [sym__statement] = STATE(106),
    [sym__definition_statement] = STATE(106),
    [sym_pipeline_statement] = STATE(106),
    [sym_if_statement] = STATE(106),
    [sym__non_array_expression] = STATE(107),
    [sym__expression] = STATE(110),
    [sym_array_expression] = STATE(110),
    [sym_flat_array_expression] = STATE(107),
    [sym_variable] = STATE(111),
    [sym__special_variable] = STATE(6),
    [sym_non_type_attribute] = STATE(30),
    [sym__attribute] = STATE(30),
    [sym_function_definition] = STATE(106),
    [sym_filter_definition] = STATE(106),
    [sym_enum_definition] = STATE(106),
    [sym_while_statement] = STATE(106),
    [sym_do_while_statement] = STATE(106),
    [sym_scriptblock] = STATE(107),
    [sym_hashtable_expression] = STATE(107),
    [sym_type_expr] = STATE(26),
    [sym__string_expr] = STATE(107),
    [sym_double_quote_string] = STATE(107),
    [aux_sym_class_method_body_repeat1] = STATE(663),
    [aux_sym_array_expression_repeat1] = STATE(109),
    [sym_class_definition] = STATE(106),
    [sym__expression_statement] = STATE(106),
    [sym_assignment_statement] = STATE(106),
    [sym_command_expression] = STATE(110),
    [sym__pipeline_expression] = STATE(110),
    [sym__attributed_variable] = STATE(111),
    [aux_sym__attributed_variable_repeat1] = STATE(30),
    [aux_sym_do_while_statement_token1] = ACTIONS(5),
    [anon_sym_RBRACE] = ACTIONS(1879),
    [aux_sym_function_definition_token1] = ACTIONS(7),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(9),
    [aux_sym_filter_definition_token1] = ACTIONS(11),
    [sym_number_expr] = ACTIONS(227),
    [anon_sym_AT_LPAREN] = ACTIONS(15),
    [sym_simple_variable] = ACTIONS(9),
    [anon_sym_DOLLAR_CARET] = ACTIONS(9),
    [sym_bareword_string] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [aux_sym_enum_definition_token1] = ACTIONS(23),
    [anon_sym_DQUOTE] = ACTIONS(25),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(17),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(9),
    [aux_sym_while_statement_token1] = ACTIONS(31),
    [aux_sym_if_statement_token1] = ACTIONS(229),
    [anon_sym_AMP] = ACTIONS(35),
    [anon_sym_LPAREN] = ACTIONS(37),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(41),
    [aux_sym_class_definition_token1] = ACTIONS(43),
    [anon_sym_AT_LBRACE] = ACTIONS(45),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(47),
    [sym__braced_variable] = ACTIONS(9),
    [sym_single_quote_string] = ACTIONS(487),
  },
  [647] = {
    [aux_sym__terminator_repeat1] = STATE(114),
    [sym__newline] = STATE(114),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(237),
    [anon_sym_CR_LF] = ACTIONS(239),
    [anon_sym_LBRACE] = ACTIONS(1881),
  },
  [648] = {
    [aux_sym__terminator_repeat1] = STATE(665),
    [sym__newline] = STATE(665),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(1883),
    [anon_sym_CR_LF] = ACTIONS(1885),
    [anon_sym_LBRACE] = ACTIONS(1881),
  },
  [649] = {
    [aux_sym_if_statement_repeat1] = STATE(553),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(1875),
    [ts_builtin_sym_end] = ACTIONS(1877),
    [aux_sym_if_statement_token2] = ACTIONS(1432),
    [anon_sym_CR_LF] = ACTIONS(1877),
    [anon_sym_SEMI] = ACTIONS(1875),
    [aux_sym_if_statement_token3] = ACTIONS(1887),
  },
  [650] = {
    [sym_simple_variable] = ACTIONS(1889),
    [anon_sym_RBRACE] = ACTIONS(1889),
    [anon_sym_LBRACK] = ACTIONS(1889),
    [sym_bareword_string] = ACTIONS(1891),
    [sym_comment] = ACTIONS(39),
  },
  [651] = {
    [sym_class_method_body] = STATE(667),
    [aux_sym__terminator_repeat1] = STATE(114),
    [sym__newline] = STATE(114),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(237),
    [anon_sym_CR_LF] = ACTIONS(239),
    [anon_sym_LBRACE] = ACTIONS(1473),
  },
  [652] = {
    [aux_sym_if_statement_repeat1] = STATE(604),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(1827),
    [aux_sym_if_statement_token2] = ACTIONS(1432),
    [anon_sym_CR_LF] = ACTIONS(1829),
    [anon_sym_SEMI] = ACTIONS(1827),
    [aux_sym_if_statement_token3] = ACTIONS(1839),
  },
  [653] = {
    [aux_sym_if_statement_repeat1] = STATE(668),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(1827),
    [aux_sym_if_statement_token2] = ACTIONS(1432),
    [anon_sym_CR_LF] = ACTIONS(1829),
    [anon_sym_SEMI] = ACTIONS(1827),
    [aux_sym_if_statement_token3] = ACTIONS(1839),
  },
  [654] = {
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(1893),
    [ts_builtin_sym_end] = ACTIONS(1895),
    [anon_sym_RBRACE] = ACTIONS(1893),
    [anon_sym_CR_LF] = ACTIONS(1895),
    [anon_sym_SEMI] = ACTIONS(1893),
  },
  [655] = {
    [aux_sym_if_statement_repeat1] = STATE(578),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(1875),
    [anon_sym_RBRACE] = ACTIONS(1875),
    [aux_sym_if_statement_token2] = ACTIONS(1432),
    [anon_sym_CR_LF] = ACTIONS(1877),
    [anon_sym_SEMI] = ACTIONS(1875),
    [aux_sym_if_statement_token3] = ACTIONS(1887),
  },
  [656] = {
    [anon_sym_RBRACE] = ACTIONS(1897),
    [ts_builtin_sym_end] = ACTIONS(1899),
    [anon_sym_CR_LF] = ACTIONS(1899),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(1897),
    [aux_sym_if_statement_token2] = ACTIONS(1897),
    [anon_sym_SEMI] = ACTIONS(1897),
    [aux_sym_if_statement_token3] = ACTIONS(1897),
  },
  [657] = {
    [sym__statement] = STATE(106),
    [sym__definition_statement] = STATE(106),
    [sym_pipeline_statement] = STATE(106),
    [sym_if_statement] = STATE(106),
    [sym__non_array_expression] = STATE(107),
    [sym__expression] = STATE(110),
    [sym_array_expression] = STATE(110),
    [sym_flat_array_expression] = STATE(107),
    [sym_variable] = STATE(111),
    [sym__special_variable] = STATE(6),
    [sym_non_type_attribute] = STATE(30),
    [sym__attribute] = STATE(30),
    [sym_function_definition] = STATE(106),
    [sym_filter_definition] = STATE(106),
    [sym_enum_definition] = STATE(106),
    [sym_while_statement] = STATE(106),
    [sym_do_while_statement] = STATE(106),
    [sym_scriptblock] = STATE(107),
    [sym_hashtable_expression] = STATE(107),
    [sym_type_expr] = STATE(26),
    [sym__string_expr] = STATE(107),
    [sym_double_quote_string] = STATE(107),
    [aux_sym_class_method_body_repeat1] = STATE(221),
    [aux_sym_array_expression_repeat1] = STATE(109),
    [sym_class_definition] = STATE(106),
    [sym__expression_statement] = STATE(106),
    [sym_assignment_statement] = STATE(106),
    [sym_command_expression] = STATE(110),
    [sym__pipeline_expression] = STATE(110),
    [sym__attributed_variable] = STATE(111),
    [aux_sym__attributed_variable_repeat1] = STATE(30),
    [aux_sym_do_while_statement_token1] = ACTIONS(5),
    [anon_sym_RBRACE] = ACTIONS(1901),
    [aux_sym_function_definition_token1] = ACTIONS(7),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(9),
    [aux_sym_filter_definition_token1] = ACTIONS(11),
    [sym_number_expr] = ACTIONS(227),
    [anon_sym_AT_LPAREN] = ACTIONS(15),
    [sym_simple_variable] = ACTIONS(9),
    [anon_sym_DOLLAR_CARET] = ACTIONS(9),
    [sym_bareword_string] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [aux_sym_enum_definition_token1] = ACTIONS(23),
    [anon_sym_DQUOTE] = ACTIONS(25),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(17),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(9),
    [aux_sym_while_statement_token1] = ACTIONS(31),
    [aux_sym_if_statement_token1] = ACTIONS(229),
    [anon_sym_AMP] = ACTIONS(35),
    [anon_sym_LPAREN] = ACTIONS(37),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(41),
    [aux_sym_class_definition_token1] = ACTIONS(43),
    [anon_sym_AT_LBRACE] = ACTIONS(45),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(47),
    [sym__braced_variable] = ACTIONS(9),
    [sym_single_quote_string] = ACTIONS(487),
  },
  [658] = {
    [sym__statement] = STATE(106),
    [sym__definition_statement] = STATE(106),
    [sym_pipeline_statement] = STATE(106),
    [sym_if_statement] = STATE(106),
    [sym__non_array_expression] = STATE(107),
    [sym__expression] = STATE(110),
    [sym_array_expression] = STATE(110),
    [sym_flat_array_expression] = STATE(107),
    [sym_variable] = STATE(111),
    [sym__special_variable] = STATE(6),
    [sym_non_type_attribute] = STATE(30),
    [sym__attribute] = STATE(30),
    [sym_function_definition] = STATE(106),
    [sym_filter_definition] = STATE(106),
    [sym_enum_definition] = STATE(106),
    [sym_while_statement] = STATE(106),
    [sym_do_while_statement] = STATE(106),
    [sym_scriptblock] = STATE(107),
    [sym_hashtable_expression] = STATE(107),
    [sym_type_expr] = STATE(26),
    [sym__string_expr] = STATE(107),
    [sym_double_quote_string] = STATE(107),
    [aux_sym_class_method_body_repeat1] = STATE(670),
    [aux_sym_array_expression_repeat1] = STATE(109),
    [sym_class_definition] = STATE(106),
    [sym__expression_statement] = STATE(106),
    [sym_assignment_statement] = STATE(106),
    [sym_command_expression] = STATE(110),
    [sym__pipeline_expression] = STATE(110),
    [sym__attributed_variable] = STATE(111),
    [aux_sym__attributed_variable_repeat1] = STATE(30),
    [aux_sym_do_while_statement_token1] = ACTIONS(5),
    [anon_sym_RBRACE] = ACTIONS(1901),
    [aux_sym_function_definition_token1] = ACTIONS(7),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(9),
    [aux_sym_filter_definition_token1] = ACTIONS(11),
    [sym_number_expr] = ACTIONS(227),
    [anon_sym_AT_LPAREN] = ACTIONS(15),
    [sym_simple_variable] = ACTIONS(9),
    [anon_sym_DOLLAR_CARET] = ACTIONS(9),
    [sym_bareword_string] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [aux_sym_enum_definition_token1] = ACTIONS(23),
    [anon_sym_DQUOTE] = ACTIONS(25),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(17),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(9),
    [aux_sym_while_statement_token1] = ACTIONS(31),
    [aux_sym_if_statement_token1] = ACTIONS(229),
    [anon_sym_AMP] = ACTIONS(35),
    [anon_sym_LPAREN] = ACTIONS(37),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(41),
    [aux_sym_class_definition_token1] = ACTIONS(43),
    [anon_sym_AT_LBRACE] = ACTIONS(45),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(47),
    [sym__braced_variable] = ACTIONS(9),
    [sym_single_quote_string] = ACTIONS(487),
  },
  [659] = {
    [aux_sym__terminator_repeat1] = STATE(114),
    [sym__newline] = STATE(114),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(237),
    [anon_sym_CR_LF] = ACTIONS(239),
    [anon_sym_LBRACE] = ACTIONS(1903),
  },
  [660] = {
    [aux_sym__terminator_repeat1] = STATE(672),
    [sym__newline] = STATE(672),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(1905),
    [anon_sym_CR_LF] = ACTIONS(1907),
    [anon_sym_LBRACE] = ACTIONS(1903),
  },
  [661] = {
    [aux_sym__terminator_repeat1] = STATE(362),
    [sym__newline] = STATE(362),
    [anon_sym_RPAREN] = ACTIONS(1909),
    [anon_sym_LF] = ACTIONS(987),
    [sym_comment] = ACTIONS(39),
    [anon_sym_CR_LF] = ACTIONS(989),
  },
  [662] = {
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(1911),
    [ts_builtin_sym_end] = ACTIONS(1913),
    [anon_sym_RBRACE] = ACTIONS(1911),
    [anon_sym_CR_LF] = ACTIONS(1913),
    [anon_sym_SEMI] = ACTIONS(1911),
  },
  [663] = {
    [sym__statement] = STATE(106),
    [sym__definition_statement] = STATE(106),
    [sym_pipeline_statement] = STATE(106),
    [sym_if_statement] = STATE(106),
    [sym__non_array_expression] = STATE(107),
    [sym__expression] = STATE(110),
    [sym_array_expression] = STATE(110),
    [sym_flat_array_expression] = STATE(107),
    [sym_variable] = STATE(111),
    [sym__special_variable] = STATE(6),
    [sym_non_type_attribute] = STATE(30),
    [sym__attribute] = STATE(30),
    [sym_function_definition] = STATE(106),
    [sym_filter_definition] = STATE(106),
    [sym_enum_definition] = STATE(106),
    [sym_while_statement] = STATE(106),
    [sym_do_while_statement] = STATE(106),
    [sym_scriptblock] = STATE(107),
    [sym_hashtable_expression] = STATE(107),
    [sym_type_expr] = STATE(26),
    [sym__string_expr] = STATE(107),
    [sym_double_quote_string] = STATE(107),
    [aux_sym_class_method_body_repeat1] = STATE(221),
    [aux_sym_array_expression_repeat1] = STATE(109),
    [sym_class_definition] = STATE(106),
    [sym__expression_statement] = STATE(106),
    [sym_assignment_statement] = STATE(106),
    [sym_command_expression] = STATE(110),
    [sym__pipeline_expression] = STATE(110),
    [sym__attributed_variable] = STATE(111),
    [aux_sym__attributed_variable_repeat1] = STATE(30),
    [aux_sym_do_while_statement_token1] = ACTIONS(5),
    [anon_sym_RBRACE] = ACTIONS(1915),
    [aux_sym_function_definition_token1] = ACTIONS(7),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(9),
    [aux_sym_filter_definition_token1] = ACTIONS(11),
    [sym_number_expr] = ACTIONS(227),
    [anon_sym_AT_LPAREN] = ACTIONS(15),
    [sym_simple_variable] = ACTIONS(9),
    [anon_sym_DOLLAR_CARET] = ACTIONS(9),
    [sym_bareword_string] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [aux_sym_enum_definition_token1] = ACTIONS(23),
    [anon_sym_DQUOTE] = ACTIONS(25),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(17),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(9),
    [aux_sym_while_statement_token1] = ACTIONS(31),
    [aux_sym_if_statement_token1] = ACTIONS(229),
    [anon_sym_AMP] = ACTIONS(35),
    [anon_sym_LPAREN] = ACTIONS(37),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(41),
    [aux_sym_class_definition_token1] = ACTIONS(43),
    [anon_sym_AT_LBRACE] = ACTIONS(45),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(47),
    [sym__braced_variable] = ACTIONS(9),
    [sym_single_quote_string] = ACTIONS(487),
  },
  [664] = {
    [sym__statement] = STATE(106),
    [sym__definition_statement] = STATE(106),
    [sym_pipeline_statement] = STATE(106),
    [sym_if_statement] = STATE(106),
    [sym__non_array_expression] = STATE(107),
    [sym__expression] = STATE(110),
    [sym_array_expression] = STATE(110),
    [sym_flat_array_expression] = STATE(107),
    [sym_variable] = STATE(111),
    [sym__special_variable] = STATE(6),
    [sym_non_type_attribute] = STATE(30),
    [sym__attribute] = STATE(30),
    [sym_function_definition] = STATE(106),
    [sym_filter_definition] = STATE(106),
    [sym_enum_definition] = STATE(106),
    [sym_while_statement] = STATE(106),
    [sym_do_while_statement] = STATE(106),
    [sym_scriptblock] = STATE(107),
    [sym_hashtable_expression] = STATE(107),
    [sym_type_expr] = STATE(26),
    [sym__string_expr] = STATE(107),
    [sym_double_quote_string] = STATE(107),
    [aux_sym_class_method_body_repeat1] = STATE(675),
    [aux_sym_array_expression_repeat1] = STATE(109),
    [sym_class_definition] = STATE(106),
    [sym__expression_statement] = STATE(106),
    [sym_assignment_statement] = STATE(106),
    [sym_command_expression] = STATE(110),
    [sym__pipeline_expression] = STATE(110),
    [sym__attributed_variable] = STATE(111),
    [aux_sym__attributed_variable_repeat1] = STATE(30),
    [aux_sym_do_while_statement_token1] = ACTIONS(5),
    [anon_sym_RBRACE] = ACTIONS(1915),
    [aux_sym_function_definition_token1] = ACTIONS(7),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(9),
    [aux_sym_filter_definition_token1] = ACTIONS(11),
    [sym_number_expr] = ACTIONS(227),
    [anon_sym_AT_LPAREN] = ACTIONS(15),
    [sym_simple_variable] = ACTIONS(9),
    [anon_sym_DOLLAR_CARET] = ACTIONS(9),
    [sym_bareword_string] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [aux_sym_enum_definition_token1] = ACTIONS(23),
    [anon_sym_DQUOTE] = ACTIONS(25),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(17),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(9),
    [aux_sym_while_statement_token1] = ACTIONS(31),
    [aux_sym_if_statement_token1] = ACTIONS(229),
    [anon_sym_AMP] = ACTIONS(35),
    [anon_sym_LPAREN] = ACTIONS(37),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(41),
    [aux_sym_class_definition_token1] = ACTIONS(43),
    [anon_sym_AT_LBRACE] = ACTIONS(45),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(47),
    [sym__braced_variable] = ACTIONS(9),
    [sym_single_quote_string] = ACTIONS(487),
  },
  [665] = {
    [aux_sym__terminator_repeat1] = STATE(114),
    [sym__newline] = STATE(114),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(237),
    [anon_sym_CR_LF] = ACTIONS(239),
    [anon_sym_LBRACE] = ACTIONS(1917),
  },
  [666] = {
    [aux_sym__terminator_repeat1] = STATE(677),
    [sym__newline] = STATE(677),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(1919),
    [anon_sym_CR_LF] = ACTIONS(1921),
    [anon_sym_LBRACE] = ACTIONS(1917),
  },
  [667] = {
    [sym_simple_variable] = ACTIONS(1923),
    [anon_sym_RBRACE] = ACTIONS(1923),
    [anon_sym_LBRACK] = ACTIONS(1923),
    [sym_bareword_string] = ACTIONS(1925),
    [sym_comment] = ACTIONS(39),
  },
  [668] = {
    [aux_sym_if_statement_repeat1] = STATE(604),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(1875),
    [aux_sym_if_statement_token2] = ACTIONS(1432),
    [anon_sym_CR_LF] = ACTIONS(1877),
    [anon_sym_SEMI] = ACTIONS(1875),
    [aux_sym_if_statement_token3] = ACTIONS(1887),
  },
  [669] = {
    [anon_sym_RBRACE] = ACTIONS(1927),
    [ts_builtin_sym_end] = ACTIONS(1929),
    [anon_sym_CR_LF] = ACTIONS(1929),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(1927),
    [aux_sym_if_statement_token2] = ACTIONS(1927),
    [anon_sym_SEMI] = ACTIONS(1927),
    [aux_sym_if_statement_token3] = ACTIONS(1927),
  },
  [670] = {
    [sym__statement] = STATE(106),
    [sym__definition_statement] = STATE(106),
    [sym_pipeline_statement] = STATE(106),
    [sym_if_statement] = STATE(106),
    [sym__non_array_expression] = STATE(107),
    [sym__expression] = STATE(110),
    [sym_array_expression] = STATE(110),
    [sym_flat_array_expression] = STATE(107),
    [sym_variable] = STATE(111),
    [sym__special_variable] = STATE(6),
    [sym_non_type_attribute] = STATE(30),
    [sym__attribute] = STATE(30),
    [sym_function_definition] = STATE(106),
    [sym_filter_definition] = STATE(106),
    [sym_enum_definition] = STATE(106),
    [sym_while_statement] = STATE(106),
    [sym_do_while_statement] = STATE(106),
    [sym_scriptblock] = STATE(107),
    [sym_hashtable_expression] = STATE(107),
    [sym_type_expr] = STATE(26),
    [sym__string_expr] = STATE(107),
    [sym_double_quote_string] = STATE(107),
    [aux_sym_class_method_body_repeat1] = STATE(221),
    [aux_sym_array_expression_repeat1] = STATE(109),
    [sym_class_definition] = STATE(106),
    [sym__expression_statement] = STATE(106),
    [sym_assignment_statement] = STATE(106),
    [sym_command_expression] = STATE(110),
    [sym__pipeline_expression] = STATE(110),
    [sym__attributed_variable] = STATE(111),
    [aux_sym__attributed_variable_repeat1] = STATE(30),
    [aux_sym_do_while_statement_token1] = ACTIONS(5),
    [anon_sym_RBRACE] = ACTIONS(1931),
    [aux_sym_function_definition_token1] = ACTIONS(7),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(9),
    [aux_sym_filter_definition_token1] = ACTIONS(11),
    [sym_number_expr] = ACTIONS(227),
    [anon_sym_AT_LPAREN] = ACTIONS(15),
    [sym_simple_variable] = ACTIONS(9),
    [anon_sym_DOLLAR_CARET] = ACTIONS(9),
    [sym_bareword_string] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [aux_sym_enum_definition_token1] = ACTIONS(23),
    [anon_sym_DQUOTE] = ACTIONS(25),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(17),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(9),
    [aux_sym_while_statement_token1] = ACTIONS(31),
    [aux_sym_if_statement_token1] = ACTIONS(229),
    [anon_sym_AMP] = ACTIONS(35),
    [anon_sym_LPAREN] = ACTIONS(37),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(41),
    [aux_sym_class_definition_token1] = ACTIONS(43),
    [anon_sym_AT_LBRACE] = ACTIONS(45),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(47),
    [sym__braced_variable] = ACTIONS(9),
    [sym_single_quote_string] = ACTIONS(487),
  },
  [671] = {
    [sym__statement] = STATE(106),
    [sym__definition_statement] = STATE(106),
    [sym_pipeline_statement] = STATE(106),
    [sym_if_statement] = STATE(106),
    [sym__non_array_expression] = STATE(107),
    [sym__expression] = STATE(110),
    [sym_array_expression] = STATE(110),
    [sym_flat_array_expression] = STATE(107),
    [sym_variable] = STATE(111),
    [sym__special_variable] = STATE(6),
    [sym_non_type_attribute] = STATE(30),
    [sym__attribute] = STATE(30),
    [sym_function_definition] = STATE(106),
    [sym_filter_definition] = STATE(106),
    [sym_enum_definition] = STATE(106),
    [sym_while_statement] = STATE(106),
    [sym_do_while_statement] = STATE(106),
    [sym_scriptblock] = STATE(107),
    [sym_hashtable_expression] = STATE(107),
    [sym_type_expr] = STATE(26),
    [sym__string_expr] = STATE(107),
    [sym_double_quote_string] = STATE(107),
    [aux_sym_class_method_body_repeat1] = STATE(679),
    [aux_sym_array_expression_repeat1] = STATE(109),
    [sym_class_definition] = STATE(106),
    [sym__expression_statement] = STATE(106),
    [sym_assignment_statement] = STATE(106),
    [sym_command_expression] = STATE(110),
    [sym__pipeline_expression] = STATE(110),
    [sym__attributed_variable] = STATE(111),
    [aux_sym__attributed_variable_repeat1] = STATE(30),
    [aux_sym_do_while_statement_token1] = ACTIONS(5),
    [anon_sym_RBRACE] = ACTIONS(1931),
    [aux_sym_function_definition_token1] = ACTIONS(7),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(9),
    [aux_sym_filter_definition_token1] = ACTIONS(11),
    [sym_number_expr] = ACTIONS(227),
    [anon_sym_AT_LPAREN] = ACTIONS(15),
    [sym_simple_variable] = ACTIONS(9),
    [anon_sym_DOLLAR_CARET] = ACTIONS(9),
    [sym_bareword_string] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [aux_sym_enum_definition_token1] = ACTIONS(23),
    [anon_sym_DQUOTE] = ACTIONS(25),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(17),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(9),
    [aux_sym_while_statement_token1] = ACTIONS(31),
    [aux_sym_if_statement_token1] = ACTIONS(229),
    [anon_sym_AMP] = ACTIONS(35),
    [anon_sym_LPAREN] = ACTIONS(37),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(41),
    [aux_sym_class_definition_token1] = ACTIONS(43),
    [anon_sym_AT_LBRACE] = ACTIONS(45),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(47),
    [sym__braced_variable] = ACTIONS(9),
    [sym_single_quote_string] = ACTIONS(487),
  },
  [672] = {
    [aux_sym__terminator_repeat1] = STATE(114),
    [sym__newline] = STATE(114),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(237),
    [anon_sym_CR_LF] = ACTIONS(239),
    [anon_sym_LBRACE] = ACTIONS(1933),
  },
  [673] = {
    [aux_sym__terminator_repeat1] = STATE(681),
    [sym__newline] = STATE(681),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(1935),
    [anon_sym_CR_LF] = ACTIONS(1937),
    [anon_sym_LBRACE] = ACTIONS(1933),
  },
  [674] = {
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(1939),
    [ts_builtin_sym_end] = ACTIONS(1941),
    [anon_sym_RBRACE] = ACTIONS(1939),
    [anon_sym_CR_LF] = ACTIONS(1941),
    [anon_sym_SEMI] = ACTIONS(1939),
  },
  [675] = {
    [sym__statement] = STATE(106),
    [sym__definition_statement] = STATE(106),
    [sym_pipeline_statement] = STATE(106),
    [sym_if_statement] = STATE(106),
    [sym__non_array_expression] = STATE(107),
    [sym__expression] = STATE(110),
    [sym_array_expression] = STATE(110),
    [sym_flat_array_expression] = STATE(107),
    [sym_variable] = STATE(111),
    [sym__special_variable] = STATE(6),
    [sym_non_type_attribute] = STATE(30),
    [sym__attribute] = STATE(30),
    [sym_function_definition] = STATE(106),
    [sym_filter_definition] = STATE(106),
    [sym_enum_definition] = STATE(106),
    [sym_while_statement] = STATE(106),
    [sym_do_while_statement] = STATE(106),
    [sym_scriptblock] = STATE(107),
    [sym_hashtable_expression] = STATE(107),
    [sym_type_expr] = STATE(26),
    [sym__string_expr] = STATE(107),
    [sym_double_quote_string] = STATE(107),
    [aux_sym_class_method_body_repeat1] = STATE(221),
    [aux_sym_array_expression_repeat1] = STATE(109),
    [sym_class_definition] = STATE(106),
    [sym__expression_statement] = STATE(106),
    [sym_assignment_statement] = STATE(106),
    [sym_command_expression] = STATE(110),
    [sym__pipeline_expression] = STATE(110),
    [sym__attributed_variable] = STATE(111),
    [aux_sym__attributed_variable_repeat1] = STATE(30),
    [aux_sym_do_while_statement_token1] = ACTIONS(5),
    [anon_sym_RBRACE] = ACTIONS(1943),
    [aux_sym_function_definition_token1] = ACTIONS(7),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(9),
    [aux_sym_filter_definition_token1] = ACTIONS(11),
    [sym_number_expr] = ACTIONS(227),
    [anon_sym_AT_LPAREN] = ACTIONS(15),
    [sym_simple_variable] = ACTIONS(9),
    [anon_sym_DOLLAR_CARET] = ACTIONS(9),
    [sym_bareword_string] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [aux_sym_enum_definition_token1] = ACTIONS(23),
    [anon_sym_DQUOTE] = ACTIONS(25),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(17),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(9),
    [aux_sym_while_statement_token1] = ACTIONS(31),
    [aux_sym_if_statement_token1] = ACTIONS(229),
    [anon_sym_AMP] = ACTIONS(35),
    [anon_sym_LPAREN] = ACTIONS(37),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(41),
    [aux_sym_class_definition_token1] = ACTIONS(43),
    [anon_sym_AT_LBRACE] = ACTIONS(45),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(47),
    [sym__braced_variable] = ACTIONS(9),
    [sym_single_quote_string] = ACTIONS(487),
  },
  [676] = {
    [sym__statement] = STATE(106),
    [sym__definition_statement] = STATE(106),
    [sym_pipeline_statement] = STATE(106),
    [sym_if_statement] = STATE(106),
    [sym__non_array_expression] = STATE(107),
    [sym__expression] = STATE(110),
    [sym_array_expression] = STATE(110),
    [sym_flat_array_expression] = STATE(107),
    [sym_variable] = STATE(111),
    [sym__special_variable] = STATE(6),
    [sym_non_type_attribute] = STATE(30),
    [sym__attribute] = STATE(30),
    [sym_function_definition] = STATE(106),
    [sym_filter_definition] = STATE(106),
    [sym_enum_definition] = STATE(106),
    [sym_while_statement] = STATE(106),
    [sym_do_while_statement] = STATE(106),
    [sym_scriptblock] = STATE(107),
    [sym_hashtable_expression] = STATE(107),
    [sym_type_expr] = STATE(26),
    [sym__string_expr] = STATE(107),
    [sym_double_quote_string] = STATE(107),
    [aux_sym_class_method_body_repeat1] = STATE(683),
    [aux_sym_array_expression_repeat1] = STATE(109),
    [sym_class_definition] = STATE(106),
    [sym__expression_statement] = STATE(106),
    [sym_assignment_statement] = STATE(106),
    [sym_command_expression] = STATE(110),
    [sym__pipeline_expression] = STATE(110),
    [sym__attributed_variable] = STATE(111),
    [aux_sym__attributed_variable_repeat1] = STATE(30),
    [aux_sym_do_while_statement_token1] = ACTIONS(5),
    [anon_sym_RBRACE] = ACTIONS(1943),
    [aux_sym_function_definition_token1] = ACTIONS(7),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(9),
    [aux_sym_filter_definition_token1] = ACTIONS(11),
    [sym_number_expr] = ACTIONS(227),
    [anon_sym_AT_LPAREN] = ACTIONS(15),
    [sym_simple_variable] = ACTIONS(9),
    [anon_sym_DOLLAR_CARET] = ACTIONS(9),
    [sym_bareword_string] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [aux_sym_enum_definition_token1] = ACTIONS(23),
    [anon_sym_DQUOTE] = ACTIONS(25),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(17),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(9),
    [aux_sym_while_statement_token1] = ACTIONS(31),
    [aux_sym_if_statement_token1] = ACTIONS(229),
    [anon_sym_AMP] = ACTIONS(35),
    [anon_sym_LPAREN] = ACTIONS(37),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(41),
    [aux_sym_class_definition_token1] = ACTIONS(43),
    [anon_sym_AT_LBRACE] = ACTIONS(45),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(47),
    [sym__braced_variable] = ACTIONS(9),
    [sym_single_quote_string] = ACTIONS(487),
  },
  [677] = {
    [aux_sym__terminator_repeat1] = STATE(114),
    [sym__newline] = STATE(114),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(237),
    [anon_sym_CR_LF] = ACTIONS(239),
    [anon_sym_LBRACE] = ACTIONS(1945),
  },
  [678] = {
    [anon_sym_RBRACE] = ACTIONS(1947),
    [ts_builtin_sym_end] = ACTIONS(1949),
    [anon_sym_CR_LF] = ACTIONS(1949),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(1947),
    [aux_sym_if_statement_token2] = ACTIONS(1947),
    [anon_sym_SEMI] = ACTIONS(1947),
    [aux_sym_if_statement_token3] = ACTIONS(1947),
  },
  [679] = {
    [sym__statement] = STATE(106),
    [sym__definition_statement] = STATE(106),
    [sym_pipeline_statement] = STATE(106),
    [sym_if_statement] = STATE(106),
    [sym__non_array_expression] = STATE(107),
    [sym__expression] = STATE(110),
    [sym_array_expression] = STATE(110),
    [sym_flat_array_expression] = STATE(107),
    [sym_variable] = STATE(111),
    [sym__special_variable] = STATE(6),
    [sym_non_type_attribute] = STATE(30),
    [sym__attribute] = STATE(30),
    [sym_function_definition] = STATE(106),
    [sym_filter_definition] = STATE(106),
    [sym_enum_definition] = STATE(106),
    [sym_while_statement] = STATE(106),
    [sym_do_while_statement] = STATE(106),
    [sym_scriptblock] = STATE(107),
    [sym_hashtable_expression] = STATE(107),
    [sym_type_expr] = STATE(26),
    [sym__string_expr] = STATE(107),
    [sym_double_quote_string] = STATE(107),
    [aux_sym_class_method_body_repeat1] = STATE(221),
    [aux_sym_array_expression_repeat1] = STATE(109),
    [sym_class_definition] = STATE(106),
    [sym__expression_statement] = STATE(106),
    [sym_assignment_statement] = STATE(106),
    [sym_command_expression] = STATE(110),
    [sym__pipeline_expression] = STATE(110),
    [sym__attributed_variable] = STATE(111),
    [aux_sym__attributed_variable_repeat1] = STATE(30),
    [aux_sym_do_while_statement_token1] = ACTIONS(5),
    [anon_sym_RBRACE] = ACTIONS(1951),
    [aux_sym_function_definition_token1] = ACTIONS(7),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(9),
    [aux_sym_filter_definition_token1] = ACTIONS(11),
    [sym_number_expr] = ACTIONS(227),
    [anon_sym_AT_LPAREN] = ACTIONS(15),
    [sym_simple_variable] = ACTIONS(9),
    [anon_sym_DOLLAR_CARET] = ACTIONS(9),
    [sym_bareword_string] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [aux_sym_enum_definition_token1] = ACTIONS(23),
    [anon_sym_DQUOTE] = ACTIONS(25),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(17),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(9),
    [aux_sym_while_statement_token1] = ACTIONS(31),
    [aux_sym_if_statement_token1] = ACTIONS(229),
    [anon_sym_AMP] = ACTIONS(35),
    [anon_sym_LPAREN] = ACTIONS(37),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(41),
    [aux_sym_class_definition_token1] = ACTIONS(43),
    [anon_sym_AT_LBRACE] = ACTIONS(45),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(47),
    [sym__braced_variable] = ACTIONS(9),
    [sym_single_quote_string] = ACTIONS(487),
  },
  [680] = {
    [sym__statement] = STATE(106),
    [sym__definition_statement] = STATE(106),
    [sym_pipeline_statement] = STATE(106),
    [sym_if_statement] = STATE(106),
    [sym__non_array_expression] = STATE(107),
    [sym__expression] = STATE(110),
    [sym_array_expression] = STATE(110),
    [sym_flat_array_expression] = STATE(107),
    [sym_variable] = STATE(111),
    [sym__special_variable] = STATE(6),
    [sym_non_type_attribute] = STATE(30),
    [sym__attribute] = STATE(30),
    [sym_function_definition] = STATE(106),
    [sym_filter_definition] = STATE(106),
    [sym_enum_definition] = STATE(106),
    [sym_while_statement] = STATE(106),
    [sym_do_while_statement] = STATE(106),
    [sym_scriptblock] = STATE(107),
    [sym_hashtable_expression] = STATE(107),
    [sym_type_expr] = STATE(26),
    [sym__string_expr] = STATE(107),
    [sym_double_quote_string] = STATE(107),
    [aux_sym_class_method_body_repeat1] = STATE(686),
    [aux_sym_array_expression_repeat1] = STATE(109),
    [sym_class_definition] = STATE(106),
    [sym__expression_statement] = STATE(106),
    [sym_assignment_statement] = STATE(106),
    [sym_command_expression] = STATE(110),
    [sym__pipeline_expression] = STATE(110),
    [sym__attributed_variable] = STATE(111),
    [aux_sym__attributed_variable_repeat1] = STATE(30),
    [aux_sym_do_while_statement_token1] = ACTIONS(5),
    [anon_sym_RBRACE] = ACTIONS(1951),
    [aux_sym_function_definition_token1] = ACTIONS(7),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(9),
    [aux_sym_filter_definition_token1] = ACTIONS(11),
    [sym_number_expr] = ACTIONS(227),
    [anon_sym_AT_LPAREN] = ACTIONS(15),
    [sym_simple_variable] = ACTIONS(9),
    [anon_sym_DOLLAR_CARET] = ACTIONS(9),
    [sym_bareword_string] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [aux_sym_enum_definition_token1] = ACTIONS(23),
    [anon_sym_DQUOTE] = ACTIONS(25),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(17),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(9),
    [aux_sym_while_statement_token1] = ACTIONS(31),
    [aux_sym_if_statement_token1] = ACTIONS(229),
    [anon_sym_AMP] = ACTIONS(35),
    [anon_sym_LPAREN] = ACTIONS(37),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(41),
    [aux_sym_class_definition_token1] = ACTIONS(43),
    [anon_sym_AT_LBRACE] = ACTIONS(45),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(47),
    [sym__braced_variable] = ACTIONS(9),
    [sym_single_quote_string] = ACTIONS(487),
  },
  [681] = {
    [aux_sym__terminator_repeat1] = STATE(114),
    [sym__newline] = STATE(114),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(237),
    [anon_sym_CR_LF] = ACTIONS(239),
    [anon_sym_LBRACE] = ACTIONS(1953),
  },
  [682] = {
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(1955),
    [ts_builtin_sym_end] = ACTIONS(1957),
    [anon_sym_RBRACE] = ACTIONS(1955),
    [anon_sym_CR_LF] = ACTIONS(1957),
    [anon_sym_SEMI] = ACTIONS(1955),
  },
  [683] = {
    [sym__statement] = STATE(106),
    [sym__definition_statement] = STATE(106),
    [sym_pipeline_statement] = STATE(106),
    [sym_if_statement] = STATE(106),
    [sym__non_array_expression] = STATE(107),
    [sym__expression] = STATE(110),
    [sym_array_expression] = STATE(110),
    [sym_flat_array_expression] = STATE(107),
    [sym_variable] = STATE(111),
    [sym__special_variable] = STATE(6),
    [sym_non_type_attribute] = STATE(30),
    [sym__attribute] = STATE(30),
    [sym_function_definition] = STATE(106),
    [sym_filter_definition] = STATE(106),
    [sym_enum_definition] = STATE(106),
    [sym_while_statement] = STATE(106),
    [sym_do_while_statement] = STATE(106),
    [sym_scriptblock] = STATE(107),
    [sym_hashtable_expression] = STATE(107),
    [sym_type_expr] = STATE(26),
    [sym__string_expr] = STATE(107),
    [sym_double_quote_string] = STATE(107),
    [aux_sym_class_method_body_repeat1] = STATE(221),
    [aux_sym_array_expression_repeat1] = STATE(109),
    [sym_class_definition] = STATE(106),
    [sym__expression_statement] = STATE(106),
    [sym_assignment_statement] = STATE(106),
    [sym_command_expression] = STATE(110),
    [sym__pipeline_expression] = STATE(110),
    [sym__attributed_variable] = STATE(111),
    [aux_sym__attributed_variable_repeat1] = STATE(30),
    [aux_sym_do_while_statement_token1] = ACTIONS(5),
    [anon_sym_RBRACE] = ACTIONS(1959),
    [aux_sym_function_definition_token1] = ACTIONS(7),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(9),
    [aux_sym_filter_definition_token1] = ACTIONS(11),
    [sym_number_expr] = ACTIONS(227),
    [anon_sym_AT_LPAREN] = ACTIONS(15),
    [sym_simple_variable] = ACTIONS(9),
    [anon_sym_DOLLAR_CARET] = ACTIONS(9),
    [sym_bareword_string] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [aux_sym_enum_definition_token1] = ACTIONS(23),
    [anon_sym_DQUOTE] = ACTIONS(25),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(17),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(9),
    [aux_sym_while_statement_token1] = ACTIONS(31),
    [aux_sym_if_statement_token1] = ACTIONS(229),
    [anon_sym_AMP] = ACTIONS(35),
    [anon_sym_LPAREN] = ACTIONS(37),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(41),
    [aux_sym_class_definition_token1] = ACTIONS(43),
    [anon_sym_AT_LBRACE] = ACTIONS(45),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(47),
    [sym__braced_variable] = ACTIONS(9),
    [sym_single_quote_string] = ACTIONS(487),
  },
  [684] = {
    [sym__statement] = STATE(106),
    [sym__definition_statement] = STATE(106),
    [sym_pipeline_statement] = STATE(106),
    [sym_if_statement] = STATE(106),
    [sym__non_array_expression] = STATE(107),
    [sym__expression] = STATE(110),
    [sym_array_expression] = STATE(110),
    [sym_flat_array_expression] = STATE(107),
    [sym_variable] = STATE(111),
    [sym__special_variable] = STATE(6),
    [sym_non_type_attribute] = STATE(30),
    [sym__attribute] = STATE(30),
    [sym_function_definition] = STATE(106),
    [sym_filter_definition] = STATE(106),
    [sym_enum_definition] = STATE(106),
    [sym_while_statement] = STATE(106),
    [sym_do_while_statement] = STATE(106),
    [sym_scriptblock] = STATE(107),
    [sym_hashtable_expression] = STATE(107),
    [sym_type_expr] = STATE(26),
    [sym__string_expr] = STATE(107),
    [sym_double_quote_string] = STATE(107),
    [aux_sym_class_method_body_repeat1] = STATE(689),
    [aux_sym_array_expression_repeat1] = STATE(109),
    [sym_class_definition] = STATE(106),
    [sym__expression_statement] = STATE(106),
    [sym_assignment_statement] = STATE(106),
    [sym_command_expression] = STATE(110),
    [sym__pipeline_expression] = STATE(110),
    [sym__attributed_variable] = STATE(111),
    [aux_sym__attributed_variable_repeat1] = STATE(30),
    [aux_sym_do_while_statement_token1] = ACTIONS(5),
    [anon_sym_RBRACE] = ACTIONS(1959),
    [aux_sym_function_definition_token1] = ACTIONS(7),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(9),
    [aux_sym_filter_definition_token1] = ACTIONS(11),
    [sym_number_expr] = ACTIONS(227),
    [anon_sym_AT_LPAREN] = ACTIONS(15),
    [sym_simple_variable] = ACTIONS(9),
    [anon_sym_DOLLAR_CARET] = ACTIONS(9),
    [sym_bareword_string] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [aux_sym_enum_definition_token1] = ACTIONS(23),
    [anon_sym_DQUOTE] = ACTIONS(25),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(17),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(9),
    [aux_sym_while_statement_token1] = ACTIONS(31),
    [aux_sym_if_statement_token1] = ACTIONS(229),
    [anon_sym_AMP] = ACTIONS(35),
    [anon_sym_LPAREN] = ACTIONS(37),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(41),
    [aux_sym_class_definition_token1] = ACTIONS(43),
    [anon_sym_AT_LBRACE] = ACTIONS(45),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(47),
    [sym__braced_variable] = ACTIONS(9),
    [sym_single_quote_string] = ACTIONS(487),
  },
  [685] = {
    [anon_sym_RBRACE] = ACTIONS(1961),
    [ts_builtin_sym_end] = ACTIONS(1963),
    [anon_sym_CR_LF] = ACTIONS(1963),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(1961),
    [aux_sym_if_statement_token2] = ACTIONS(1961),
    [anon_sym_SEMI] = ACTIONS(1961),
    [aux_sym_if_statement_token3] = ACTIONS(1961),
  },
  [686] = {
    [sym__statement] = STATE(106),
    [sym__definition_statement] = STATE(106),
    [sym_pipeline_statement] = STATE(106),
    [sym_if_statement] = STATE(106),
    [sym__non_array_expression] = STATE(107),
    [sym__expression] = STATE(110),
    [sym_array_expression] = STATE(110),
    [sym_flat_array_expression] = STATE(107),
    [sym_variable] = STATE(111),
    [sym__special_variable] = STATE(6),
    [sym_non_type_attribute] = STATE(30),
    [sym__attribute] = STATE(30),
    [sym_function_definition] = STATE(106),
    [sym_filter_definition] = STATE(106),
    [sym_enum_definition] = STATE(106),
    [sym_while_statement] = STATE(106),
    [sym_do_while_statement] = STATE(106),
    [sym_scriptblock] = STATE(107),
    [sym_hashtable_expression] = STATE(107),
    [sym_type_expr] = STATE(26),
    [sym__string_expr] = STATE(107),
    [sym_double_quote_string] = STATE(107),
    [aux_sym_class_method_body_repeat1] = STATE(221),
    [aux_sym_array_expression_repeat1] = STATE(109),
    [sym_class_definition] = STATE(106),
    [sym__expression_statement] = STATE(106),
    [sym_assignment_statement] = STATE(106),
    [sym_command_expression] = STATE(110),
    [sym__pipeline_expression] = STATE(110),
    [sym__attributed_variable] = STATE(111),
    [aux_sym__attributed_variable_repeat1] = STATE(30),
    [aux_sym_do_while_statement_token1] = ACTIONS(5),
    [anon_sym_RBRACE] = ACTIONS(1965),
    [aux_sym_function_definition_token1] = ACTIONS(7),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(9),
    [aux_sym_filter_definition_token1] = ACTIONS(11),
    [sym_number_expr] = ACTIONS(227),
    [anon_sym_AT_LPAREN] = ACTIONS(15),
    [sym_simple_variable] = ACTIONS(9),
    [anon_sym_DOLLAR_CARET] = ACTIONS(9),
    [sym_bareword_string] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [aux_sym_enum_definition_token1] = ACTIONS(23),
    [anon_sym_DQUOTE] = ACTIONS(25),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(17),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(9),
    [aux_sym_while_statement_token1] = ACTIONS(31),
    [aux_sym_if_statement_token1] = ACTIONS(229),
    [anon_sym_AMP] = ACTIONS(35),
    [anon_sym_LPAREN] = ACTIONS(37),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(41),
    [aux_sym_class_definition_token1] = ACTIONS(43),
    [anon_sym_AT_LBRACE] = ACTIONS(45),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(47),
    [sym__braced_variable] = ACTIONS(9),
    [sym_single_quote_string] = ACTIONS(487),
  },
  [687] = {
    [sym__statement] = STATE(106),
    [sym__definition_statement] = STATE(106),
    [sym_pipeline_statement] = STATE(106),
    [sym_if_statement] = STATE(106),
    [sym__non_array_expression] = STATE(107),
    [sym__expression] = STATE(110),
    [sym_array_expression] = STATE(110),
    [sym_flat_array_expression] = STATE(107),
    [sym_variable] = STATE(111),
    [sym__special_variable] = STATE(6),
    [sym_non_type_attribute] = STATE(30),
    [sym__attribute] = STATE(30),
    [sym_function_definition] = STATE(106),
    [sym_filter_definition] = STATE(106),
    [sym_enum_definition] = STATE(106),
    [sym_while_statement] = STATE(106),
    [sym_do_while_statement] = STATE(106),
    [sym_scriptblock] = STATE(107),
    [sym_hashtable_expression] = STATE(107),
    [sym_type_expr] = STATE(26),
    [sym__string_expr] = STATE(107),
    [sym_double_quote_string] = STATE(107),
    [aux_sym_class_method_body_repeat1] = STATE(691),
    [aux_sym_array_expression_repeat1] = STATE(109),
    [sym_class_definition] = STATE(106),
    [sym__expression_statement] = STATE(106),
    [sym_assignment_statement] = STATE(106),
    [sym_command_expression] = STATE(110),
    [sym__pipeline_expression] = STATE(110),
    [sym__attributed_variable] = STATE(111),
    [aux_sym__attributed_variable_repeat1] = STATE(30),
    [aux_sym_do_while_statement_token1] = ACTIONS(5),
    [anon_sym_RBRACE] = ACTIONS(1965),
    [aux_sym_function_definition_token1] = ACTIONS(7),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(9),
    [aux_sym_filter_definition_token1] = ACTIONS(11),
    [sym_number_expr] = ACTIONS(227),
    [anon_sym_AT_LPAREN] = ACTIONS(15),
    [sym_simple_variable] = ACTIONS(9),
    [anon_sym_DOLLAR_CARET] = ACTIONS(9),
    [sym_bareword_string] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [aux_sym_enum_definition_token1] = ACTIONS(23),
    [anon_sym_DQUOTE] = ACTIONS(25),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(17),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(9),
    [aux_sym_while_statement_token1] = ACTIONS(31),
    [aux_sym_if_statement_token1] = ACTIONS(229),
    [anon_sym_AMP] = ACTIONS(35),
    [anon_sym_LPAREN] = ACTIONS(37),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(41),
    [aux_sym_class_definition_token1] = ACTIONS(43),
    [anon_sym_AT_LBRACE] = ACTIONS(45),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(47),
    [sym__braced_variable] = ACTIONS(9),
    [sym_single_quote_string] = ACTIONS(487),
  },
  [688] = {
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(1967),
    [ts_builtin_sym_end] = ACTIONS(1969),
    [anon_sym_RBRACE] = ACTIONS(1967),
    [anon_sym_CR_LF] = ACTIONS(1969),
    [anon_sym_SEMI] = ACTIONS(1967),
  },
  [689] = {
    [sym__statement] = STATE(106),
    [sym__definition_statement] = STATE(106),
    [sym_pipeline_statement] = STATE(106),
    [sym_if_statement] = STATE(106),
    [sym__non_array_expression] = STATE(107),
    [sym__expression] = STATE(110),
    [sym_array_expression] = STATE(110),
    [sym_flat_array_expression] = STATE(107),
    [sym_variable] = STATE(111),
    [sym__special_variable] = STATE(6),
    [sym_non_type_attribute] = STATE(30),
    [sym__attribute] = STATE(30),
    [sym_function_definition] = STATE(106),
    [sym_filter_definition] = STATE(106),
    [sym_enum_definition] = STATE(106),
    [sym_while_statement] = STATE(106),
    [sym_do_while_statement] = STATE(106),
    [sym_scriptblock] = STATE(107),
    [sym_hashtable_expression] = STATE(107),
    [sym_type_expr] = STATE(26),
    [sym__string_expr] = STATE(107),
    [sym_double_quote_string] = STATE(107),
    [aux_sym_class_method_body_repeat1] = STATE(221),
    [aux_sym_array_expression_repeat1] = STATE(109),
    [sym_class_definition] = STATE(106),
    [sym__expression_statement] = STATE(106),
    [sym_assignment_statement] = STATE(106),
    [sym_command_expression] = STATE(110),
    [sym__pipeline_expression] = STATE(110),
    [sym__attributed_variable] = STATE(111),
    [aux_sym__attributed_variable_repeat1] = STATE(30),
    [aux_sym_do_while_statement_token1] = ACTIONS(5),
    [anon_sym_RBRACE] = ACTIONS(1971),
    [aux_sym_function_definition_token1] = ACTIONS(7),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(9),
    [aux_sym_filter_definition_token1] = ACTIONS(11),
    [sym_number_expr] = ACTIONS(227),
    [anon_sym_AT_LPAREN] = ACTIONS(15),
    [sym_simple_variable] = ACTIONS(9),
    [anon_sym_DOLLAR_CARET] = ACTIONS(9),
    [sym_bareword_string] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [aux_sym_enum_definition_token1] = ACTIONS(23),
    [anon_sym_DQUOTE] = ACTIONS(25),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(17),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(9),
    [aux_sym_while_statement_token1] = ACTIONS(31),
    [aux_sym_if_statement_token1] = ACTIONS(229),
    [anon_sym_AMP] = ACTIONS(35),
    [anon_sym_LPAREN] = ACTIONS(37),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(41),
    [aux_sym_class_definition_token1] = ACTIONS(43),
    [anon_sym_AT_LBRACE] = ACTIONS(45),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(47),
    [sym__braced_variable] = ACTIONS(9),
    [sym_single_quote_string] = ACTIONS(487),
  },
  [690] = {
    [anon_sym_RBRACE] = ACTIONS(1973),
    [ts_builtin_sym_end] = ACTIONS(1975),
    [anon_sym_CR_LF] = ACTIONS(1975),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(1973),
    [aux_sym_if_statement_token2] = ACTIONS(1973),
    [anon_sym_SEMI] = ACTIONS(1973),
    [aux_sym_if_statement_token3] = ACTIONS(1973),
  },
  [691] = {
    [sym__statement] = STATE(106),
    [sym__definition_statement] = STATE(106),
    [sym_pipeline_statement] = STATE(106),
    [sym_if_statement] = STATE(106),
    [sym__non_array_expression] = STATE(107),
    [sym__expression] = STATE(110),
    [sym_array_expression] = STATE(110),
    [sym_flat_array_expression] = STATE(107),
    [sym_variable] = STATE(111),
    [sym__special_variable] = STATE(6),
    [sym_non_type_attribute] = STATE(30),
    [sym__attribute] = STATE(30),
    [sym_function_definition] = STATE(106),
    [sym_filter_definition] = STATE(106),
    [sym_enum_definition] = STATE(106),
    [sym_while_statement] = STATE(106),
    [sym_do_while_statement] = STATE(106),
    [sym_scriptblock] = STATE(107),
    [sym_hashtable_expression] = STATE(107),
    [sym_type_expr] = STATE(26),
    [sym__string_expr] = STATE(107),
    [sym_double_quote_string] = STATE(107),
    [aux_sym_class_method_body_repeat1] = STATE(221),
    [aux_sym_array_expression_repeat1] = STATE(109),
    [sym_class_definition] = STATE(106),
    [sym__expression_statement] = STATE(106),
    [sym_assignment_statement] = STATE(106),
    [sym_command_expression] = STATE(110),
    [sym__pipeline_expression] = STATE(110),
    [sym__attributed_variable] = STATE(111),
    [aux_sym__attributed_variable_repeat1] = STATE(30),
    [aux_sym_do_while_statement_token1] = ACTIONS(5),
    [anon_sym_RBRACE] = ACTIONS(1977),
    [aux_sym_function_definition_token1] = ACTIONS(7),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(9),
    [aux_sym_filter_definition_token1] = ACTIONS(11),
    [sym_number_expr] = ACTIONS(227),
    [anon_sym_AT_LPAREN] = ACTIONS(15),
    [sym_simple_variable] = ACTIONS(9),
    [anon_sym_DOLLAR_CARET] = ACTIONS(9),
    [sym_bareword_string] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [aux_sym_enum_definition_token1] = ACTIONS(23),
    [anon_sym_DQUOTE] = ACTIONS(25),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(17),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(9),
    [aux_sym_while_statement_token1] = ACTIONS(31),
    [aux_sym_if_statement_token1] = ACTIONS(229),
    [anon_sym_AMP] = ACTIONS(35),
    [anon_sym_LPAREN] = ACTIONS(37),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(41),
    [aux_sym_class_definition_token1] = ACTIONS(43),
    [anon_sym_AT_LBRACE] = ACTIONS(45),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(47),
    [sym__braced_variable] = ACTIONS(9),
    [sym_single_quote_string] = ACTIONS(487),
  },
  [692] = {
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(1979),
    [ts_builtin_sym_end] = ACTIONS(1981),
    [anon_sym_RBRACE] = ACTIONS(1979),
    [anon_sym_CR_LF] = ACTIONS(1981),
    [anon_sym_SEMI] = ACTIONS(1979),
  },
  [693] = {
    [anon_sym_RBRACE] = ACTIONS(1983),
    [ts_builtin_sym_end] = ACTIONS(1985),
    [anon_sym_CR_LF] = ACTIONS(1985),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(1983),
    [aux_sym_if_statement_token2] = ACTIONS(1983),
    [anon_sym_SEMI] = ACTIONS(1983),
    [aux_sym_if_statement_token3] = ACTIONS(1983),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, SHIFT_EXTRA(),
  [5] = {.count = 1, .reusable = false}, SHIFT(2),
  [7] = {.count = 1, .reusable = false}, SHIFT(3),
  [9] = {.count = 1, .reusable = true}, SHIFT(6),
  [11] = {.count = 1, .reusable = false}, SHIFT(4),
  [13] = {.count = 1, .reusable = false}, SHIFT(23),
  [15] = {.count = 1, .reusable = true}, SHIFT(5),
  [17] = {.count = 1, .reusable = false}, SHIFT(12),
  [19] = {.count = 1, .reusable = false}, SHIFT(7),
  [21] = {.count = 1, .reusable = true}, SHIFT(8),
  [23] = {.count = 1, .reusable = false}, SHIFT(9),
  [25] = {.count = 1, .reusable = false}, SHIFT(10),
  [27] = {.count = 1, .reusable = true}, SHIFT(11),
  [29] = {.count = 1, .reusable = false}, SHIFT(13),
  [31] = {.count = 1, .reusable = false}, SHIFT(14),
  [33] = {.count = 1, .reusable = false}, SHIFT(15),
  [35] = {.count = 1, .reusable = true}, SHIFT(16),
  [37] = {.count = 1, .reusable = true}, SHIFT(17),
  [39] = {.count = 1, .reusable = false}, SHIFT_EXTRA(),
  [41] = {.count = 1, .reusable = true}, SHIFT(18),
  [43] = {.count = 1, .reusable = false}, SHIFT(19),
  [45] = {.count = 1, .reusable = true}, SHIFT(20),
  [47] = {.count = 1, .reusable = true}, SHIFT(21),
  [49] = {.count = 1, .reusable = true}, SHIFT(23),
  [51] = {.count = 1, .reusable = false}, SHIFT(32),
  [53] = {.count = 1, .reusable = true}, SHIFT(32),
  [55] = {.count = 1, .reusable = false}, SHIFT(31),
  [57] = {.count = 1, .reusable = true}, SHIFT(33),
  [59] = {.count = 1, .reusable = true}, SHIFT(34),
  [61] = {.count = 1, .reusable = false}, SHIFT(6),
  [63] = {.count = 1, .reusable = true}, SHIFT(39),
  [65] = {.count = 1, .reusable = false}, SHIFT(36),
  [67] = {.count = 1, .reusable = false}, SHIFT(5),
  [69] = {.count = 1, .reusable = false}, SHIFT(8),
  [71] = {.count = 1, .reusable = false}, SHIFT(11),
  [73] = {.count = 1, .reusable = false}, SHIFT(17),
  [75] = {.count = 1, .reusable = false}, SHIFT(35),
  [77] = {.count = 1, .reusable = false}, SHIFT(18),
  [79] = {.count = 1, .reusable = false}, SHIFT(39),
  [81] = {.count = 1, .reusable = false}, SHIFT(20),
  [83] = {.count = 1, .reusable = false}, SHIFT(21),
  [85] = {.count = 1, .reusable = false}, REDUCE(sym_variable, 1),
  [87] = {.count = 1, .reusable = true}, REDUCE(sym_variable, 1),
  [89] = {.count = 1, .reusable = false}, REDUCE(sym_command_expression, 1),
  [91] = {.count = 1, .reusable = true}, REDUCE(sym_command_expression, 1),
  [93] = {.count = 1, .reusable = false}, SHIFT(43),
  [95] = {.count = 1, .reusable = false}, SHIFT(40),
  [97] = {.count = 1, .reusable = false}, SHIFT(41),
  [99] = {.count = 1, .reusable = false}, SHIFT(16),
  [101] = {.count = 1, .reusable = true}, SHIFT(48),
  [103] = {.count = 1, .reusable = false}, SHIFT(48),
  [105] = {.count = 1, .reusable = false}, SHIFT(50),
  [107] = {.count = 1, .reusable = true}, SHIFT(50),
  [109] = {.count = 1, .reusable = false}, SHIFT(49),
  [111] = {.count = 1, .reusable = false}, SHIFT(54),
  [113] = {.count = 1, .reusable = false}, SHIFT(52),
  [115] = {.count = 1, .reusable = false}, SHIFT(51),
  [117] = {.count = 1, .reusable = false}, SHIFT(53),
  [119] = {.count = 1, .reusable = false}, REDUCE(sym_double_quote_string, 1),
  [121] = {.count = 1, .reusable = true}, REDUCE(sym_double_quote_string, 1),
  [123] = {.count = 1, .reusable = true}, SHIFT(55),
  [125] = {.count = 1, .reusable = true}, SHIFT(56),
  [127] = {.count = 1, .reusable = false}, SHIFT(58),
  [129] = {.count = 1, .reusable = true}, SHIFT(58),
  [131] = {.count = 1, .reusable = false}, SHIFT(57),
  [133] = {.count = 1, .reusable = false}, SHIFT(60),
  [135] = {.count = 1, .reusable = true}, SHIFT(60),
  [137] = {.count = 1, .reusable = false}, SHIFT(59),
  [139] = {.count = 1, .reusable = true}, SHIFT(61),
  [141] = {.count = 1, .reusable = false}, SHIFT(61),
  [143] = {.count = 1, .reusable = true}, SHIFT(64),
  [145] = {.count = 1, .reusable = false}, SHIFT(76),
  [147] = {.count = 1, .reusable = true}, SHIFT(63),
  [149] = {.count = 1, .reusable = false}, SHIFT(65),
  [151] = {.count = 1, .reusable = true}, SHIFT(66),
  [153] = {.count = 1, .reusable = false}, SHIFT(67),
  [155] = {.count = 1, .reusable = false}, SHIFT(68),
  [157] = {.count = 1, .reusable = true}, SHIFT(69),
  [159] = {.count = 1, .reusable = true}, SHIFT(70),
  [161] = {.count = 1, .reusable = true}, SHIFT(71),
  [163] = {.count = 1, .reusable = true}, SHIFT(72),
  [165] = {.count = 1, .reusable = true}, SHIFT(76),
  [167] = {.count = 1, .reusable = true}, SHIFT(73),
  [169] = {.count = 1, .reusable = true}, SHIFT(74),
  [171] = {.count = 1, .reusable = true}, SHIFT(80),
  [173] = {.count = 1, .reusable = false}, SHIFT(83),
  [175] = {.count = 1, .reusable = true}, SHIFT(83),
  [177] = {.count = 1, .reusable = false}, SHIFT(82),
  [179] = {.count = 1, .reusable = false}, SHIFT(84),
  [181] = {.count = 1, .reusable = false}, SHIFT(64),
  [183] = {.count = 1, .reusable = true}, SHIFT(88),
  [185] = {.count = 1, .reusable = false}, SHIFT(88),
  [187] = {.count = 1, .reusable = false}, SHIFT(85),
  [189] = {.count = 1, .reusable = false}, SHIFT(69),
  [191] = {.count = 1, .reusable = false}, SHIFT(89),
  [193] = {.count = 1, .reusable = true}, SHIFT(89),
  [195] = {.count = 1, .reusable = false}, SHIFT(94),
  [197] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 1),
  [199] = {.count = 1, .reusable = true}, SHIFT(94),
  [201] = {.count = 1, .reusable = false}, SHIFT(92),
  [203] = {.count = 1, .reusable = false}, REDUCE(sym__expression, 1),
  [205] = {.count = 1, .reusable = true}, REDUCE(sym__expression, 1),
  [207] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [209] = {.count = 1, .reusable = false}, REDUCE(sym__non_array_expression, 1),
  [211] = {.count = 1, .reusable = true}, REDUCE(sym__non_array_expression, 1),
  [213] = {.count = 1, .reusable = false}, REDUCE(sym__attribute, 1),
  [215] = {.count = 1, .reusable = false}, REDUCE(sym_array_expression, 1),
  [217] = {.count = 1, .reusable = true}, REDUCE(sym_array_expression, 1),
  [219] = {.count = 1, .reusable = false}, REDUCE(sym_pipeline_statement, 1),
  [221] = {.count = 1, .reusable = true}, REDUCE(sym_pipeline_statement, 1),
  [223] = {.count = 1, .reusable = false}, SHIFT(99),
  [225] = {.count = 1, .reusable = false}, SHIFT(101),
  [227] = {.count = 1, .reusable = false}, SHIFT(107),
  [229] = {.count = 1, .reusable = false}, SHIFT(105),
  [231] = {.count = 1, .reusable = false}, SHIFT(104),
  [233] = {.count = 1, .reusable = true}, SHIFT(112),
  [235] = {.count = 1, .reusable = false}, SHIFT(112),
  [237] = {.count = 1, .reusable = false}, SHIFT(114),
  [239] = {.count = 1, .reusable = true}, SHIFT(114),
  [241] = {.count = 1, .reusable = false}, SHIFT(113),
  [243] = {.count = 1, .reusable = false}, REDUCE(sym_flat_array_expression, 2),
  [245] = {.count = 1, .reusable = true}, REDUCE(sym_flat_array_expression, 2),
  [247] = {.count = 1, .reusable = false}, SHIFT(119),
  [249] = {.count = 1, .reusable = false}, SHIFT(122),
  [251] = {.count = 1, .reusable = true}, SHIFT(122),
  [253] = {.count = 1, .reusable = false}, SHIFT(120),
  [255] = {.count = 1, .reusable = true}, SHIFT(125),
  [257] = {.count = 1, .reusable = false}, SHIFT(125),
  [259] = {.count = 1, .reusable = true}, SHIFT(126),
  [261] = {.count = 1, .reusable = false}, SHIFT(128),
  [263] = {.count = 1, .reusable = true}, SHIFT(128),
  [265] = {.count = 1, .reusable = false}, SHIFT(127),
  [267] = {.count = 1, .reusable = false}, SHIFT(132),
  [269] = {.count = 1, .reusable = false}, SHIFT(129),
  [271] = {.count = 1, .reusable = true}, SHIFT(132),
  [273] = {.count = 1, .reusable = false}, SHIFT(130),
  [275] = {.count = 1, .reusable = true}, SHIFT(136),
  [277] = {.count = 1, .reusable = false}, SHIFT(136),
  [279] = {.count = 1, .reusable = false}, SHIFT(139),
  [281] = {.count = 1, .reusable = true}, SHIFT(140),
  [283] = {.count = 1, .reusable = false}, SHIFT(140),
  [285] = {.count = 1, .reusable = false}, SHIFT(142),
  [287] = {.count = 1, .reusable = true}, SHIFT(142),
  [289] = {.count = 1, .reusable = false}, SHIFT(141),
  [291] = {.count = 1, .reusable = false}, SHIFT(144),
  [293] = {.count = 1, .reusable = true}, SHIFT(144),
  [295] = {.count = 1, .reusable = false}, SHIFT(143),
  [297] = {.count = 1, .reusable = true}, SHIFT(145),
  [299] = {.count = 1, .reusable = false}, REDUCE(sym_double_quote_string, 2),
  [301] = {.count = 1, .reusable = true}, REDUCE(sym_double_quote_string, 2),
  [303] = {.count = 1, .reusable = false}, SHIFT(147),
  [305] = {.count = 1, .reusable = false}, SHIFT(146),
  [307] = {.count = 1, .reusable = false}, SHIFT(145),
  [309] = {.count = 1, .reusable = false}, REDUCE(aux_sym_array_expression_repeat1, 2),
  [311] = {.count = 1, .reusable = true}, REDUCE(aux_sym_array_expression_repeat1, 2),
  [313] = {.count = 1, .reusable = true}, SHIFT(148),
  [315] = {.count = 1, .reusable = true}, SHIFT(149),
  [317] = {.count = 1, .reusable = true}, SHIFT(150),
  [319] = {.count = 1, .reusable = true}, SHIFT(158),
  [321] = {.count = 1, .reusable = false}, SHIFT(155),
  [323] = {.count = 1, .reusable = false}, SHIFT(158),
  [325] = {.count = 1, .reusable = false}, SHIFT(160),
  [327] = {.count = 1, .reusable = true}, SHIFT(160),
  [329] = {.count = 1, .reusable = false}, SHIFT(159),
  [331] = {.count = 1, .reusable = true}, SHIFT(162),
  [333] = {.count = 1, .reusable = false}, SHIFT(63),
  [335] = {.count = 1, .reusable = false}, SHIFT(66),
  [337] = {.count = 1, .reusable = false}, SHIFT(70),
  [339] = {.count = 1, .reusable = false}, SHIFT(71),
  [341] = {.count = 1, .reusable = false}, SHIFT(162),
  [343] = {.count = 1, .reusable = false}, SHIFT(72),
  [345] = {.count = 1, .reusable = false}, SHIFT(73),
  [347] = {.count = 1, .reusable = false}, SHIFT(74),
  [349] = {.count = 1, .reusable = false}, SHIFT(163),
  [351] = {.count = 1, .reusable = false}, REDUCE(sym_property_name, 1),
  [353] = {.count = 1, .reusable = true}, REDUCE(sym_property_name, 1),
  [355] = {.count = 1, .reusable = false}, REDUCE(sym_command_expression, 2),
  [357] = {.count = 1, .reusable = true}, REDUCE(sym_command_expression, 2),
  [359] = {.count = 1, .reusable = true}, SHIFT(166),
  [361] = {.count = 1, .reusable = false}, SHIFT(164),
  [363] = {.count = 1, .reusable = false}, SHIFT(166),
  [365] = {.count = 1, .reusable = true}, SHIFT(169),
  [367] = {.count = 1, .reusable = false}, SHIFT(169),
  [369] = {.count = 1, .reusable = false}, SHIFT(172),
  [371] = {.count = 1, .reusable = false}, SHIFT(170),
  [373] = {.count = 1, .reusable = false}, SHIFT(171),
  [375] = {.count = 1, .reusable = true}, SHIFT(173),
  [377] = {.count = 1, .reusable = true}, SHIFT(85),
  [379] = {.count = 1, .reusable = false}, SHIFT(177),
  [381] = {.count = 1, .reusable = true}, SHIFT(179),
  [383] = {.count = 1, .reusable = false}, SHIFT(179),
  [385] = {.count = 1, .reusable = true}, REDUCE(sym__attribute, 1),
  [387] = {.count = 1, .reusable = true}, SHIFT(68),
  [389] = {.count = 1, .reusable = true}, SHIFT(182),
  [391] = {.count = 1, .reusable = true}, REDUCE(sym__typename, 1),
  [393] = {.count = 1, .reusable = false}, REDUCE(sym__typename, 1),
  [395] = {.count = 1, .reusable = true}, SHIFT(184),
  [397] = {.count = 1, .reusable = true}, SHIFT(185),
  [399] = {.count = 1, .reusable = false}, SHIFT(186),
  [401] = {.count = 1, .reusable = true}, SHIFT(187),
  [403] = {.count = 1, .reusable = false}, SHIFT(189),
  [405] = {.count = 1, .reusable = true}, SHIFT(189),
  [407] = {.count = 1, .reusable = false}, SHIFT(188),
  [409] = {.count = 1, .reusable = false}, SHIFT(190),
  [411] = {.count = 1, .reusable = false}, REDUCE(sym_hashtable_expression, 2),
  [413] = {.count = 1, .reusable = true}, REDUCE(sym_hashtable_expression, 2),
  [415] = {.count = 1, .reusable = false}, SHIFT(193),
  [417] = {.count = 1, .reusable = false}, SHIFT(191),
  [419] = {.count = 1, .reusable = true}, SHIFT(193),
  [421] = {.count = 1, .reusable = false}, SHIFT(192),
  [423] = {.count = 1, .reusable = true}, SHIFT(196),
  [425] = {.count = 1, .reusable = true}, SHIFT(198),
  [427] = {.count = 1, .reusable = false}, SHIFT(198),
  [429] = {.count = 1, .reusable = true}, SHIFT(201),
  [431] = {.count = 1, .reusable = false}, REDUCE(sym__terminator, 1),
  [433] = {.count = 1, .reusable = true}, SHIFT(203),
  [435] = {.count = 1, .reusable = true}, REDUCE(sym__terminator, 1),
  [437] = {.count = 1, .reusable = false}, SHIFT(203),
  [439] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 2),
  [441] = {.count = 1, .reusable = true}, SHIFT(206),
  [443] = {.count = 1, .reusable = false}, SHIFT(206),
  [445] = {.count = 1, .reusable = false}, REDUCE(sym_array_expression, 2),
  [447] = {.count = 1, .reusable = true}, REDUCE(sym_array_expression, 2),
  [449] = {.count = 2, .reusable = false}, REDUCE(aux_sym_array_expression_repeat1, 2), SHIFT_REPEAT(12),
  [452] = {.count = 1, .reusable = false}, SHIFT(210),
  [454] = {.count = 1, .reusable = true}, SHIFT(210),
  [456] = {.count = 1, .reusable = false}, REDUCE(sym_pipeline_statement, 2),
  [458] = {.count = 1, .reusable = true}, REDUCE(sym_pipeline_statement, 2),
  [460] = {.count = 1, .reusable = true}, SHIFT(213),
  [462] = {.count = 1, .reusable = false}, SHIFT(213),
  [464] = {.count = 1, .reusable = false}, REDUCE(sym__attributed_variable, 2),
  [466] = {.count = 1, .reusable = true}, REDUCE(sym__attributed_variable, 2),
  [468] = {.count = 1, .reusable = true}, REDUCE(aux_sym__attributed_variable_repeat1, 2),
  [470] = {.count = 2, .reusable = true}, REDUCE(aux_sym__attributed_variable_repeat1, 2), SHIFT_REPEAT(72),
  [473] = {.count = 1, .reusable = false}, SHIFT(215),
  [475] = {.count = 1, .reusable = false}, SHIFT(214),
  [477] = {.count = 1, .reusable = true}, SHIFT(215),
  [479] = {.count = 1, .reusable = false}, SHIFT(217),
  [481] = {.count = 1, .reusable = true}, SHIFT(217),
  [483] = {.count = 1, .reusable = false}, SHIFT(216),
  [485] = {.count = 1, .reusable = true}, SHIFT(220),
  [487] = {.count = 1, .reusable = true}, SHIFT(107),
  [489] = {.count = 1, .reusable = false}, SHIFT(224),
  [491] = {.count = 1, .reusable = false}, SHIFT(220),
  [493] = {.count = 1, .reusable = true}, SHIFT(226),
  [495] = {.count = 1, .reusable = false}, SHIFT(226),
  [497] = {.count = 1, .reusable = true}, SHIFT(227),
  [499] = {.count = 1, .reusable = false}, SHIFT(227),
  [501] = {.count = 2, .reusable = false}, REDUCE(aux_sym__terminator_repeat1, 2), SHIFT_REPEAT(114),
  [504] = {.count = 2, .reusable = true}, REDUCE(aux_sym__terminator_repeat1, 2), SHIFT_REPEAT(114),
  [507] = {.count = 1, .reusable = false}, REDUCE(aux_sym__terminator_repeat1, 2),
  [509] = {.count = 1, .reusable = false}, REDUCE(sym_function_definition, 3),
  [511] = {.count = 1, .reusable = true}, REDUCE(sym_function_definition, 3),
  [513] = {.count = 1, .reusable = false}, REDUCE(sym_filter_definition, 3),
  [515] = {.count = 1, .reusable = true}, REDUCE(sym_filter_definition, 3),
  [517] = {.count = 1, .reusable = false}, REDUCE(sym_flat_array_expression, 3),
  [519] = {.count = 1, .reusable = true}, REDUCE(sym_flat_array_expression, 3),
  [521] = {.count = 1, .reusable = true}, SHIFT(228),
  [523] = {.count = 1, .reusable = false}, SHIFT(228),
  [525] = {.count = 1, .reusable = false}, SHIFT(229),
  [527] = {.count = 1, .reusable = false}, SHIFT(231),
  [529] = {.count = 1, .reusable = true}, SHIFT(231),
  [531] = {.count = 1, .reusable = true}, SHIFT(36),
  [533] = {.count = 1, .reusable = true}, SHIFT(12),
  [535] = {.count = 2, .reusable = true}, REDUCE(aux_sym__terminator_repeat1, 2), SHIFT_REPEAT(125),
  [538] = {.count = 2, .reusable = false}, REDUCE(aux_sym__terminator_repeat1, 2), SHIFT_REPEAT(125),
  [541] = {.count = 1, .reusable = true}, SHIFT(234),
  [543] = {.count = 1, .reusable = true}, SHIFT(237),
  [545] = {.count = 1, .reusable = false}, SHIFT(237),
  [547] = {.count = 1, .reusable = false}, SHIFT(238),
  [549] = {.count = 1, .reusable = false}, REDUCE(sym_scriptblock, 3),
  [551] = {.count = 1, .reusable = true}, REDUCE(sym_scriptblock, 3),
  [553] = {.count = 1, .reusable = true}, SHIFT(239),
  [555] = {.count = 1, .reusable = false}, SHIFT(239),
  [557] = {.count = 1, .reusable = false}, SHIFT(240),
  [559] = {.count = 1, .reusable = true}, SHIFT(240),
  [561] = {.count = 1, .reusable = true}, SHIFT(43),
  [563] = {.count = 1, .reusable = true}, SHIFT(246),
  [565] = {.count = 1, .reusable = false}, SHIFT(246),
  [567] = {.count = 2, .reusable = true}, REDUCE(aux_sym__terminator_repeat1, 2), SHIFT_REPEAT(140),
  [570] = {.count = 2, .reusable = false}, REDUCE(aux_sym__terminator_repeat1, 2), SHIFT_REPEAT(140),
  [573] = {.count = 1, .reusable = false}, SHIFT(249),
  [575] = {.count = 1, .reusable = false}, SHIFT(247),
  [577] = {.count = 1, .reusable = false}, SHIFT(248),
  [579] = {.count = 1, .reusable = true}, SHIFT(249),
  [581] = {.count = 1, .reusable = false}, SHIFT(250),
  [583] = {.count = 1, .reusable = false}, SHIFT(251),
  [585] = {.count = 1, .reusable = true}, SHIFT(251),
  [587] = {.count = 2, .reusable = false}, REDUCE(aux_sym__terminator_repeat1, 2), SHIFT_REPEAT(144),
  [590] = {.count = 2, .reusable = true}, REDUCE(aux_sym__terminator_repeat1, 2), SHIFT_REPEAT(144),
  [593] = {.count = 1, .reusable = false}, REDUCE(sym_double_quote_string, 3),
  [595] = {.count = 1, .reusable = true}, REDUCE(sym_double_quote_string, 3),
  [597] = {.count = 1, .reusable = true}, SHIFT(252),
  [599] = {.count = 2, .reusable = false}, REDUCE(aux_sym_double_quote_string_repeat1, 2), SHIFT_REPEAT(147),
  [602] = {.count = 2, .reusable = false}, REDUCE(aux_sym_double_quote_string_repeat1, 2), SHIFT_REPEAT(52),
  [605] = {.count = 1, .reusable = false}, REDUCE(aux_sym_double_quote_string_repeat1, 2),
  [607] = {.count = 1, .reusable = true}, REDUCE(sym_param_block_variable, 1),
  [609] = {.count = 1, .reusable = true}, SHIFT(253),
  [611] = {.count = 1, .reusable = false}, REDUCE(sym_param_block, 3),
  [613] = {.count = 1, .reusable = true}, REDUCE(sym_param_block, 3),
  [615] = {.count = 1, .reusable = true}, SHIFT(254),
  [617] = {.count = 1, .reusable = true}, SHIFT(256),
  [619] = {.count = 1, .reusable = true}, SHIFT(257),
  [621] = {.count = 1, .reusable = false}, REDUCE(aux_sym_param_block_variable_repeat1, 1),
  [623] = {.count = 1, .reusable = false}, SHIFT(259),
  [625] = {.count = 1, .reusable = true}, SHIFT(259),
  [627] = {.count = 1, .reusable = false}, SHIFT(260),
  [629] = {.count = 1, .reusable = false}, SHIFT(261),
  [631] = {.count = 1, .reusable = true}, SHIFT(261),
  [633] = {.count = 1, .reusable = true}, SHIFT(266),
  [635] = {.count = 1, .reusable = false}, SHIFT(266),
  [637] = {.count = 1, .reusable = true}, SHIFT(267),
  [639] = {.count = 1, .reusable = false}, SHIFT(267),
  [641] = {.count = 2, .reusable = false}, REDUCE(aux_sym__terminator_repeat1, 2), SHIFT_REPEAT(160),
  [644] = {.count = 2, .reusable = true}, REDUCE(aux_sym__terminator_repeat1, 2), SHIFT_REPEAT(160),
  [647] = {.count = 1, .reusable = true}, SHIFT(268),
  [649] = {.count = 1, .reusable = true}, SHIFT(270),
  [651] = {.count = 1, .reusable = false}, SHIFT(270),
  [653] = {.count = 1, .reusable = false}, SHIFT(271),
  [655] = {.count = 1, .reusable = false}, SHIFT(273),
  [657] = {.count = 1, .reusable = true}, SHIFT(273),
  [659] = {.count = 1, .reusable = false}, SHIFT(275),
  [661] = {.count = 1, .reusable = true}, SHIFT(279),
  [663] = {.count = 1, .reusable = false}, SHIFT(279),
  [665] = {.count = 1, .reusable = true}, SHIFT(280),
  [667] = {.count = 1, .reusable = false}, SHIFT(281),
  [669] = {.count = 1, .reusable = false}, SHIFT(280),
  [671] = {.count = 1, .reusable = true}, SHIFT(282),
  [673] = {.count = 1, .reusable = true}, SHIFT(283),
  [675] = {.count = 1, .reusable = false}, SHIFT(284),
  [677] = {.count = 2, .reusable = true}, REDUCE(aux_sym_array_expression_repeat1, 2), SHIFT_REPEAT(68),
  [680] = {.count = 1, .reusable = false}, REDUCE(sym__non_array_expression, 3),
  [682] = {.count = 1, .reusable = true}, REDUCE(sym__non_array_expression, 3),
  [684] = {.count = 1, .reusable = true}, SHIFT(289),
  [686] = {.count = 1, .reusable = true}, SHIFT(288),
  [688] = {.count = 1, .reusable = true}, REDUCE(sym__typename_array, 2),
  [690] = {.count = 1, .reusable = false}, REDUCE(sym__typename_array, 2),
  [692] = {.count = 1, .reusable = true}, SHIFT(290),
  [694] = {.count = 1, .reusable = false}, REDUCE(sym_type_expr, 3),
  [696] = {.count = 1, .reusable = true}, REDUCE(sym_type_expr, 3),
  [698] = {.count = 1, .reusable = true}, SHIFT(291),
  [700] = {.count = 1, .reusable = true}, SHIFT(292),
  [702] = {.count = 1, .reusable = true}, SHIFT(293),
  [704] = {.count = 1, .reusable = false}, SHIFT(294),
  [706] = {.count = 1, .reusable = false}, SHIFT(298),
  [708] = {.count = 1, .reusable = false}, SHIFT(299),
  [710] = {.count = 1, .reusable = true}, SHIFT(299),
  [712] = {.count = 1, .reusable = false}, REDUCE(sym_hashtable_expression, 3),
  [714] = {.count = 1, .reusable = true}, REDUCE(sym_hashtable_expression, 3),
  [716] = {.count = 1, .reusable = true}, SHIFT(300),
  [718] = {.count = 1, .reusable = false}, SHIFT(300),
  [720] = {.count = 1, .reusable = true}, SHIFT(301),
  [722] = {.count = 1, .reusable = false}, SHIFT(301),
  [724] = {.count = 1, .reusable = true}, SHIFT(308),
  [726] = {.count = 1, .reusable = false}, SHIFT(305),
  [728] = {.count = 1, .reusable = false}, SHIFT(308),
  [730] = {.count = 2, .reusable = true}, REDUCE(aux_sym__terminator_repeat1, 2), SHIFT_REPEAT(198),
  [733] = {.count = 2, .reusable = false}, REDUCE(aux_sym__terminator_repeat1, 2), SHIFT_REPEAT(198),
  [736] = {.count = 1, .reusable = false}, SHIFT(311),
  [738] = {.count = 1, .reusable = true}, SHIFT(311),
  [740] = {.count = 1, .reusable = false}, REDUCE(sym__terminator, 2),
  [742] = {.count = 1, .reusable = true}, REDUCE(sym__terminator, 2),
  [744] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(314),
  [747] = {.count = 1, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2),
  [749] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(314),
  [752] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(313),
  [755] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 3),
  [757] = {.count = 2, .reusable = true}, REDUCE(aux_sym__terminator_repeat1, 2), SHIFT_REPEAT(206),
  [760] = {.count = 1, .reusable = true}, REDUCE(aux_sym__terminator_repeat1, 2),
  [762] = {.count = 2, .reusable = false}, REDUCE(aux_sym__terminator_repeat1, 2), SHIFT_REPEAT(206),
  [765] = {.count = 1, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2),
  [767] = {.count = 1, .reusable = false}, REDUCE(aux_sym_pipeline_statement_repeat1, 2),
  [769] = {.count = 1, .reusable = true}, REDUCE(aux_sym_pipeline_statement_repeat1, 2),
  [771] = {.count = 2, .reusable = false}, REDUCE(aux_sym_pipeline_statement_repeat1, 2), SHIFT_REPEAT(99),
  [774] = {.count = 1, .reusable = false}, REDUCE(sym_assignment_statement, 3),
  [776] = {.count = 1, .reusable = true}, REDUCE(sym_assignment_statement, 3),
  [778] = {.count = 1, .reusable = true}, SHIFT(319),
  [780] = {.count = 1, .reusable = false}, SHIFT(319),
  [782] = {.count = 1, .reusable = false}, SHIFT(321),
  [784] = {.count = 1, .reusable = true}, SHIFT(321),
  [786] = {.count = 1, .reusable = false}, SHIFT(320),
  [788] = {.count = 1, .reusable = false}, SHIFT(323),
  [790] = {.count = 1, .reusable = false}, SHIFT(322),
  [792] = {.count = 1, .reusable = true}, SHIFT(323),
  [794] = {.count = 1, .reusable = true}, SHIFT(325),
  [796] = {.count = 1, .reusable = false}, SHIFT(325),
  [798] = {.count = 1, .reusable = false}, SHIFT(326),
  [800] = {.count = 1, .reusable = false}, REDUCE(aux_sym_class_method_body_repeat1, 2),
  [802] = {.count = 1, .reusable = true}, REDUCE(aux_sym_class_method_body_repeat1, 2),
  [804] = {.count = 1, .reusable = false}, SHIFT(327),
  [806] = {.count = 1, .reusable = true}, SHIFT(327),
  [808] = {.count = 2, .reusable = false}, REDUCE(aux_sym_class_method_body_repeat1, 2), SHIFT_REPEAT(2),
  [811] = {.count = 2, .reusable = false}, REDUCE(aux_sym_class_method_body_repeat1, 2), SHIFT_REPEAT(3),
  [814] = {.count = 2, .reusable = true}, REDUCE(aux_sym_class_method_body_repeat1, 2), SHIFT_REPEAT(6),
  [817] = {.count = 2, .reusable = false}, REDUCE(aux_sym_class_method_body_repeat1, 2), SHIFT_REPEAT(4),
  [820] = {.count = 2, .reusable = true}, REDUCE(aux_sym_class_method_body_repeat1, 2), SHIFT_REPEAT(5),
  [823] = {.count = 2, .reusable = false}, REDUCE(aux_sym_class_method_body_repeat1, 2), SHIFT_REPEAT(107),
  [826] = {.count = 2, .reusable = false}, REDUCE(aux_sym_class_method_body_repeat1, 2), SHIFT_REPEAT(12),
  [829] = {.count = 2, .reusable = true}, REDUCE(aux_sym_class_method_body_repeat1, 2), SHIFT_REPEAT(8),
  [832] = {.count = 2, .reusable = false}, REDUCE(aux_sym_class_method_body_repeat1, 2), SHIFT_REPEAT(9),
  [835] = {.count = 2, .reusable = false}, REDUCE(aux_sym_class_method_body_repeat1, 2), SHIFT_REPEAT(10),
  [838] = {.count = 2, .reusable = true}, REDUCE(aux_sym_class_method_body_repeat1, 2), SHIFT_REPEAT(11),
  [841] = {.count = 2, .reusable = false}, REDUCE(aux_sym_class_method_body_repeat1, 2), SHIFT_REPEAT(7),
  [844] = {.count = 2, .reusable = false}, REDUCE(aux_sym_class_method_body_repeat1, 2), SHIFT_REPEAT(14),
  [847] = {.count = 2, .reusable = false}, REDUCE(aux_sym_class_method_body_repeat1, 2), SHIFT_REPEAT(105),
  [850] = {.count = 2, .reusable = true}, REDUCE(aux_sym_class_method_body_repeat1, 2), SHIFT_REPEAT(16),
  [853] = {.count = 2, .reusable = true}, REDUCE(aux_sym_class_method_body_repeat1, 2), SHIFT_REPEAT(17),
  [856] = {.count = 2, .reusable = true}, REDUCE(aux_sym_class_method_body_repeat1, 2), SHIFT_REPEAT(18),
  [859] = {.count = 2, .reusable = false}, REDUCE(aux_sym_class_method_body_repeat1, 2), SHIFT_REPEAT(19),
  [862] = {.count = 2, .reusable = true}, REDUCE(aux_sym_class_method_body_repeat1, 2), SHIFT_REPEAT(20),
  [865] = {.count = 2, .reusable = true}, REDUCE(aux_sym_class_method_body_repeat1, 2), SHIFT_REPEAT(21),
  [868] = {.count = 2, .reusable = true}, REDUCE(aux_sym_class_method_body_repeat1, 2), SHIFT_REPEAT(107),
  [871] = {.count = 1, .reusable = true}, SHIFT(329),
  [873] = {.count = 1, .reusable = false}, SHIFT(329),
  [875] = {.count = 1, .reusable = true}, SHIFT(330),
  [877] = {.count = 2, .reusable = true}, REDUCE(aux_sym__terminator_repeat1, 2), SHIFT_REPEAT(226),
  [880] = {.count = 2, .reusable = false}, REDUCE(aux_sym__terminator_repeat1, 2), SHIFT_REPEAT(226),
  [883] = {.count = 1, .reusable = false}, SHIFT(330),
  [885] = {.count = 1, .reusable = true}, SHIFT(332),
  [887] = {.count = 1, .reusable = false}, SHIFT(332),
  [889] = {.count = 1, .reusable = false}, REDUCE(sym_flat_array_expression, 4),
  [891] = {.count = 1, .reusable = true}, REDUCE(sym_flat_array_expression, 4),
  [893] = {.count = 1, .reusable = false}, REDUCE(aux_sym_flat_array_expression_repeat1, 2),
  [895] = {.count = 2, .reusable = false}, REDUCE(aux_sym_flat_array_expression_repeat1, 2), SHIFT_REPEAT(333),
  [898] = {.count = 2, .reusable = true}, REDUCE(aux_sym_flat_array_expression_repeat1, 2), SHIFT_REPEAT(333),
  [901] = {.count = 2, .reusable = false}, REDUCE(aux_sym_flat_array_expression_repeat1, 2), SHIFT_REPEAT(120),
  [904] = {.count = 1, .reusable = false}, SHIFT(334),
  [906] = {.count = 1, .reusable = true}, REDUCE(aux_sym_flat_array_expression_repeat1, 2),
  [908] = {.count = 1, .reusable = false}, SHIFT(335),
  [910] = {.count = 1, .reusable = true}, SHIFT(335),
  [912] = {.count = 1, .reusable = true}, SHIFT(336),
  [914] = {.count = 1, .reusable = true}, SHIFT(337),
  [916] = {.count = 1, .reusable = true}, SHIFT(339),
  [918] = {.count = 1, .reusable = true}, SHIFT(341),
  [920] = {.count = 1, .reusable = false}, SHIFT(341),
  [922] = {.count = 1, .reusable = false}, REDUCE(sym_scriptblock, 4),
  [924] = {.count = 1, .reusable = true}, REDUCE(sym_scriptblock, 4),
  [926] = {.count = 1, .reusable = true}, SHIFT(343),
  [928] = {.count = 1, .reusable = false}, SHIFT(343),
  [930] = {.count = 1, .reusable = false}, REDUCE(sym_enum_definition, 4),
  [932] = {.count = 1, .reusable = true}, REDUCE(sym_enum_definition, 4),
  [934] = {.count = 1, .reusable = false}, SHIFT(348),
  [936] = {.count = 1, .reusable = false}, SHIFT(346),
  [938] = {.count = 1, .reusable = false}, SHIFT(347),
  [940] = {.count = 1, .reusable = true}, SHIFT(348),
  [942] = {.count = 1, .reusable = false}, SHIFT(350),
  [944] = {.count = 1, .reusable = false}, SHIFT(349),
  [946] = {.count = 1, .reusable = true}, SHIFT(350),
  [948] = {.count = 1, .reusable = false}, SHIFT(351),
  [950] = {.count = 1, .reusable = false}, SHIFT(352),
  [952] = {.count = 1, .reusable = false}, REDUCE(sym_double_quote_string, 4),
  [954] = {.count = 1, .reusable = true}, REDUCE(sym_double_quote_string, 4),
  [956] = {.count = 1, .reusable = true}, SHIFT(353),
  [958] = {.count = 1, .reusable = true}, REDUCE(sym_param_block_variable, 2),
  [960] = {.count = 1, .reusable = true}, REDUCE(aux_sym_param_block_variable_repeat1, 2),
  [962] = {.count = 2, .reusable = true}, REDUCE(aux_sym_param_block_variable_repeat1, 2), SHIFT_REPEAT(149),
  [965] = {.count = 1, .reusable = false}, REDUCE(sym_param_block, 4),
  [967] = {.count = 1, .reusable = true}, REDUCE(sym_param_block, 4),
  [969] = {.count = 1, .reusable = true}, SHIFT(354),
  [971] = {.count = 1, .reusable = true}, SHIFT(356),
  [973] = {.count = 1, .reusable = false}, REDUCE(aux_sym_param_block_variable_repeat1, 2),
  [975] = {.count = 1, .reusable = false}, SHIFT(358),
  [977] = {.count = 1, .reusable = true}, SHIFT(358),
  [979] = {.count = 1, .reusable = false}, SHIFT(360),
  [981] = {.count = 1, .reusable = true}, SHIFT(360),
  [983] = {.count = 1, .reusable = false}, SHIFT(359),
  [985] = {.count = 1, .reusable = false}, SHIFT(361),
  [987] = {.count = 1, .reusable = false}, SHIFT(362),
  [989] = {.count = 1, .reusable = true}, SHIFT(362),
  [991] = {.count = 1, .reusable = false}, SHIFT(364),
  [993] = {.count = 1, .reusable = true}, SHIFT(364),
  [995] = {.count = 2, .reusable = true}, REDUCE(aux_sym__terminator_repeat1, 2), SHIFT_REPEAT(266),
  [998] = {.count = 2, .reusable = false}, REDUCE(aux_sym__terminator_repeat1, 2), SHIFT_REPEAT(266),
  [1001] = {.count = 1, .reusable = false}, SHIFT(367),
  [1003] = {.count = 1, .reusable = true}, SHIFT(367),
  [1005] = {.count = 1, .reusable = false}, SHIFT(366),
  [1007] = {.count = 1, .reusable = true}, SHIFT(368),
  [1009] = {.count = 1, .reusable = false}, SHIFT(370),
  [1011] = {.count = 1, .reusable = false}, SHIFT(371),
  [1013] = {.count = 1, .reusable = true}, SHIFT(371),
  [1015] = {.count = 1, .reusable = false}, SHIFT(373),
  [1017] = {.count = 1, .reusable = true}, SHIFT(373),
  [1019] = {.count = 1, .reusable = true}, SHIFT(377),
  [1021] = {.count = 1, .reusable = true}, SHIFT(378),
  [1023] = {.count = 1, .reusable = false}, SHIFT(378),
  [1025] = {.count = 1, .reusable = true}, SHIFT(381),
  [1027] = {.count = 1, .reusable = true}, SHIFT(382),
  [1029] = {.count = 1, .reusable = true}, SHIFT(384),
  [1031] = {.count = 1, .reusable = true}, SHIFT(385),
  [1033] = {.count = 1, .reusable = false}, REDUCE(sym_class_property, 1),
  [1035] = {.count = 1, .reusable = true}, REDUCE(sym_class_property, 1),
  [1037] = {.count = 1, .reusable = true}, SHIFT(387),
  [1039] = {.count = 1, .reusable = false}, REDUCE(sym_class_definition, 4),
  [1041] = {.count = 1, .reusable = true}, REDUCE(sym_class_definition, 4),
  [1043] = {.count = 1, .reusable = true}, SHIFT(388),
  [1045] = {.count = 1, .reusable = false}, SHIFT(389),
  [1047] = {.count = 1, .reusable = false}, SHIFT(391),
  [1049] = {.count = 1, .reusable = false}, SHIFT(390),
  [1051] = {.count = 1, .reusable = true}, SHIFT(391),
  [1053] = {.count = 1, .reusable = false}, SHIFT(394),
  [1055] = {.count = 1, .reusable = true}, SHIFT(394),
  [1057] = {.count = 1, .reusable = false}, SHIFT(392),
  [1059] = {.count = 1, .reusable = true}, SHIFT(395),
  [1061] = {.count = 1, .reusable = false}, SHIFT(398),
  [1063] = {.count = 1, .reusable = false}, REDUCE(sym_hashtable_expression, 4),
  [1065] = {.count = 1, .reusable = true}, REDUCE(sym_hashtable_expression, 4),
  [1067] = {.count = 1, .reusable = false}, REDUCE(aux_sym_hashtable_expression_repeat1, 2),
  [1069] = {.count = 1, .reusable = true}, REDUCE(aux_sym_hashtable_expression_repeat1, 2),
  [1071] = {.count = 1, .reusable = true}, SHIFT(399),
  [1073] = {.count = 2, .reusable = false}, REDUCE(aux_sym_hashtable_expression_repeat1, 2), SHIFT_REPEAT(401),
  [1076] = {.count = 2, .reusable = true}, REDUCE(aux_sym_hashtable_expression_repeat1, 2), SHIFT_REPEAT(401),
  [1079] = {.count = 2, .reusable = false}, REDUCE(aux_sym_hashtable_expression_repeat1, 2), SHIFT_REPEAT(400),
  [1082] = {.count = 1, .reusable = false}, REDUCE(sym_hashtable_entry, 3),
  [1084] = {.count = 1, .reusable = true}, REDUCE(sym_hashtable_entry, 3),
  [1086] = {.count = 1, .reusable = false}, SHIFT(399),
  [1088] = {.count = 2, .reusable = true}, REDUCE(aux_sym_pipeline_statement_repeat1, 2), SHIFT_REPEAT(201),
  [1091] = {.count = 1, .reusable = true}, SHIFT(408),
  [1093] = {.count = 1, .reusable = false}, SHIFT(408),
  [1095] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 4),
  [1097] = {.count = 1, .reusable = false}, REDUCE(aux_sym_pipeline_statement_repeat1, 3),
  [1099] = {.count = 1, .reusable = true}, REDUCE(aux_sym_pipeline_statement_repeat1, 3),
  [1101] = {.count = 1, .reusable = false}, REDUCE(sym_assignment_statement, 4),
  [1103] = {.count = 1, .reusable = true}, REDUCE(sym_assignment_statement, 4),
  [1105] = {.count = 2, .reusable = true}, REDUCE(aux_sym__terminator_repeat1, 2), SHIFT_REPEAT(319),
  [1108] = {.count = 2, .reusable = false}, REDUCE(aux_sym__terminator_repeat1, 2), SHIFT_REPEAT(319),
  [1111] = {.count = 1, .reusable = false}, SHIFT(410),
  [1113] = {.count = 1, .reusable = false}, SHIFT(411),
  [1115] = {.count = 1, .reusable = true}, SHIFT(411),
  [1117] = {.count = 2, .reusable = false}, REDUCE(aux_sym__terminator_repeat1, 2), SHIFT_REPEAT(323),
  [1120] = {.count = 2, .reusable = true}, REDUCE(aux_sym__terminator_repeat1, 2), SHIFT_REPEAT(323),
  [1123] = {.count = 1, .reusable = true}, SHIFT(412),
  [1125] = {.count = 1, .reusable = true}, SHIFT(414),
  [1127] = {.count = 1, .reusable = false}, SHIFT(414),
  [1129] = {.count = 1, .reusable = false}, SHIFT(415),
  [1131] = {.count = 1, .reusable = false}, SHIFT(416),
  [1133] = {.count = 1, .reusable = true}, SHIFT(416),
  [1135] = {.count = 1, .reusable = true}, SHIFT(417),
  [1137] = {.count = 2, .reusable = true}, REDUCE(aux_sym__terminator_repeat1, 2), SHIFT_REPEAT(332),
  [1140] = {.count = 2, .reusable = false}, REDUCE(aux_sym__terminator_repeat1, 2), SHIFT_REPEAT(332),
  [1143] = {.count = 1, .reusable = false}, REDUCE(sym_flat_array_expression, 5),
  [1145] = {.count = 1, .reusable = true}, REDUCE(sym_flat_array_expression, 5),
  [1147] = {.count = 1, .reusable = false}, SHIFT(418),
  [1149] = {.count = 1, .reusable = true}, SHIFT(419),
  [1151] = {.count = 1, .reusable = true}, SHIFT(420),
  [1153] = {.count = 1, .reusable = false}, SHIFT(422),
  [1155] = {.count = 1, .reusable = true}, SHIFT(422),
  [1157] = {.count = 1, .reusable = false}, SHIFT(421),
  [1159] = {.count = 1, .reusable = true}, SHIFT(423),
  [1161] = {.count = 1, .reusable = false}, REDUCE(sym_scriptblock, 5),
  [1163] = {.count = 1, .reusable = true}, REDUCE(sym_scriptblock, 5),
  [1165] = {.count = 1, .reusable = true}, SHIFT(425),
  [1167] = {.count = 1, .reusable = false}, SHIFT(425),
  [1169] = {.count = 1, .reusable = false}, REDUCE(sym_enum_definition, 5),
  [1171] = {.count = 1, .reusable = true}, REDUCE(sym_enum_definition, 5),
  [1173] = {.count = 2, .reusable = false}, REDUCE(aux_sym_enum_definition_repeat1, 2), SHIFT_REPEAT(427),
  [1176] = {.count = 1, .reusable = false}, REDUCE(aux_sym_enum_definition_repeat1, 2),
  [1178] = {.count = 2, .reusable = false}, REDUCE(aux_sym_enum_definition_repeat1, 2), SHIFT_REPEAT(347),
  [1181] = {.count = 2, .reusable = true}, REDUCE(aux_sym_enum_definition_repeat1, 2), SHIFT_REPEAT(427),
  [1184] = {.count = 1, .reusable = false}, SHIFT(428),
  [1186] = {.count = 1, .reusable = true}, REDUCE(aux_sym_enum_definition_repeat1, 2),
  [1188] = {.count = 2, .reusable = false}, REDUCE(aux_sym__terminator_repeat1, 2), SHIFT_REPEAT(350),
  [1191] = {.count = 2, .reusable = true}, REDUCE(aux_sym__terminator_repeat1, 2), SHIFT_REPEAT(350),
  [1194] = {.count = 1, .reusable = false}, SHIFT(429),
  [1196] = {.count = 1, .reusable = true}, SHIFT(429),
  [1198] = {.count = 1, .reusable = false}, SHIFT(430),
  [1200] = {.count = 1, .reusable = true}, SHIFT(432),
  [1202] = {.count = 1, .reusable = true}, SHIFT(431),
  [1204] = {.count = 1, .reusable = false}, REDUCE(sym_param_block, 5),
  [1206] = {.count = 1, .reusable = true}, REDUCE(sym_param_block, 5),
  [1208] = {.count = 1, .reusable = true}, REDUCE(aux_sym_param_block_repeat1, 2),
  [1210] = {.count = 1, .reusable = true}, SHIFT(433),
  [1212] = {.count = 2, .reusable = true}, REDUCE(aux_sym_param_block_repeat1, 2), SHIFT_REPEAT(434),
  [1215] = {.count = 2, .reusable = false}, REDUCE(aux_sym__terminator_repeat1, 2), SHIFT_REPEAT(358),
  [1218] = {.count = 2, .reusable = true}, REDUCE(aux_sym__terminator_repeat1, 2), SHIFT_REPEAT(358),
  [1221] = {.count = 1, .reusable = true}, SHIFT(435),
  [1223] = {.count = 1, .reusable = false}, SHIFT(437),
  [1225] = {.count = 1, .reusable = false}, SHIFT(438),
  [1227] = {.count = 1, .reusable = true}, SHIFT(438),
  [1229] = {.count = 2, .reusable = false}, REDUCE(aux_sym__terminator_repeat1, 2), SHIFT_REPEAT(362),
  [1232] = {.count = 2, .reusable = true}, REDUCE(aux_sym__terminator_repeat1, 2), SHIFT_REPEAT(362),
  [1235] = {.count = 1, .reusable = false}, SHIFT(439),
  [1237] = {.count = 1, .reusable = false}, SHIFT(440),
  [1239] = {.count = 1, .reusable = true}, SHIFT(440),
  [1241] = {.count = 1, .reusable = true}, SHIFT(441),
  [1243] = {.count = 1, .reusable = false}, SHIFT(443),
  [1245] = {.count = 1, .reusable = false}, SHIFT(444),
  [1247] = {.count = 1, .reusable = true}, SHIFT(444),
  [1249] = {.count = 1, .reusable = true}, SHIFT(445),
  [1251] = {.count = 1, .reusable = false}, SHIFT(446),
  [1253] = {.count = 1, .reusable = false}, SHIFT(447),
  [1255] = {.count = 1, .reusable = true}, SHIFT(447),
  [1257] = {.count = 1, .reusable = true}, SHIFT(448),
  [1259] = {.count = 1, .reusable = false}, SHIFT(448),
  [1261] = {.count = 1, .reusable = true}, SHIFT(451),
  [1263] = {.count = 1, .reusable = false}, SHIFT(451),
  [1265] = {.count = 1, .reusable = true}, REDUCE(sym_non_type_attribute, 5),
  [1267] = {.count = 1, .reusable = true}, SHIFT(453),
  [1269] = {.count = 1, .reusable = true}, SHIFT(454),
  [1271] = {.count = 1, .reusable = true}, SHIFT(455),
  [1273] = {.count = 1, .reusable = true}, REDUCE(sym__typename_generic, 4),
  [1275] = {.count = 1, .reusable = false}, REDUCE(sym__typename_generic, 4),
  [1277] = {.count = 1, .reusable = true}, SHIFT(456),
  [1279] = {.count = 1, .reusable = true}, SHIFT(458),
  [1281] = {.count = 1, .reusable = false}, SHIFT(459),
  [1283] = {.count = 1, .reusable = false}, SHIFT(463),
  [1285] = {.count = 1, .reusable = false}, SHIFT(460),
  [1287] = {.count = 1, .reusable = false}, SHIFT(461),
  [1289] = {.count = 1, .reusable = true}, SHIFT(463),
  [1291] = {.count = 1, .reusable = false}, REDUCE(sym_class_property, 2),
  [1293] = {.count = 1, .reusable = true}, REDUCE(sym_class_property, 2),
  [1295] = {.count = 1, .reusable = true}, SHIFT(465),
  [1297] = {.count = 1, .reusable = false}, SHIFT(466),
  [1299] = {.count = 1, .reusable = false}, SHIFT(467),
  [1301] = {.count = 1, .reusable = true}, SHIFT(467),
  [1303] = {.count = 1, .reusable = true}, SHIFT(468),
  [1305] = {.count = 1, .reusable = false}, SHIFT(468),
  [1307] = {.count = 1, .reusable = true}, REDUCE(aux_sym_class_definition_repeat1, 2),
  [1309] = {.count = 1, .reusable = false}, REDUCE(aux_sym_class_definition_repeat1, 2),
  [1311] = {.count = 1, .reusable = true}, SHIFT(469),
  [1313] = {.count = 1, .reusable = false}, SHIFT(469),
  [1315] = {.count = 1, .reusable = false}, REDUCE(sym_class_definition, 5),
  [1317] = {.count = 1, .reusable = true}, REDUCE(sym_class_definition, 5),
  [1319] = {.count = 2, .reusable = true}, REDUCE(aux_sym_class_definition_repeat1, 2), SHIFT_REPEAT(291),
  [1322] = {.count = 2, .reusable = true}, REDUCE(aux_sym_class_definition_repeat1, 2), SHIFT_REPEAT(292),
  [1325] = {.count = 2, .reusable = false}, REDUCE(aux_sym_class_definition_repeat1, 2), SHIFT_REPEAT(294),
  [1328] = {.count = 1, .reusable = true}, SHIFT(470),
  [1330] = {.count = 1, .reusable = false}, REDUCE(sym_hashtable_expression, 5),
  [1332] = {.count = 1, .reusable = true}, REDUCE(sym_hashtable_expression, 5),
  [1334] = {.count = 1, .reusable = true}, SHIFT(472),
  [1336] = {.count = 1, .reusable = false}, SHIFT(472),
  [1338] = {.count = 1, .reusable = true}, SHIFT(473),
  [1340] = {.count = 1, .reusable = false}, SHIFT(473),
  [1342] = {.count = 1, .reusable = false}, REDUCE(sym_hashtable_entry, 4),
  [1344] = {.count = 1, .reusable = true}, REDUCE(sym_hashtable_entry, 4),
  [1346] = {.count = 1, .reusable = true}, SHIFT(474),
  [1348] = {.count = 1, .reusable = true}, SHIFT(475),
  [1350] = {.count = 1, .reusable = false}, SHIFT(477),
  [1352] = {.count = 1, .reusable = false}, SHIFT(479),
  [1354] = {.count = 1, .reusable = true}, SHIFT(479),
  [1356] = {.count = 1, .reusable = false}, SHIFT(478),
  [1358] = {.count = 1, .reusable = true}, SHIFT(480),
  [1360] = {.count = 1, .reusable = false}, SHIFT(482),
  [1362] = {.count = 1, .reusable = true}, SHIFT(482),
  [1364] = {.count = 1, .reusable = false}, SHIFT(483),
  [1366] = {.count = 1, .reusable = false}, SHIFT(484),
  [1368] = {.count = 1, .reusable = true}, SHIFT(484),
  [1370] = {.count = 1, .reusable = false}, REDUCE(sym_flat_array_expression, 6),
  [1372] = {.count = 1, .reusable = true}, REDUCE(sym_flat_array_expression, 6),
  [1374] = {.count = 1, .reusable = true}, SHIFT(485),
  [1376] = {.count = 1, .reusable = true}, SHIFT(486),
  [1378] = {.count = 1, .reusable = false}, SHIFT(488),
  [1380] = {.count = 1, .reusable = false}, SHIFT(489),
  [1382] = {.count = 1, .reusable = true}, SHIFT(489),
  [1384] = {.count = 1, .reusable = true}, SHIFT(490),
  [1386] = {.count = 1, .reusable = false}, REDUCE(sym_scriptblock, 6),
  [1388] = {.count = 1, .reusable = true}, REDUCE(sym_scriptblock, 6),
  [1390] = {.count = 1, .reusable = true}, SHIFT(491),
  [1392] = {.count = 1, .reusable = false}, SHIFT(492),
  [1394] = {.count = 1, .reusable = true}, SHIFT(492),
  [1396] = {.count = 1, .reusable = false}, REDUCE(sym_enum_definition, 6),
  [1398] = {.count = 1, .reusable = true}, REDUCE(sym_enum_definition, 6),
  [1400] = {.count = 1, .reusable = false}, SHIFT(493),
  [1402] = {.count = 1, .reusable = false}, SHIFT(494),
  [1404] = {.count = 1, .reusable = true}, SHIFT(494),
  [1406] = {.count = 1, .reusable = true}, SHIFT(495),
  [1408] = {.count = 1, .reusable = true}, SHIFT(496),
  [1410] = {.count = 1, .reusable = false}, REDUCE(sym_param_block, 6),
  [1412] = {.count = 1, .reusable = true}, REDUCE(sym_param_block, 6),
  [1414] = {.count = 1, .reusable = false}, REDUCE(sym_while_statement, 6),
  [1416] = {.count = 1, .reusable = true}, REDUCE(sym_while_statement, 6),
  [1418] = {.count = 1, .reusable = true}, SHIFT(498),
  [1420] = {.count = 1, .reusable = false}, SHIFT(500),
  [1422] = {.count = 1, .reusable = false}, SHIFT(501),
  [1424] = {.count = 1, .reusable = true}, SHIFT(501),
  [1426] = {.count = 1, .reusable = false}, SHIFT(502),
  [1428] = {.count = 1, .reusable = false}, REDUCE(sym_if_statement, 6),
  [1430] = {.count = 1, .reusable = true}, REDUCE(sym_if_statement, 6),
  [1432] = {.count = 1, .reusable = false}, SHIFT(503),
  [1434] = {.count = 1, .reusable = false}, SHIFT(504),
  [1436] = {.count = 1, .reusable = true}, SHIFT(506),
  [1438] = {.count = 1, .reusable = false}, SHIFT(508),
  [1440] = {.count = 1, .reusable = false}, SHIFT(509),
  [1442] = {.count = 1, .reusable = true}, SHIFT(509),
  [1444] = {.count = 1, .reusable = false}, SHIFT(510),
  [1446] = {.count = 1, .reusable = true}, SHIFT(511),
  [1448] = {.count = 1, .reusable = false}, SHIFT(511),
  [1450] = {.count = 1, .reusable = true}, SHIFT(513),
  [1452] = {.count = 1, .reusable = true}, REDUCE(sym_non_type_attribute, 6),
  [1454] = {.count = 1, .reusable = true}, SHIFT(514),
  [1456] = {.count = 1, .reusable = true}, REDUCE(aux_sym__typename_generic_repeat1, 2),
  [1458] = {.count = 1, .reusable = true}, REDUCE(sym__typename_generic, 5),
  [1460] = {.count = 1, .reusable = false}, REDUCE(sym__typename_generic, 5),
  [1462] = {.count = 2, .reusable = true}, REDUCE(aux_sym__typename_generic_repeat1, 2), SHIFT_REPEAT(384),
  [1465] = {.count = 1, .reusable = true}, REDUCE(sym_class_parameter, 1),
  [1467] = {.count = 1, .reusable = true}, SHIFT(176),
  [1469] = {.count = 1, .reusable = false}, SHIFT(517),
  [1471] = {.count = 1, .reusable = true}, SHIFT(517),
  [1473] = {.count = 1, .reusable = false}, SHIFT(515),
  [1475] = {.count = 1, .reusable = true}, SHIFT(518),
  [1477] = {.count = 1, .reusable = false}, SHIFT(520),
  [1479] = {.count = 1, .reusable = false}, SHIFT(519),
  [1481] = {.count = 1, .reusable = true}, SHIFT(520),
  [1483] = {.count = 1, .reusable = true}, SHIFT(519),
  [1485] = {.count = 1, .reusable = true}, SHIFT(522),
  [1487] = {.count = 1, .reusable = false}, SHIFT(524),
  [1489] = {.count = 1, .reusable = true}, SHIFT(524),
  [1491] = {.count = 1, .reusable = false}, REDUCE(sym_class_property, 3),
  [1493] = {.count = 1, .reusable = true}, REDUCE(sym_class_property, 3),
  [1495] = {.count = 2, .reusable = false}, REDUCE(aux_sym__terminator_repeat1, 2), SHIFT_REPEAT(467),
  [1498] = {.count = 2, .reusable = true}, REDUCE(aux_sym__terminator_repeat1, 2), SHIFT_REPEAT(467),
  [1501] = {.count = 2, .reusable = false}, REDUCE(aux_sym__terminator_repeat1, 2), SHIFT_REPEAT(469),
  [1504] = {.count = 2, .reusable = true}, REDUCE(aux_sym__terminator_repeat1, 2), SHIFT_REPEAT(469),
  [1507] = {.count = 1, .reusable = false}, REDUCE(sym_class_definition, 6),
  [1509] = {.count = 1, .reusable = true}, REDUCE(sym_class_definition, 6),
  [1511] = {.count = 1, .reusable = true}, SHIFT(525),
  [1513] = {.count = 2, .reusable = true}, REDUCE(aux_sym__terminator_repeat1, 2), SHIFT_REPEAT(473),
  [1516] = {.count = 2, .reusable = false}, REDUCE(aux_sym__terminator_repeat1, 2), SHIFT_REPEAT(473),
  [1519] = {.count = 1, .reusable = false}, REDUCE(sym_hashtable_expression, 6),
  [1521] = {.count = 1, .reusable = true}, REDUCE(sym_hashtable_expression, 6),
  [1523] = {.count = 1, .reusable = false}, REDUCE(sym_do_while_statement, 7),
  [1525] = {.count = 1, .reusable = true}, REDUCE(sym_do_while_statement, 7),
  [1527] = {.count = 1, .reusable = true}, SHIFT(526),
  [1529] = {.count = 1, .reusable = true}, SHIFT(528),
  [1531] = {.count = 1, .reusable = false}, SHIFT(530),
  [1533] = {.count = 1, .reusable = false}, SHIFT(531),
  [1535] = {.count = 1, .reusable = true}, SHIFT(531),
  [1537] = {.count = 1, .reusable = true}, SHIFT(532),
  [1539] = {.count = 1, .reusable = false}, SHIFT(533),
  [1541] = {.count = 1, .reusable = false}, SHIFT(534),
  [1543] = {.count = 1, .reusable = true}, SHIFT(534),
  [1545] = {.count = 1, .reusable = false}, SHIFT(535),
  [1547] = {.count = 1, .reusable = true}, SHIFT(537),
  [1549] = {.count = 1, .reusable = false}, SHIFT(539),
  [1551] = {.count = 1, .reusable = false}, SHIFT(540),
  [1553] = {.count = 1, .reusable = true}, SHIFT(540),
  [1555] = {.count = 1, .reusable = false}, REDUCE(sym_scriptblock, 7),
  [1557] = {.count = 1, .reusable = true}, REDUCE(sym_scriptblock, 7),
  [1559] = {.count = 2, .reusable = false}, REDUCE(aux_sym__terminator_repeat1, 2), SHIFT_REPEAT(492),
  [1562] = {.count = 2, .reusable = true}, REDUCE(aux_sym__terminator_repeat1, 2), SHIFT_REPEAT(492),
  [1565] = {.count = 1, .reusable = false}, REDUCE(sym_enum_definition, 7),
  [1567] = {.count = 1, .reusable = true}, REDUCE(sym_enum_definition, 7),
  [1569] = {.count = 1, .reusable = false}, SHIFT(541),
  [1571] = {.count = 1, .reusable = false}, REDUCE(sym_non_type_attribute, 5),
  [1573] = {.count = 1, .reusable = true}, SHIFT(542),
  [1575] = {.count = 1, .reusable = true}, SHIFT(543),
  [1577] = {.count = 1, .reusable = false}, REDUCE(sym_while_statement, 7),
  [1579] = {.count = 1, .reusable = true}, REDUCE(sym_while_statement, 7),
  [1581] = {.count = 1, .reusable = true}, SHIFT(544),
  [1583] = {.count = 1, .reusable = false}, SHIFT(546),
  [1585] = {.count = 1, .reusable = false}, SHIFT(547),
  [1587] = {.count = 1, .reusable = true}, SHIFT(547),
  [1589] = {.count = 1, .reusable = false}, SHIFT(549),
  [1591] = {.count = 1, .reusable = true}, SHIFT(549),
  [1593] = {.count = 1, .reusable = false}, SHIFT(548),
  [1595] = {.count = 1, .reusable = false}, SHIFT(551),
  [1597] = {.count = 1, .reusable = true}, SHIFT(551),
  [1599] = {.count = 1, .reusable = false}, SHIFT(550),
  [1601] = {.count = 1, .reusable = false}, REDUCE(sym_if_statement, 7),
  [1603] = {.count = 1, .reusable = true}, REDUCE(sym_if_statement, 7),
  [1605] = {.count = 1, .reusable = false}, SHIFT(552),
  [1607] = {.count = 1, .reusable = true}, SHIFT(555),
  [1609] = {.count = 1, .reusable = false}, SHIFT(557),
  [1611] = {.count = 1, .reusable = true}, SHIFT(558),
  [1613] = {.count = 1, .reusable = true}, REDUCE(sym_non_type_attribute, 7),
  [1615] = {.count = 1, .reusable = true}, SHIFT(559),
  [1617] = {.count = 1, .reusable = true}, REDUCE(sym_class_method, 4),
  [1619] = {.count = 1, .reusable = false}, REDUCE(sym_class_method, 4),
  [1621] = {.count = 1, .reusable = true}, REDUCE(sym_class_parameter, 2),
  [1623] = {.count = 1, .reusable = false}, SHIFT(562),
  [1625] = {.count = 1, .reusable = true}, SHIFT(562),
  [1627] = {.count = 2, .reusable = false}, REDUCE(aux_sym__terminator_repeat1, 2), SHIFT_REPEAT(520),
  [1630] = {.count = 2, .reusable = true}, REDUCE(aux_sym__terminator_repeat1, 2), SHIFT_REPEAT(520),
  [1633] = {.count = 1, .reusable = true}, SHIFT(563),
  [1635] = {.count = 1, .reusable = false}, SHIFT(565),
  [1637] = {.count = 1, .reusable = true}, SHIFT(565),
  [1639] = {.count = 1, .reusable = false}, SHIFT(563),
  [1641] = {.count = 1, .reusable = false}, REDUCE(sym_class_definition, 7),
  [1643] = {.count = 1, .reusable = true}, REDUCE(sym_class_definition, 7),
  [1645] = {.count = 1, .reusable = false}, REDUCE(sym_do_while_statement, 8),
  [1647] = {.count = 1, .reusable = true}, REDUCE(sym_do_while_statement, 8),
  [1649] = {.count = 1, .reusable = true}, SHIFT(569),
  [1651] = {.count = 1, .reusable = true}, SHIFT(571),
  [1653] = {.count = 1, .reusable = false}, SHIFT(573),
  [1655] = {.count = 1, .reusable = false}, SHIFT(574),
  [1657] = {.count = 1, .reusable = true}, SHIFT(574),
  [1659] = {.count = 1, .reusable = false}, SHIFT(576),
  [1661] = {.count = 1, .reusable = false}, SHIFT(577),
  [1663] = {.count = 1, .reusable = true}, SHIFT(577),
  [1665] = {.count = 1, .reusable = true}, SHIFT(580),
  [1667] = {.count = 1, .reusable = false}, SHIFT(582),
  [1669] = {.count = 1, .reusable = false}, REDUCE(sym_enum_definition, 8),
  [1671] = {.count = 1, .reusable = true}, REDUCE(sym_enum_definition, 8),
  [1673] = {.count = 1, .reusable = false}, REDUCE(sym_non_type_attribute, 6),
  [1675] = {.count = 1, .reusable = true}, SHIFT(583),
  [1677] = {.count = 1, .reusable = false}, REDUCE(sym_while_statement, 8),
  [1679] = {.count = 1, .reusable = true}, REDUCE(sym_while_statement, 8),
  [1681] = {.count = 1, .reusable = true}, SHIFT(584),
  [1683] = {.count = 1, .reusable = false}, SHIFT(586),
  [1685] = {.count = 1, .reusable = true}, SHIFT(588),
  [1687] = {.count = 1, .reusable = false}, SHIFT(588),
  [1689] = {.count = 1, .reusable = false}, SHIFT(589),
  [1691] = {.count = 1, .reusable = true}, SHIFT(590),
  [1693] = {.count = 1, .reusable = false}, SHIFT(592),
  [1695] = {.count = 1, .reusable = false}, SHIFT(593),
  [1697] = {.count = 1, .reusable = true}, SHIFT(593),
  [1699] = {.count = 1, .reusable = false}, REDUCE(aux_sym_if_statement_repeat1, 2),
  [1701] = {.count = 2, .reusable = false}, REDUCE(aux_sym_if_statement_repeat1, 2), SHIFT_REPEAT(503),
  [1704] = {.count = 1, .reusable = true}, REDUCE(aux_sym_if_statement_repeat1, 2),
  [1706] = {.count = 1, .reusable = false}, REDUCE(sym_if_statement, 8),
  [1708] = {.count = 1, .reusable = true}, REDUCE(sym_if_statement, 8),
  [1710] = {.count = 1, .reusable = false}, SHIFT(594),
  [1712] = {.count = 1, .reusable = true}, SHIFT(596),
  [1714] = {.count = 1, .reusable = true}, REDUCE(sym_class_method_body, 2),
  [1716] = {.count = 1, .reusable = false}, REDUCE(sym_class_method_body, 2),
  [1718] = {.count = 1, .reusable = true}, SHIFT(598),
  [1720] = {.count = 1, .reusable = true}, REDUCE(sym_class_method, 5),
  [1722] = {.count = 1, .reusable = false}, REDUCE(sym_class_method, 5),
  [1724] = {.count = 1, .reusable = false}, SHIFT(600),
  [1726] = {.count = 1, .reusable = true}, SHIFT(600),
  [1728] = {.count = 1, .reusable = true}, SHIFT(601),
  [1730] = {.count = 1, .reusable = true}, REDUCE(aux_sym_class_method_repeat1, 2),
  [1732] = {.count = 2, .reusable = true}, REDUCE(aux_sym_class_method_repeat1, 2), SHIFT_REPEAT(522),
  [1735] = {.count = 1, .reusable = false}, REDUCE(sym_do_while_statement, 9),
  [1737] = {.count = 1, .reusable = true}, REDUCE(sym_do_while_statement, 9),
  [1739] = {.count = 1, .reusable = true}, SHIFT(606),
  [1741] = {.count = 1, .reusable = false}, SHIFT(608),
  [1743] = {.count = 1, .reusable = true}, SHIFT(609),
  [1745] = {.count = 1, .reusable = false}, SHIFT(611),
  [1747] = {.count = 1, .reusable = true}, SHIFT(613),
  [1749] = {.count = 1, .reusable = false}, REDUCE(sym_non_type_attribute, 7),
  [1751] = {.count = 1, .reusable = false}, REDUCE(sym_while_statement, 9),
  [1753] = {.count = 1, .reusable = true}, REDUCE(sym_while_statement, 9),
  [1755] = {.count = 1, .reusable = true}, SHIFT(615),
  [1757] = {.count = 1, .reusable = false}, SHIFT(617),
  [1759] = {.count = 1, .reusable = false}, SHIFT(618),
  [1761] = {.count = 1, .reusable = true}, SHIFT(618),
  [1763] = {.count = 1, .reusable = true}, SHIFT(620),
  [1765] = {.count = 1, .reusable = false}, SHIFT(620),
  [1767] = {.count = 1, .reusable = false}, REDUCE(sym_if_statement, 9),
  [1769] = {.count = 1, .reusable = true}, REDUCE(sym_if_statement, 9),
  [1771] = {.count = 1, .reusable = true}, SHIFT(621),
  [1773] = {.count = 1, .reusable = false}, SHIFT(623),
  [1775] = {.count = 1, .reusable = false}, SHIFT(624),
  [1777] = {.count = 1, .reusable = true}, SHIFT(624),
  [1779] = {.count = 1, .reusable = false}, SHIFT(625),
  [1781] = {.count = 1, .reusable = true}, SHIFT(627),
  [1783] = {.count = 1, .reusable = true}, REDUCE(sym_class_method_body, 3),
  [1785] = {.count = 1, .reusable = false}, REDUCE(sym_class_method_body, 3),
  [1787] = {.count = 1, .reusable = true}, REDUCE(sym_class_method, 6),
  [1789] = {.count = 1, .reusable = false}, REDUCE(sym_class_method, 6),
  [1791] = {.count = 1, .reusable = false}, SHIFT(629),
  [1793] = {.count = 1, .reusable = true}, SHIFT(629),
  [1795] = {.count = 1, .reusable = true}, REDUCE(aux_sym_class_method_repeat1, 3),
  [1797] = {.count = 1, .reusable = true}, SHIFT(630),
  [1799] = {.count = 1, .reusable = true}, SHIFT(632),
  [1801] = {.count = 1, .reusable = false}, REDUCE(sym_do_while_statement, 10),
  [1803] = {.count = 1, .reusable = true}, REDUCE(sym_do_while_statement, 10),
  [1805] = {.count = 1, .reusable = true}, SHIFT(634),
  [1807] = {.count = 1, .reusable = true}, SHIFT(637),
  [1809] = {.count = 1, .reusable = false}, REDUCE(sym_while_statement, 10),
  [1811] = {.count = 1, .reusable = true}, REDUCE(sym_while_statement, 10),
  [1813] = {.count = 1, .reusable = true}, SHIFT(638),
  [1815] = {.count = 1, .reusable = false}, SHIFT(640),
  [1817] = {.count = 1, .reusable = true}, SHIFT(640),
  [1819] = {.count = 1, .reusable = false}, SHIFT(639),
  [1821] = {.count = 1, .reusable = false}, SHIFT(641),
  [1823] = {.count = 1, .reusable = false}, SHIFT(642),
  [1825] = {.count = 1, .reusable = true}, SHIFT(642),
  [1827] = {.count = 1, .reusable = false}, REDUCE(sym_if_statement, 10),
  [1829] = {.count = 1, .reusable = true}, REDUCE(sym_if_statement, 10),
  [1831] = {.count = 1, .reusable = true}, SHIFT(644),
  [1833] = {.count = 1, .reusable = false}, SHIFT(646),
  [1835] = {.count = 1, .reusable = false}, SHIFT(647),
  [1837] = {.count = 1, .reusable = true}, SHIFT(647),
  [1839] = {.count = 1, .reusable = false}, SHIFT(648),
  [1841] = {.count = 1, .reusable = true}, REDUCE(sym_class_method, 7),
  [1843] = {.count = 1, .reusable = false}, REDUCE(sym_class_method, 7),
  [1845] = {.count = 1, .reusable = false}, SHIFT(651),
  [1847] = {.count = 1, .reusable = true}, SHIFT(651),
  [1849] = {.count = 1, .reusable = true}, SHIFT(653),
  [1851] = {.count = 1, .reusable = false}, REDUCE(sym_do_while_statement, 11),
  [1853] = {.count = 1, .reusable = true}, REDUCE(sym_do_while_statement, 11),
  [1855] = {.count = 1, .reusable = true}, SHIFT(654),
  [1857] = {.count = 1, .reusable = false}, REDUCE(sym_while_statement, 11),
  [1859] = {.count = 1, .reusable = true}, REDUCE(sym_while_statement, 11),
  [1861] = {.count = 1, .reusable = true}, SHIFT(656),
  [1863] = {.count = 1, .reusable = false}, SHIFT(658),
  [1865] = {.count = 1, .reusable = false}, SHIFT(659),
  [1867] = {.count = 1, .reusable = true}, SHIFT(659),
  [1869] = {.count = 1, .reusable = false}, SHIFT(660),
  [1871] = {.count = 1, .reusable = false}, SHIFT(661),
  [1873] = {.count = 1, .reusable = true}, SHIFT(661),
  [1875] = {.count = 1, .reusable = false}, REDUCE(sym_if_statement, 11),
  [1877] = {.count = 1, .reusable = true}, REDUCE(sym_if_statement, 11),
  [1879] = {.count = 1, .reusable = true}, SHIFT(662),
  [1881] = {.count = 1, .reusable = false}, SHIFT(664),
  [1883] = {.count = 1, .reusable = false}, SHIFT(665),
  [1885] = {.count = 1, .reusable = true}, SHIFT(665),
  [1887] = {.count = 1, .reusable = false}, SHIFT(666),
  [1889] = {.count = 1, .reusable = true}, REDUCE(sym_class_method, 8),
  [1891] = {.count = 1, .reusable = false}, REDUCE(sym_class_method, 8),
  [1893] = {.count = 1, .reusable = false}, REDUCE(sym_do_while_statement, 12),
  [1895] = {.count = 1, .reusable = true}, REDUCE(sym_do_while_statement, 12),
  [1897] = {.count = 1, .reusable = false}, REDUCE(aux_sym_if_statement_repeat1, 6),
  [1899] = {.count = 1, .reusable = true}, REDUCE(aux_sym_if_statement_repeat1, 6),
  [1901] = {.count = 1, .reusable = true}, SHIFT(669),
  [1903] = {.count = 1, .reusable = false}, SHIFT(671),
  [1905] = {.count = 1, .reusable = false}, SHIFT(672),
  [1907] = {.count = 1, .reusable = true}, SHIFT(672),
  [1909] = {.count = 1, .reusable = false}, SHIFT(673),
  [1911] = {.count = 1, .reusable = false}, REDUCE(sym_if_statement, 12),
  [1913] = {.count = 1, .reusable = true}, REDUCE(sym_if_statement, 12),
  [1915] = {.count = 1, .reusable = true}, SHIFT(674),
  [1917] = {.count = 1, .reusable = false}, SHIFT(676),
  [1919] = {.count = 1, .reusable = false}, SHIFT(677),
  [1921] = {.count = 1, .reusable = true}, SHIFT(677),
  [1923] = {.count = 1, .reusable = true}, REDUCE(sym_class_method, 9),
  [1925] = {.count = 1, .reusable = false}, REDUCE(sym_class_method, 9),
  [1927] = {.count = 1, .reusable = false}, REDUCE(aux_sym_if_statement_repeat1, 7),
  [1929] = {.count = 1, .reusable = true}, REDUCE(aux_sym_if_statement_repeat1, 7),
  [1931] = {.count = 1, .reusable = true}, SHIFT(678),
  [1933] = {.count = 1, .reusable = false}, SHIFT(680),
  [1935] = {.count = 1, .reusable = false}, SHIFT(681),
  [1937] = {.count = 1, .reusable = true}, SHIFT(681),
  [1939] = {.count = 1, .reusable = false}, REDUCE(sym_if_statement, 13),
  [1941] = {.count = 1, .reusable = true}, REDUCE(sym_if_statement, 13),
  [1943] = {.count = 1, .reusable = true}, SHIFT(682),
  [1945] = {.count = 1, .reusable = false}, SHIFT(684),
  [1947] = {.count = 1, .reusable = false}, REDUCE(aux_sym_if_statement_repeat1, 8),
  [1949] = {.count = 1, .reusable = true}, REDUCE(aux_sym_if_statement_repeat1, 8),
  [1951] = {.count = 1, .reusable = true}, SHIFT(685),
  [1953] = {.count = 1, .reusable = false}, SHIFT(687),
  [1955] = {.count = 1, .reusable = false}, REDUCE(sym_if_statement, 14),
  [1957] = {.count = 1, .reusable = true}, REDUCE(sym_if_statement, 14),
  [1959] = {.count = 1, .reusable = true}, SHIFT(688),
  [1961] = {.count = 1, .reusable = false}, REDUCE(aux_sym_if_statement_repeat1, 9),
  [1963] = {.count = 1, .reusable = true}, REDUCE(aux_sym_if_statement_repeat1, 9),
  [1965] = {.count = 1, .reusable = true}, SHIFT(690),
  [1967] = {.count = 1, .reusable = false}, REDUCE(sym_if_statement, 15),
  [1969] = {.count = 1, .reusable = true}, REDUCE(sym_if_statement, 15),
  [1971] = {.count = 1, .reusable = true}, SHIFT(692),
  [1973] = {.count = 1, .reusable = false}, REDUCE(aux_sym_if_statement_repeat1, 10),
  [1975] = {.count = 1, .reusable = true}, REDUCE(aux_sym_if_statement_repeat1, 10),
  [1977] = {.count = 1, .reusable = true}, SHIFT(693),
  [1979] = {.count = 1, .reusable = false}, REDUCE(sym_if_statement, 16),
  [1981] = {.count = 1, .reusable = true}, REDUCE(sym_if_statement, 16),
  [1983] = {.count = 1, .reusable = false}, REDUCE(aux_sym_if_statement_repeat1, 11),
  [1985] = {.count = 1, .reusable = true}, REDUCE(aux_sym_if_statement_repeat1, 11),
};

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_PowerShell(void) {
  static TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .symbol_metadata = ts_symbol_metadata,
    .parse_table = (const unsigned short *)ts_parse_table,
    .parse_actions = ts_parse_actions,
    .lex_modes = ts_lex_modes,
    .symbol_names = ts_symbol_names,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .lex_fn = ts_lex,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
  };
  return &language;
}
