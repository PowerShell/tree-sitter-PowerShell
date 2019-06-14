#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 10
#define STATE_COUNT 283
#define SYMBOL_COUNT 74
#define ALIAS_COUNT 0
#define TOKEN_COUNT 34
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 7

enum {
  anon_sym_LBRACE = 1,
  anon_sym_RBRACE = 2,
  aux_sym_param_block_token1 = 3,
  anon_sym_LPAREN = 4,
  anon_sym_COMMA = 5,
  anon_sym_RPAREN = 6,
  anon_sym_CR_LF = 7,
  anon_sym_LF = 8,
  anon_sym_SEMI = 9,
  anon_sym_EQ = 10,
  anon_sym_PIPE = 11,
  anon_sym_AMP = 12,
  aux_sym_parameter_token1 = 13,
  anon_sym_COLON = 14,
  anon_sym_DOLLAR_LPAREN = 15,
  anon_sym_AT_LPAREN = 16,
  anon_sym_AT_LBRACE = 17,
  anon_sym_DOLLAR = 18,
  sym__varname_simple = 19,
  sym__varname_braced = 20,
  anon_sym_CARET = 21,
  anon_sym_QMARK = 22,
  anon_sym_LBRACK = 23,
  anon_sym_RBRACK = 24,
  sym__typename_simple = 25,
  anon_sym_LBRACK_RBRACK = 26,
  sym_number_expr = 27,
  sym_single_quote_string = 28,
  anon_sym_DQUOTE_DQUOTE = 29,
  anon_sym_DQUOTE = 30,
  aux_sym_double_quote_string_token1 = 31,
  sym_bareword_string = 32,
  sym_comment = 33,
  sym_source_file = 34,
  sym_scriptblock = 35,
  sym_param_block = 36,
  sym_param_block_variable = 37,
  sym__statement = 38,
  sym__newline = 39,
  aux_sym__newlines = 40,
  sym__terminator = 41,
  sym_pipeline_statement = 42,
  sym_command_expression = 43,
  sym__non_array_expression = 44,
  sym__expression = 45,
  sym__pipeline_expression = 46,
  sym_array_expression = 47,
  sym_flat_array_expression = 48,
  sym_hashtable_expression = 49,
  sym_hashtable_entry = 50,
  sym_property_name = 51,
  sym__attributed_variable = 52,
  sym_variable = 53,
  sym__varname_special = 54,
  sym_type_expr = 55,
  sym__typename = 56,
  sym__typename_array = 57,
  sym__typename_generic = 58,
  sym_non_type_attribute = 59,
  sym__attribute = 60,
  sym__string_expr = 61,
  sym_double_quote_string = 62,
  aux_sym_source_file_repeat1 = 63,
  aux_sym_param_block_repeat1 = 64,
  aux_sym_param_block_variable_repeat1 = 65,
  aux_sym_pipeline_statement_repeat1 = 66,
  aux_sym_array_expression_repeat1 = 67,
  aux_sym_flat_array_expression_repeat1 = 68,
  aux_sym_flat_array_expression_repeat2 = 69,
  aux_sym_hashtable_expression_repeat1 = 70,
  aux_sym__attributed_variable_repeat1 = 71,
  aux_sym__typename_generic_repeat1 = 72,
  aux_sym_double_quote_string_repeat1 = 73,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [aux_sym_param_block_token1] = "param_block_token1",
  [anon_sym_LPAREN] = "(",
  [anon_sym_COMMA] = ",",
  [anon_sym_RPAREN] = ")",
  [anon_sym_CR_LF] = "\r\n",
  [anon_sym_LF] = "\n",
  [anon_sym_SEMI] = ";",
  [anon_sym_EQ] = "=",
  [anon_sym_PIPE] = "|",
  [anon_sym_AMP] = "&",
  [aux_sym_parameter_token1] = "parameter_token1",
  [anon_sym_COLON] = ":",
  [anon_sym_DOLLAR_LPAREN] = "$(",
  [anon_sym_AT_LPAREN] = "@(",
  [anon_sym_AT_LBRACE] = "@{",
  [anon_sym_DOLLAR] = "$",
  [sym__varname_simple] = "_varname_simple",
  [sym__varname_braced] = "_varname_braced",
  [anon_sym_CARET] = "^",
  [anon_sym_QMARK] = "?",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [sym__typename_simple] = "_typename_simple",
  [anon_sym_LBRACK_RBRACK] = "[]",
  [sym_number_expr] = "number_expr",
  [sym_single_quote_string] = "single_quote_string",
  [anon_sym_DQUOTE_DQUOTE] = "\"\"",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_double_quote_string_token1] = "double_quote_string_token1",
  [sym_bareword_string] = "bareword_string",
  [sym_comment] = "comment",
  [sym_source_file] = "source_file",
  [sym_scriptblock] = "scriptblock",
  [sym_param_block] = "param_block",
  [sym_param_block_variable] = "param_block_variable",
  [sym__statement] = "_statement",
  [sym__newline] = "_newline",
  [aux_sym__newlines] = "_newlines",
  [sym__terminator] = "_terminator",
  [sym_pipeline_statement] = "pipeline_statement",
  [sym_command_expression] = "command_expression",
  [sym__non_array_expression] = "_non_array_expression",
  [sym__expression] = "_expression",
  [sym__pipeline_expression] = "_pipeline_expression",
  [sym_array_expression] = "array_expression",
  [sym_flat_array_expression] = "flat_array_expression",
  [sym_hashtable_expression] = "hashtable_expression",
  [sym_hashtable_entry] = "hashtable_entry",
  [sym_property_name] = "property_name",
  [sym__attributed_variable] = "_attributed_variable",
  [sym_variable] = "variable",
  [sym__varname_special] = "_varname_special",
  [sym_type_expr] = "type_expr",
  [sym__typename] = "_typename",
  [sym__typename_array] = "_typename_array",
  [sym__typename_generic] = "_typename_generic",
  [sym_non_type_attribute] = "non_type_attribute",
  [sym__attribute] = "_attribute",
  [sym__string_expr] = "_string_expr",
  [sym_double_quote_string] = "double_quote_string",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_param_block_repeat1] = "param_block_repeat1",
  [aux_sym_param_block_variable_repeat1] = "param_block_variable_repeat1",
  [aux_sym_pipeline_statement_repeat1] = "pipeline_statement_repeat1",
  [aux_sym_array_expression_repeat1] = "array_expression_repeat1",
  [aux_sym_flat_array_expression_repeat1] = "flat_array_expression_repeat1",
  [aux_sym_flat_array_expression_repeat2] = "flat_array_expression_repeat2",
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
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_param_block_token1] = {
    .visible = false,
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
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
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
  [anon_sym_AT_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLAR] = {
    .visible = true,
    .named = false,
  },
  [sym__varname_simple] = {
    .visible = false,
    .named = true,
  },
  [sym__varname_braced] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_CARET] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QMARK] = {
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
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym__newline] = {
    .visible = false,
    .named = true,
  },
  [aux_sym__newlines] = {
    .visible = false,
    .named = false,
  },
  [sym__terminator] = {
    .visible = false,
    .named = true,
  },
  [sym_pipeline_statement] = {
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
  [sym__varname_special] = {
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
  [aux_sym_param_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_param_block_variable_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_pipeline_statement_repeat1] = {
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
  [aux_sym_flat_array_expression_repeat2] = {
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
      if (lookahead == '?')
        ADVANCE(16);
      if (lookahead == '@')
        ADVANCE(17);
      if (lookahead == 'P' ||
          lookahead == 'p')
        ADVANCE(18);
      if (lookahead == '[')
        ADVANCE(19);
      if (lookahead == ']')
        ADVANCE(20);
      if (lookahead == '^')
        ADVANCE(21);
      if (lookahead == '`')
        SKIP(22);
      if (lookahead == '{')
        ADVANCE(23);
      if (lookahead == '|')
        ADVANCE(24);
      if (lookahead == '}')
        ADVANCE(25);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(0);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(26);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 1:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 2:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == '"')
        ADVANCE(28);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(3);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      if (lookahead == '(')
        ADVANCE(29);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 6:
      if (lookahead == '\'')
        ADVANCE(30);
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
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 11:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(32);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 14:
      if (lookahead == '#')
        ADVANCE(33);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 17:
      if (lookahead == '(')
        ADVANCE(34);
      if (lookahead == '{')
        ADVANCE(35);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym__varname_simple);
      if (lookahead == '.')
        ADVANCE(36);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == ']')
        ADVANCE(38);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 22:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(0);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym__varname_simple);
      if (lookahead == '.')
        ADVANCE(11);
      if (lookahead == 'G' ||
          lookahead == 'K' ||
          lookahead == 'M' ||
          lookahead == 'T' ||
          lookahead == 'g' ||
          lookahead == 'k' ||
          lookahead == 'm' ||
          lookahead == 't')
        ADVANCE(39);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(40);
      if (lookahead == 'U' ||
          lookahead == 'u')
        ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(26);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(42);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym__varname_simple);
      if (lookahead == '.')
        ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_DQUOTE_DQUOTE);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LPAREN);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_single_quote_string);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(aux_sym_parameter_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 32:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(32);
      END_STATE();
    case 33:
      if (lookahead == '#')
        ADVANCE(44);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(33);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_AT_LPAREN);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_AT_LBRACE);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym__typename_simple);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym__varname_simple);
      if (lookahead == '.')
        ADVANCE(36);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_LBRACK_RBRACK);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym__varname_simple);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(42);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym__varname_simple);
      if (lookahead == 'G' ||
          lookahead == 'K' ||
          lookahead == 'M' ||
          lookahead == 'T' ||
          lookahead == 'g' ||
          lookahead == 'k' ||
          lookahead == 'm' ||
          lookahead == 't')
        ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(42);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym__varname_simple);
      if (lookahead == 'G' ||
          lookahead == 'K' ||
          lookahead == 'M' ||
          lookahead == 'T' ||
          lookahead == 'g' ||
          lookahead == 'k' ||
          lookahead == 'm' ||
          lookahead == 't')
        ADVANCE(39);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(42);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym__varname_simple);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(42);
      END_STATE();
    case 43:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(47);
      END_STATE();
    case 44:
      if (lookahead == '#')
        ADVANCE(44);
      if (lookahead == '>')
        ADVANCE(48);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(33);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym__varname_simple);
      if (lookahead == '.')
        ADVANCE(36);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym__varname_simple);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(42);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_number_expr);
      if (lookahead == 'G' ||
          lookahead == 'K' ||
          lookahead == 'M' ||
          lookahead == 'T' ||
          lookahead == 'g' ||
          lookahead == 'k' ||
          lookahead == 'm' ||
          lookahead == 't')
        ADVANCE(50);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(51);
      if (lookahead == 'U' ||
          lookahead == 'u')
        ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(47);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '#')
        ADVANCE(44);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(33);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym__varname_simple);
      if (lookahead == '.')
        ADVANCE(36);
      if (lookahead == 'M' ||
          lookahead == 'm')
        ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 50:
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(54);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_number_expr);
      if (lookahead == 'G' ||
          lookahead == 'K' ||
          lookahead == 'M' ||
          lookahead == 'T' ||
          lookahead == 'g' ||
          lookahead == 'k' ||
          lookahead == 'm' ||
          lookahead == 't')
        ADVANCE(50);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_number_expr);
      if (lookahead == 'G' ||
          lookahead == 'K' ||
          lookahead == 'M' ||
          lookahead == 'T' ||
          lookahead == 'g' ||
          lookahead == 'k' ||
          lookahead == 'm' ||
          lookahead == 't')
        ADVANCE(50);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(51);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_param_block_token1);
      if (lookahead == '.')
        ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_number_expr);
      END_STATE();
    case 55:
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
      if (lookahead == ',')
        ADVANCE(56);
      if (lookahead == '.')
        ADVANCE(57);
      if (lookahead == '<')
        ADVANCE(58);
      if (lookahead == '@')
        ADVANCE(17);
      if (lookahead == 'P' ||
          lookahead == 'p')
        ADVANCE(59);
      if (lookahead == '[')
        ADVANCE(60);
      if (lookahead == '`')
        SKIP(61);
      if (lookahead == '{')
        ADVANCE(23);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(55);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(62);
      if (lookahead != 0 &&
          (lookahead < '!' || '+' < lookahead) &&
          lookahead != ']' &&
          lookahead != '^' &&
          lookahead != '}')
        ADVANCE(63);
      END_STATE();
    case 56:
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
        ADVANCE(63);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_bareword_string);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(64);
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
        ADVANCE(63);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_bareword_string);
      if (lookahead == '#')
        ADVANCE(65);
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
        ADVANCE(63);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_bareword_string);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(66);
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
        ADVANCE(63);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 61:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(55);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_number_expr);
      if (lookahead == '.')
        ADVANCE(11);
      if (lookahead == 'G' ||
          lookahead == 'K' ||
          lookahead == 'M' ||
          lookahead == 'T' ||
          lookahead == 'g' ||
          lookahead == 'k' ||
          lookahead == 'm' ||
          lookahead == 't')
        ADVANCE(50);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(51);
      if (lookahead == 'U' ||
          lookahead == 'u')
        ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(62);
      END_STATE();
    case 63:
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
        ADVANCE(63);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_bareword_string);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(64);
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
        ADVANCE(63);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_bareword_string);
      if (lookahead == '#')
        ADVANCE(68);
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
        ADVANCE(33);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(65);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_bareword_string);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(69);
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
        ADVANCE(63);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_bareword_string);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(70);
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
        ADVANCE(63);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_bareword_string);
      if (lookahead == '#')
        ADVANCE(68);
      if (lookahead == '>')
        ADVANCE(71);
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
        ADVANCE(33);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(65);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_bareword_string);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(72);
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
        ADVANCE(63);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_number_expr);
      if (lookahead == 'G' ||
          lookahead == 'K' ||
          lookahead == 'M' ||
          lookahead == 'T' ||
          lookahead == 'g' ||
          lookahead == 'k' ||
          lookahead == 'm' ||
          lookahead == 't')
        ADVANCE(73);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(74);
      if (lookahead == 'U' ||
          lookahead == 'u')
        ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(70);
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
        ADVANCE(63);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_bareword_string);
      if (lookahead == '#')
        ADVANCE(68);
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
        ADVANCE(33);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(65);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_bareword_string);
      if (lookahead == 'M' ||
          lookahead == 'm')
        ADVANCE(76);
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
        ADVANCE(63);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_bareword_string);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(77);
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
        ADVANCE(63);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_number_expr);
      if (lookahead == 'G' ||
          lookahead == 'K' ||
          lookahead == 'M' ||
          lookahead == 'T' ||
          lookahead == 'g' ||
          lookahead == 'k' ||
          lookahead == 'm' ||
          lookahead == 't')
        ADVANCE(73);
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
        ADVANCE(63);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_number_expr);
      if (lookahead == 'G' ||
          lookahead == 'K' ||
          lookahead == 'M' ||
          lookahead == 'T' ||
          lookahead == 'g' ||
          lookahead == 'k' ||
          lookahead == 'm' ||
          lookahead == 't')
        ADVANCE(73);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(74);
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
        ADVANCE(63);
      END_STATE();
    case 76:
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
        ADVANCE(63);
      END_STATE();
    case 77:
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
        ADVANCE(63);
      END_STATE();
    case 78:
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
      if (lookahead == ',')
        ADVANCE(56);
      if (lookahead == '.')
        ADVANCE(57);
      if (lookahead == '<')
        ADVANCE(58);
      if (lookahead == '@')
        ADVANCE(17);
      if (lookahead == '[')
        ADVANCE(60);
      if (lookahead == '`')
        SKIP(79);
      if (lookahead == '{')
        ADVANCE(23);
      if (lookahead == '}')
        ADVANCE(25);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(78);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(62);
      if (lookahead != 0 &&
          (lookahead < '!' || '+' < lookahead) &&
          lookahead != ']' &&
          lookahead != '^')
        ADVANCE(63);
      END_STATE();
    case 79:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(78);
      END_STATE();
    case 80:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(81);
      if (lookahead == '\r')
        ADVANCE(82);
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
        SKIP(83);
      if (lookahead == '|')
        ADVANCE(24);
      if (lookahead == '}')
        ADVANCE(25);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(80);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n')
        ADVANCE(81);
      if (lookahead == '\r')
        ADVANCE(82);
      END_STATE();
    case 82:
      if (lookahead == '\n')
        ADVANCE(84);
      if (lookahead == '\r')
        ADVANCE(82);
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
        SKIP(85);
      if (lookahead == '|')
        ADVANCE(24);
      if (lookahead == '}')
        ADVANCE(25);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(86);
      END_STATE();
    case 83:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(80);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_CR_LF);
      if (lookahead == '\n')
        ADVANCE(81);
      if (lookahead == '\r')
        ADVANCE(82);
      END_STATE();
    case 85:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(86);
      END_STATE();
    case 86:
      if (lookahead == '\n')
        ADVANCE(81);
      if (lookahead == '\r')
        ADVANCE(82);
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
        SKIP(85);
      if (lookahead == '|')
        ADVANCE(24);
      if (lookahead == '}')
        ADVANCE(25);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(86);
      END_STATE();
    case 87:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(88);
      if (lookahead == '\r')
        ADVANCE(89);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '$')
        ADVANCE(90);
      if (lookahead == ')')
        ADVANCE(8);
      if (lookahead == ',')
        ADVANCE(9);
      if (lookahead == ';')
        ADVANCE(13);
      if (lookahead == '<')
        ADVANCE(14);
      if (lookahead == '[')
        ADVANCE(60);
      if (lookahead == '`')
        SKIP(91);
      if (lookahead == '|')
        ADVANCE(24);
      if (lookahead == '}')
        ADVANCE(25);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(87);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n')
        ADVANCE(88);
      if (lookahead == '\r')
        ADVANCE(89);
      END_STATE();
    case 89:
      if (lookahead == '\n')
        ADVANCE(92);
      if (lookahead == '\r')
        ADVANCE(89);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '$')
        ADVANCE(90);
      if (lookahead == ')')
        ADVANCE(8);
      if (lookahead == ',')
        ADVANCE(9);
      if (lookahead == ';')
        ADVANCE(13);
      if (lookahead == '<')
        ADVANCE(14);
      if (lookahead == '[')
        ADVANCE(60);
      if (lookahead == '`')
        SKIP(93);
      if (lookahead == '|')
        ADVANCE(24);
      if (lookahead == '}')
        ADVANCE(25);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(94);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 91:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(87);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_CR_LF);
      if (lookahead == '\n')
        ADVANCE(88);
      if (lookahead == '\r')
        ADVANCE(89);
      END_STATE();
    case 93:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(94);
      END_STATE();
    case 94:
      if (lookahead == '\n')
        ADVANCE(88);
      if (lookahead == '\r')
        ADVANCE(89);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '$')
        ADVANCE(90);
      if (lookahead == ')')
        ADVANCE(8);
      if (lookahead == ',')
        ADVANCE(9);
      if (lookahead == ';')
        ADVANCE(13);
      if (lookahead == '<')
        ADVANCE(14);
      if (lookahead == '[')
        ADVANCE(60);
      if (lookahead == '`')
        SKIP(93);
      if (lookahead == '|')
        ADVANCE(24);
      if (lookahead == '}')
        ADVANCE(25);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(94);
      END_STATE();
    case 95:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '"')
        ADVANCE(96);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '$')
        ADVANCE(90);
      if (lookahead == '<')
        ADVANCE(14);
      if (lookahead == '?')
        ADVANCE(16);
      if (lookahead == '^')
        ADVANCE(21);
      if (lookahead == '`')
        SKIP(97);
      if (lookahead == '{')
        ADVANCE(98);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(95);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z'))
        ADVANCE(42);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 97:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(95);
      END_STATE();
    case 98:
      if (lookahead != 0 &&
          lookahead != '}')
        ADVANCE(99);
      END_STATE();
    case 99:
      if (lookahead == '}')
        ADVANCE(100);
      if (lookahead != 0)
        ADVANCE(99);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym__varname_braced);
      END_STATE();
    case 101:
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '<')
        ADVANCE(14);
      if (lookahead == '`')
        SKIP(102);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(101);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 102:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(101);
      END_STATE();
    case 103:
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
      if (lookahead == '<')
        ADVANCE(58);
      if (lookahead == '`')
        SKIP(104);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(103);
      if (lookahead != 0 &&
          (lookahead < '!' || '+' < lookahead) &&
          (lookahead < '0' || '9' < lookahead) &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '^' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(63);
      END_STATE();
    case 104:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(103);
      END_STATE();
    case 105:
      if (lookahead == '"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '$')
        ADVANCE(4);
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
        ADVANCE(17);
      if (lookahead == '[')
        ADVANCE(60);
      if (lookahead == '`')
        SKIP(106);
      if (lookahead == '{')
        ADVANCE(23);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(105);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(62);
      END_STATE();
    case 106:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(105);
      END_STATE();
    case 107:
      if (lookahead == '\n')
        ADVANCE(108);
      if (lookahead == '\r')
        ADVANCE(109);
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
      if (lookahead == '<')
        ADVANCE(58);
      if (lookahead == '`')
        SKIP(110);
      if (lookahead == '}')
        ADVANCE(25);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(107);
      if (lookahead != 0 &&
          (lookahead < '!' || '+' < lookahead) &&
          (lookahead < '0' || '9' < lookahead) &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '^' &&
          lookahead != '{')
        ADVANCE(63);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n')
        ADVANCE(108);
      if (lookahead == '\r')
        ADVANCE(109);
      END_STATE();
    case 109:
      if (lookahead == '\n')
        ADVANCE(111);
      if (lookahead == '\r')
        ADVANCE(109);
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
      if (lookahead == '<')
        ADVANCE(58);
      if (lookahead == '`')
        SKIP(110);
      if (lookahead == '}')
        ADVANCE(25);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(107);
      if (lookahead != 0 &&
          (lookahead < '!' || '+' < lookahead) &&
          (lookahead < '0' || '9' < lookahead) &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '^' &&
          lookahead != '{')
        ADVANCE(63);
      END_STATE();
    case 110:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(107);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_CR_LF);
      if (lookahead == '\n')
        ADVANCE(108);
      if (lookahead == '\r')
        ADVANCE(109);
      END_STATE();
    case 112:
      if (lookahead == '\n')
        ADVANCE(113);
      if (lookahead == '\r')
        ADVANCE(114);
      if (lookahead == '"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '$')
        ADVANCE(4);
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
      if (lookahead == ';')
        ADVANCE(13);
      if (lookahead == '<')
        ADVANCE(14);
      if (lookahead == '@')
        ADVANCE(17);
      if (lookahead == '[')
        ADVANCE(60);
      if (lookahead == '`')
        SKIP(115);
      if (lookahead == '{')
        ADVANCE(23);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(112);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(62);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n')
        ADVANCE(113);
      if (lookahead == '\r')
        ADVANCE(114);
      END_STATE();
    case 114:
      if (lookahead == '\n')
        ADVANCE(116);
      if (lookahead == '\r')
        ADVANCE(114);
      if (lookahead == '"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '$')
        ADVANCE(4);
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
      if (lookahead == ';')
        ADVANCE(13);
      if (lookahead == '<')
        ADVANCE(14);
      if (lookahead == '@')
        ADVANCE(17);
      if (lookahead == '[')
        ADVANCE(60);
      if (lookahead == '`')
        SKIP(115);
      if (lookahead == '{')
        ADVANCE(23);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(112);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(62);
      END_STATE();
    case 115:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(112);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_CR_LF);
      if (lookahead == '\n')
        ADVANCE(113);
      if (lookahead == '\r')
        ADVANCE(114);
      END_STATE();
    case 117:
      if (lookahead == '"')
        ADVANCE(96);
      if (lookahead == '#')
        ADVANCE(118);
      if (lookahead == '$')
        ADVANCE(90);
      if (lookahead == '<')
        ADVANCE(119);
      if (lookahead == '`')
        ADVANCE(120);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(121);
      if (lookahead != 0)
        ADVANCE(122);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(aux_sym_double_quote_string_token1);
      if (lookahead == '\n')
        ADVANCE(122);
      if (lookahead == '"' ||
          lookahead == '$')
        ADVANCE(3);
      if (lookahead != 0)
        ADVANCE(118);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(aux_sym_double_quote_string_token1);
      if (lookahead == '#')
        ADVANCE(123);
      if (lookahead != 0 &&
          (lookahead < '"' || '$' < lookahead))
        ADVANCE(122);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(aux_sym_double_quote_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(121);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$')
        ADVANCE(122);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(aux_sym_double_quote_string_token1);
      if (lookahead == '#')
        ADVANCE(118);
      if (lookahead == '<')
        ADVANCE(119);
      if (lookahead == '`')
        ADVANCE(120);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(121);
      if (lookahead != 0 &&
          (lookahead < '"' || '$' < lookahead))
        ADVANCE(122);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(aux_sym_double_quote_string_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$')
        ADVANCE(122);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym_double_quote_string_token1);
      if (lookahead == '\n')
        ADVANCE(122);
      if (lookahead == '#')
        ADVANCE(124);
      if (('"' <= lookahead && lookahead <= '$'))
        ADVANCE(33);
      if (lookahead != 0)
        ADVANCE(123);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym_double_quote_string_token1);
      if (lookahead == '\n')
        ADVANCE(122);
      if (lookahead == '#')
        ADVANCE(124);
      if (lookahead == '>')
        ADVANCE(125);
      if (('"' <= lookahead && lookahead <= '$'))
        ADVANCE(33);
      if (lookahead != 0)
        ADVANCE(123);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(aux_sym_double_quote_string_token1);
      if (lookahead == '\n')
        ADVANCE(122);
      if (lookahead == '#')
        ADVANCE(124);
      if (('"' <= lookahead && lookahead <= '$'))
        ADVANCE(33);
      if (lookahead != 0)
        ADVANCE(123);
      END_STATE();
    case 126:
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
        SKIP(127);
      if (lookahead == '|')
        ADVANCE(24);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(126);
      END_STATE();
    case 127:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(126);
      END_STATE();
    case 128:
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '$')
        ADVANCE(90);
      if (lookahead == ')')
        ADVANCE(8);
      if (lookahead == ',')
        ADVANCE(9);
      if (lookahead == '<')
        ADVANCE(14);
      if (lookahead == '[')
        ADVANCE(60);
      if (lookahead == '`')
        SKIP(129);
      if (lookahead == '|')
        ADVANCE(24);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(128);
      END_STATE();
    case 129:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(128);
      END_STATE();
    case 130:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(131);
      if (lookahead == '\r')
        ADVANCE(132);
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
        SKIP(133);
      if (lookahead == '|')
        ADVANCE(24);
      if (lookahead == '}')
        ADVANCE(25);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(130);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n')
        ADVANCE(131);
      if (lookahead == '\r')
        ADVANCE(132);
      END_STATE();
    case 132:
      if (lookahead == '\n')
        ADVANCE(134);
      if (lookahead == '\r')
        ADVANCE(132);
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
        SKIP(135);
      if (lookahead == '|')
        ADVANCE(24);
      if (lookahead == '}')
        ADVANCE(25);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(136);
      END_STATE();
    case 133:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(130);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_CR_LF);
      if (lookahead == '\n')
        ADVANCE(131);
      if (lookahead == '\r')
        ADVANCE(132);
      END_STATE();
    case 135:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(136);
      END_STATE();
    case 136:
      if (lookahead == '\n')
        ADVANCE(131);
      if (lookahead == '\r')
        ADVANCE(132);
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
        SKIP(135);
      if (lookahead == '|')
        ADVANCE(24);
      if (lookahead == '}')
        ADVANCE(25);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(136);
      END_STATE();
    case 137:
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '(')
        ADVANCE(7);
      if (lookahead == ',')
        ADVANCE(9);
      if (lookahead == '<')
        ADVANCE(14);
      if (lookahead == '[')
        ADVANCE(19);
      if (lookahead == ']')
        ADVANCE(20);
      if (lookahead == '`')
        SKIP(138);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(137);
      END_STATE();
    case 138:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(137);
      END_STATE();
    case 139:
      if (lookahead == '\n')
        ADVANCE(140);
      if (lookahead == '\r')
        ADVANCE(141);
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
      if (lookahead == ',')
        ADVANCE(56);
      if (lookahead == '.')
        ADVANCE(57);
      if (lookahead == '<')
        ADVANCE(58);
      if (lookahead == '@')
        ADVANCE(17);
      if (lookahead == '[')
        ADVANCE(60);
      if (lookahead == '`')
        SKIP(142);
      if (lookahead == '{')
        ADVANCE(23);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(139);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(62);
      if (lookahead != 0 &&
          (lookahead < '!' || '+' < lookahead) &&
          lookahead != ']' &&
          lookahead != '^' &&
          lookahead != '}')
        ADVANCE(63);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n')
        ADVANCE(140);
      if (lookahead == '\r')
        ADVANCE(141);
      END_STATE();
    case 141:
      if (lookahead == '\n')
        ADVANCE(143);
      if (lookahead == '\r')
        ADVANCE(141);
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
      if (lookahead == ',')
        ADVANCE(56);
      if (lookahead == '.')
        ADVANCE(57);
      if (lookahead == '<')
        ADVANCE(58);
      if (lookahead == '@')
        ADVANCE(17);
      if (lookahead == '[')
        ADVANCE(60);
      if (lookahead == '`')
        SKIP(142);
      if (lookahead == '{')
        ADVANCE(23);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(139);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(62);
      if (lookahead != 0 &&
          (lookahead < '!' || '+' < lookahead) &&
          lookahead != ']' &&
          lookahead != '^' &&
          lookahead != '}')
        ADVANCE(63);
      END_STATE();
    case 142:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(139);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_CR_LF);
      if (lookahead == '\n')
        ADVANCE(140);
      if (lookahead == '\r')
        ADVANCE(141);
      END_STATE();
    case 144:
      if (lookahead == '\n')
        ADVANCE(145);
      if (lookahead == '\r')
        ADVANCE(146);
      if (lookahead == '"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '$')
        ADVANCE(90);
      if (lookahead == '\'')
        ADVANCE(6);
      if (lookahead == ';')
        ADVANCE(147);
      if (lookahead == '<')
        ADVANCE(58);
      if (lookahead == '`')
        SKIP(148);
      if (lookahead == '}')
        ADVANCE(25);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(144);
      if (lookahead != 0 &&
          (lookahead < '!' || '+' < lookahead) &&
          (lookahead < '0' || '9' < lookahead) &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '^' &&
          lookahead != '{')
        ADVANCE(63);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n')
        ADVANCE(145);
      if (lookahead == '\r')
        ADVANCE(146);
      END_STATE();
    case 146:
      if (lookahead == '\n')
        ADVANCE(149);
      if (lookahead == '\r')
        ADVANCE(146);
      if (lookahead == '"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '$')
        ADVANCE(90);
      if (lookahead == '\'')
        ADVANCE(6);
      if (lookahead == ';')
        ADVANCE(147);
      if (lookahead == '<')
        ADVANCE(58);
      if (lookahead == '`')
        SKIP(148);
      if (lookahead == '}')
        ADVANCE(25);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(144);
      if (lookahead != 0 &&
          (lookahead < '!' || '+' < lookahead) &&
          (lookahead < '0' || '9' < lookahead) &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '^' &&
          lookahead != '{')
        ADVANCE(63);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_SEMI);
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
        ADVANCE(63);
      END_STATE();
    case 148:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(144);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_CR_LF);
      if (lookahead == '\n')
        ADVANCE(145);
      if (lookahead == '\r')
        ADVANCE(146);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 55},
  [2] = {.lex_state = 78},
  [3] = {.lex_state = 78},
  [4] = {.lex_state = 55},
  [5] = {.lex_state = 80},
  [6] = {.lex_state = 87},
  [7] = {.lex_state = 95},
  [8] = {.lex_state = 101},
  [9] = {.lex_state = 103},
  [10] = {.lex_state = 105},
  [11] = {.lex_state = 105},
  [12] = {.lex_state = 107},
  [13] = {.lex_state = 112},
  [14] = {.lex_state = 117},
  [15] = {.lex_state = 80},
  [16] = {.lex_state = 87},
  [17] = {.lex_state = 78},
  [18] = {.lex_state = 80},
  [19] = {.lex_state = 80},
  [20] = {.lex_state = 80},
  [21] = {.lex_state = 95},
  [22] = {.lex_state = 105},
  [23] = {.lex_state = 80},
  [24] = {.lex_state = 105},
  [25] = {.lex_state = 78},
  [26] = {.lex_state = 78},
  [27] = {.lex_state = 55},
  [28] = {.lex_state = 107},
  [29] = {.lex_state = 112},
  [30] = {.lex_state = 126},
  [31] = {.lex_state = 95},
  [32] = {.lex_state = 101},
  [33] = {.lex_state = 103},
  [34] = {.lex_state = 126},
  [35] = {.lex_state = 117},
  [36] = {.lex_state = 128},
  [37] = {.lex_state = 126},
  [38] = {.lex_state = 105},
  [39] = {.lex_state = 126},
  [40] = {.lex_state = 126},
  [41] = {.lex_state = 105},
  [42] = {.lex_state = 126},
  [43] = {.lex_state = 105},
  [44] = {.lex_state = 105},
  [45] = {.lex_state = 80},
  [46] = {.lex_state = 80},
  [47] = {.lex_state = 78},
  [48] = {.lex_state = 80},
  [49] = {.lex_state = 80},
  [50] = {.lex_state = 80},
  [51] = {.lex_state = 130},
  [52] = {.lex_state = 137},
  [53] = {.lex_state = 137},
  [54] = {.lex_state = 80},
  [55] = {.lex_state = 80},
  [56] = {.lex_state = 105},
  [57] = {.lex_state = 87},
  [58] = {.lex_state = 126},
  [59] = {.lex_state = 87},
  [60] = {.lex_state = 107},
  [61] = {.lex_state = 126},
  [62] = {.lex_state = 80},
  [63] = {.lex_state = 87},
  [64] = {.lex_state = 112},
  [65] = {.lex_state = 112},
  [66] = {.lex_state = 112},
  [67] = {.lex_state = 112},
  [68] = {.lex_state = 95},
  [69] = {.lex_state = 87},
  [70] = {.lex_state = 117},
  [71] = {.lex_state = 80},
  [72] = {.lex_state = 78},
  [73] = {.lex_state = 80},
  [74] = {.lex_state = 80},
  [75] = {.lex_state = 107},
  [76] = {.lex_state = 80},
  [77] = {.lex_state = 139},
  [78] = {.lex_state = 105},
  [79] = {.lex_state = 130},
  [80] = {.lex_state = 80},
  [81] = {.lex_state = 126},
  [82] = {.lex_state = 105},
  [83] = {.lex_state = 80},
  [84] = {.lex_state = 78},
  [85] = {.lex_state = 126},
  [86] = {.lex_state = 107},
  [87] = {.lex_state = 80},
  [88] = {.lex_state = 126},
  [89] = {.lex_state = 112},
  [90] = {.lex_state = 112},
  [91] = {.lex_state = 126},
  [92] = {.lex_state = 137},
  [93] = {.lex_state = 126},
  [94] = {.lex_state = 95},
  [95] = {.lex_state = 126},
  [96] = {.lex_state = 117},
  [97] = {.lex_state = 126},
  [98] = {.lex_state = 87},
  [99] = {.lex_state = 107},
  [100] = {.lex_state = 126},
  [101] = {.lex_state = 139},
  [102] = {.lex_state = 126},
  [103] = {.lex_state = 126},
  [104] = {.lex_state = 105},
  [105] = {.lex_state = 105},
  [106] = {.lex_state = 87},
  [107] = {.lex_state = 80},
  [108] = {.lex_state = 78},
  [109] = {.lex_state = 80},
  [110] = {.lex_state = 80},
  [111] = {.lex_state = 80},
  [112] = {.lex_state = 139},
  [113] = {.lex_state = 80},
  [114] = {.lex_state = 105},
  [115] = {.lex_state = 137},
  [116] = {.lex_state = 101},
  [117] = {.lex_state = 87},
  [118] = {.lex_state = 101},
  [119] = {.lex_state = 78},
  [120] = {.lex_state = 87},
  [121] = {.lex_state = 105},
  [122] = {.lex_state = 105},
  [123] = {.lex_state = 105},
  [124] = {.lex_state = 87},
  [125] = {.lex_state = 107},
  [126] = {.lex_state = 80},
  [127] = {.lex_state = 112},
  [128] = {.lex_state = 80},
  [129] = {.lex_state = 144},
  [130] = {.lex_state = 144},
  [131] = {.lex_state = 87},
  [132] = {.lex_state = 112},
  [133] = {.lex_state = 112},
  [134] = {.lex_state = 112},
  [135] = {.lex_state = 112},
  [136] = {.lex_state = 112},
  [137] = {.lex_state = 112},
  [138] = {.lex_state = 117},
  [139] = {.lex_state = 87},
  [140] = {.lex_state = 95},
  [141] = {.lex_state = 117},
  [142] = {.lex_state = 80},
  [143] = {.lex_state = 78},
  [144] = {.lex_state = 80},
  [145] = {.lex_state = 80},
  [146] = {.lex_state = 103},
  [147] = {.lex_state = 80},
  [148] = {.lex_state = 80},
  [149] = {.lex_state = 80},
  [150] = {.lex_state = 139},
  [151] = {.lex_state = 126},
  [152] = {.lex_state = 126},
  [153] = {.lex_state = 80},
  [154] = {.lex_state = 78},
  [155] = {.lex_state = 80},
  [156] = {.lex_state = 126},
  [157] = {.lex_state = 80},
  [158] = {.lex_state = 80},
  [159] = {.lex_state = 144},
  [160] = {.lex_state = 126},
  [161] = {.lex_state = 112},
  [162] = {.lex_state = 112},
  [163] = {.lex_state = 112},
  [164] = {.lex_state = 128},
  [165] = {.lex_state = 126},
  [166] = {.lex_state = 95},
  [167] = {.lex_state = 103},
  [168] = {.lex_state = 126},
  [169] = {.lex_state = 126},
  [170] = {.lex_state = 126},
  [171] = {.lex_state = 139},
  [172] = {.lex_state = 87},
  [173] = {.lex_state = 80},
  [174] = {.lex_state = 78},
  [175] = {.lex_state = 80},
  [176] = {.lex_state = 80},
  [177] = {.lex_state = 80},
  [178] = {.lex_state = 139},
  [179] = {.lex_state = 137},
  [180] = {.lex_state = 105},
  [181] = {.lex_state = 137},
  [182] = {.lex_state = 137},
  [183] = {.lex_state = 87},
  [184] = {.lex_state = 105},
  [185] = {.lex_state = 78},
  [186] = {.lex_state = 105},
  [187] = {.lex_state = 105},
  [188] = {.lex_state = 105},
  [189] = {.lex_state = 87},
  [190] = {.lex_state = 80},
  [191] = {.lex_state = 144},
  [192] = {.lex_state = 80},
  [193] = {.lex_state = 112},
  [194] = {.lex_state = 80},
  [195] = {.lex_state = 80},
  [196] = {.lex_state = 80},
  [197] = {.lex_state = 144},
  [198] = {.lex_state = 80},
  [199] = {.lex_state = 87},
  [200] = {.lex_state = 112},
  [201] = {.lex_state = 112},
  [202] = {.lex_state = 112},
  [203] = {.lex_state = 112},
  [204] = {.lex_state = 87},
  [205] = {.lex_state = 95},
  [206] = {.lex_state = 78},
  [207] = {.lex_state = 78},
  [208] = {.lex_state = 80},
  [209] = {.lex_state = 80},
  [210] = {.lex_state = 80},
  [211] = {.lex_state = 139},
  [212] = {.lex_state = 126},
  [213] = {.lex_state = 78},
  [214] = {.lex_state = 80},
  [215] = {.lex_state = 126},
  [216] = {.lex_state = 80},
  [217] = {.lex_state = 144},
  [218] = {.lex_state = 126},
  [219] = {.lex_state = 112},
  [220] = {.lex_state = 112},
  [221] = {.lex_state = 126},
  [222] = {.lex_state = 126},
  [223] = {.lex_state = 126},
  [224] = {.lex_state = 126},
  [225] = {.lex_state = 78},
  [226] = {.lex_state = 87},
  [227] = {.lex_state = 78},
  [228] = {.lex_state = 80},
  [229] = {.lex_state = 80},
  [230] = {.lex_state = 105},
  [231] = {.lex_state = 137},
  [232] = {.lex_state = 105},
  [233] = {.lex_state = 101},
  [234] = {.lex_state = 137},
  [235] = {.lex_state = 137},
  [236] = {.lex_state = 105},
  [237] = {.lex_state = 87},
  [238] = {.lex_state = 78},
  [239] = {.lex_state = 105},
  [240] = {.lex_state = 105},
  [241] = {.lex_state = 105},
  [242] = {.lex_state = 87},
  [243] = {.lex_state = 144},
  [244] = {.lex_state = 80},
  [245] = {.lex_state = 112},
  [246] = {.lex_state = 80},
  [247] = {.lex_state = 80},
  [248] = {.lex_state = 87},
  [249] = {.lex_state = 112},
  [250] = {.lex_state = 112},
  [251] = {.lex_state = 80},
  [252] = {.lex_state = 126},
  [253] = {.lex_state = 78},
  [254] = {.lex_state = 126},
  [255] = {.lex_state = 144},
  [256] = {.lex_state = 126},
  [257] = {.lex_state = 112},
  [258] = {.lex_state = 126},
  [259] = {.lex_state = 87},
  [260] = {.lex_state = 80},
  [261] = {.lex_state = 105},
  [262] = {.lex_state = 137},
  [263] = {.lex_state = 137},
  [264] = {.lex_state = 137},
  [265] = {.lex_state = 137},
  [266] = {.lex_state = 137},
  [267] = {.lex_state = 105},
  [268] = {.lex_state = 78},
  [269] = {.lex_state = 105},
  [270] = {.lex_state = 87},
  [271] = {.lex_state = 87},
  [272] = {.lex_state = 112},
  [273] = {.lex_state = 126},
  [274] = {.lex_state = 126},
  [275] = {.lex_state = 126},
  [276] = {.lex_state = 105},
  [277] = {.lex_state = 87},
  [278] = {.lex_state = 137},
  [279] = {.lex_state = 105},
  [280] = {.lex_state = 87},
  [281] = {.lex_state = 137},
  [282] = {.lex_state = 87},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [anon_sym_CARET] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [anon_sym_AMP] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [aux_sym_param_block_token1] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_LBRACK_RBRACK] = ACTIONS(1),
    [anon_sym_AT_LBRACE] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [sym_number_expr] = ACTIONS(1),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_AT_LPAREN] = ACTIONS(1),
    [aux_sym_parameter_token1] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [sym_single_quote_string] = ACTIONS(1),
    [sym__typename_simple] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym__varname_simple] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
  },
  [1] = {
    [sym__statement] = STATE(15),
    [sym_command_expression] = STATE(19),
    [sym_flat_array_expression] = STATE(23),
    [sym_hashtable_expression] = STATE(23),
    [sym_type_expr] = STATE(16),
    [sym__attribute] = STATE(22),
    [sym__string_expr] = STATE(23),
    [sym_scriptblock] = STATE(23),
    [sym_param_block] = STATE(17),
    [aux_sym_array_expression_repeat1] = STATE(18),
    [sym_pipeline_statement] = STATE(15),
    [sym__pipeline_expression] = STATE(19),
    [sym_array_expression] = STATE(19),
    [sym__attributed_variable] = STATE(20),
    [sym_variable] = STATE(20),
    [sym_non_type_attribute] = STATE(22),
    [sym_source_file] = STATE(21),
    [aux_sym__attributed_variable_repeat1] = STATE(22),
    [sym__non_array_expression] = STATE(23),
    [sym__expression] = STATE(19),
    [sym_double_quote_string] = STATE(23),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACE] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_number_expr] = ACTIONS(13),
    [sym_bareword_string] = ACTIONS(15),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(17),
    [anon_sym_DOLLAR] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_AMP] = ACTIONS(23),
    [aux_sym_param_block_token1] = ACTIONS(25),
    [anon_sym_COMMA] = ACTIONS(27),
    [anon_sym_AT_LBRACE] = ACTIONS(29),
    [anon_sym_AT_LPAREN] = ACTIONS(31),
    [sym_single_quote_string] = ACTIONS(33),
    [anon_sym_DQUOTE] = ACTIONS(35),
  },
  [2] = {
    [sym_command_expression] = STATE(39),
    [sym_flat_array_expression] = STATE(42),
    [sym_hashtable_expression] = STATE(42),
    [sym_type_expr] = STATE(36),
    [sym__attribute] = STATE(41),
    [sym__string_expr] = STATE(42),
    [sym_scriptblock] = STATE(42),
    [aux_sym_array_expression_repeat1] = STATE(37),
    [sym_pipeline_statement] = STATE(38),
    [sym__pipeline_expression] = STATE(39),
    [sym_array_expression] = STATE(39),
    [sym__attributed_variable] = STATE(40),
    [sym_variable] = STATE(40),
    [sym_non_type_attribute] = STATE(41),
    [aux_sym__attributed_variable_repeat1] = STATE(41),
    [sym__non_array_expression] = STATE(42),
    [sym__expression] = STATE(39),
    [sym_double_quote_string] = STATE(42),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(37),
    [anon_sym_LPAREN] = ACTIONS(39),
    [anon_sym_LBRACE] = ACTIONS(41),
    [sym_comment] = ACTIONS(11),
    [sym_number_expr] = ACTIONS(43),
    [sym_bareword_string] = ACTIONS(45),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(47),
    [anon_sym_DOLLAR] = ACTIONS(49),
    [anon_sym_LBRACK] = ACTIONS(51),
    [anon_sym_AMP] = ACTIONS(53),
    [anon_sym_COMMA] = ACTIONS(55),
    [anon_sym_AT_LBRACE] = ACTIONS(57),
    [anon_sym_AT_LPAREN] = ACTIONS(59),
    [sym_single_quote_string] = ACTIONS(61),
    [anon_sym_DQUOTE] = ACTIONS(63),
  },
  [3] = {
    [sym_command_expression] = STATE(38),
    [sym_flat_array_expression] = STATE(44),
    [sym_hashtable_expression] = STATE(44),
    [sym_type_expr] = STATE(36),
    [sym__attribute] = STATE(41),
    [sym__string_expr] = STATE(44),
    [sym_scriptblock] = STATE(44),
    [aux_sym_array_expression_repeat1] = STATE(43),
    [sym__pipeline_expression] = STATE(38),
    [sym_array_expression] = STATE(38),
    [sym__attributed_variable] = STATE(44),
    [sym_variable] = STATE(44),
    [sym_non_type_attribute] = STATE(41),
    [aux_sym__attributed_variable_repeat1] = STATE(41),
    [sym__non_array_expression] = STATE(44),
    [sym__expression] = STATE(38),
    [sym_double_quote_string] = STATE(44),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(37),
    [anon_sym_LPAREN] = ACTIONS(39),
    [anon_sym_LBRACE] = ACTIONS(41),
    [sym_comment] = ACTIONS(11),
    [sym_number_expr] = ACTIONS(65),
    [sym_bareword_string] = ACTIONS(45),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(47),
    [anon_sym_DOLLAR] = ACTIONS(49),
    [anon_sym_LBRACK] = ACTIONS(51),
    [anon_sym_AMP] = ACTIONS(53),
    [anon_sym_COMMA] = ACTIONS(55),
    [anon_sym_AT_LBRACE] = ACTIONS(57),
    [anon_sym_AT_LPAREN] = ACTIONS(59),
    [sym_single_quote_string] = ACTIONS(67),
    [anon_sym_DQUOTE] = ACTIONS(63),
  },
  [4] = {
    [sym__statement] = STATE(45),
    [sym_command_expression] = STATE(48),
    [sym_flat_array_expression] = STATE(50),
    [sym_hashtable_expression] = STATE(50),
    [sym_type_expr] = STATE(16),
    [sym__attribute] = STATE(22),
    [sym__string_expr] = STATE(50),
    [sym_scriptblock] = STATE(50),
    [aux_sym_array_expression_repeat1] = STATE(46),
    [sym_param_block] = STATE(47),
    [sym_pipeline_statement] = STATE(45),
    [sym__pipeline_expression] = STATE(48),
    [sym_array_expression] = STATE(48),
    [sym__attributed_variable] = STATE(49),
    [sym_variable] = STATE(49),
    [sym_non_type_attribute] = STATE(22),
    [aux_sym__attributed_variable_repeat1] = STATE(22),
    [sym__non_array_expression] = STATE(50),
    [sym__expression] = STATE(48),
    [sym_double_quote_string] = STATE(50),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACE] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_number_expr] = ACTIONS(69),
    [sym_bareword_string] = ACTIONS(15),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(17),
    [anon_sym_DOLLAR] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_AMP] = ACTIONS(23),
    [aux_sym_param_block_token1] = ACTIONS(25),
    [anon_sym_COMMA] = ACTIONS(27),
    [anon_sym_AT_LBRACE] = ACTIONS(29),
    [anon_sym_AT_LPAREN] = ACTIONS(31),
    [sym_single_quote_string] = ACTIONS(71),
    [anon_sym_DQUOTE] = ACTIONS(35),
  },
  [5] = {
    [anon_sym_RBRACE] = ACTIONS(73),
    [anon_sym_CR_LF] = ACTIONS(75),
    [ts_builtin_sym_end] = ACTIONS(75),
    [anon_sym_SEMI] = ACTIONS(73),
    [sym_comment] = ACTIONS(11),
    [anon_sym_PIPE] = ACTIONS(73),
    [anon_sym_LF] = ACTIONS(73),
  },
  [6] = {
    [anon_sym_COMMA] = ACTIONS(77),
    [ts_builtin_sym_end] = ACTIONS(79),
    [sym_comment] = ACTIONS(11),
    [anon_sym_RPAREN] = ACTIONS(77),
    [anon_sym_PIPE] = ACTIONS(77),
    [anon_sym_RBRACE] = ACTIONS(77),
    [anon_sym_CR_LF] = ACTIONS(79),
    [anon_sym_SEMI] = ACTIONS(77),
    [anon_sym_LF] = ACTIONS(77),
  },
  [7] = {
    [sym__varname_special] = STATE(51),
    [anon_sym_CARET] = ACTIONS(81),
    [anon_sym_DOLLAR] = ACTIONS(81),
    [sym__varname_braced] = ACTIONS(81),
    [sym_comment] = ACTIONS(3),
    [anon_sym_QMARK] = ACTIONS(81),
    [sym__varname_simple] = ACTIONS(81),
  },
  [8] = {
    [sym__typename] = STATE(53),
    [sym__typename_array] = STATE(53),
    [sym__typename_generic] = STATE(53),
    [sym__typename_simple] = ACTIONS(83),
    [sym_comment] = ACTIONS(3),
  },
  [9] = {
    [sym_variable] = STATE(54),
    [sym__string_expr] = STATE(54),
    [sym_property_name] = STATE(55),
    [sym_double_quote_string] = STATE(54),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(17),
    [anon_sym_DOLLAR] = ACTIONS(85),
    [sym_single_quote_string] = ACTIONS(87),
    [sym_comment] = ACTIONS(11),
    [anon_sym_DQUOTE] = ACTIONS(35),
    [sym_bareword_string] = ACTIONS(89),
  },
  [10] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(91),
  },
  [11] = {
    [sym__attributed_variable] = STATE(57),
    [sym_variable] = STATE(57),
    [sym_non_type_attribute] = STATE(22),
    [sym_flat_array_expression] = STATE(57),
    [sym_hashtable_expression] = STATE(57),
    [sym_type_expr] = STATE(16),
    [aux_sym__attributed_variable_repeat1] = STATE(22),
    [sym__string_expr] = STATE(57),
    [sym_scriptblock] = STATE(57),
    [sym__attribute] = STATE(22),
    [sym__non_array_expression] = STATE(57),
    [sym_double_quote_string] = STATE(57),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_AT_LBRACE] = ACTIONS(29),
    [sym_number_expr] = ACTIONS(93),
    [anon_sym_AT_LPAREN] = ACTIONS(31),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(17),
    [anon_sym_DOLLAR] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [sym_single_quote_string] = ACTIONS(93),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(35),
  },
  [12] = {
    [aux_sym__newlines] = STATE(60),
    [sym__newline] = STATE(60),
    [sym_variable] = STATE(58),
    [sym__string_expr] = STATE(58),
    [sym_property_name] = STATE(61),
    [sym_hashtable_entry] = STATE(62),
    [sym_double_quote_string] = STATE(58),
    [sym_comment] = ACTIONS(11),
    [sym_bareword_string] = ACTIONS(95),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(97),
    [anon_sym_DOLLAR] = ACTIONS(49),
    [anon_sym_CR_LF] = ACTIONS(99),
    [sym_single_quote_string] = ACTIONS(95),
    [anon_sym_RBRACE] = ACTIONS(101),
    [anon_sym_DQUOTE] = ACTIONS(63),
    [anon_sym_LF] = ACTIONS(103),
  },
  [13] = {
    [aux_sym_flat_array_expression_repeat1] = STATE(64),
    [sym_flat_array_expression] = STATE(66),
    [sym_hashtable_expression] = STATE(66),
    [sym_type_expr] = STATE(16),
    [sym__attribute] = STATE(22),
    [sym__string_expr] = STATE(66),
    [sym_scriptblock] = STATE(66),
    [aux_sym_array_expression_repeat1] = STATE(65),
    [sym__terminator] = STATE(64),
    [sym_array_expression] = STATE(67),
    [sym__attributed_variable] = STATE(66),
    [sym_variable] = STATE(66),
    [sym_non_type_attribute] = STATE(22),
    [sym__newline] = STATE(64),
    [aux_sym__attributed_variable_repeat1] = STATE(22),
    [sym__non_array_expression] = STATE(66),
    [sym__expression] = STATE(67),
    [sym_double_quote_string] = STATE(66),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(105),
    [anon_sym_LPAREN] = ACTIONS(107),
    [anon_sym_LBRACE] = ACTIONS(109),
    [anon_sym_RPAREN] = ACTIONS(111),
    [sym_number_expr] = ACTIONS(113),
    [sym_comment] = ACTIONS(11),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(115),
    [anon_sym_DOLLAR] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(117),
    [anon_sym_SEMI] = ACTIONS(119),
    [anon_sym_LF] = ACTIONS(119),
    [anon_sym_COMMA] = ACTIONS(27),
    [anon_sym_AT_LBRACE] = ACTIONS(121),
    [anon_sym_AT_LPAREN] = ACTIONS(123),
    [anon_sym_CR_LF] = ACTIONS(125),
    [sym_single_quote_string] = ACTIONS(113),
    [anon_sym_DQUOTE] = ACTIONS(35),
  },
  [14] = {
    [sym_variable] = STATE(70),
    [aux_sym_double_quote_string_repeat1] = STATE(70),
    [anon_sym_DOLLAR] = ACTIONS(127),
    [aux_sym_double_quote_string_token1] = ACTIONS(129),
    [sym_comment] = ACTIONS(11),
    [anon_sym_DQUOTE] = ACTIONS(131),
  },
  [15] = {
    [aux_sym_source_file_repeat1] = STATE(71),
    [sym__terminator] = STATE(72),
    [sym__newline] = STATE(72),
    [ts_builtin_sym_end] = ACTIONS(133),
    [anon_sym_CR_LF] = ACTIONS(135),
    [anon_sym_SEMI] = ACTIONS(137),
    [sym_comment] = ACTIONS(11),
    [anon_sym_LF] = ACTIONS(137),
  },
  [16] = {
    [anon_sym_COMMA] = ACTIONS(139),
    [ts_builtin_sym_end] = ACTIONS(141),
    [sym_comment] = ACTIONS(11),
    [anon_sym_RPAREN] = ACTIONS(139),
    [anon_sym_PIPE] = ACTIONS(139),
    [anon_sym_DOLLAR] = ACTIONS(143),
    [anon_sym_CR_LF] = ACTIONS(141),
    [anon_sym_LBRACK] = ACTIONS(143),
    [anon_sym_SEMI] = ACTIONS(139),
    [anon_sym_RBRACE] = ACTIONS(139),
    [anon_sym_LF] = ACTIONS(139),
  },
  [17] = {
    [sym__statement] = STATE(73),
    [sym_command_expression] = STATE(19),
    [sym_flat_array_expression] = STATE(23),
    [sym_hashtable_expression] = STATE(23),
    [sym_type_expr] = STATE(16),
    [sym__attribute] = STATE(22),
    [sym__string_expr] = STATE(23),
    [sym_scriptblock] = STATE(23),
    [aux_sym_array_expression_repeat1] = STATE(18),
    [sym_pipeline_statement] = STATE(73),
    [sym__pipeline_expression] = STATE(19),
    [sym_array_expression] = STATE(19),
    [sym__attributed_variable] = STATE(20),
    [sym_variable] = STATE(20),
    [sym_non_type_attribute] = STATE(22),
    [aux_sym__attributed_variable_repeat1] = STATE(22),
    [sym__non_array_expression] = STATE(23),
    [sym__expression] = STATE(19),
    [sym_double_quote_string] = STATE(23),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACE] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_number_expr] = ACTIONS(13),
    [sym_bareword_string] = ACTIONS(15),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(17),
    [anon_sym_DOLLAR] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_AMP] = ACTIONS(23),
    [anon_sym_COMMA] = ACTIONS(27),
    [anon_sym_AT_LBRACE] = ACTIONS(29),
    [anon_sym_AT_LPAREN] = ACTIONS(31),
    [sym_single_quote_string] = ACTIONS(33),
    [anon_sym_DQUOTE] = ACTIONS(35),
  },
  [18] = {
    [aux_sym_array_expression_repeat1] = STATE(74),
    [anon_sym_COMMA] = ACTIONS(27),
    [anon_sym_CR_LF] = ACTIONS(145),
    [ts_builtin_sym_end] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(147),
    [sym_comment] = ACTIONS(11),
    [anon_sym_PIPE] = ACTIONS(147),
    [anon_sym_LF] = ACTIONS(147),
  },
  [19] = {
    [aux_sym_pipeline_statement_repeat1] = STATE(76),
    [anon_sym_CR_LF] = ACTIONS(149),
    [ts_builtin_sym_end] = ACTIONS(149),
    [anon_sym_SEMI] = ACTIONS(151),
    [sym_comment] = ACTIONS(11),
    [anon_sym_PIPE] = ACTIONS(153),
    [anon_sym_LF] = ACTIONS(151),
  },
  [20] = {
    [anon_sym_COMMA] = ACTIONS(139),
    [anon_sym_EQ] = ACTIONS(155),
    [ts_builtin_sym_end] = ACTIONS(141),
    [sym_comment] = ACTIONS(11),
    [anon_sym_PIPE] = ACTIONS(139),
    [anon_sym_CR_LF] = ACTIONS(141),
    [anon_sym_SEMI] = ACTIONS(139),
    [anon_sym_LF] = ACTIONS(139),
  },
  [21] = {
    [sym_comment] = ACTIONS(3),
    [ts_builtin_sym_end] = ACTIONS(157),
  },
  [22] = {
    [sym_type_expr] = STATE(78),
    [sym__attribute] = STATE(78),
    [aux_sym__attributed_variable_repeat1] = STATE(78),
    [sym_variable] = STATE(79),
    [sym_non_type_attribute] = STATE(78),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOLLAR] = ACTIONS(85),
    [anon_sym_LBRACK] = ACTIONS(51),
  },
  [23] = {
    [aux_sym_array_expression_repeat1] = STATE(80),
    [anon_sym_COMMA] = ACTIONS(27),
    [anon_sym_CR_LF] = ACTIONS(159),
    [ts_builtin_sym_end] = ACTIONS(159),
    [anon_sym_SEMI] = ACTIONS(161),
    [sym_comment] = ACTIONS(11),
    [anon_sym_PIPE] = ACTIONS(161),
    [anon_sym_LF] = ACTIONS(161),
  },
  [24] = {
    [sym__attributed_variable] = STATE(81),
    [sym_variable] = STATE(81),
    [sym_non_type_attribute] = STATE(41),
    [sym_flat_array_expression] = STATE(81),
    [sym_hashtable_expression] = STATE(81),
    [sym_type_expr] = STATE(36),
    [aux_sym__attributed_variable_repeat1] = STATE(41),
    [sym__string_expr] = STATE(81),
    [sym_scriptblock] = STATE(81),
    [sym__attribute] = STATE(41),
    [sym__non_array_expression] = STATE(81),
    [sym_double_quote_string] = STATE(81),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(37),
    [anon_sym_LPAREN] = ACTIONS(39),
    [anon_sym_LBRACE] = ACTIONS(41),
    [anon_sym_AT_LBRACE] = ACTIONS(57),
    [sym_number_expr] = ACTIONS(163),
    [anon_sym_AT_LPAREN] = ACTIONS(59),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(47),
    [anon_sym_DOLLAR] = ACTIONS(49),
    [anon_sym_LBRACK] = ACTIONS(51),
    [sym_single_quote_string] = ACTIONS(163),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(63),
  },
  [25] = {
    [sym_command_expression] = STATE(39),
    [sym_flat_array_expression] = STATE(42),
    [sym_hashtable_expression] = STATE(42),
    [sym_type_expr] = STATE(36),
    [sym__attribute] = STATE(41),
    [sym__string_expr] = STATE(42),
    [sym_scriptblock] = STATE(42),
    [aux_sym_array_expression_repeat1] = STATE(37),
    [sym_pipeline_statement] = STATE(82),
    [sym__pipeline_expression] = STATE(39),
    [sym_array_expression] = STATE(39),
    [sym__attributed_variable] = STATE(40),
    [sym_variable] = STATE(40),
    [sym_non_type_attribute] = STATE(41),
    [aux_sym__attributed_variable_repeat1] = STATE(41),
    [sym__non_array_expression] = STATE(42),
    [sym__expression] = STATE(39),
    [sym_double_quote_string] = STATE(42),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(37),
    [anon_sym_LPAREN] = ACTIONS(39),
    [anon_sym_LBRACE] = ACTIONS(41),
    [sym_comment] = ACTIONS(11),
    [sym_number_expr] = ACTIONS(43),
    [sym_bareword_string] = ACTIONS(45),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(47),
    [anon_sym_DOLLAR] = ACTIONS(49),
    [anon_sym_LBRACK] = ACTIONS(51),
    [anon_sym_AMP] = ACTIONS(53),
    [anon_sym_COMMA] = ACTIONS(55),
    [anon_sym_AT_LBRACE] = ACTIONS(57),
    [anon_sym_AT_LPAREN] = ACTIONS(59),
    [sym_single_quote_string] = ACTIONS(61),
    [anon_sym_DQUOTE] = ACTIONS(63),
  },
  [26] = {
    [sym_command_expression] = STATE(82),
    [sym_flat_array_expression] = STATE(44),
    [sym_hashtable_expression] = STATE(44),
    [sym_type_expr] = STATE(36),
    [sym__attribute] = STATE(41),
    [sym__string_expr] = STATE(44),
    [sym_scriptblock] = STATE(44),
    [aux_sym_array_expression_repeat1] = STATE(43),
    [sym__pipeline_expression] = STATE(82),
    [sym_array_expression] = STATE(82),
    [sym__attributed_variable] = STATE(44),
    [sym_variable] = STATE(44),
    [sym_non_type_attribute] = STATE(41),
    [aux_sym__attributed_variable_repeat1] = STATE(41),
    [sym__non_array_expression] = STATE(44),
    [sym__expression] = STATE(82),
    [sym_double_quote_string] = STATE(44),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(37),
    [anon_sym_LPAREN] = ACTIONS(39),
    [anon_sym_LBRACE] = ACTIONS(41),
    [sym_comment] = ACTIONS(11),
    [sym_number_expr] = ACTIONS(65),
    [sym_bareword_string] = ACTIONS(45),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(47),
    [anon_sym_DOLLAR] = ACTIONS(49),
    [anon_sym_LBRACK] = ACTIONS(51),
    [anon_sym_AMP] = ACTIONS(53),
    [anon_sym_COMMA] = ACTIONS(55),
    [anon_sym_AT_LBRACE] = ACTIONS(57),
    [anon_sym_AT_LPAREN] = ACTIONS(59),
    [sym_single_quote_string] = ACTIONS(67),
    [anon_sym_DQUOTE] = ACTIONS(63),
  },
  [27] = {
    [sym__statement] = STATE(83),
    [sym_command_expression] = STATE(48),
    [sym_flat_array_expression] = STATE(50),
    [sym_hashtable_expression] = STATE(50),
    [sym_type_expr] = STATE(16),
    [sym__attribute] = STATE(22),
    [sym__string_expr] = STATE(50),
    [sym_scriptblock] = STATE(50),
    [aux_sym_array_expression_repeat1] = STATE(46),
    [sym_param_block] = STATE(84),
    [sym_pipeline_statement] = STATE(83),
    [sym__pipeline_expression] = STATE(48),
    [sym_array_expression] = STATE(48),
    [sym__attributed_variable] = STATE(49),
    [sym_variable] = STATE(49),
    [sym_non_type_attribute] = STATE(22),
    [aux_sym__attributed_variable_repeat1] = STATE(22),
    [sym__non_array_expression] = STATE(50),
    [sym__expression] = STATE(48),
    [sym_double_quote_string] = STATE(50),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACE] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_number_expr] = ACTIONS(69),
    [sym_bareword_string] = ACTIONS(15),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(17),
    [anon_sym_DOLLAR] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_AMP] = ACTIONS(23),
    [aux_sym_param_block_token1] = ACTIONS(25),
    [anon_sym_COMMA] = ACTIONS(27),
    [anon_sym_AT_LBRACE] = ACTIONS(29),
    [anon_sym_AT_LPAREN] = ACTIONS(31),
    [sym_single_quote_string] = ACTIONS(71),
    [anon_sym_DQUOTE] = ACTIONS(35),
  },
  [28] = {
    [aux_sym__newlines] = STATE(86),
    [sym__newline] = STATE(86),
    [sym_variable] = STATE(58),
    [sym__string_expr] = STATE(58),
    [sym_property_name] = STATE(61),
    [sym_hashtable_entry] = STATE(87),
    [sym_double_quote_string] = STATE(58),
    [sym_comment] = ACTIONS(11),
    [sym_bareword_string] = ACTIONS(95),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(97),
    [anon_sym_DOLLAR] = ACTIONS(49),
    [anon_sym_CR_LF] = ACTIONS(165),
    [sym_single_quote_string] = ACTIONS(95),
    [anon_sym_RBRACE] = ACTIONS(167),
    [anon_sym_DQUOTE] = ACTIONS(63),
    [anon_sym_LF] = ACTIONS(169),
  },
  [29] = {
    [aux_sym_flat_array_expression_repeat1] = STATE(89),
    [sym_flat_array_expression] = STATE(66),
    [sym_hashtable_expression] = STATE(66),
    [sym_type_expr] = STATE(16),
    [sym__attribute] = STATE(22),
    [sym__string_expr] = STATE(66),
    [sym_scriptblock] = STATE(66),
    [aux_sym_array_expression_repeat1] = STATE(65),
    [sym__terminator] = STATE(89),
    [sym_array_expression] = STATE(90),
    [sym__attributed_variable] = STATE(66),
    [sym_variable] = STATE(66),
    [sym_non_type_attribute] = STATE(22),
    [sym__newline] = STATE(89),
    [aux_sym__attributed_variable_repeat1] = STATE(22),
    [sym__non_array_expression] = STATE(66),
    [sym__expression] = STATE(90),
    [sym_double_quote_string] = STATE(66),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(105),
    [anon_sym_LPAREN] = ACTIONS(107),
    [anon_sym_LBRACE] = ACTIONS(109),
    [anon_sym_RPAREN] = ACTIONS(171),
    [sym_number_expr] = ACTIONS(113),
    [sym_comment] = ACTIONS(11),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(115),
    [anon_sym_DOLLAR] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(117),
    [anon_sym_SEMI] = ACTIONS(173),
    [anon_sym_LF] = ACTIONS(173),
    [anon_sym_COMMA] = ACTIONS(27),
    [anon_sym_AT_LBRACE] = ACTIONS(121),
    [anon_sym_AT_LPAREN] = ACTIONS(123),
    [anon_sym_CR_LF] = ACTIONS(175),
    [sym_single_quote_string] = ACTIONS(113),
    [anon_sym_DQUOTE] = ACTIONS(35),
  },
  [30] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(75),
    [anon_sym_PIPE] = ACTIONS(75),
  },
  [31] = {
    [sym__varname_special] = STATE(91),
    [anon_sym_CARET] = ACTIONS(177),
    [anon_sym_DOLLAR] = ACTIONS(177),
    [sym__varname_braced] = ACTIONS(177),
    [sym_comment] = ACTIONS(3),
    [anon_sym_QMARK] = ACTIONS(177),
    [sym__varname_simple] = ACTIONS(177),
  },
  [32] = {
    [sym__typename] = STATE(92),
    [sym__typename_array] = STATE(92),
    [sym__typename_generic] = STATE(92),
    [sym__typename_simple] = ACTIONS(83),
    [sym_comment] = ACTIONS(3),
  },
  [33] = {
    [sym_variable] = STATE(58),
    [sym__string_expr] = STATE(58),
    [sym_property_name] = STATE(93),
    [sym_double_quote_string] = STATE(58),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(47),
    [anon_sym_DOLLAR] = ACTIONS(179),
    [sym_single_quote_string] = ACTIONS(181),
    [sym_comment] = ACTIONS(11),
    [anon_sym_DQUOTE] = ACTIONS(63),
    [sym_bareword_string] = ACTIONS(95),
  },
  [34] = {
    [anon_sym_COMMA] = ACTIONS(79),
    [anon_sym_EQ] = ACTIONS(79),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(79),
    [anon_sym_PIPE] = ACTIONS(79),
  },
  [35] = {
    [sym_variable] = STATE(96),
    [aux_sym_double_quote_string_repeat1] = STATE(96),
    [anon_sym_DOLLAR] = ACTIONS(183),
    [aux_sym_double_quote_string_token1] = ACTIONS(185),
    [sym_comment] = ACTIONS(11),
    [anon_sym_DQUOTE] = ACTIONS(187),
  },
  [36] = {
    [anon_sym_COMMA] = ACTIONS(141),
    [anon_sym_DOLLAR] = ACTIONS(189),
    [anon_sym_LBRACK] = ACTIONS(189),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(141),
    [anon_sym_PIPE] = ACTIONS(141),
  },
  [37] = {
    [aux_sym_array_expression_repeat1] = STATE(97),
    [anon_sym_COMMA] = ACTIONS(191),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(145),
    [anon_sym_PIPE] = ACTIONS(145),
  },
  [38] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(193),
  },
  [39] = {
    [aux_sym_pipeline_statement_repeat1] = STATE(100),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(149),
    [anon_sym_PIPE] = ACTIONS(195),
  },
  [40] = {
    [anon_sym_COMMA] = ACTIONS(141),
    [anon_sym_EQ] = ACTIONS(197),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(141),
    [anon_sym_PIPE] = ACTIONS(141),
  },
  [41] = {
    [sym_type_expr] = STATE(78),
    [sym__attribute] = STATE(78),
    [aux_sym__attributed_variable_repeat1] = STATE(78),
    [sym_variable] = STATE(102),
    [sym_non_type_attribute] = STATE(78),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOLLAR] = ACTIONS(179),
    [anon_sym_LBRACK] = ACTIONS(51),
  },
  [42] = {
    [aux_sym_array_expression_repeat1] = STATE(103),
    [anon_sym_COMMA] = ACTIONS(191),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(159),
    [anon_sym_PIPE] = ACTIONS(159),
  },
  [43] = {
    [aux_sym_array_expression_repeat1] = STATE(104),
    [anon_sym_COMMA] = ACTIONS(191),
    [anon_sym_RPAREN] = ACTIONS(145),
    [sym_comment] = ACTIONS(3),
  },
  [44] = {
    [aux_sym_array_expression_repeat1] = STATE(105),
    [anon_sym_COMMA] = ACTIONS(191),
    [anon_sym_RPAREN] = ACTIONS(159),
    [sym_comment] = ACTIONS(3),
  },
  [45] = {
    [aux_sym_source_file_repeat1] = STATE(107),
    [sym__terminator] = STATE(108),
    [sym__newline] = STATE(108),
    [anon_sym_RBRACE] = ACTIONS(199),
    [anon_sym_CR_LF] = ACTIONS(201),
    [anon_sym_SEMI] = ACTIONS(203),
    [sym_comment] = ACTIONS(11),
    [anon_sym_LF] = ACTIONS(203),
  },
  [46] = {
    [aux_sym_array_expression_repeat1] = STATE(109),
    [anon_sym_COMMA] = ACTIONS(27),
    [anon_sym_RBRACE] = ACTIONS(147),
    [anon_sym_CR_LF] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(147),
    [sym_comment] = ACTIONS(11),
    [anon_sym_PIPE] = ACTIONS(147),
    [anon_sym_LF] = ACTIONS(147),
  },
  [47] = {
    [sym__statement] = STATE(110),
    [sym_command_expression] = STATE(48),
    [sym_flat_array_expression] = STATE(50),
    [sym_hashtable_expression] = STATE(50),
    [sym_type_expr] = STATE(16),
    [sym__attribute] = STATE(22),
    [sym__string_expr] = STATE(50),
    [sym_scriptblock] = STATE(50),
    [aux_sym_array_expression_repeat1] = STATE(46),
    [sym_pipeline_statement] = STATE(110),
    [sym__pipeline_expression] = STATE(48),
    [sym_array_expression] = STATE(48),
    [sym__attributed_variable] = STATE(49),
    [sym_variable] = STATE(49),
    [sym_non_type_attribute] = STATE(22),
    [aux_sym__attributed_variable_repeat1] = STATE(22),
    [sym__non_array_expression] = STATE(50),
    [sym__expression] = STATE(48),
    [sym_double_quote_string] = STATE(50),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACE] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_number_expr] = ACTIONS(69),
    [sym_bareword_string] = ACTIONS(15),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(17),
    [anon_sym_DOLLAR] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_AMP] = ACTIONS(23),
    [anon_sym_COMMA] = ACTIONS(27),
    [anon_sym_AT_LBRACE] = ACTIONS(29),
    [anon_sym_AT_LPAREN] = ACTIONS(31),
    [sym_single_quote_string] = ACTIONS(71),
    [anon_sym_DQUOTE] = ACTIONS(35),
  },
  [48] = {
    [aux_sym_pipeline_statement_repeat1] = STATE(111),
    [anon_sym_RBRACE] = ACTIONS(151),
    [anon_sym_CR_LF] = ACTIONS(149),
    [anon_sym_SEMI] = ACTIONS(151),
    [sym_comment] = ACTIONS(11),
    [anon_sym_PIPE] = ACTIONS(153),
    [anon_sym_LF] = ACTIONS(151),
  },
  [49] = {
    [anon_sym_COMMA] = ACTIONS(139),
    [anon_sym_EQ] = ACTIONS(205),
    [sym_comment] = ACTIONS(11),
    [anon_sym_PIPE] = ACTIONS(139),
    [anon_sym_RBRACE] = ACTIONS(139),
    [anon_sym_CR_LF] = ACTIONS(141),
    [anon_sym_SEMI] = ACTIONS(139),
    [anon_sym_LF] = ACTIONS(139),
  },
  [50] = {
    [aux_sym_array_expression_repeat1] = STATE(113),
    [anon_sym_COMMA] = ACTIONS(27),
    [anon_sym_RBRACE] = ACTIONS(161),
    [anon_sym_CR_LF] = ACTIONS(159),
    [anon_sym_SEMI] = ACTIONS(161),
    [sym_comment] = ACTIONS(11),
    [anon_sym_PIPE] = ACTIONS(161),
    [anon_sym_LF] = ACTIONS(161),
  },
  [51] = {
    [anon_sym_COMMA] = ACTIONS(207),
    [anon_sym_EQ] = ACTIONS(207),
    [ts_builtin_sym_end] = ACTIONS(209),
    [sym_comment] = ACTIONS(11),
    [anon_sym_RPAREN] = ACTIONS(207),
    [anon_sym_PIPE] = ACTIONS(207),
    [anon_sym_RBRACE] = ACTIONS(207),
    [anon_sym_CR_LF] = ACTIONS(209),
    [anon_sym_SEMI] = ACTIONS(207),
    [anon_sym_LF] = ACTIONS(207),
  },
  [52] = {
    [anon_sym_LBRACK_RBRACK] = ACTIONS(211),
    [anon_sym_LBRACK] = ACTIONS(213),
    [anon_sym_LPAREN] = ACTIONS(215),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACK] = ACTIONS(211),
  },
  [53] = {
    [anon_sym_LBRACK_RBRACK] = ACTIONS(217),
    [anon_sym_LBRACK] = ACTIONS(219),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACK] = ACTIONS(221),
  },
  [54] = {
    [anon_sym_RBRACE] = ACTIONS(223),
    [anon_sym_CR_LF] = ACTIONS(225),
    [ts_builtin_sym_end] = ACTIONS(225),
    [anon_sym_SEMI] = ACTIONS(223),
    [sym_comment] = ACTIONS(11),
    [anon_sym_PIPE] = ACTIONS(223),
    [anon_sym_LF] = ACTIONS(223),
  },
  [55] = {
    [anon_sym_RBRACE] = ACTIONS(227),
    [anon_sym_CR_LF] = ACTIONS(229),
    [ts_builtin_sym_end] = ACTIONS(229),
    [anon_sym_SEMI] = ACTIONS(227),
    [sym_comment] = ACTIONS(11),
    [anon_sym_PIPE] = ACTIONS(227),
    [anon_sym_LF] = ACTIONS(227),
  },
  [56] = {
    [sym_type_expr] = STATE(120),
    [sym__attribute] = STATE(120),
    [sym_variable] = STATE(121),
    [sym_param_block_variable] = STATE(122),
    [sym_non_type_attribute] = STATE(120),
    [aux_sym_param_block_variable_repeat1] = STATE(123),
    [anon_sym_DOLLAR] = ACTIONS(179),
    [anon_sym_LBRACK] = ACTIONS(231),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(233),
  },
  [57] = {
    [anon_sym_COMMA] = ACTIONS(235),
    [ts_builtin_sym_end] = ACTIONS(237),
    [sym_comment] = ACTIONS(11),
    [anon_sym_RPAREN] = ACTIONS(235),
    [anon_sym_PIPE] = ACTIONS(235),
    [anon_sym_RBRACE] = ACTIONS(235),
    [anon_sym_CR_LF] = ACTIONS(237),
    [anon_sym_SEMI] = ACTIONS(235),
    [anon_sym_LF] = ACTIONS(235),
  },
  [58] = {
    [anon_sym_EQ] = ACTIONS(225),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(225),
    [anon_sym_PIPE] = ACTIONS(225),
  },
  [59] = {
    [anon_sym_COMMA] = ACTIONS(239),
    [ts_builtin_sym_end] = ACTIONS(241),
    [sym_comment] = ACTIONS(11),
    [anon_sym_RPAREN] = ACTIONS(239),
    [anon_sym_PIPE] = ACTIONS(239),
    [anon_sym_RBRACE] = ACTIONS(239),
    [anon_sym_CR_LF] = ACTIONS(241),
    [anon_sym_SEMI] = ACTIONS(239),
    [anon_sym_LF] = ACTIONS(239),
  },
  [60] = {
    [aux_sym__newlines] = STATE(125),
    [sym__newline] = STATE(125),
    [sym_variable] = STATE(58),
    [sym__string_expr] = STATE(58),
    [sym_property_name] = STATE(61),
    [sym_hashtable_entry] = STATE(126),
    [sym_double_quote_string] = STATE(58),
    [sym_comment] = ACTIONS(11),
    [sym_bareword_string] = ACTIONS(95),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(97),
    [anon_sym_DOLLAR] = ACTIONS(49),
    [anon_sym_CR_LF] = ACTIONS(243),
    [sym_single_quote_string] = ACTIONS(95),
    [anon_sym_RBRACE] = ACTIONS(245),
    [anon_sym_DQUOTE] = ACTIONS(63),
    [anon_sym_LF] = ACTIONS(247),
  },
  [61] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_EQ] = ACTIONS(249),
  },
  [62] = {
    [sym__newline] = STATE(130),
    [aux_sym_flat_array_expression_repeat1] = STATE(129),
    [sym__terminator] = STATE(130),
    [aux_sym_hashtable_expression_repeat1] = STATE(128),
    [anon_sym_RBRACE] = ACTIONS(245),
    [anon_sym_CR_LF] = ACTIONS(251),
    [anon_sym_SEMI] = ACTIONS(253),
    [sym_comment] = ACTIONS(11),
    [anon_sym_LF] = ACTIONS(253),
  },
  [63] = {
    [anon_sym_COMMA] = ACTIONS(255),
    [ts_builtin_sym_end] = ACTIONS(257),
    [sym_comment] = ACTIONS(11),
    [anon_sym_RPAREN] = ACTIONS(255),
    [anon_sym_PIPE] = ACTIONS(255),
    [anon_sym_RBRACE] = ACTIONS(255),
    [anon_sym_CR_LF] = ACTIONS(257),
    [anon_sym_SEMI] = ACTIONS(255),
    [anon_sym_LF] = ACTIONS(255),
  },
  [64] = {
    [aux_sym_flat_array_expression_repeat1] = STATE(132),
    [sym_flat_array_expression] = STATE(66),
    [sym_hashtable_expression] = STATE(66),
    [sym_type_expr] = STATE(16),
    [sym__attribute] = STATE(22),
    [sym__string_expr] = STATE(66),
    [sym_scriptblock] = STATE(66),
    [aux_sym_array_expression_repeat1] = STATE(65),
    [sym__terminator] = STATE(132),
    [sym_array_expression] = STATE(133),
    [sym__attributed_variable] = STATE(66),
    [sym_variable] = STATE(66),
    [sym_non_type_attribute] = STATE(22),
    [sym__newline] = STATE(132),
    [aux_sym__attributed_variable_repeat1] = STATE(22),
    [sym__non_array_expression] = STATE(66),
    [sym__expression] = STATE(133),
    [sym_double_quote_string] = STATE(66),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(105),
    [anon_sym_LPAREN] = ACTIONS(107),
    [anon_sym_LBRACE] = ACTIONS(109),
    [anon_sym_RPAREN] = ACTIONS(259),
    [sym_number_expr] = ACTIONS(113),
    [sym_comment] = ACTIONS(11),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(115),
    [anon_sym_DOLLAR] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(117),
    [anon_sym_SEMI] = ACTIONS(261),
    [anon_sym_LF] = ACTIONS(261),
    [anon_sym_COMMA] = ACTIONS(27),
    [anon_sym_AT_LBRACE] = ACTIONS(121),
    [anon_sym_AT_LPAREN] = ACTIONS(123),
    [anon_sym_CR_LF] = ACTIONS(263),
    [sym_single_quote_string] = ACTIONS(113),
    [anon_sym_DQUOTE] = ACTIONS(35),
  },
  [65] = {
    [aux_sym_array_expression_repeat1] = STATE(134),
    [anon_sym_COMMA] = ACTIONS(27),
    [anon_sym_CR_LF] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(147),
    [anon_sym_RPAREN] = ACTIONS(147),
    [sym_comment] = ACTIONS(11),
    [anon_sym_LF] = ACTIONS(147),
  },
  [66] = {
    [aux_sym_array_expression_repeat1] = STATE(135),
    [anon_sym_COMMA] = ACTIONS(27),
    [anon_sym_CR_LF] = ACTIONS(159),
    [anon_sym_SEMI] = ACTIONS(161),
    [anon_sym_RPAREN] = ACTIONS(161),
    [sym_comment] = ACTIONS(11),
    [anon_sym_LF] = ACTIONS(161),
  },
  [67] = {
    [aux_sym_flat_array_expression_repeat1] = STATE(136),
    [aux_sym_flat_array_expression_repeat2] = STATE(137),
    [sym__terminator] = STATE(136),
    [sym__newline] = STATE(136),
    [anon_sym_CR_LF] = ACTIONS(265),
    [anon_sym_SEMI] = ACTIONS(267),
    [anon_sym_RPAREN] = ACTIONS(259),
    [sym_comment] = ACTIONS(11),
    [anon_sym_LF] = ACTIONS(267),
  },
  [68] = {
    [sym__varname_special] = STATE(138),
    [anon_sym_CARET] = ACTIONS(269),
    [anon_sym_DOLLAR] = ACTIONS(269),
    [sym__varname_braced] = ACTIONS(269),
    [sym_comment] = ACTIONS(3),
    [anon_sym_QMARK] = ACTIONS(269),
    [sym__varname_simple] = ACTIONS(269),
    [anon_sym_DQUOTE] = ACTIONS(271),
  },
  [69] = {
    [anon_sym_COMMA] = ACTIONS(273),
    [ts_builtin_sym_end] = ACTIONS(275),
    [sym_comment] = ACTIONS(11),
    [anon_sym_RPAREN] = ACTIONS(273),
    [anon_sym_PIPE] = ACTIONS(273),
    [anon_sym_RBRACE] = ACTIONS(273),
    [anon_sym_CR_LF] = ACTIONS(275),
    [anon_sym_SEMI] = ACTIONS(273),
    [anon_sym_LF] = ACTIONS(273),
  },
  [70] = {
    [sym_variable] = STATE(141),
    [aux_sym_double_quote_string_repeat1] = STATE(141),
    [anon_sym_DOLLAR] = ACTIONS(277),
    [aux_sym_double_quote_string_token1] = ACTIONS(279),
    [sym_comment] = ACTIONS(11),
    [anon_sym_DQUOTE] = ACTIONS(281),
  },
  [71] = {
    [aux_sym_source_file_repeat1] = STATE(142),
    [sym__terminator] = STATE(143),
    [sym__newline] = STATE(143),
    [ts_builtin_sym_end] = ACTIONS(283),
    [anon_sym_CR_LF] = ACTIONS(285),
    [anon_sym_SEMI] = ACTIONS(287),
    [sym_comment] = ACTIONS(11),
    [anon_sym_LF] = ACTIONS(287),
  },
  [72] = {
    [sym__statement] = STATE(144),
    [sym_command_expression] = STATE(19),
    [sym_flat_array_expression] = STATE(23),
    [sym_hashtable_expression] = STATE(23),
    [sym_type_expr] = STATE(16),
    [sym__attribute] = STATE(22),
    [sym__string_expr] = STATE(23),
    [sym_scriptblock] = STATE(23),
    [aux_sym_array_expression_repeat1] = STATE(18),
    [sym_pipeline_statement] = STATE(144),
    [sym__pipeline_expression] = STATE(19),
    [sym_array_expression] = STATE(19),
    [sym__attributed_variable] = STATE(20),
    [sym_variable] = STATE(20),
    [sym_non_type_attribute] = STATE(22),
    [aux_sym__attributed_variable_repeat1] = STATE(22),
    [sym__non_array_expression] = STATE(23),
    [sym__expression] = STATE(19),
    [sym_double_quote_string] = STATE(23),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACE] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_number_expr] = ACTIONS(13),
    [sym_bareword_string] = ACTIONS(15),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(17),
    [anon_sym_DOLLAR] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_AMP] = ACTIONS(23),
    [anon_sym_COMMA] = ACTIONS(27),
    [ts_builtin_sym_end] = ACTIONS(283),
    [anon_sym_AT_LBRACE] = ACTIONS(29),
    [anon_sym_AT_LPAREN] = ACTIONS(31),
    [sym_single_quote_string] = ACTIONS(33),
    [anon_sym_DQUOTE] = ACTIONS(35),
  },
  [73] = {
    [aux_sym_source_file_repeat1] = STATE(145),
    [sym__terminator] = STATE(143),
    [sym__newline] = STATE(143),
    [ts_builtin_sym_end] = ACTIONS(283),
    [anon_sym_CR_LF] = ACTIONS(285),
    [anon_sym_SEMI] = ACTIONS(287),
    [sym_comment] = ACTIONS(11),
    [anon_sym_LF] = ACTIONS(287),
  },
  [74] = {
    [aux_sym_array_expression_repeat1] = STATE(74),
    [anon_sym_COMMA] = ACTIONS(289),
    [anon_sym_CR_LF] = ACTIONS(237),
    [ts_builtin_sym_end] = ACTIONS(237),
    [anon_sym_SEMI] = ACTIONS(235),
    [sym_comment] = ACTIONS(11),
    [anon_sym_PIPE] = ACTIONS(235),
    [anon_sym_LF] = ACTIONS(235),
  },
  [75] = {
    [sym_command_expression] = STATE(147),
    [sym__newline] = STATE(146),
    [sym_bareword_string] = ACTIONS(15),
    [anon_sym_CR_LF] = ACTIONS(292),
    [anon_sym_AMP] = ACTIONS(294),
    [sym_comment] = ACTIONS(11),
    [anon_sym_LF] = ACTIONS(296),
  },
  [76] = {
    [aux_sym_pipeline_statement_repeat1] = STATE(148),
    [anon_sym_CR_LF] = ACTIONS(298),
    [ts_builtin_sym_end] = ACTIONS(298),
    [anon_sym_SEMI] = ACTIONS(300),
    [sym_comment] = ACTIONS(11),
    [anon_sym_PIPE] = ACTIONS(153),
    [anon_sym_LF] = ACTIONS(300),
  },
  [77] = {
    [sym_command_expression] = STATE(149),
    [sym_flat_array_expression] = STATE(23),
    [sym_hashtable_expression] = STATE(23),
    [sym_type_expr] = STATE(16),
    [sym__attribute] = STATE(22),
    [sym__string_expr] = STATE(23),
    [sym_scriptblock] = STATE(23),
    [aux_sym_array_expression_repeat1] = STATE(18),
    [sym__pipeline_expression] = STATE(149),
    [sym_array_expression] = STATE(149),
    [sym__attributed_variable] = STATE(23),
    [sym_variable] = STATE(23),
    [sym_non_type_attribute] = STATE(22),
    [sym__newline] = STATE(150),
    [aux_sym__newlines] = STATE(150),
    [sym__non_array_expression] = STATE(23),
    [sym__expression] = STATE(149),
    [aux_sym__attributed_variable_repeat1] = STATE(22),
    [sym_double_quote_string] = STATE(23),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(105),
    [anon_sym_LPAREN] = ACTIONS(107),
    [anon_sym_LBRACE] = ACTIONS(109),
    [sym_comment] = ACTIONS(11),
    [sym_number_expr] = ACTIONS(13),
    [sym_bareword_string] = ACTIONS(15),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(115),
    [anon_sym_DOLLAR] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(117),
    [anon_sym_AMP] = ACTIONS(294),
    [anon_sym_LF] = ACTIONS(302),
    [anon_sym_COMMA] = ACTIONS(27),
    [anon_sym_AT_LBRACE] = ACTIONS(121),
    [anon_sym_AT_LPAREN] = ACTIONS(123),
    [anon_sym_CR_LF] = ACTIONS(304),
    [sym_single_quote_string] = ACTIONS(13),
    [anon_sym_DQUOTE] = ACTIONS(35),
  },
  [78] = {
    [sym_type_expr] = STATE(78),
    [sym__attribute] = STATE(78),
    [aux_sym__attributed_variable_repeat1] = STATE(78),
    [sym_non_type_attribute] = STATE(78),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOLLAR] = ACTIONS(306),
    [anon_sym_LBRACK] = ACTIONS(308),
  },
  [79] = {
    [anon_sym_COMMA] = ACTIONS(311),
    [anon_sym_EQ] = ACTIONS(311),
    [ts_builtin_sym_end] = ACTIONS(313),
    [sym_comment] = ACTIONS(11),
    [anon_sym_RPAREN] = ACTIONS(311),
    [anon_sym_PIPE] = ACTIONS(311),
    [anon_sym_RBRACE] = ACTIONS(311),
    [anon_sym_CR_LF] = ACTIONS(313),
    [anon_sym_SEMI] = ACTIONS(311),
    [anon_sym_LF] = ACTIONS(311),
  },
  [80] = {
    [aux_sym_array_expression_repeat1] = STATE(74),
    [anon_sym_COMMA] = ACTIONS(27),
    [anon_sym_CR_LF] = ACTIONS(315),
    [ts_builtin_sym_end] = ACTIONS(315),
    [anon_sym_SEMI] = ACTIONS(317),
    [sym_comment] = ACTIONS(11),
    [anon_sym_PIPE] = ACTIONS(317),
    [anon_sym_LF] = ACTIONS(317),
  },
  [81] = {
    [anon_sym_COMMA] = ACTIONS(237),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(237),
    [anon_sym_PIPE] = ACTIONS(237),
  },
  [82] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(319),
  },
  [83] = {
    [aux_sym_source_file_repeat1] = STATE(153),
    [sym__terminator] = STATE(154),
    [sym__newline] = STATE(154),
    [anon_sym_RBRACE] = ACTIONS(321),
    [anon_sym_CR_LF] = ACTIONS(323),
    [anon_sym_SEMI] = ACTIONS(325),
    [sym_comment] = ACTIONS(11),
    [anon_sym_LF] = ACTIONS(325),
  },
  [84] = {
    [sym__statement] = STATE(155),
    [sym_command_expression] = STATE(48),
    [sym_flat_array_expression] = STATE(50),
    [sym_hashtable_expression] = STATE(50),
    [sym_type_expr] = STATE(16),
    [sym__attribute] = STATE(22),
    [sym__string_expr] = STATE(50),
    [sym_scriptblock] = STATE(50),
    [aux_sym_array_expression_repeat1] = STATE(46),
    [sym_pipeline_statement] = STATE(155),
    [sym__pipeline_expression] = STATE(48),
    [sym_array_expression] = STATE(48),
    [sym__attributed_variable] = STATE(49),
    [sym_variable] = STATE(49),
    [sym_non_type_attribute] = STATE(22),
    [aux_sym__attributed_variable_repeat1] = STATE(22),
    [sym__non_array_expression] = STATE(50),
    [sym__expression] = STATE(48),
    [sym_double_quote_string] = STATE(50),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACE] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_number_expr] = ACTIONS(69),
    [sym_bareword_string] = ACTIONS(15),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(17),
    [anon_sym_DOLLAR] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_AMP] = ACTIONS(23),
    [anon_sym_COMMA] = ACTIONS(27),
    [anon_sym_AT_LBRACE] = ACTIONS(29),
    [anon_sym_AT_LPAREN] = ACTIONS(31),
    [sym_single_quote_string] = ACTIONS(71),
    [anon_sym_DQUOTE] = ACTIONS(35),
  },
  [85] = {
    [anon_sym_COMMA] = ACTIONS(241),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(241),
    [anon_sym_PIPE] = ACTIONS(241),
  },
  [86] = {
    [aux_sym__newlines] = STATE(125),
    [sym__newline] = STATE(125),
    [sym_variable] = STATE(58),
    [sym__string_expr] = STATE(58),
    [sym_property_name] = STATE(61),
    [sym_hashtable_entry] = STATE(157),
    [sym_double_quote_string] = STATE(58),
    [sym_comment] = ACTIONS(11),
    [sym_bareword_string] = ACTIONS(95),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(97),
    [anon_sym_DOLLAR] = ACTIONS(49),
    [anon_sym_CR_LF] = ACTIONS(243),
    [sym_single_quote_string] = ACTIONS(95),
    [anon_sym_RBRACE] = ACTIONS(327),
    [anon_sym_DQUOTE] = ACTIONS(63),
    [anon_sym_LF] = ACTIONS(247),
  },
  [87] = {
    [sym__newline] = STATE(159),
    [aux_sym_flat_array_expression_repeat1] = STATE(129),
    [sym__terminator] = STATE(159),
    [aux_sym_hashtable_expression_repeat1] = STATE(158),
    [anon_sym_RBRACE] = ACTIONS(327),
    [anon_sym_CR_LF] = ACTIONS(329),
    [anon_sym_SEMI] = ACTIONS(331),
    [sym_comment] = ACTIONS(11),
    [anon_sym_LF] = ACTIONS(331),
  },
  [88] = {
    [anon_sym_COMMA] = ACTIONS(257),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(257),
    [anon_sym_PIPE] = ACTIONS(257),
  },
  [89] = {
    [aux_sym_flat_array_expression_repeat1] = STATE(132),
    [sym_flat_array_expression] = STATE(66),
    [sym_hashtable_expression] = STATE(66),
    [sym_type_expr] = STATE(16),
    [sym__attribute] = STATE(22),
    [sym__string_expr] = STATE(66),
    [sym_scriptblock] = STATE(66),
    [aux_sym_array_expression_repeat1] = STATE(65),
    [sym__terminator] = STATE(132),
    [sym_array_expression] = STATE(161),
    [sym__attributed_variable] = STATE(66),
    [sym_variable] = STATE(66),
    [sym_non_type_attribute] = STATE(22),
    [sym__newline] = STATE(132),
    [aux_sym__attributed_variable_repeat1] = STATE(22),
    [sym__non_array_expression] = STATE(66),
    [sym__expression] = STATE(161),
    [sym_double_quote_string] = STATE(66),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(105),
    [anon_sym_LPAREN] = ACTIONS(107),
    [anon_sym_LBRACE] = ACTIONS(109),
    [anon_sym_RPAREN] = ACTIONS(333),
    [sym_number_expr] = ACTIONS(113),
    [sym_comment] = ACTIONS(11),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(115),
    [anon_sym_DOLLAR] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(117),
    [anon_sym_SEMI] = ACTIONS(261),
    [anon_sym_LF] = ACTIONS(261),
    [anon_sym_COMMA] = ACTIONS(27),
    [anon_sym_AT_LBRACE] = ACTIONS(121),
    [anon_sym_AT_LPAREN] = ACTIONS(123),
    [anon_sym_CR_LF] = ACTIONS(263),
    [sym_single_quote_string] = ACTIONS(113),
    [anon_sym_DQUOTE] = ACTIONS(35),
  },
  [90] = {
    [aux_sym_flat_array_expression_repeat1] = STATE(162),
    [aux_sym_flat_array_expression_repeat2] = STATE(163),
    [sym__terminator] = STATE(162),
    [sym__newline] = STATE(162),
    [anon_sym_CR_LF] = ACTIONS(335),
    [anon_sym_SEMI] = ACTIONS(337),
    [anon_sym_RPAREN] = ACTIONS(333),
    [sym_comment] = ACTIONS(11),
    [anon_sym_LF] = ACTIONS(337),
  },
  [91] = {
    [anon_sym_COMMA] = ACTIONS(209),
    [anon_sym_EQ] = ACTIONS(209),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(209),
    [anon_sym_PIPE] = ACTIONS(209),
  },
  [92] = {
    [anon_sym_LBRACK_RBRACK] = ACTIONS(217),
    [anon_sym_LBRACK] = ACTIONS(219),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACK] = ACTIONS(339),
  },
  [93] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(229),
    [anon_sym_PIPE] = ACTIONS(229),
  },
  [94] = {
    [sym__varname_special] = STATE(138),
    [anon_sym_CARET] = ACTIONS(269),
    [anon_sym_DOLLAR] = ACTIONS(269),
    [sym__varname_braced] = ACTIONS(269),
    [sym_comment] = ACTIONS(3),
    [anon_sym_QMARK] = ACTIONS(269),
    [sym__varname_simple] = ACTIONS(269),
    [anon_sym_DQUOTE] = ACTIONS(341),
  },
  [95] = {
    [anon_sym_COMMA] = ACTIONS(275),
    [anon_sym_EQ] = ACTIONS(275),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(275),
    [anon_sym_PIPE] = ACTIONS(275),
  },
  [96] = {
    [sym_variable] = STATE(141),
    [aux_sym_double_quote_string_repeat1] = STATE(141),
    [anon_sym_DOLLAR] = ACTIONS(343),
    [aux_sym_double_quote_string_token1] = ACTIONS(279),
    [sym_comment] = ACTIONS(11),
    [anon_sym_DQUOTE] = ACTIONS(345),
  },
  [97] = {
    [aux_sym_array_expression_repeat1] = STATE(97),
    [anon_sym_COMMA] = ACTIONS(347),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(237),
    [anon_sym_PIPE] = ACTIONS(237),
  },
  [98] = {
    [anon_sym_COMMA] = ACTIONS(350),
    [ts_builtin_sym_end] = ACTIONS(352),
    [sym_comment] = ACTIONS(11),
    [anon_sym_RPAREN] = ACTIONS(350),
    [anon_sym_PIPE] = ACTIONS(350),
    [anon_sym_RBRACE] = ACTIONS(350),
    [anon_sym_CR_LF] = ACTIONS(352),
    [anon_sym_SEMI] = ACTIONS(350),
    [anon_sym_LF] = ACTIONS(350),
  },
  [99] = {
    [sym_command_expression] = STATE(168),
    [sym__newline] = STATE(167),
    [sym_bareword_string] = ACTIONS(45),
    [anon_sym_CR_LF] = ACTIONS(354),
    [anon_sym_AMP] = ACTIONS(356),
    [sym_comment] = ACTIONS(11),
    [anon_sym_LF] = ACTIONS(358),
  },
  [100] = {
    [aux_sym_pipeline_statement_repeat1] = STATE(169),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(298),
    [anon_sym_PIPE] = ACTIONS(195),
  },
  [101] = {
    [sym_command_expression] = STATE(170),
    [sym_flat_array_expression] = STATE(42),
    [sym_hashtable_expression] = STATE(42),
    [sym_type_expr] = STATE(36),
    [sym__attribute] = STATE(41),
    [sym__string_expr] = STATE(42),
    [sym_scriptblock] = STATE(42),
    [aux_sym_array_expression_repeat1] = STATE(37),
    [sym__pipeline_expression] = STATE(170),
    [sym_array_expression] = STATE(170),
    [sym__attributed_variable] = STATE(42),
    [sym_variable] = STATE(42),
    [sym_non_type_attribute] = STATE(41),
    [sym__newline] = STATE(171),
    [aux_sym__newlines] = STATE(171),
    [sym__non_array_expression] = STATE(42),
    [sym__expression] = STATE(170),
    [aux_sym__attributed_variable_repeat1] = STATE(41),
    [sym_double_quote_string] = STATE(42),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(360),
    [anon_sym_LPAREN] = ACTIONS(362),
    [anon_sym_LBRACE] = ACTIONS(364),
    [sym_comment] = ACTIONS(11),
    [sym_number_expr] = ACTIONS(43),
    [sym_bareword_string] = ACTIONS(45),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(97),
    [anon_sym_DOLLAR] = ACTIONS(49),
    [anon_sym_LBRACK] = ACTIONS(366),
    [anon_sym_AMP] = ACTIONS(356),
    [anon_sym_LF] = ACTIONS(368),
    [anon_sym_COMMA] = ACTIONS(55),
    [anon_sym_AT_LBRACE] = ACTIONS(370),
    [anon_sym_AT_LPAREN] = ACTIONS(372),
    [anon_sym_CR_LF] = ACTIONS(374),
    [sym_single_quote_string] = ACTIONS(43),
    [anon_sym_DQUOTE] = ACTIONS(63),
  },
  [102] = {
    [anon_sym_COMMA] = ACTIONS(313),
    [anon_sym_EQ] = ACTIONS(313),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(313),
    [anon_sym_PIPE] = ACTIONS(313),
  },
  [103] = {
    [aux_sym_array_expression_repeat1] = STATE(97),
    [anon_sym_COMMA] = ACTIONS(191),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(315),
    [anon_sym_PIPE] = ACTIONS(315),
  },
  [104] = {
    [aux_sym_array_expression_repeat1] = STATE(104),
    [anon_sym_COMMA] = ACTIONS(347),
    [anon_sym_RPAREN] = ACTIONS(237),
    [sym_comment] = ACTIONS(3),
  },
  [105] = {
    [aux_sym_array_expression_repeat1] = STATE(104),
    [anon_sym_COMMA] = ACTIONS(191),
    [anon_sym_RPAREN] = ACTIONS(315),
    [sym_comment] = ACTIONS(3),
  },
  [106] = {
    [anon_sym_COMMA] = ACTIONS(376),
    [ts_builtin_sym_end] = ACTIONS(378),
    [sym_comment] = ACTIONS(11),
    [anon_sym_RPAREN] = ACTIONS(376),
    [anon_sym_PIPE] = ACTIONS(376),
    [anon_sym_RBRACE] = ACTIONS(376),
    [anon_sym_CR_LF] = ACTIONS(378),
    [anon_sym_SEMI] = ACTIONS(376),
    [anon_sym_LF] = ACTIONS(376),
  },
  [107] = {
    [aux_sym_source_file_repeat1] = STATE(173),
    [sym__terminator] = STATE(174),
    [sym__newline] = STATE(174),
    [anon_sym_RBRACE] = ACTIONS(380),
    [anon_sym_CR_LF] = ACTIONS(382),
    [anon_sym_SEMI] = ACTIONS(384),
    [sym_comment] = ACTIONS(11),
    [anon_sym_LF] = ACTIONS(384),
  },
  [108] = {
    [sym__statement] = STATE(144),
    [sym_command_expression] = STATE(48),
    [sym_flat_array_expression] = STATE(50),
    [sym_hashtable_expression] = STATE(50),
    [sym_type_expr] = STATE(16),
    [sym__attribute] = STATE(22),
    [sym__string_expr] = STATE(50),
    [sym_scriptblock] = STATE(50),
    [aux_sym_array_expression_repeat1] = STATE(46),
    [sym_pipeline_statement] = STATE(144),
    [sym__pipeline_expression] = STATE(48),
    [sym_array_expression] = STATE(48),
    [sym__attributed_variable] = STATE(49),
    [sym_variable] = STATE(49),
    [sym_non_type_attribute] = STATE(22),
    [aux_sym__attributed_variable_repeat1] = STATE(22),
    [sym__non_array_expression] = STATE(50),
    [sym__expression] = STATE(48),
    [sym_double_quote_string] = STATE(50),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACE] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_number_expr] = ACTIONS(69),
    [sym_bareword_string] = ACTIONS(15),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(17),
    [anon_sym_DOLLAR] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_AMP] = ACTIONS(23),
    [anon_sym_COMMA] = ACTIONS(27),
    [anon_sym_AT_LBRACE] = ACTIONS(29),
    [anon_sym_AT_LPAREN] = ACTIONS(31),
    [anon_sym_RBRACE] = ACTIONS(386),
    [sym_single_quote_string] = ACTIONS(71),
    [anon_sym_DQUOTE] = ACTIONS(35),
  },
  [109] = {
    [aux_sym_array_expression_repeat1] = STATE(109),
    [anon_sym_COMMA] = ACTIONS(289),
    [anon_sym_RBRACE] = ACTIONS(235),
    [anon_sym_CR_LF] = ACTIONS(237),
    [anon_sym_SEMI] = ACTIONS(235),
    [sym_comment] = ACTIONS(11),
    [anon_sym_PIPE] = ACTIONS(235),
    [anon_sym_LF] = ACTIONS(235),
  },
  [110] = {
    [aux_sym_source_file_repeat1] = STATE(175),
    [sym__terminator] = STATE(174),
    [sym__newline] = STATE(174),
    [anon_sym_RBRACE] = ACTIONS(380),
    [anon_sym_CR_LF] = ACTIONS(382),
    [anon_sym_SEMI] = ACTIONS(384),
    [sym_comment] = ACTIONS(11),
    [anon_sym_LF] = ACTIONS(384),
  },
  [111] = {
    [aux_sym_pipeline_statement_repeat1] = STATE(176),
    [anon_sym_RBRACE] = ACTIONS(300),
    [anon_sym_CR_LF] = ACTIONS(298),
    [anon_sym_SEMI] = ACTIONS(300),
    [sym_comment] = ACTIONS(11),
    [anon_sym_PIPE] = ACTIONS(153),
    [anon_sym_LF] = ACTIONS(300),
  },
  [112] = {
    [sym_command_expression] = STATE(177),
    [sym_flat_array_expression] = STATE(50),
    [sym_hashtable_expression] = STATE(50),
    [sym_type_expr] = STATE(16),
    [sym__attribute] = STATE(22),
    [sym__string_expr] = STATE(50),
    [sym_scriptblock] = STATE(50),
    [aux_sym_array_expression_repeat1] = STATE(46),
    [sym__pipeline_expression] = STATE(177),
    [sym_array_expression] = STATE(177),
    [sym__attributed_variable] = STATE(50),
    [sym_variable] = STATE(50),
    [sym_non_type_attribute] = STATE(22),
    [sym__newline] = STATE(178),
    [aux_sym__newlines] = STATE(178),
    [sym__non_array_expression] = STATE(50),
    [sym__expression] = STATE(177),
    [aux_sym__attributed_variable_repeat1] = STATE(22),
    [sym_double_quote_string] = STATE(50),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(105),
    [anon_sym_LPAREN] = ACTIONS(107),
    [anon_sym_LBRACE] = ACTIONS(109),
    [sym_comment] = ACTIONS(11),
    [sym_number_expr] = ACTIONS(69),
    [sym_bareword_string] = ACTIONS(15),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(115),
    [anon_sym_DOLLAR] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(117),
    [anon_sym_AMP] = ACTIONS(294),
    [anon_sym_LF] = ACTIONS(388),
    [anon_sym_COMMA] = ACTIONS(27),
    [anon_sym_AT_LBRACE] = ACTIONS(121),
    [anon_sym_AT_LPAREN] = ACTIONS(123),
    [anon_sym_CR_LF] = ACTIONS(390),
    [sym_single_quote_string] = ACTIONS(69),
    [anon_sym_DQUOTE] = ACTIONS(35),
  },
  [113] = {
    [aux_sym_array_expression_repeat1] = STATE(109),
    [anon_sym_COMMA] = ACTIONS(27),
    [anon_sym_RBRACE] = ACTIONS(317),
    [anon_sym_CR_LF] = ACTIONS(315),
    [anon_sym_SEMI] = ACTIONS(317),
    [sym_comment] = ACTIONS(11),
    [anon_sym_PIPE] = ACTIONS(317),
    [anon_sym_LF] = ACTIONS(317),
  },
  [114] = {
    [sym__attributed_variable] = STATE(180),
    [sym_variable] = STATE(180),
    [sym_non_type_attribute] = STATE(41),
    [sym_flat_array_expression] = STATE(180),
    [sym_hashtable_expression] = STATE(180),
    [sym_type_expr] = STATE(36),
    [aux_sym__attributed_variable_repeat1] = STATE(41),
    [sym__string_expr] = STATE(180),
    [sym_scriptblock] = STATE(180),
    [sym__attribute] = STATE(41),
    [sym__non_array_expression] = STATE(180),
    [sym_double_quote_string] = STATE(180),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(37),
    [anon_sym_LPAREN] = ACTIONS(39),
    [anon_sym_LBRACE] = ACTIONS(41),
    [anon_sym_AT_LBRACE] = ACTIONS(57),
    [sym_number_expr] = ACTIONS(392),
    [anon_sym_AT_LPAREN] = ACTIONS(59),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(47),
    [anon_sym_DOLLAR] = ACTIONS(49),
    [anon_sym_LBRACK] = ACTIONS(51),
    [sym_single_quote_string] = ACTIONS(392),
    [anon_sym_RPAREN] = ACTIONS(394),
    [anon_sym_DQUOTE] = ACTIONS(63),
    [sym_comment] = ACTIONS(3),
  },
  [115] = {
    [anon_sym_COMMA] = ACTIONS(396),
    [anon_sym_LBRACK_RBRACK] = ACTIONS(396),
    [anon_sym_LBRACK] = ACTIONS(398),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACK] = ACTIONS(396),
  },
  [116] = {
    [sym__typename] = STATE(181),
    [sym__typename_array] = STATE(181),
    [sym__typename_generic] = STATE(181),
    [sym__typename_simple] = ACTIONS(400),
    [sym_comment] = ACTIONS(3),
  },
  [117] = {
    [anon_sym_COMMA] = ACTIONS(402),
    [ts_builtin_sym_end] = ACTIONS(404),
    [sym_comment] = ACTIONS(11),
    [anon_sym_RPAREN] = ACTIONS(402),
    [anon_sym_PIPE] = ACTIONS(402),
    [anon_sym_DOLLAR] = ACTIONS(402),
    [anon_sym_CR_LF] = ACTIONS(404),
    [anon_sym_LBRACK] = ACTIONS(402),
    [anon_sym_SEMI] = ACTIONS(402),
    [anon_sym_RBRACE] = ACTIONS(402),
    [anon_sym_LF] = ACTIONS(402),
  },
  [118] = {
    [sym__typename] = STATE(53),
    [sym__typename_array] = STATE(53),
    [sym__typename_generic] = STATE(53),
    [sym__typename_simple] = ACTIONS(406),
    [sym_comment] = ACTIONS(3),
  },
  [119] = {
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(408),
    [anon_sym_LPAREN] = ACTIONS(408),
    [anon_sym_LBRACE] = ACTIONS(408),
    [sym_comment] = ACTIONS(11),
    [sym_number_expr] = ACTIONS(410),
    [sym_bareword_string] = ACTIONS(410),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(408),
    [anon_sym_DOLLAR] = ACTIONS(410),
    [anon_sym_LBRACK] = ACTIONS(408),
    [anon_sym_AMP] = ACTIONS(408),
    [anon_sym_COMMA] = ACTIONS(410),
    [anon_sym_AT_LBRACE] = ACTIONS(408),
    [anon_sym_AT_LPAREN] = ACTIONS(408),
    [sym_single_quote_string] = ACTIONS(408),
    [anon_sym_DQUOTE] = ACTIONS(410),
  },
  [120] = {
    [aux_sym__newlines] = STATE(183),
    [sym__newline] = STATE(183),
    [anon_sym_DOLLAR] = ACTIONS(412),
    [anon_sym_LBRACK] = ACTIONS(412),
    [anon_sym_CR_LF] = ACTIONS(414),
    [sym_comment] = ACTIONS(11),
    [anon_sym_LF] = ACTIONS(416),
  },
  [121] = {
    [anon_sym_COMMA] = ACTIONS(418),
    [anon_sym_RPAREN] = ACTIONS(418),
    [sym_comment] = ACTIONS(3),
  },
  [122] = {
    [aux_sym_param_block_repeat1] = STATE(186),
    [anon_sym_COMMA] = ACTIONS(420),
    [anon_sym_RPAREN] = ACTIONS(422),
    [sym_comment] = ACTIONS(3),
  },
  [123] = {
    [sym_type_expr] = STATE(120),
    [sym__attribute] = STATE(120),
    [sym_variable] = STATE(187),
    [sym_non_type_attribute] = STATE(120),
    [aux_sym_param_block_variable_repeat1] = STATE(188),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOLLAR] = ACTIONS(179),
    [anon_sym_LBRACK] = ACTIONS(231),
  },
  [124] = {
    [anon_sym_COMMA] = ACTIONS(424),
    [ts_builtin_sym_end] = ACTIONS(426),
    [sym_comment] = ACTIONS(11),
    [anon_sym_RPAREN] = ACTIONS(424),
    [anon_sym_PIPE] = ACTIONS(424),
    [anon_sym_RBRACE] = ACTIONS(424),
    [anon_sym_CR_LF] = ACTIONS(426),
    [anon_sym_SEMI] = ACTIONS(424),
    [anon_sym_LF] = ACTIONS(424),
  },
  [125] = {
    [aux_sym__newlines] = STATE(125),
    [sym__newline] = STATE(125),
    [sym_comment] = ACTIONS(11),
    [sym_bareword_string] = ACTIONS(428),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(428),
    [anon_sym_RBRACE] = ACTIONS(428),
    [anon_sym_CR_LF] = ACTIONS(430),
    [anon_sym_DOLLAR] = ACTIONS(428),
    [sym_single_quote_string] = ACTIONS(428),
    [anon_sym_DQUOTE] = ACTIONS(428),
    [anon_sym_LF] = ACTIONS(433),
  },
  [126] = {
    [sym__newline] = STATE(191),
    [aux_sym_flat_array_expression_repeat1] = STATE(129),
    [sym__terminator] = STATE(191),
    [aux_sym_hashtable_expression_repeat1] = STATE(190),
    [anon_sym_RBRACE] = ACTIONS(436),
    [anon_sym_CR_LF] = ACTIONS(438),
    [anon_sym_SEMI] = ACTIONS(440),
    [sym_comment] = ACTIONS(11),
    [anon_sym_LF] = ACTIONS(440),
  },
  [127] = {
    [sym_flat_array_expression] = STATE(194),
    [sym_hashtable_expression] = STATE(194),
    [sym_type_expr] = STATE(16),
    [sym__attribute] = STATE(22),
    [sym__string_expr] = STATE(194),
    [sym_scriptblock] = STATE(194),
    [aux_sym_array_expression_repeat1] = STATE(192),
    [sym_array_expression] = STATE(195),
    [sym__attributed_variable] = STATE(194),
    [sym_variable] = STATE(194),
    [sym_non_type_attribute] = STATE(22),
    [sym__newline] = STATE(193),
    [aux_sym__newlines] = STATE(193),
    [sym__non_array_expression] = STATE(194),
    [aux_sym__attributed_variable_repeat1] = STATE(22),
    [sym__expression] = STATE(195),
    [sym_double_quote_string] = STATE(194),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(105),
    [anon_sym_LPAREN] = ACTIONS(107),
    [anon_sym_LBRACE] = ACTIONS(109),
    [sym_comment] = ACTIONS(11),
    [sym_number_expr] = ACTIONS(442),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(115),
    [anon_sym_DOLLAR] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(117),
    [anon_sym_LF] = ACTIONS(444),
    [anon_sym_COMMA] = ACTIONS(27),
    [anon_sym_AT_LBRACE] = ACTIONS(121),
    [anon_sym_AT_LPAREN] = ACTIONS(123),
    [anon_sym_CR_LF] = ACTIONS(446),
    [sym_single_quote_string] = ACTIONS(442),
    [anon_sym_DQUOTE] = ACTIONS(35),
  },
  [128] = {
    [sym__newline] = STATE(191),
    [aux_sym_flat_array_expression_repeat1] = STATE(129),
    [sym__terminator] = STATE(191),
    [aux_sym_hashtable_expression_repeat1] = STATE(196),
    [anon_sym_RBRACE] = ACTIONS(436),
    [anon_sym_CR_LF] = ACTIONS(438),
    [anon_sym_SEMI] = ACTIONS(440),
    [sym_comment] = ACTIONS(11),
    [anon_sym_LF] = ACTIONS(440),
  },
  [129] = {
    [aux_sym_flat_array_expression_repeat1] = STATE(197),
    [sym_variable] = STATE(58),
    [sym__newline] = STATE(197),
    [sym__string_expr] = STATE(58),
    [sym_hashtable_entry] = STATE(198),
    [sym_property_name] = STATE(61),
    [sym__terminator] = STATE(197),
    [sym_double_quote_string] = STATE(58),
    [sym_comment] = ACTIONS(11),
    [sym_bareword_string] = ACTIONS(95),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(97),
    [anon_sym_DOLLAR] = ACTIONS(49),
    [anon_sym_CR_LF] = ACTIONS(448),
    [sym_single_quote_string] = ACTIONS(95),
    [anon_sym_SEMI] = ACTIONS(450),
    [anon_sym_DQUOTE] = ACTIONS(63),
    [anon_sym_LF] = ACTIONS(450),
  },
  [130] = {
    [sym_comment] = ACTIONS(11),
    [sym_bareword_string] = ACTIONS(452),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(452),
    [anon_sym_DOLLAR] = ACTIONS(452),
    [anon_sym_CR_LF] = ACTIONS(454),
    [sym_single_quote_string] = ACTIONS(452),
    [anon_sym_SEMI] = ACTIONS(452),
    [anon_sym_DQUOTE] = ACTIONS(452),
    [anon_sym_RBRACE] = ACTIONS(436),
    [anon_sym_LF] = ACTIONS(452),
  },
  [131] = {
    [anon_sym_COMMA] = ACTIONS(456),
    [ts_builtin_sym_end] = ACTIONS(458),
    [sym_comment] = ACTIONS(11),
    [anon_sym_RPAREN] = ACTIONS(456),
    [anon_sym_PIPE] = ACTIONS(456),
    [anon_sym_RBRACE] = ACTIONS(456),
    [anon_sym_CR_LF] = ACTIONS(458),
    [anon_sym_SEMI] = ACTIONS(456),
    [anon_sym_LF] = ACTIONS(456),
  },
  [132] = {
    [sym__terminator] = STATE(132),
    [aux_sym_flat_array_expression_repeat1] = STATE(132),
    [sym__newline] = STATE(132),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(460),
    [anon_sym_LPAREN] = ACTIONS(460),
    [anon_sym_LBRACE] = ACTIONS(460),
    [anon_sym_RPAREN] = ACTIONS(460),
    [sym_number_expr] = ACTIONS(460),
    [sym_comment] = ACTIONS(11),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(460),
    [anon_sym_DOLLAR] = ACTIONS(460),
    [anon_sym_LBRACK] = ACTIONS(460),
    [anon_sym_SEMI] = ACTIONS(462),
    [anon_sym_LF] = ACTIONS(462),
    [anon_sym_COMMA] = ACTIONS(460),
    [anon_sym_AT_LBRACE] = ACTIONS(460),
    [anon_sym_AT_LPAREN] = ACTIONS(460),
    [anon_sym_CR_LF] = ACTIONS(465),
    [sym_single_quote_string] = ACTIONS(460),
    [anon_sym_DQUOTE] = ACTIONS(460),
  },
  [133] = {
    [aux_sym_flat_array_expression_repeat1] = STATE(200),
    [aux_sym_flat_array_expression_repeat2] = STATE(201),
    [sym__terminator] = STATE(200),
    [sym__newline] = STATE(200),
    [anon_sym_CR_LF] = ACTIONS(468),
    [anon_sym_SEMI] = ACTIONS(470),
    [anon_sym_RPAREN] = ACTIONS(472),
    [sym_comment] = ACTIONS(11),
    [anon_sym_LF] = ACTIONS(470),
  },
  [134] = {
    [aux_sym_array_expression_repeat1] = STATE(134),
    [anon_sym_COMMA] = ACTIONS(289),
    [anon_sym_CR_LF] = ACTIONS(237),
    [anon_sym_SEMI] = ACTIONS(235),
    [anon_sym_RPAREN] = ACTIONS(235),
    [sym_comment] = ACTIONS(11),
    [anon_sym_LF] = ACTIONS(235),
  },
  [135] = {
    [aux_sym_array_expression_repeat1] = STATE(134),
    [anon_sym_COMMA] = ACTIONS(27),
    [anon_sym_CR_LF] = ACTIONS(315),
    [anon_sym_SEMI] = ACTIONS(317),
    [anon_sym_RPAREN] = ACTIONS(317),
    [sym_comment] = ACTIONS(11),
    [anon_sym_LF] = ACTIONS(317),
  },
  [136] = {
    [aux_sym_flat_array_expression_repeat1] = STATE(132),
    [sym_flat_array_expression] = STATE(66),
    [sym_hashtable_expression] = STATE(66),
    [sym_type_expr] = STATE(16),
    [sym__attribute] = STATE(22),
    [sym__string_expr] = STATE(66),
    [sym_scriptblock] = STATE(66),
    [aux_sym_array_expression_repeat1] = STATE(65),
    [sym__terminator] = STATE(132),
    [sym_array_expression] = STATE(202),
    [sym__attributed_variable] = STATE(66),
    [sym_variable] = STATE(66),
    [sym_non_type_attribute] = STATE(22),
    [sym__newline] = STATE(132),
    [aux_sym__attributed_variable_repeat1] = STATE(22),
    [sym__non_array_expression] = STATE(66),
    [sym__expression] = STATE(202),
    [sym_double_quote_string] = STATE(66),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(105),
    [anon_sym_LPAREN] = ACTIONS(107),
    [anon_sym_LBRACE] = ACTIONS(109),
    [anon_sym_RPAREN] = ACTIONS(472),
    [sym_number_expr] = ACTIONS(113),
    [sym_comment] = ACTIONS(11),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(115),
    [anon_sym_DOLLAR] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(117),
    [anon_sym_SEMI] = ACTIONS(261),
    [anon_sym_LF] = ACTIONS(261),
    [anon_sym_COMMA] = ACTIONS(27),
    [anon_sym_AT_LBRACE] = ACTIONS(121),
    [anon_sym_AT_LPAREN] = ACTIONS(123),
    [anon_sym_CR_LF] = ACTIONS(263),
    [sym_single_quote_string] = ACTIONS(113),
    [anon_sym_DQUOTE] = ACTIONS(35),
  },
  [137] = {
    [aux_sym_flat_array_expression_repeat1] = STATE(200),
    [aux_sym_flat_array_expression_repeat2] = STATE(203),
    [sym__terminator] = STATE(200),
    [sym__newline] = STATE(200),
    [anon_sym_CR_LF] = ACTIONS(468),
    [anon_sym_SEMI] = ACTIONS(470),
    [anon_sym_RPAREN] = ACTIONS(472),
    [sym_comment] = ACTIONS(11),
    [anon_sym_LF] = ACTIONS(470),
  },
  [138] = {
    [anon_sym_DOLLAR] = ACTIONS(207),
    [aux_sym_double_quote_string_token1] = ACTIONS(207),
    [sym_comment] = ACTIONS(11),
    [anon_sym_DQUOTE] = ACTIONS(207),
  },
  [139] = {
    [anon_sym_COMMA] = ACTIONS(474),
    [ts_builtin_sym_end] = ACTIONS(476),
    [sym_comment] = ACTIONS(11),
    [anon_sym_RPAREN] = ACTIONS(474),
    [anon_sym_PIPE] = ACTIONS(474),
    [anon_sym_RBRACE] = ACTIONS(474),
    [anon_sym_CR_LF] = ACTIONS(476),
    [anon_sym_SEMI] = ACTIONS(474),
    [anon_sym_LF] = ACTIONS(474),
  },
  [140] = {
    [sym__varname_special] = STATE(138),
    [anon_sym_CARET] = ACTIONS(269),
    [anon_sym_DOLLAR] = ACTIONS(269),
    [sym__varname_braced] = ACTIONS(269),
    [sym_comment] = ACTIONS(3),
    [anon_sym_QMARK] = ACTIONS(269),
    [sym__varname_simple] = ACTIONS(269),
    [anon_sym_DQUOTE] = ACTIONS(478),
  },
  [141] = {
    [sym_variable] = STATE(141),
    [aux_sym_double_quote_string_repeat1] = STATE(141),
    [anon_sym_DOLLAR] = ACTIONS(480),
    [aux_sym_double_quote_string_token1] = ACTIONS(483),
    [sym_comment] = ACTIONS(11),
    [anon_sym_DQUOTE] = ACTIONS(486),
  },
  [142] = {
    [aux_sym_source_file_repeat1] = STATE(142),
    [sym__terminator] = STATE(206),
    [sym__newline] = STATE(206),
    [anon_sym_CR_LF] = ACTIONS(488),
    [ts_builtin_sym_end] = ACTIONS(491),
    [anon_sym_SEMI] = ACTIONS(493),
    [sym_comment] = ACTIONS(11),
    [anon_sym_LF] = ACTIONS(493),
  },
  [143] = {
    [sym__statement] = STATE(144),
    [sym_command_expression] = STATE(19),
    [sym_flat_array_expression] = STATE(23),
    [sym_hashtable_expression] = STATE(23),
    [sym_type_expr] = STATE(16),
    [sym__attribute] = STATE(22),
    [sym__string_expr] = STATE(23),
    [sym_scriptblock] = STATE(23),
    [aux_sym_array_expression_repeat1] = STATE(18),
    [sym_pipeline_statement] = STATE(144),
    [sym__pipeline_expression] = STATE(19),
    [sym_array_expression] = STATE(19),
    [sym__attributed_variable] = STATE(20),
    [sym_variable] = STATE(20),
    [sym_non_type_attribute] = STATE(22),
    [aux_sym__attributed_variable_repeat1] = STATE(22),
    [sym__non_array_expression] = STATE(23),
    [sym__expression] = STATE(19),
    [sym_double_quote_string] = STATE(23),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACE] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_number_expr] = ACTIONS(13),
    [sym_bareword_string] = ACTIONS(15),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(17),
    [anon_sym_DOLLAR] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_AMP] = ACTIONS(23),
    [anon_sym_COMMA] = ACTIONS(27),
    [ts_builtin_sym_end] = ACTIONS(496),
    [anon_sym_AT_LBRACE] = ACTIONS(29),
    [anon_sym_AT_LPAREN] = ACTIONS(31),
    [sym_single_quote_string] = ACTIONS(33),
    [anon_sym_DQUOTE] = ACTIONS(35),
  },
  [144] = {
    [anon_sym_RBRACE] = ACTIONS(498),
    [anon_sym_CR_LF] = ACTIONS(491),
    [ts_builtin_sym_end] = ACTIONS(491),
    [anon_sym_SEMI] = ACTIONS(498),
    [sym_comment] = ACTIONS(11),
    [anon_sym_LF] = ACTIONS(498),
  },
  [145] = {
    [aux_sym_source_file_repeat1] = STATE(142),
    [sym__terminator] = STATE(207),
    [sym__newline] = STATE(207),
    [ts_builtin_sym_end] = ACTIONS(496),
    [anon_sym_CR_LF] = ACTIONS(500),
    [anon_sym_SEMI] = ACTIONS(502),
    [sym_comment] = ACTIONS(11),
    [anon_sym_LF] = ACTIONS(502),
  },
  [146] = {
    [sym_command_expression] = STATE(208),
    [sym_bareword_string] = ACTIONS(15),
    [sym_comment] = ACTIONS(11),
    [anon_sym_AMP] = ACTIONS(23),
  },
  [147] = {
    [anon_sym_RBRACE] = ACTIONS(504),
    [anon_sym_CR_LF] = ACTIONS(506),
    [ts_builtin_sym_end] = ACTIONS(506),
    [anon_sym_SEMI] = ACTIONS(504),
    [sym_comment] = ACTIONS(11),
    [anon_sym_PIPE] = ACTIONS(504),
    [anon_sym_LF] = ACTIONS(504),
  },
  [148] = {
    [aux_sym_pipeline_statement_repeat1] = STATE(148),
    [anon_sym_CR_LF] = ACTIONS(506),
    [ts_builtin_sym_end] = ACTIONS(506),
    [anon_sym_SEMI] = ACTIONS(504),
    [sym_comment] = ACTIONS(11),
    [anon_sym_PIPE] = ACTIONS(508),
    [anon_sym_LF] = ACTIONS(504),
  },
  [149] = {
    [aux_sym_pipeline_statement_repeat1] = STATE(209),
    [anon_sym_CR_LF] = ACTIONS(511),
    [ts_builtin_sym_end] = ACTIONS(511),
    [anon_sym_SEMI] = ACTIONS(513),
    [sym_comment] = ACTIONS(11),
    [anon_sym_PIPE] = ACTIONS(153),
    [anon_sym_LF] = ACTIONS(513),
  },
  [150] = {
    [sym_command_expression] = STATE(210),
    [sym_flat_array_expression] = STATE(23),
    [sym_hashtable_expression] = STATE(23),
    [sym_type_expr] = STATE(16),
    [sym__attribute] = STATE(22),
    [sym__string_expr] = STATE(23),
    [sym_scriptblock] = STATE(23),
    [aux_sym_array_expression_repeat1] = STATE(18),
    [sym__pipeline_expression] = STATE(210),
    [sym_array_expression] = STATE(210),
    [sym__attributed_variable] = STATE(23),
    [sym_variable] = STATE(23),
    [sym_non_type_attribute] = STATE(22),
    [sym__newline] = STATE(211),
    [aux_sym__newlines] = STATE(211),
    [sym__non_array_expression] = STATE(23),
    [sym__expression] = STATE(210),
    [aux_sym__attributed_variable_repeat1] = STATE(22),
    [sym_double_quote_string] = STATE(23),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(105),
    [anon_sym_LPAREN] = ACTIONS(107),
    [anon_sym_LBRACE] = ACTIONS(109),
    [sym_comment] = ACTIONS(11),
    [sym_number_expr] = ACTIONS(13),
    [sym_bareword_string] = ACTIONS(15),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(115),
    [anon_sym_DOLLAR] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(117),
    [anon_sym_AMP] = ACTIONS(294),
    [anon_sym_LF] = ACTIONS(515),
    [anon_sym_COMMA] = ACTIONS(27),
    [anon_sym_AT_LBRACE] = ACTIONS(121),
    [anon_sym_AT_LPAREN] = ACTIONS(123),
    [anon_sym_CR_LF] = ACTIONS(517),
    [sym_single_quote_string] = ACTIONS(13),
    [anon_sym_DQUOTE] = ACTIONS(35),
  },
  [151] = {
    [anon_sym_COMMA] = ACTIONS(352),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(352),
    [anon_sym_PIPE] = ACTIONS(352),
  },
  [152] = {
    [anon_sym_COMMA] = ACTIONS(378),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(378),
    [anon_sym_PIPE] = ACTIONS(378),
  },
  [153] = {
    [aux_sym_source_file_repeat1] = STATE(173),
    [sym__terminator] = STATE(213),
    [sym__newline] = STATE(213),
    [anon_sym_RBRACE] = ACTIONS(519),
    [anon_sym_CR_LF] = ACTIONS(521),
    [anon_sym_SEMI] = ACTIONS(523),
    [sym_comment] = ACTIONS(11),
    [anon_sym_LF] = ACTIONS(523),
  },
  [154] = {
    [sym__statement] = STATE(144),
    [sym_command_expression] = STATE(48),
    [sym_flat_array_expression] = STATE(50),
    [sym_hashtable_expression] = STATE(50),
    [sym_type_expr] = STATE(16),
    [sym__attribute] = STATE(22),
    [sym__string_expr] = STATE(50),
    [sym_scriptblock] = STATE(50),
    [aux_sym_array_expression_repeat1] = STATE(46),
    [sym_pipeline_statement] = STATE(144),
    [sym__pipeline_expression] = STATE(48),
    [sym_array_expression] = STATE(48),
    [sym__attributed_variable] = STATE(49),
    [sym_variable] = STATE(49),
    [sym_non_type_attribute] = STATE(22),
    [aux_sym__attributed_variable_repeat1] = STATE(22),
    [sym__non_array_expression] = STATE(50),
    [sym__expression] = STATE(48),
    [sym_double_quote_string] = STATE(50),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACE] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_number_expr] = ACTIONS(69),
    [sym_bareword_string] = ACTIONS(15),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(17),
    [anon_sym_DOLLAR] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_AMP] = ACTIONS(23),
    [anon_sym_COMMA] = ACTIONS(27),
    [anon_sym_AT_LBRACE] = ACTIONS(29),
    [anon_sym_AT_LPAREN] = ACTIONS(31),
    [anon_sym_RBRACE] = ACTIONS(525),
    [sym_single_quote_string] = ACTIONS(71),
    [anon_sym_DQUOTE] = ACTIONS(35),
  },
  [155] = {
    [aux_sym_source_file_repeat1] = STATE(214),
    [sym__terminator] = STATE(213),
    [sym__newline] = STATE(213),
    [anon_sym_RBRACE] = ACTIONS(519),
    [anon_sym_CR_LF] = ACTIONS(521),
    [anon_sym_SEMI] = ACTIONS(523),
    [sym_comment] = ACTIONS(11),
    [anon_sym_LF] = ACTIONS(523),
  },
  [156] = {
    [anon_sym_COMMA] = ACTIONS(426),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(426),
    [anon_sym_PIPE] = ACTIONS(426),
  },
  [157] = {
    [sym__newline] = STATE(217),
    [aux_sym_flat_array_expression_repeat1] = STATE(129),
    [sym__terminator] = STATE(217),
    [aux_sym_hashtable_expression_repeat1] = STATE(216),
    [anon_sym_RBRACE] = ACTIONS(527),
    [anon_sym_CR_LF] = ACTIONS(529),
    [anon_sym_SEMI] = ACTIONS(531),
    [sym_comment] = ACTIONS(11),
    [anon_sym_LF] = ACTIONS(531),
  },
  [158] = {
    [sym__newline] = STATE(217),
    [aux_sym_flat_array_expression_repeat1] = STATE(129),
    [sym__terminator] = STATE(217),
    [aux_sym_hashtable_expression_repeat1] = STATE(196),
    [anon_sym_RBRACE] = ACTIONS(527),
    [anon_sym_CR_LF] = ACTIONS(529),
    [anon_sym_SEMI] = ACTIONS(531),
    [sym_comment] = ACTIONS(11),
    [anon_sym_LF] = ACTIONS(531),
  },
  [159] = {
    [sym_comment] = ACTIONS(11),
    [sym_bareword_string] = ACTIONS(452),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(452),
    [anon_sym_DOLLAR] = ACTIONS(452),
    [anon_sym_CR_LF] = ACTIONS(454),
    [sym_single_quote_string] = ACTIONS(452),
    [anon_sym_SEMI] = ACTIONS(452),
    [anon_sym_DQUOTE] = ACTIONS(452),
    [anon_sym_RBRACE] = ACTIONS(527),
    [anon_sym_LF] = ACTIONS(452),
  },
  [160] = {
    [anon_sym_COMMA] = ACTIONS(458),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(458),
    [anon_sym_PIPE] = ACTIONS(458),
  },
  [161] = {
    [aux_sym_flat_array_expression_repeat1] = STATE(219),
    [aux_sym_flat_array_expression_repeat2] = STATE(220),
    [sym__terminator] = STATE(219),
    [sym__newline] = STATE(219),
    [anon_sym_CR_LF] = ACTIONS(533),
    [anon_sym_SEMI] = ACTIONS(535),
    [anon_sym_RPAREN] = ACTIONS(537),
    [sym_comment] = ACTIONS(11),
    [anon_sym_LF] = ACTIONS(535),
  },
  [162] = {
    [aux_sym_flat_array_expression_repeat1] = STATE(132),
    [sym_flat_array_expression] = STATE(66),
    [sym_hashtable_expression] = STATE(66),
    [sym_type_expr] = STATE(16),
    [sym__attribute] = STATE(22),
    [sym__string_expr] = STATE(66),
    [sym_scriptblock] = STATE(66),
    [aux_sym_array_expression_repeat1] = STATE(65),
    [sym__terminator] = STATE(132),
    [sym_array_expression] = STATE(202),
    [sym__attributed_variable] = STATE(66),
    [sym_variable] = STATE(66),
    [sym_non_type_attribute] = STATE(22),
    [sym__newline] = STATE(132),
    [aux_sym__attributed_variable_repeat1] = STATE(22),
    [sym__non_array_expression] = STATE(66),
    [sym__expression] = STATE(202),
    [sym_double_quote_string] = STATE(66),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(105),
    [anon_sym_LPAREN] = ACTIONS(107),
    [anon_sym_LBRACE] = ACTIONS(109),
    [anon_sym_RPAREN] = ACTIONS(537),
    [sym_number_expr] = ACTIONS(113),
    [sym_comment] = ACTIONS(11),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(115),
    [anon_sym_DOLLAR] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(117),
    [anon_sym_SEMI] = ACTIONS(261),
    [anon_sym_LF] = ACTIONS(261),
    [anon_sym_COMMA] = ACTIONS(27),
    [anon_sym_AT_LBRACE] = ACTIONS(121),
    [anon_sym_AT_LPAREN] = ACTIONS(123),
    [anon_sym_CR_LF] = ACTIONS(263),
    [sym_single_quote_string] = ACTIONS(113),
    [anon_sym_DQUOTE] = ACTIONS(35),
  },
  [163] = {
    [aux_sym_flat_array_expression_repeat1] = STATE(219),
    [aux_sym_flat_array_expression_repeat2] = STATE(203),
    [sym__terminator] = STATE(219),
    [sym__newline] = STATE(219),
    [anon_sym_CR_LF] = ACTIONS(533),
    [anon_sym_SEMI] = ACTIONS(535),
    [anon_sym_RPAREN] = ACTIONS(537),
    [sym_comment] = ACTIONS(11),
    [anon_sym_LF] = ACTIONS(535),
  },
  [164] = {
    [anon_sym_COMMA] = ACTIONS(404),
    [anon_sym_DOLLAR] = ACTIONS(404),
    [anon_sym_LBRACK] = ACTIONS(404),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(404),
    [anon_sym_PIPE] = ACTIONS(404),
  },
  [165] = {
    [anon_sym_COMMA] = ACTIONS(476),
    [anon_sym_EQ] = ACTIONS(476),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(476),
    [anon_sym_PIPE] = ACTIONS(476),
  },
  [166] = {
    [sym__varname_special] = STATE(138),
    [anon_sym_CARET] = ACTIONS(269),
    [anon_sym_DOLLAR] = ACTIONS(269),
    [sym__varname_braced] = ACTIONS(269),
    [sym_comment] = ACTIONS(3),
    [anon_sym_QMARK] = ACTIONS(269),
    [sym__varname_simple] = ACTIONS(269),
    [anon_sym_DQUOTE] = ACTIONS(539),
  },
  [167] = {
    [sym_command_expression] = STATE(222),
    [sym_bareword_string] = ACTIONS(45),
    [sym_comment] = ACTIONS(11),
    [anon_sym_AMP] = ACTIONS(53),
  },
  [168] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(506),
    [anon_sym_PIPE] = ACTIONS(506),
  },
  [169] = {
    [aux_sym_pipeline_statement_repeat1] = STATE(169),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(506),
    [anon_sym_PIPE] = ACTIONS(541),
  },
  [170] = {
    [aux_sym_pipeline_statement_repeat1] = STATE(223),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(511),
    [anon_sym_PIPE] = ACTIONS(195),
  },
  [171] = {
    [sym_command_expression] = STATE(224),
    [sym_flat_array_expression] = STATE(42),
    [sym_hashtable_expression] = STATE(42),
    [sym_type_expr] = STATE(36),
    [sym__attribute] = STATE(41),
    [sym__string_expr] = STATE(42),
    [sym_scriptblock] = STATE(42),
    [aux_sym_array_expression_repeat1] = STATE(37),
    [sym__pipeline_expression] = STATE(224),
    [sym_array_expression] = STATE(224),
    [sym__attributed_variable] = STATE(42),
    [sym_variable] = STATE(42),
    [sym_non_type_attribute] = STATE(41),
    [sym__newline] = STATE(211),
    [aux_sym__newlines] = STATE(211),
    [sym__non_array_expression] = STATE(42),
    [sym__expression] = STATE(224),
    [aux_sym__attributed_variable_repeat1] = STATE(41),
    [sym_double_quote_string] = STATE(42),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(360),
    [anon_sym_LPAREN] = ACTIONS(362),
    [anon_sym_LBRACE] = ACTIONS(364),
    [sym_comment] = ACTIONS(11),
    [sym_number_expr] = ACTIONS(43),
    [sym_bareword_string] = ACTIONS(45),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(97),
    [anon_sym_DOLLAR] = ACTIONS(49),
    [anon_sym_LBRACK] = ACTIONS(366),
    [anon_sym_AMP] = ACTIONS(356),
    [anon_sym_LF] = ACTIONS(515),
    [anon_sym_COMMA] = ACTIONS(55),
    [anon_sym_AT_LBRACE] = ACTIONS(370),
    [anon_sym_AT_LPAREN] = ACTIONS(372),
    [anon_sym_CR_LF] = ACTIONS(517),
    [sym_single_quote_string] = ACTIONS(43),
    [anon_sym_DQUOTE] = ACTIONS(63),
  },
  [172] = {
    [anon_sym_COMMA] = ACTIONS(544),
    [ts_builtin_sym_end] = ACTIONS(546),
    [sym_comment] = ACTIONS(11),
    [anon_sym_RPAREN] = ACTIONS(544),
    [anon_sym_PIPE] = ACTIONS(544),
    [anon_sym_RBRACE] = ACTIONS(544),
    [anon_sym_CR_LF] = ACTIONS(546),
    [anon_sym_SEMI] = ACTIONS(544),
    [anon_sym_LF] = ACTIONS(544),
  },
  [173] = {
    [aux_sym_source_file_repeat1] = STATE(173),
    [sym__terminator] = STATE(225),
    [sym__newline] = STATE(225),
    [anon_sym_RBRACE] = ACTIONS(498),
    [anon_sym_CR_LF] = ACTIONS(548),
    [anon_sym_SEMI] = ACTIONS(551),
    [sym_comment] = ACTIONS(11),
    [anon_sym_LF] = ACTIONS(551),
  },
  [174] = {
    [sym__statement] = STATE(144),
    [sym_command_expression] = STATE(48),
    [sym_flat_array_expression] = STATE(50),
    [sym_hashtable_expression] = STATE(50),
    [sym_type_expr] = STATE(16),
    [sym__attribute] = STATE(22),
    [sym__string_expr] = STATE(50),
    [sym_scriptblock] = STATE(50),
    [aux_sym_array_expression_repeat1] = STATE(46),
    [sym_pipeline_statement] = STATE(144),
    [sym__pipeline_expression] = STATE(48),
    [sym_array_expression] = STATE(48),
    [sym__attributed_variable] = STATE(49),
    [sym_variable] = STATE(49),
    [sym_non_type_attribute] = STATE(22),
    [aux_sym__attributed_variable_repeat1] = STATE(22),
    [sym__non_array_expression] = STATE(50),
    [sym__expression] = STATE(48),
    [sym_double_quote_string] = STATE(50),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACE] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_number_expr] = ACTIONS(69),
    [sym_bareword_string] = ACTIONS(15),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(17),
    [anon_sym_DOLLAR] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_AMP] = ACTIONS(23),
    [anon_sym_COMMA] = ACTIONS(27),
    [anon_sym_AT_LBRACE] = ACTIONS(29),
    [anon_sym_AT_LPAREN] = ACTIONS(31),
    [anon_sym_RBRACE] = ACTIONS(554),
    [sym_single_quote_string] = ACTIONS(71),
    [anon_sym_DQUOTE] = ACTIONS(35),
  },
  [175] = {
    [aux_sym_source_file_repeat1] = STATE(173),
    [sym__terminator] = STATE(227),
    [sym__newline] = STATE(227),
    [anon_sym_RBRACE] = ACTIONS(556),
    [anon_sym_CR_LF] = ACTIONS(558),
    [anon_sym_SEMI] = ACTIONS(560),
    [sym_comment] = ACTIONS(11),
    [anon_sym_LF] = ACTIONS(560),
  },
  [176] = {
    [aux_sym_pipeline_statement_repeat1] = STATE(176),
    [anon_sym_RBRACE] = ACTIONS(504),
    [anon_sym_CR_LF] = ACTIONS(506),
    [anon_sym_SEMI] = ACTIONS(504),
    [sym_comment] = ACTIONS(11),
    [anon_sym_PIPE] = ACTIONS(508),
    [anon_sym_LF] = ACTIONS(504),
  },
  [177] = {
    [aux_sym_pipeline_statement_repeat1] = STATE(228),
    [anon_sym_RBRACE] = ACTIONS(513),
    [anon_sym_CR_LF] = ACTIONS(511),
    [anon_sym_SEMI] = ACTIONS(513),
    [sym_comment] = ACTIONS(11),
    [anon_sym_PIPE] = ACTIONS(153),
    [anon_sym_LF] = ACTIONS(513),
  },
  [178] = {
    [sym_command_expression] = STATE(229),
    [sym_flat_array_expression] = STATE(50),
    [sym_hashtable_expression] = STATE(50),
    [sym_type_expr] = STATE(16),
    [sym__attribute] = STATE(22),
    [sym__string_expr] = STATE(50),
    [sym_scriptblock] = STATE(50),
    [aux_sym_array_expression_repeat1] = STATE(46),
    [sym__pipeline_expression] = STATE(229),
    [sym_array_expression] = STATE(229),
    [sym__attributed_variable] = STATE(50),
    [sym_variable] = STATE(50),
    [sym_non_type_attribute] = STATE(22),
    [sym__newline] = STATE(211),
    [aux_sym__newlines] = STATE(211),
    [sym__non_array_expression] = STATE(50),
    [sym__expression] = STATE(229),
    [aux_sym__attributed_variable_repeat1] = STATE(22),
    [sym_double_quote_string] = STATE(50),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(105),
    [anon_sym_LPAREN] = ACTIONS(107),
    [anon_sym_LBRACE] = ACTIONS(109),
    [sym_comment] = ACTIONS(11),
    [sym_number_expr] = ACTIONS(69),
    [sym_bareword_string] = ACTIONS(15),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(115),
    [anon_sym_DOLLAR] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(117),
    [anon_sym_AMP] = ACTIONS(294),
    [anon_sym_LF] = ACTIONS(515),
    [anon_sym_COMMA] = ACTIONS(27),
    [anon_sym_AT_LBRACE] = ACTIONS(121),
    [anon_sym_AT_LPAREN] = ACTIONS(123),
    [anon_sym_CR_LF] = ACTIONS(517),
    [sym_single_quote_string] = ACTIONS(69),
    [anon_sym_DQUOTE] = ACTIONS(35),
  },
  [179] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACK] = ACTIONS(562),
  },
  [180] = {
    [aux_sym_array_expression_repeat1] = STATE(232),
    [anon_sym_COMMA] = ACTIONS(191),
    [anon_sym_RPAREN] = ACTIONS(564),
    [sym_comment] = ACTIONS(3),
  },
  [181] = {
    [aux_sym__typename_generic_repeat1] = STATE(235),
    [anon_sym_COMMA] = ACTIONS(566),
    [anon_sym_LBRACK_RBRACK] = ACTIONS(217),
    [anon_sym_LBRACK] = ACTIONS(219),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACK] = ACTIONS(568),
  },
  [182] = {
    [anon_sym_LBRACK_RBRACK] = ACTIONS(211),
    [anon_sym_LBRACK] = ACTIONS(213),
    [anon_sym_LPAREN] = ACTIONS(570),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACK] = ACTIONS(211),
  },
  [183] = {
    [aux_sym__newlines] = STATE(237),
    [sym__newline] = STATE(237),
    [anon_sym_DOLLAR] = ACTIONS(572),
    [anon_sym_LBRACK] = ACTIONS(572),
    [anon_sym_CR_LF] = ACTIONS(574),
    [sym_comment] = ACTIONS(11),
    [anon_sym_LF] = ACTIONS(576),
  },
  [184] = {
    [sym_type_expr] = STATE(120),
    [sym__attribute] = STATE(120),
    [sym_variable] = STATE(121),
    [sym_param_block_variable] = STATE(239),
    [sym_non_type_attribute] = STATE(120),
    [aux_sym_param_block_variable_repeat1] = STATE(123),
    [anon_sym_DOLLAR] = ACTIONS(179),
    [anon_sym_LBRACK] = ACTIONS(231),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(578),
  },
  [185] = {
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(580),
    [anon_sym_LPAREN] = ACTIONS(580),
    [anon_sym_LBRACE] = ACTIONS(580),
    [sym_comment] = ACTIONS(11),
    [sym_number_expr] = ACTIONS(582),
    [sym_bareword_string] = ACTIONS(582),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(580),
    [anon_sym_DOLLAR] = ACTIONS(582),
    [anon_sym_LBRACK] = ACTIONS(580),
    [anon_sym_AMP] = ACTIONS(580),
    [anon_sym_COMMA] = ACTIONS(582),
    [anon_sym_AT_LBRACE] = ACTIONS(580),
    [anon_sym_AT_LPAREN] = ACTIONS(580),
    [sym_single_quote_string] = ACTIONS(580),
    [anon_sym_DQUOTE] = ACTIONS(582),
  },
  [186] = {
    [aux_sym_param_block_repeat1] = STATE(241),
    [anon_sym_COMMA] = ACTIONS(584),
    [anon_sym_RPAREN] = ACTIONS(578),
    [sym_comment] = ACTIONS(3),
  },
  [187] = {
    [anon_sym_COMMA] = ACTIONS(586),
    [anon_sym_RPAREN] = ACTIONS(586),
    [sym_comment] = ACTIONS(3),
  },
  [188] = {
    [sym_type_expr] = STATE(120),
    [sym__attribute] = STATE(120),
    [sym_non_type_attribute] = STATE(120),
    [aux_sym_param_block_variable_repeat1] = STATE(188),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOLLAR] = ACTIONS(588),
    [anon_sym_LBRACK] = ACTIONS(590),
  },
  [189] = {
    [anon_sym_COMMA] = ACTIONS(593),
    [ts_builtin_sym_end] = ACTIONS(595),
    [sym_comment] = ACTIONS(11),
    [anon_sym_RPAREN] = ACTIONS(593),
    [anon_sym_PIPE] = ACTIONS(593),
    [anon_sym_RBRACE] = ACTIONS(593),
    [anon_sym_CR_LF] = ACTIONS(595),
    [anon_sym_SEMI] = ACTIONS(593),
    [anon_sym_LF] = ACTIONS(593),
  },
  [190] = {
    [sym__newline] = STATE(243),
    [aux_sym_flat_array_expression_repeat1] = STATE(129),
    [sym__terminator] = STATE(243),
    [aux_sym_hashtable_expression_repeat1] = STATE(196),
    [anon_sym_RBRACE] = ACTIONS(597),
    [anon_sym_CR_LF] = ACTIONS(599),
    [anon_sym_SEMI] = ACTIONS(601),
    [sym_comment] = ACTIONS(11),
    [anon_sym_LF] = ACTIONS(601),
  },
  [191] = {
    [sym_comment] = ACTIONS(11),
    [sym_bareword_string] = ACTIONS(452),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(452),
    [anon_sym_DOLLAR] = ACTIONS(452),
    [anon_sym_CR_LF] = ACTIONS(454),
    [sym_single_quote_string] = ACTIONS(452),
    [anon_sym_SEMI] = ACTIONS(452),
    [anon_sym_DQUOTE] = ACTIONS(452),
    [anon_sym_RBRACE] = ACTIONS(597),
    [anon_sym_LF] = ACTIONS(452),
  },
  [192] = {
    [aux_sym_array_expression_repeat1] = STATE(244),
    [anon_sym_COMMA] = ACTIONS(27),
    [anon_sym_RBRACE] = ACTIONS(147),
    [anon_sym_CR_LF] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(147),
    [sym_comment] = ACTIONS(11),
    [anon_sym_LF] = ACTIONS(147),
  },
  [193] = {
    [sym_flat_array_expression] = STATE(194),
    [sym_hashtable_expression] = STATE(194),
    [sym_type_expr] = STATE(16),
    [sym__attribute] = STATE(22),
    [sym__string_expr] = STATE(194),
    [sym_scriptblock] = STATE(194),
    [aux_sym_array_expression_repeat1] = STATE(192),
    [sym_array_expression] = STATE(246),
    [sym__attributed_variable] = STATE(194),
    [sym_variable] = STATE(194),
    [sym_non_type_attribute] = STATE(22),
    [sym__newline] = STATE(245),
    [aux_sym__newlines] = STATE(245),
    [sym__non_array_expression] = STATE(194),
    [aux_sym__attributed_variable_repeat1] = STATE(22),
    [sym__expression] = STATE(246),
    [sym_double_quote_string] = STATE(194),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(105),
    [anon_sym_LPAREN] = ACTIONS(107),
    [anon_sym_LBRACE] = ACTIONS(109),
    [sym_comment] = ACTIONS(11),
    [sym_number_expr] = ACTIONS(442),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(115),
    [anon_sym_DOLLAR] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(117),
    [anon_sym_LF] = ACTIONS(603),
    [anon_sym_COMMA] = ACTIONS(27),
    [anon_sym_AT_LBRACE] = ACTIONS(121),
    [anon_sym_AT_LPAREN] = ACTIONS(123),
    [anon_sym_CR_LF] = ACTIONS(605),
    [sym_single_quote_string] = ACTIONS(442),
    [anon_sym_DQUOTE] = ACTIONS(35),
  },
  [194] = {
    [aux_sym_array_expression_repeat1] = STATE(247),
    [anon_sym_COMMA] = ACTIONS(27),
    [anon_sym_RBRACE] = ACTIONS(161),
    [anon_sym_CR_LF] = ACTIONS(159),
    [anon_sym_SEMI] = ACTIONS(161),
    [sym_comment] = ACTIONS(11),
    [anon_sym_LF] = ACTIONS(161),
  },
  [195] = {
    [anon_sym_RBRACE] = ACTIONS(607),
    [anon_sym_CR_LF] = ACTIONS(609),
    [anon_sym_SEMI] = ACTIONS(607),
    [sym_comment] = ACTIONS(11),
    [anon_sym_LF] = ACTIONS(607),
  },
  [196] = {
    [sym__newline] = STATE(129),
    [aux_sym_flat_array_expression_repeat1] = STATE(129),
    [sym__terminator] = STATE(129),
    [aux_sym_hashtable_expression_repeat1] = STATE(196),
    [anon_sym_RBRACE] = ACTIONS(611),
    [anon_sym_CR_LF] = ACTIONS(613),
    [anon_sym_SEMI] = ACTIONS(616),
    [sym_comment] = ACTIONS(11),
    [anon_sym_LF] = ACTIONS(616),
  },
  [197] = {
    [sym__terminator] = STATE(197),
    [aux_sym_flat_array_expression_repeat1] = STATE(197),
    [sym__newline] = STATE(197),
    [sym_comment] = ACTIONS(11),
    [sym_bareword_string] = ACTIONS(460),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(460),
    [anon_sym_DOLLAR] = ACTIONS(460),
    [anon_sym_CR_LF] = ACTIONS(619),
    [sym_single_quote_string] = ACTIONS(460),
    [anon_sym_SEMI] = ACTIONS(622),
    [anon_sym_DQUOTE] = ACTIONS(460),
    [anon_sym_LF] = ACTIONS(622),
  },
  [198] = {
    [anon_sym_RBRACE] = ACTIONS(611),
    [anon_sym_CR_LF] = ACTIONS(625),
    [anon_sym_SEMI] = ACTIONS(611),
    [sym_comment] = ACTIONS(11),
    [anon_sym_LF] = ACTIONS(611),
  },
  [199] = {
    [anon_sym_COMMA] = ACTIONS(627),
    [ts_builtin_sym_end] = ACTIONS(629),
    [sym_comment] = ACTIONS(11),
    [anon_sym_RPAREN] = ACTIONS(627),
    [anon_sym_PIPE] = ACTIONS(627),
    [anon_sym_RBRACE] = ACTIONS(627),
    [anon_sym_CR_LF] = ACTIONS(629),
    [anon_sym_SEMI] = ACTIONS(627),
    [anon_sym_LF] = ACTIONS(627),
  },
  [200] = {
    [aux_sym_flat_array_expression_repeat1] = STATE(132),
    [sym_flat_array_expression] = STATE(66),
    [sym_hashtable_expression] = STATE(66),
    [sym_type_expr] = STATE(16),
    [sym__attribute] = STATE(22),
    [sym__string_expr] = STATE(66),
    [sym_scriptblock] = STATE(66),
    [aux_sym_array_expression_repeat1] = STATE(65),
    [sym__terminator] = STATE(132),
    [sym_array_expression] = STATE(202),
    [sym__attributed_variable] = STATE(66),
    [sym_variable] = STATE(66),
    [sym_non_type_attribute] = STATE(22),
    [sym__newline] = STATE(132),
    [aux_sym__attributed_variable_repeat1] = STATE(22),
    [sym__non_array_expression] = STATE(66),
    [sym__expression] = STATE(202),
    [sym_double_quote_string] = STATE(66),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(105),
    [anon_sym_LPAREN] = ACTIONS(107),
    [anon_sym_LBRACE] = ACTIONS(109),
    [anon_sym_RPAREN] = ACTIONS(631),
    [sym_number_expr] = ACTIONS(113),
    [sym_comment] = ACTIONS(11),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(115),
    [anon_sym_DOLLAR] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(117),
    [anon_sym_SEMI] = ACTIONS(261),
    [anon_sym_LF] = ACTIONS(261),
    [anon_sym_COMMA] = ACTIONS(27),
    [anon_sym_AT_LBRACE] = ACTIONS(121),
    [anon_sym_AT_LPAREN] = ACTIONS(123),
    [anon_sym_CR_LF] = ACTIONS(263),
    [sym_single_quote_string] = ACTIONS(113),
    [anon_sym_DQUOTE] = ACTIONS(35),
  },
  [201] = {
    [aux_sym_flat_array_expression_repeat1] = STATE(249),
    [aux_sym_flat_array_expression_repeat2] = STATE(203),
    [sym__terminator] = STATE(249),
    [sym__newline] = STATE(249),
    [anon_sym_CR_LF] = ACTIONS(633),
    [anon_sym_SEMI] = ACTIONS(635),
    [anon_sym_RPAREN] = ACTIONS(631),
    [sym_comment] = ACTIONS(11),
    [anon_sym_LF] = ACTIONS(635),
  },
  [202] = {
    [anon_sym_CR_LF] = ACTIONS(637),
    [anon_sym_SEMI] = ACTIONS(639),
    [anon_sym_RPAREN] = ACTIONS(639),
    [sym_comment] = ACTIONS(11),
    [anon_sym_LF] = ACTIONS(639),
  },
  [203] = {
    [aux_sym_flat_array_expression_repeat1] = STATE(250),
    [aux_sym_flat_array_expression_repeat2] = STATE(203),
    [sym__terminator] = STATE(250),
    [sym__newline] = STATE(250),
    [anon_sym_CR_LF] = ACTIONS(641),
    [anon_sym_SEMI] = ACTIONS(644),
    [anon_sym_RPAREN] = ACTIONS(639),
    [sym_comment] = ACTIONS(11),
    [anon_sym_LF] = ACTIONS(644),
  },
  [204] = {
    [anon_sym_COMMA] = ACTIONS(647),
    [ts_builtin_sym_end] = ACTIONS(649),
    [sym_comment] = ACTIONS(11),
    [anon_sym_RPAREN] = ACTIONS(647),
    [anon_sym_PIPE] = ACTIONS(647),
    [anon_sym_RBRACE] = ACTIONS(647),
    [anon_sym_CR_LF] = ACTIONS(649),
    [anon_sym_SEMI] = ACTIONS(647),
    [anon_sym_LF] = ACTIONS(647),
  },
  [205] = {
    [sym__varname_special] = STATE(138),
    [anon_sym_CARET] = ACTIONS(269),
    [anon_sym_DOLLAR] = ACTIONS(269),
    [sym__varname_braced] = ACTIONS(269),
    [sym_comment] = ACTIONS(3),
    [anon_sym_QMARK] = ACTIONS(269),
    [sym__varname_simple] = ACTIONS(269),
  },
  [206] = {
    [sym__statement] = STATE(144),
    [sym_command_expression] = STATE(19),
    [sym_flat_array_expression] = STATE(23),
    [sym_hashtable_expression] = STATE(23),
    [sym_type_expr] = STATE(16),
    [sym__attribute] = STATE(22),
    [sym__string_expr] = STATE(23),
    [sym_scriptblock] = STATE(23),
    [aux_sym_array_expression_repeat1] = STATE(18),
    [sym_pipeline_statement] = STATE(144),
    [sym__pipeline_expression] = STATE(19),
    [sym_array_expression] = STATE(19),
    [sym__attributed_variable] = STATE(20),
    [sym_variable] = STATE(20),
    [sym_non_type_attribute] = STATE(22),
    [aux_sym__attributed_variable_repeat1] = STATE(22),
    [sym__non_array_expression] = STATE(23),
    [sym__expression] = STATE(19),
    [sym_double_quote_string] = STATE(23),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACE] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_number_expr] = ACTIONS(13),
    [sym_bareword_string] = ACTIONS(15),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(17),
    [anon_sym_DOLLAR] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_AMP] = ACTIONS(23),
    [anon_sym_COMMA] = ACTIONS(27),
    [anon_sym_AT_LBRACE] = ACTIONS(29),
    [anon_sym_AT_LPAREN] = ACTIONS(31),
    [sym_single_quote_string] = ACTIONS(33),
    [anon_sym_DQUOTE] = ACTIONS(35),
  },
  [207] = {
    [sym__statement] = STATE(144),
    [sym_command_expression] = STATE(19),
    [sym_flat_array_expression] = STATE(23),
    [sym_hashtable_expression] = STATE(23),
    [sym_type_expr] = STATE(16),
    [sym__attribute] = STATE(22),
    [sym__string_expr] = STATE(23),
    [sym_scriptblock] = STATE(23),
    [aux_sym_array_expression_repeat1] = STATE(18),
    [sym_pipeline_statement] = STATE(144),
    [sym__pipeline_expression] = STATE(19),
    [sym_array_expression] = STATE(19),
    [sym__attributed_variable] = STATE(20),
    [sym_variable] = STATE(20),
    [sym_non_type_attribute] = STATE(22),
    [aux_sym__attributed_variable_repeat1] = STATE(22),
    [sym__non_array_expression] = STATE(23),
    [sym__expression] = STATE(19),
    [sym_double_quote_string] = STATE(23),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACE] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_number_expr] = ACTIONS(13),
    [sym_bareword_string] = ACTIONS(15),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(17),
    [anon_sym_DOLLAR] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_AMP] = ACTIONS(23),
    [anon_sym_COMMA] = ACTIONS(27),
    [ts_builtin_sym_end] = ACTIONS(651),
    [anon_sym_AT_LBRACE] = ACTIONS(29),
    [anon_sym_AT_LPAREN] = ACTIONS(31),
    [sym_single_quote_string] = ACTIONS(33),
    [anon_sym_DQUOTE] = ACTIONS(35),
  },
  [208] = {
    [anon_sym_RBRACE] = ACTIONS(653),
    [anon_sym_CR_LF] = ACTIONS(655),
    [ts_builtin_sym_end] = ACTIONS(655),
    [anon_sym_SEMI] = ACTIONS(653),
    [sym_comment] = ACTIONS(11),
    [anon_sym_PIPE] = ACTIONS(653),
    [anon_sym_LF] = ACTIONS(653),
  },
  [209] = {
    [aux_sym_pipeline_statement_repeat1] = STATE(148),
    [anon_sym_CR_LF] = ACTIONS(657),
    [ts_builtin_sym_end] = ACTIONS(657),
    [anon_sym_SEMI] = ACTIONS(659),
    [sym_comment] = ACTIONS(11),
    [anon_sym_PIPE] = ACTIONS(153),
    [anon_sym_LF] = ACTIONS(659),
  },
  [210] = {
    [aux_sym_pipeline_statement_repeat1] = STATE(251),
    [anon_sym_CR_LF] = ACTIONS(657),
    [ts_builtin_sym_end] = ACTIONS(657),
    [anon_sym_SEMI] = ACTIONS(659),
    [sym_comment] = ACTIONS(11),
    [anon_sym_PIPE] = ACTIONS(153),
    [anon_sym_LF] = ACTIONS(659),
  },
  [211] = {
    [aux_sym__newlines] = STATE(211),
    [sym__newline] = STATE(211),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(428),
    [anon_sym_LPAREN] = ACTIONS(428),
    [anon_sym_LBRACE] = ACTIONS(428),
    [sym_comment] = ACTIONS(11),
    [sym_number_expr] = ACTIONS(428),
    [sym_bareword_string] = ACTIONS(428),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(428),
    [anon_sym_DOLLAR] = ACTIONS(428),
    [anon_sym_LBRACK] = ACTIONS(428),
    [anon_sym_AMP] = ACTIONS(428),
    [anon_sym_LF] = ACTIONS(661),
    [anon_sym_COMMA] = ACTIONS(428),
    [anon_sym_AT_LBRACE] = ACTIONS(428),
    [anon_sym_AT_LPAREN] = ACTIONS(428),
    [anon_sym_CR_LF] = ACTIONS(664),
    [sym_single_quote_string] = ACTIONS(428),
    [anon_sym_DQUOTE] = ACTIONS(428),
  },
  [212] = {
    [anon_sym_COMMA] = ACTIONS(546),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(546),
    [anon_sym_PIPE] = ACTIONS(546),
  },
  [213] = {
    [sym__statement] = STATE(144),
    [sym_command_expression] = STATE(48),
    [sym_flat_array_expression] = STATE(50),
    [sym_hashtable_expression] = STATE(50),
    [sym_type_expr] = STATE(16),
    [sym__attribute] = STATE(22),
    [sym__string_expr] = STATE(50),
    [sym_scriptblock] = STATE(50),
    [aux_sym_array_expression_repeat1] = STATE(46),
    [sym_pipeline_statement] = STATE(144),
    [sym__pipeline_expression] = STATE(48),
    [sym_array_expression] = STATE(48),
    [sym__attributed_variable] = STATE(49),
    [sym_variable] = STATE(49),
    [sym_non_type_attribute] = STATE(22),
    [aux_sym__attributed_variable_repeat1] = STATE(22),
    [sym__non_array_expression] = STATE(50),
    [sym__expression] = STATE(48),
    [sym_double_quote_string] = STATE(50),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACE] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_number_expr] = ACTIONS(69),
    [sym_bareword_string] = ACTIONS(15),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(17),
    [anon_sym_DOLLAR] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_AMP] = ACTIONS(23),
    [anon_sym_COMMA] = ACTIONS(27),
    [anon_sym_AT_LBRACE] = ACTIONS(29),
    [anon_sym_AT_LPAREN] = ACTIONS(31),
    [anon_sym_RBRACE] = ACTIONS(667),
    [sym_single_quote_string] = ACTIONS(71),
    [anon_sym_DQUOTE] = ACTIONS(35),
  },
  [214] = {
    [aux_sym_source_file_repeat1] = STATE(173),
    [sym__terminator] = STATE(253),
    [sym__newline] = STATE(253),
    [anon_sym_RBRACE] = ACTIONS(669),
    [anon_sym_CR_LF] = ACTIONS(671),
    [anon_sym_SEMI] = ACTIONS(673),
    [sym_comment] = ACTIONS(11),
    [anon_sym_LF] = ACTIONS(673),
  },
  [215] = {
    [anon_sym_COMMA] = ACTIONS(595),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(595),
    [anon_sym_PIPE] = ACTIONS(595),
  },
  [216] = {
    [sym__newline] = STATE(255),
    [aux_sym_flat_array_expression_repeat1] = STATE(129),
    [sym__terminator] = STATE(255),
    [aux_sym_hashtable_expression_repeat1] = STATE(196),
    [anon_sym_RBRACE] = ACTIONS(675),
    [anon_sym_CR_LF] = ACTIONS(677),
    [anon_sym_SEMI] = ACTIONS(679),
    [sym_comment] = ACTIONS(11),
    [anon_sym_LF] = ACTIONS(679),
  },
  [217] = {
    [sym_comment] = ACTIONS(11),
    [sym_bareword_string] = ACTIONS(452),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(452),
    [anon_sym_DOLLAR] = ACTIONS(452),
    [anon_sym_CR_LF] = ACTIONS(454),
    [sym_single_quote_string] = ACTIONS(452),
    [anon_sym_SEMI] = ACTIONS(452),
    [anon_sym_DQUOTE] = ACTIONS(452),
    [anon_sym_RBRACE] = ACTIONS(675),
    [anon_sym_LF] = ACTIONS(452),
  },
  [218] = {
    [anon_sym_COMMA] = ACTIONS(629),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(629),
    [anon_sym_PIPE] = ACTIONS(629),
  },
  [219] = {
    [aux_sym_flat_array_expression_repeat1] = STATE(132),
    [sym_flat_array_expression] = STATE(66),
    [sym_hashtable_expression] = STATE(66),
    [sym_type_expr] = STATE(16),
    [sym__attribute] = STATE(22),
    [sym__string_expr] = STATE(66),
    [sym_scriptblock] = STATE(66),
    [aux_sym_array_expression_repeat1] = STATE(65),
    [sym__terminator] = STATE(132),
    [sym_array_expression] = STATE(202),
    [sym__attributed_variable] = STATE(66),
    [sym_variable] = STATE(66),
    [sym_non_type_attribute] = STATE(22),
    [sym__newline] = STATE(132),
    [aux_sym__attributed_variable_repeat1] = STATE(22),
    [sym__non_array_expression] = STATE(66),
    [sym__expression] = STATE(202),
    [sym_double_quote_string] = STATE(66),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(105),
    [anon_sym_LPAREN] = ACTIONS(107),
    [anon_sym_LBRACE] = ACTIONS(109),
    [anon_sym_RPAREN] = ACTIONS(681),
    [sym_number_expr] = ACTIONS(113),
    [sym_comment] = ACTIONS(11),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(115),
    [anon_sym_DOLLAR] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(117),
    [anon_sym_SEMI] = ACTIONS(261),
    [anon_sym_LF] = ACTIONS(261),
    [anon_sym_COMMA] = ACTIONS(27),
    [anon_sym_AT_LBRACE] = ACTIONS(121),
    [anon_sym_AT_LPAREN] = ACTIONS(123),
    [anon_sym_CR_LF] = ACTIONS(263),
    [sym_single_quote_string] = ACTIONS(113),
    [anon_sym_DQUOTE] = ACTIONS(35),
  },
  [220] = {
    [aux_sym_flat_array_expression_repeat1] = STATE(257),
    [aux_sym_flat_array_expression_repeat2] = STATE(203),
    [sym__terminator] = STATE(257),
    [sym__newline] = STATE(257),
    [anon_sym_CR_LF] = ACTIONS(683),
    [anon_sym_SEMI] = ACTIONS(685),
    [anon_sym_RPAREN] = ACTIONS(681),
    [sym_comment] = ACTIONS(11),
    [anon_sym_LF] = ACTIONS(685),
  },
  [221] = {
    [anon_sym_COMMA] = ACTIONS(649),
    [anon_sym_EQ] = ACTIONS(649),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(649),
    [anon_sym_PIPE] = ACTIONS(649),
  },
  [222] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(655),
    [anon_sym_PIPE] = ACTIONS(655),
  },
  [223] = {
    [aux_sym_pipeline_statement_repeat1] = STATE(169),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(657),
    [anon_sym_PIPE] = ACTIONS(195),
  },
  [224] = {
    [aux_sym_pipeline_statement_repeat1] = STATE(258),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(657),
    [anon_sym_PIPE] = ACTIONS(195),
  },
  [225] = {
    [sym__statement] = STATE(144),
    [sym_command_expression] = STATE(48),
    [sym_flat_array_expression] = STATE(50),
    [sym_hashtable_expression] = STATE(50),
    [sym_type_expr] = STATE(16),
    [sym__attribute] = STATE(22),
    [sym__string_expr] = STATE(50),
    [sym_scriptblock] = STATE(50),
    [aux_sym_array_expression_repeat1] = STATE(46),
    [sym_pipeline_statement] = STATE(144),
    [sym__pipeline_expression] = STATE(48),
    [sym_array_expression] = STATE(48),
    [sym__attributed_variable] = STATE(49),
    [sym_variable] = STATE(49),
    [sym_non_type_attribute] = STATE(22),
    [aux_sym__attributed_variable_repeat1] = STATE(22),
    [sym__non_array_expression] = STATE(50),
    [sym__expression] = STATE(48),
    [sym_double_quote_string] = STATE(50),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACE] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_number_expr] = ACTIONS(69),
    [sym_bareword_string] = ACTIONS(15),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(17),
    [anon_sym_DOLLAR] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_AMP] = ACTIONS(23),
    [anon_sym_COMMA] = ACTIONS(27),
    [anon_sym_AT_LBRACE] = ACTIONS(29),
    [anon_sym_AT_LPAREN] = ACTIONS(31),
    [sym_single_quote_string] = ACTIONS(71),
    [anon_sym_DQUOTE] = ACTIONS(35),
  },
  [226] = {
    [anon_sym_COMMA] = ACTIONS(687),
    [ts_builtin_sym_end] = ACTIONS(689),
    [sym_comment] = ACTIONS(11),
    [anon_sym_RPAREN] = ACTIONS(687),
    [anon_sym_PIPE] = ACTIONS(687),
    [anon_sym_RBRACE] = ACTIONS(687),
    [anon_sym_CR_LF] = ACTIONS(689),
    [anon_sym_SEMI] = ACTIONS(687),
    [anon_sym_LF] = ACTIONS(687),
  },
  [227] = {
    [sym__statement] = STATE(144),
    [sym_command_expression] = STATE(48),
    [sym_flat_array_expression] = STATE(50),
    [sym_hashtable_expression] = STATE(50),
    [sym_type_expr] = STATE(16),
    [sym__attribute] = STATE(22),
    [sym__string_expr] = STATE(50),
    [sym_scriptblock] = STATE(50),
    [aux_sym_array_expression_repeat1] = STATE(46),
    [sym_pipeline_statement] = STATE(144),
    [sym__pipeline_expression] = STATE(48),
    [sym_array_expression] = STATE(48),
    [sym__attributed_variable] = STATE(49),
    [sym_variable] = STATE(49),
    [sym_non_type_attribute] = STATE(22),
    [aux_sym__attributed_variable_repeat1] = STATE(22),
    [sym__non_array_expression] = STATE(50),
    [sym__expression] = STATE(48),
    [sym_double_quote_string] = STATE(50),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACE] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_number_expr] = ACTIONS(69),
    [sym_bareword_string] = ACTIONS(15),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(17),
    [anon_sym_DOLLAR] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_AMP] = ACTIONS(23),
    [anon_sym_COMMA] = ACTIONS(27),
    [anon_sym_AT_LBRACE] = ACTIONS(29),
    [anon_sym_AT_LPAREN] = ACTIONS(31),
    [anon_sym_RBRACE] = ACTIONS(691),
    [sym_single_quote_string] = ACTIONS(71),
    [anon_sym_DQUOTE] = ACTIONS(35),
  },
  [228] = {
    [aux_sym_pipeline_statement_repeat1] = STATE(176),
    [anon_sym_RBRACE] = ACTIONS(659),
    [anon_sym_CR_LF] = ACTIONS(657),
    [anon_sym_SEMI] = ACTIONS(659),
    [sym_comment] = ACTIONS(11),
    [anon_sym_PIPE] = ACTIONS(153),
    [anon_sym_LF] = ACTIONS(659),
  },
  [229] = {
    [aux_sym_pipeline_statement_repeat1] = STATE(260),
    [anon_sym_RBRACE] = ACTIONS(659),
    [anon_sym_CR_LF] = ACTIONS(657),
    [anon_sym_SEMI] = ACTIONS(659),
    [sym_comment] = ACTIONS(11),
    [anon_sym_PIPE] = ACTIONS(153),
    [anon_sym_LF] = ACTIONS(659),
  },
  [230] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOLLAR] = ACTIONS(693),
    [anon_sym_LBRACK] = ACTIONS(693),
  },
  [231] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACK] = ACTIONS(695),
  },
  [232] = {
    [aux_sym_array_expression_repeat1] = STATE(104),
    [anon_sym_COMMA] = ACTIONS(191),
    [anon_sym_RPAREN] = ACTIONS(697),
    [sym_comment] = ACTIONS(3),
  },
  [233] = {
    [sym__typename] = STATE(263),
    [sym__typename_array] = STATE(263),
    [sym__typename_generic] = STATE(263),
    [sym__typename_simple] = ACTIONS(699),
    [sym_comment] = ACTIONS(3),
  },
  [234] = {
    [anon_sym_COMMA] = ACTIONS(701),
    [anon_sym_LBRACK_RBRACK] = ACTIONS(701),
    [anon_sym_LBRACK] = ACTIONS(703),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACK] = ACTIONS(701),
  },
  [235] = {
    [aux_sym__typename_generic_repeat1] = STATE(265),
    [anon_sym_COMMA] = ACTIONS(566),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACK] = ACTIONS(705),
  },
  [236] = {
    [sym__attributed_variable] = STATE(267),
    [sym_variable] = STATE(267),
    [sym_non_type_attribute] = STATE(41),
    [sym_flat_array_expression] = STATE(267),
    [sym_hashtable_expression] = STATE(267),
    [sym_type_expr] = STATE(36),
    [aux_sym__attributed_variable_repeat1] = STATE(41),
    [sym__string_expr] = STATE(267),
    [sym_scriptblock] = STATE(267),
    [sym__attribute] = STATE(41),
    [sym__non_array_expression] = STATE(267),
    [sym_double_quote_string] = STATE(267),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(37),
    [anon_sym_LPAREN] = ACTIONS(39),
    [anon_sym_LBRACE] = ACTIONS(41),
    [anon_sym_AT_LBRACE] = ACTIONS(57),
    [sym_number_expr] = ACTIONS(707),
    [anon_sym_AT_LPAREN] = ACTIONS(59),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(47),
    [anon_sym_DOLLAR] = ACTIONS(49),
    [anon_sym_LBRACK] = ACTIONS(51),
    [sym_single_quote_string] = ACTIONS(707),
    [anon_sym_RPAREN] = ACTIONS(709),
    [anon_sym_DQUOTE] = ACTIONS(63),
    [sym_comment] = ACTIONS(3),
  },
  [237] = {
    [aux_sym__newlines] = STATE(237),
    [sym__newline] = STATE(237),
    [anon_sym_DOLLAR] = ACTIONS(428),
    [anon_sym_CR_LF] = ACTIONS(711),
    [anon_sym_LBRACK] = ACTIONS(428),
    [sym_comment] = ACTIONS(11),
    [anon_sym_LF] = ACTIONS(714),
  },
  [238] = {
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(717),
    [anon_sym_LPAREN] = ACTIONS(717),
    [anon_sym_LBRACE] = ACTIONS(717),
    [sym_comment] = ACTIONS(11),
    [sym_number_expr] = ACTIONS(719),
    [sym_bareword_string] = ACTIONS(719),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(717),
    [anon_sym_DOLLAR] = ACTIONS(719),
    [anon_sym_LBRACK] = ACTIONS(717),
    [anon_sym_AMP] = ACTIONS(717),
    [anon_sym_COMMA] = ACTIONS(719),
    [anon_sym_AT_LBRACE] = ACTIONS(717),
    [anon_sym_AT_LPAREN] = ACTIONS(717),
    [sym_single_quote_string] = ACTIONS(717),
    [anon_sym_DQUOTE] = ACTIONS(719),
  },
  [239] = {
    [anon_sym_COMMA] = ACTIONS(721),
    [anon_sym_RPAREN] = ACTIONS(721),
    [sym_comment] = ACTIONS(3),
  },
  [240] = {
    [sym_type_expr] = STATE(120),
    [sym__attribute] = STATE(120),
    [sym_variable] = STATE(121),
    [sym_param_block_variable] = STATE(239),
    [sym_non_type_attribute] = STATE(120),
    [aux_sym_param_block_variable_repeat1] = STATE(123),
    [anon_sym_DOLLAR] = ACTIONS(179),
    [anon_sym_LBRACK] = ACTIONS(231),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(723),
  },
  [241] = {
    [aux_sym_param_block_repeat1] = STATE(241),
    [anon_sym_COMMA] = ACTIONS(725),
    [anon_sym_RPAREN] = ACTIONS(721),
    [sym_comment] = ACTIONS(3),
  },
  [242] = {
    [anon_sym_COMMA] = ACTIONS(728),
    [ts_builtin_sym_end] = ACTIONS(730),
    [sym_comment] = ACTIONS(11),
    [anon_sym_RPAREN] = ACTIONS(728),
    [anon_sym_PIPE] = ACTIONS(728),
    [anon_sym_RBRACE] = ACTIONS(728),
    [anon_sym_CR_LF] = ACTIONS(730),
    [anon_sym_SEMI] = ACTIONS(728),
    [anon_sym_LF] = ACTIONS(728),
  },
  [243] = {
    [sym_comment] = ACTIONS(11),
    [sym_bareword_string] = ACTIONS(452),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(452),
    [anon_sym_DOLLAR] = ACTIONS(452),
    [anon_sym_CR_LF] = ACTIONS(454),
    [sym_single_quote_string] = ACTIONS(452),
    [anon_sym_SEMI] = ACTIONS(452),
    [anon_sym_DQUOTE] = ACTIONS(452),
    [anon_sym_RBRACE] = ACTIONS(732),
    [anon_sym_LF] = ACTIONS(452),
  },
  [244] = {
    [aux_sym_array_expression_repeat1] = STATE(244),
    [anon_sym_COMMA] = ACTIONS(289),
    [anon_sym_RBRACE] = ACTIONS(235),
    [anon_sym_CR_LF] = ACTIONS(237),
    [anon_sym_SEMI] = ACTIONS(235),
    [sym_comment] = ACTIONS(11),
    [anon_sym_LF] = ACTIONS(235),
  },
  [245] = {
    [aux_sym__newlines] = STATE(245),
    [sym__newline] = STATE(245),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(428),
    [anon_sym_LPAREN] = ACTIONS(428),
    [anon_sym_LBRACE] = ACTIONS(428),
    [sym_comment] = ACTIONS(11),
    [sym_number_expr] = ACTIONS(428),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(428),
    [anon_sym_DOLLAR] = ACTIONS(428),
    [anon_sym_LBRACK] = ACTIONS(428),
    [anon_sym_LF] = ACTIONS(734),
    [anon_sym_COMMA] = ACTIONS(428),
    [anon_sym_AT_LBRACE] = ACTIONS(428),
    [anon_sym_AT_LPAREN] = ACTIONS(428),
    [anon_sym_CR_LF] = ACTIONS(737),
    [sym_single_quote_string] = ACTIONS(428),
    [anon_sym_DQUOTE] = ACTIONS(428),
  },
  [246] = {
    [anon_sym_RBRACE] = ACTIONS(740),
    [anon_sym_CR_LF] = ACTIONS(742),
    [anon_sym_SEMI] = ACTIONS(740),
    [sym_comment] = ACTIONS(11),
    [anon_sym_LF] = ACTIONS(740),
  },
  [247] = {
    [aux_sym_array_expression_repeat1] = STATE(244),
    [anon_sym_COMMA] = ACTIONS(27),
    [anon_sym_RBRACE] = ACTIONS(317),
    [anon_sym_CR_LF] = ACTIONS(315),
    [anon_sym_SEMI] = ACTIONS(317),
    [sym_comment] = ACTIONS(11),
    [anon_sym_LF] = ACTIONS(317),
  },
  [248] = {
    [anon_sym_COMMA] = ACTIONS(744),
    [ts_builtin_sym_end] = ACTIONS(746),
    [sym_comment] = ACTIONS(11),
    [anon_sym_RPAREN] = ACTIONS(744),
    [anon_sym_PIPE] = ACTIONS(744),
    [anon_sym_RBRACE] = ACTIONS(744),
    [anon_sym_CR_LF] = ACTIONS(746),
    [anon_sym_SEMI] = ACTIONS(744),
    [anon_sym_LF] = ACTIONS(744),
  },
  [249] = {
    [aux_sym_flat_array_expression_repeat1] = STATE(132),
    [sym_flat_array_expression] = STATE(66),
    [sym_hashtable_expression] = STATE(66),
    [sym_type_expr] = STATE(16),
    [sym__attribute] = STATE(22),
    [sym__string_expr] = STATE(66),
    [sym_scriptblock] = STATE(66),
    [aux_sym_array_expression_repeat1] = STATE(65),
    [sym__terminator] = STATE(132),
    [sym_array_expression] = STATE(202),
    [sym__attributed_variable] = STATE(66),
    [sym_variable] = STATE(66),
    [sym_non_type_attribute] = STATE(22),
    [sym__newline] = STATE(132),
    [aux_sym__attributed_variable_repeat1] = STATE(22),
    [sym__non_array_expression] = STATE(66),
    [sym__expression] = STATE(202),
    [sym_double_quote_string] = STATE(66),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(105),
    [anon_sym_LPAREN] = ACTIONS(107),
    [anon_sym_LBRACE] = ACTIONS(109),
    [anon_sym_RPAREN] = ACTIONS(748),
    [sym_number_expr] = ACTIONS(113),
    [sym_comment] = ACTIONS(11),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(115),
    [anon_sym_DOLLAR] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(117),
    [anon_sym_SEMI] = ACTIONS(261),
    [anon_sym_LF] = ACTIONS(261),
    [anon_sym_COMMA] = ACTIONS(27),
    [anon_sym_AT_LBRACE] = ACTIONS(121),
    [anon_sym_AT_LPAREN] = ACTIONS(123),
    [anon_sym_CR_LF] = ACTIONS(263),
    [sym_single_quote_string] = ACTIONS(113),
    [anon_sym_DQUOTE] = ACTIONS(35),
  },
  [250] = {
    [aux_sym_flat_array_expression_repeat1] = STATE(272),
    [sym_flat_array_expression] = STATE(66),
    [sym_hashtable_expression] = STATE(66),
    [sym_type_expr] = STATE(16),
    [sym__attribute] = STATE(22),
    [sym__string_expr] = STATE(66),
    [sym_scriptblock] = STATE(66),
    [aux_sym_array_expression_repeat1] = STATE(65),
    [sym__terminator] = STATE(272),
    [sym_array_expression] = STATE(202),
    [sym__attributed_variable] = STATE(66),
    [sym_variable] = STATE(66),
    [sym_non_type_attribute] = STATE(22),
    [sym__newline] = STATE(272),
    [aux_sym__attributed_variable_repeat1] = STATE(22),
    [sym__non_array_expression] = STATE(66),
    [sym__expression] = STATE(202),
    [sym_double_quote_string] = STATE(66),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(105),
    [anon_sym_LPAREN] = ACTIONS(107),
    [anon_sym_LBRACE] = ACTIONS(109),
    [sym_comment] = ACTIONS(11),
    [sym_number_expr] = ACTIONS(113),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(115),
    [anon_sym_DOLLAR] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(117),
    [anon_sym_SEMI] = ACTIONS(750),
    [anon_sym_LF] = ACTIONS(750),
    [anon_sym_COMMA] = ACTIONS(27),
    [anon_sym_AT_LBRACE] = ACTIONS(121),
    [anon_sym_AT_LPAREN] = ACTIONS(123),
    [anon_sym_CR_LF] = ACTIONS(752),
    [sym_single_quote_string] = ACTIONS(113),
    [anon_sym_DQUOTE] = ACTIONS(35),
  },
  [251] = {
    [aux_sym_pipeline_statement_repeat1] = STATE(148),
    [anon_sym_CR_LF] = ACTIONS(754),
    [ts_builtin_sym_end] = ACTIONS(754),
    [anon_sym_SEMI] = ACTIONS(756),
    [sym_comment] = ACTIONS(11),
    [anon_sym_PIPE] = ACTIONS(153),
    [anon_sym_LF] = ACTIONS(756),
  },
  [252] = {
    [anon_sym_COMMA] = ACTIONS(689),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(689),
    [anon_sym_PIPE] = ACTIONS(689),
  },
  [253] = {
    [sym__statement] = STATE(144),
    [sym_command_expression] = STATE(48),
    [sym_flat_array_expression] = STATE(50),
    [sym_hashtable_expression] = STATE(50),
    [sym_type_expr] = STATE(16),
    [sym__attribute] = STATE(22),
    [sym__string_expr] = STATE(50),
    [sym_scriptblock] = STATE(50),
    [aux_sym_array_expression_repeat1] = STATE(46),
    [sym_pipeline_statement] = STATE(144),
    [sym__pipeline_expression] = STATE(48),
    [sym_array_expression] = STATE(48),
    [sym__attributed_variable] = STATE(49),
    [sym_variable] = STATE(49),
    [sym_non_type_attribute] = STATE(22),
    [aux_sym__attributed_variable_repeat1] = STATE(22),
    [sym__non_array_expression] = STATE(50),
    [sym__expression] = STATE(48),
    [sym_double_quote_string] = STATE(50),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACE] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_number_expr] = ACTIONS(69),
    [sym_bareword_string] = ACTIONS(15),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(17),
    [anon_sym_DOLLAR] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_AMP] = ACTIONS(23),
    [anon_sym_COMMA] = ACTIONS(27),
    [anon_sym_AT_LBRACE] = ACTIONS(29),
    [anon_sym_AT_LPAREN] = ACTIONS(31),
    [anon_sym_RBRACE] = ACTIONS(758),
    [sym_single_quote_string] = ACTIONS(71),
    [anon_sym_DQUOTE] = ACTIONS(35),
  },
  [254] = {
    [anon_sym_COMMA] = ACTIONS(730),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(730),
    [anon_sym_PIPE] = ACTIONS(730),
  },
  [255] = {
    [sym_comment] = ACTIONS(11),
    [sym_bareword_string] = ACTIONS(452),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(452),
    [anon_sym_DOLLAR] = ACTIONS(452),
    [anon_sym_CR_LF] = ACTIONS(454),
    [sym_single_quote_string] = ACTIONS(452),
    [anon_sym_SEMI] = ACTIONS(452),
    [anon_sym_DQUOTE] = ACTIONS(452),
    [anon_sym_RBRACE] = ACTIONS(760),
    [anon_sym_LF] = ACTIONS(452),
  },
  [256] = {
    [anon_sym_COMMA] = ACTIONS(746),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(746),
    [anon_sym_PIPE] = ACTIONS(746),
  },
  [257] = {
    [aux_sym_flat_array_expression_repeat1] = STATE(132),
    [sym_flat_array_expression] = STATE(66),
    [sym_hashtable_expression] = STATE(66),
    [sym_type_expr] = STATE(16),
    [sym__attribute] = STATE(22),
    [sym__string_expr] = STATE(66),
    [sym_scriptblock] = STATE(66),
    [aux_sym_array_expression_repeat1] = STATE(65),
    [sym__terminator] = STATE(132),
    [sym_array_expression] = STATE(202),
    [sym__attributed_variable] = STATE(66),
    [sym_variable] = STATE(66),
    [sym_non_type_attribute] = STATE(22),
    [sym__newline] = STATE(132),
    [aux_sym__attributed_variable_repeat1] = STATE(22),
    [sym__non_array_expression] = STATE(66),
    [sym__expression] = STATE(202),
    [sym_double_quote_string] = STATE(66),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(105),
    [anon_sym_LPAREN] = ACTIONS(107),
    [anon_sym_LBRACE] = ACTIONS(109),
    [anon_sym_RPAREN] = ACTIONS(762),
    [sym_number_expr] = ACTIONS(113),
    [sym_comment] = ACTIONS(11),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(115),
    [anon_sym_DOLLAR] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(117),
    [anon_sym_SEMI] = ACTIONS(261),
    [anon_sym_LF] = ACTIONS(261),
    [anon_sym_COMMA] = ACTIONS(27),
    [anon_sym_AT_LBRACE] = ACTIONS(121),
    [anon_sym_AT_LPAREN] = ACTIONS(123),
    [anon_sym_CR_LF] = ACTIONS(263),
    [sym_single_quote_string] = ACTIONS(113),
    [anon_sym_DQUOTE] = ACTIONS(35),
  },
  [258] = {
    [aux_sym_pipeline_statement_repeat1] = STATE(169),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(754),
    [anon_sym_PIPE] = ACTIONS(195),
  },
  [259] = {
    [anon_sym_COMMA] = ACTIONS(764),
    [ts_builtin_sym_end] = ACTIONS(766),
    [sym_comment] = ACTIONS(11),
    [anon_sym_RPAREN] = ACTIONS(764),
    [anon_sym_PIPE] = ACTIONS(764),
    [anon_sym_RBRACE] = ACTIONS(764),
    [anon_sym_CR_LF] = ACTIONS(766),
    [anon_sym_SEMI] = ACTIONS(764),
    [anon_sym_LF] = ACTIONS(764),
  },
  [260] = {
    [aux_sym_pipeline_statement_repeat1] = STATE(176),
    [anon_sym_RBRACE] = ACTIONS(756),
    [anon_sym_CR_LF] = ACTIONS(754),
    [anon_sym_SEMI] = ACTIONS(756),
    [sym_comment] = ACTIONS(11),
    [anon_sym_PIPE] = ACTIONS(153),
    [anon_sym_LF] = ACTIONS(756),
  },
  [261] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOLLAR] = ACTIONS(768),
    [anon_sym_LBRACK] = ACTIONS(768),
  },
  [262] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACK] = ACTIONS(770),
  },
  [263] = {
    [anon_sym_COMMA] = ACTIONS(772),
    [anon_sym_LBRACK_RBRACK] = ACTIONS(217),
    [anon_sym_LBRACK] = ACTIONS(219),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACK] = ACTIONS(772),
  },
  [264] = {
    [anon_sym_COMMA] = ACTIONS(774),
    [anon_sym_LBRACK_RBRACK] = ACTIONS(774),
    [anon_sym_LBRACK] = ACTIONS(776),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACK] = ACTIONS(774),
  },
  [265] = {
    [aux_sym__typename_generic_repeat1] = STATE(265),
    [anon_sym_COMMA] = ACTIONS(778),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACK] = ACTIONS(772),
  },
  [266] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACK] = ACTIONS(781),
  },
  [267] = {
    [aux_sym_array_expression_repeat1] = STATE(279),
    [anon_sym_COMMA] = ACTIONS(191),
    [anon_sym_RPAREN] = ACTIONS(783),
    [sym_comment] = ACTIONS(3),
  },
  [268] = {
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(785),
    [anon_sym_LPAREN] = ACTIONS(785),
    [anon_sym_LBRACE] = ACTIONS(785),
    [sym_comment] = ACTIONS(11),
    [sym_number_expr] = ACTIONS(787),
    [sym_bareword_string] = ACTIONS(787),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(785),
    [anon_sym_DOLLAR] = ACTIONS(787),
    [anon_sym_LBRACK] = ACTIONS(785),
    [anon_sym_AMP] = ACTIONS(785),
    [anon_sym_COMMA] = ACTIONS(787),
    [anon_sym_AT_LBRACE] = ACTIONS(785),
    [anon_sym_AT_LPAREN] = ACTIONS(785),
    [sym_single_quote_string] = ACTIONS(785),
    [anon_sym_DQUOTE] = ACTIONS(787),
  },
  [269] = {
    [sym_type_expr] = STATE(120),
    [sym__attribute] = STATE(120),
    [sym_variable] = STATE(121),
    [sym_param_block_variable] = STATE(239),
    [sym_non_type_attribute] = STATE(120),
    [aux_sym_param_block_variable_repeat1] = STATE(123),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOLLAR] = ACTIONS(179),
    [anon_sym_LBRACK] = ACTIONS(231),
  },
  [270] = {
    [anon_sym_COMMA] = ACTIONS(789),
    [ts_builtin_sym_end] = ACTIONS(791),
    [sym_comment] = ACTIONS(11),
    [anon_sym_RPAREN] = ACTIONS(789),
    [anon_sym_PIPE] = ACTIONS(789),
    [anon_sym_RBRACE] = ACTIONS(789),
    [anon_sym_CR_LF] = ACTIONS(791),
    [anon_sym_SEMI] = ACTIONS(789),
    [anon_sym_LF] = ACTIONS(789),
  },
  [271] = {
    [anon_sym_COMMA] = ACTIONS(793),
    [ts_builtin_sym_end] = ACTIONS(795),
    [sym_comment] = ACTIONS(11),
    [anon_sym_RPAREN] = ACTIONS(793),
    [anon_sym_PIPE] = ACTIONS(793),
    [anon_sym_RBRACE] = ACTIONS(793),
    [anon_sym_CR_LF] = ACTIONS(795),
    [anon_sym_SEMI] = ACTIONS(793),
    [anon_sym_LF] = ACTIONS(793),
  },
  [272] = {
    [sym__terminator] = STATE(272),
    [aux_sym_flat_array_expression_repeat1] = STATE(272),
    [sym__newline] = STATE(272),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(460),
    [anon_sym_LPAREN] = ACTIONS(460),
    [anon_sym_LBRACE] = ACTIONS(460),
    [sym_comment] = ACTIONS(11),
    [sym_number_expr] = ACTIONS(460),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(460),
    [anon_sym_DOLLAR] = ACTIONS(460),
    [anon_sym_LBRACK] = ACTIONS(460),
    [anon_sym_SEMI] = ACTIONS(797),
    [anon_sym_LF] = ACTIONS(797),
    [anon_sym_COMMA] = ACTIONS(460),
    [anon_sym_AT_LBRACE] = ACTIONS(460),
    [anon_sym_AT_LPAREN] = ACTIONS(460),
    [anon_sym_CR_LF] = ACTIONS(800),
    [sym_single_quote_string] = ACTIONS(460),
    [anon_sym_DQUOTE] = ACTIONS(460),
  },
  [273] = {
    [anon_sym_COMMA] = ACTIONS(766),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(766),
    [anon_sym_PIPE] = ACTIONS(766),
  },
  [274] = {
    [anon_sym_COMMA] = ACTIONS(791),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(791),
    [anon_sym_PIPE] = ACTIONS(791),
  },
  [275] = {
    [anon_sym_COMMA] = ACTIONS(795),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(795),
    [anon_sym_PIPE] = ACTIONS(795),
  },
  [276] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOLLAR] = ACTIONS(803),
    [anon_sym_LBRACK] = ACTIONS(803),
  },
  [277] = {
    [anon_sym_DOLLAR] = ACTIONS(805),
    [anon_sym_CR_LF] = ACTIONS(693),
    [anon_sym_LBRACK] = ACTIONS(805),
    [sym_comment] = ACTIONS(11),
    [anon_sym_LF] = ACTIONS(805),
  },
  [278] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACK] = ACTIONS(807),
  },
  [279] = {
    [aux_sym_array_expression_repeat1] = STATE(104),
    [anon_sym_COMMA] = ACTIONS(191),
    [anon_sym_RPAREN] = ACTIONS(809),
    [sym_comment] = ACTIONS(3),
  },
  [280] = {
    [anon_sym_DOLLAR] = ACTIONS(811),
    [anon_sym_CR_LF] = ACTIONS(768),
    [anon_sym_LBRACK] = ACTIONS(811),
    [sym_comment] = ACTIONS(11),
    [anon_sym_LF] = ACTIONS(811),
  },
  [281] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACK] = ACTIONS(813),
  },
  [282] = {
    [anon_sym_DOLLAR] = ACTIONS(815),
    [anon_sym_CR_LF] = ACTIONS(803),
    [anon_sym_LBRACK] = ACTIONS(815),
    [sym_comment] = ACTIONS(11),
    [anon_sym_LF] = ACTIONS(815),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, SHIFT_EXTRA(),
  [5] = {.count = 1, .reusable = true}, SHIFT(2),
  [7] = {.count = 1, .reusable = true}, SHIFT(3),
  [9] = {.count = 1, .reusable = true}, SHIFT(4),
  [11] = {.count = 1, .reusable = false}, SHIFT_EXTRA(),
  [13] = {.count = 1, .reusable = false}, SHIFT(23),
  [15] = {.count = 1, .reusable = false}, SHIFT(5),
  [17] = {.count = 1, .reusable = true}, SHIFT(6),
  [19] = {.count = 1, .reusable = false}, SHIFT(7),
  [21] = {.count = 1, .reusable = true}, SHIFT(8),
  [23] = {.count = 1, .reusable = true}, SHIFT(9),
  [25] = {.count = 1, .reusable = false}, SHIFT(10),
  [27] = {.count = 1, .reusable = false}, SHIFT(11),
  [29] = {.count = 1, .reusable = true}, SHIFT(12),
  [31] = {.count = 1, .reusable = true}, SHIFT(13),
  [33] = {.count = 1, .reusable = true}, SHIFT(23),
  [35] = {.count = 1, .reusable = false}, SHIFT(14),
  [37] = {.count = 1, .reusable = true}, SHIFT(25),
  [39] = {.count = 1, .reusable = true}, SHIFT(26),
  [41] = {.count = 1, .reusable = true}, SHIFT(27),
  [43] = {.count = 1, .reusable = false}, SHIFT(42),
  [45] = {.count = 1, .reusable = false}, SHIFT(30),
  [47] = {.count = 1, .reusable = true}, SHIFT(34),
  [49] = {.count = 1, .reusable = false}, SHIFT(31),
  [51] = {.count = 1, .reusable = true}, SHIFT(32),
  [53] = {.count = 1, .reusable = true}, SHIFT(33),
  [55] = {.count = 1, .reusable = false}, SHIFT(24),
  [57] = {.count = 1, .reusable = true}, SHIFT(28),
  [59] = {.count = 1, .reusable = true}, SHIFT(29),
  [61] = {.count = 1, .reusable = true}, SHIFT(42),
  [63] = {.count = 1, .reusable = false}, SHIFT(35),
  [65] = {.count = 1, .reusable = false}, SHIFT(44),
  [67] = {.count = 1, .reusable = true}, SHIFT(44),
  [69] = {.count = 1, .reusable = false}, SHIFT(50),
  [71] = {.count = 1, .reusable = true}, SHIFT(50),
  [73] = {.count = 1, .reusable = false}, REDUCE(sym_command_expression, 1),
  [75] = {.count = 1, .reusable = true}, REDUCE(sym_command_expression, 1),
  [77] = {.count = 1, .reusable = false}, REDUCE(sym_double_quote_string, 1),
  [79] = {.count = 1, .reusable = true}, REDUCE(sym_double_quote_string, 1),
  [81] = {.count = 1, .reusable = true}, SHIFT(51),
  [83] = {.count = 1, .reusable = true}, SHIFT(52),
  [85] = {.count = 1, .reusable = true}, SHIFT(7),
  [87] = {.count = 1, .reusable = true}, SHIFT(54),
  [89] = {.count = 1, .reusable = false}, SHIFT(54),
  [91] = {.count = 1, .reusable = true}, SHIFT(56),
  [93] = {.count = 1, .reusable = true}, SHIFT(57),
  [95] = {.count = 1, .reusable = false}, SHIFT(58),
  [97] = {.count = 1, .reusable = false}, SHIFT(34),
  [99] = {.count = 1, .reusable = true}, SHIFT(60),
  [101] = {.count = 1, .reusable = false}, SHIFT(59),
  [103] = {.count = 1, .reusable = false}, SHIFT(60),
  [105] = {.count = 1, .reusable = false}, SHIFT(2),
  [107] = {.count = 1, .reusable = false}, SHIFT(3),
  [109] = {.count = 1, .reusable = false}, SHIFT(4),
  [111] = {.count = 1, .reusable = false}, SHIFT(63),
  [113] = {.count = 1, .reusable = false}, SHIFT(66),
  [115] = {.count = 1, .reusable = false}, SHIFT(6),
  [117] = {.count = 1, .reusable = false}, SHIFT(8),
  [119] = {.count = 1, .reusable = false}, SHIFT(64),
  [121] = {.count = 1, .reusable = false}, SHIFT(12),
  [123] = {.count = 1, .reusable = false}, SHIFT(13),
  [125] = {.count = 1, .reusable = true}, SHIFT(64),
  [127] = {.count = 1, .reusable = false}, SHIFT(68),
  [129] = {.count = 1, .reusable = false}, SHIFT(70),
  [131] = {.count = 1, .reusable = false}, SHIFT(69),
  [133] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 1),
  [135] = {.count = 1, .reusable = true}, SHIFT(72),
  [137] = {.count = 1, .reusable = false}, SHIFT(72),
  [139] = {.count = 1, .reusable = false}, REDUCE(sym__non_array_expression, 1),
  [141] = {.count = 1, .reusable = true}, REDUCE(sym__non_array_expression, 1),
  [143] = {.count = 1, .reusable = false}, REDUCE(sym__attribute, 1),
  [145] = {.count = 1, .reusable = true}, REDUCE(sym_array_expression, 1),
  [147] = {.count = 1, .reusable = false}, REDUCE(sym_array_expression, 1),
  [149] = {.count = 1, .reusable = true}, REDUCE(sym_pipeline_statement, 1),
  [151] = {.count = 1, .reusable = false}, REDUCE(sym_pipeline_statement, 1),
  [153] = {.count = 1, .reusable = false}, SHIFT(75),
  [155] = {.count = 1, .reusable = false}, SHIFT(77),
  [157] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [159] = {.count = 1, .reusable = true}, REDUCE(sym__expression, 1),
  [161] = {.count = 1, .reusable = false}, REDUCE(sym__expression, 1),
  [163] = {.count = 1, .reusable = true}, SHIFT(81),
  [165] = {.count = 1, .reusable = true}, SHIFT(86),
  [167] = {.count = 1, .reusable = false}, SHIFT(85),
  [169] = {.count = 1, .reusable = false}, SHIFT(86),
  [171] = {.count = 1, .reusable = false}, SHIFT(88),
  [173] = {.count = 1, .reusable = false}, SHIFT(89),
  [175] = {.count = 1, .reusable = true}, SHIFT(89),
  [177] = {.count = 1, .reusable = true}, SHIFT(91),
  [179] = {.count = 1, .reusable = true}, SHIFT(31),
  [181] = {.count = 1, .reusable = true}, SHIFT(58),
  [183] = {.count = 1, .reusable = false}, SHIFT(94),
  [185] = {.count = 1, .reusable = false}, SHIFT(96),
  [187] = {.count = 1, .reusable = false}, SHIFT(95),
  [189] = {.count = 1, .reusable = true}, REDUCE(sym__attribute, 1),
  [191] = {.count = 1, .reusable = true}, SHIFT(24),
  [193] = {.count = 1, .reusable = true}, SHIFT(98),
  [195] = {.count = 1, .reusable = true}, SHIFT(99),
  [197] = {.count = 1, .reusable = true}, SHIFT(101),
  [199] = {.count = 1, .reusable = false}, SHIFT(106),
  [201] = {.count = 1, .reusable = true}, SHIFT(108),
  [203] = {.count = 1, .reusable = false}, SHIFT(108),
  [205] = {.count = 1, .reusable = false}, SHIFT(112),
  [207] = {.count = 1, .reusable = false}, REDUCE(sym_variable, 2),
  [209] = {.count = 1, .reusable = true}, REDUCE(sym_variable, 2),
  [211] = {.count = 1, .reusable = true}, REDUCE(sym__typename, 1),
  [213] = {.count = 1, .reusable = false}, REDUCE(sym__typename, 1),
  [215] = {.count = 1, .reusable = true}, SHIFT(114),
  [217] = {.count = 1, .reusable = true}, SHIFT(115),
  [219] = {.count = 1, .reusable = false}, SHIFT(116),
  [221] = {.count = 1, .reusable = true}, SHIFT(117),
  [223] = {.count = 1, .reusable = false}, REDUCE(sym_property_name, 1),
  [225] = {.count = 1, .reusable = true}, REDUCE(sym_property_name, 1),
  [227] = {.count = 1, .reusable = false}, REDUCE(sym_command_expression, 2),
  [229] = {.count = 1, .reusable = true}, REDUCE(sym_command_expression, 2),
  [231] = {.count = 1, .reusable = true}, SHIFT(118),
  [233] = {.count = 1, .reusable = true}, SHIFT(119),
  [235] = {.count = 1, .reusable = false}, REDUCE(aux_sym_array_expression_repeat1, 2),
  [237] = {.count = 1, .reusable = true}, REDUCE(aux_sym_array_expression_repeat1, 2),
  [239] = {.count = 1, .reusable = false}, REDUCE(sym_hashtable_expression, 2),
  [241] = {.count = 1, .reusable = true}, REDUCE(sym_hashtable_expression, 2),
  [243] = {.count = 1, .reusable = true}, SHIFT(125),
  [245] = {.count = 1, .reusable = false}, SHIFT(124),
  [247] = {.count = 1, .reusable = false}, SHIFT(125),
  [249] = {.count = 1, .reusable = true}, SHIFT(127),
  [251] = {.count = 1, .reusable = true}, SHIFT(130),
  [253] = {.count = 1, .reusable = false}, SHIFT(130),
  [255] = {.count = 1, .reusable = false}, REDUCE(sym_flat_array_expression, 2),
  [257] = {.count = 1, .reusable = true}, REDUCE(sym_flat_array_expression, 2),
  [259] = {.count = 1, .reusable = false}, SHIFT(131),
  [261] = {.count = 1, .reusable = false}, SHIFT(132),
  [263] = {.count = 1, .reusable = true}, SHIFT(132),
  [265] = {.count = 1, .reusable = true}, SHIFT(136),
  [267] = {.count = 1, .reusable = false}, SHIFT(136),
  [269] = {.count = 1, .reusable = true}, SHIFT(138),
  [271] = {.count = 1, .reusable = true}, SHIFT(139),
  [273] = {.count = 1, .reusable = false}, REDUCE(sym_double_quote_string, 2),
  [275] = {.count = 1, .reusable = true}, REDUCE(sym_double_quote_string, 2),
  [277] = {.count = 1, .reusable = false}, SHIFT(140),
  [279] = {.count = 1, .reusable = false}, SHIFT(141),
  [281] = {.count = 1, .reusable = false}, SHIFT(139),
  [283] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 2),
  [285] = {.count = 1, .reusable = true}, SHIFT(143),
  [287] = {.count = 1, .reusable = false}, SHIFT(143),
  [289] = {.count = 2, .reusable = false}, REDUCE(aux_sym_array_expression_repeat1, 2), SHIFT_REPEAT(11),
  [292] = {.count = 1, .reusable = true}, SHIFT(146),
  [294] = {.count = 1, .reusable = false}, SHIFT(9),
  [296] = {.count = 1, .reusable = false}, SHIFT(146),
  [298] = {.count = 1, .reusable = true}, REDUCE(sym_pipeline_statement, 2),
  [300] = {.count = 1, .reusable = false}, REDUCE(sym_pipeline_statement, 2),
  [302] = {.count = 1, .reusable = false}, SHIFT(150),
  [304] = {.count = 1, .reusable = true}, SHIFT(150),
  [306] = {.count = 1, .reusable = true}, REDUCE(aux_sym__attributed_variable_repeat1, 2),
  [308] = {.count = 2, .reusable = true}, REDUCE(aux_sym__attributed_variable_repeat1, 2), SHIFT_REPEAT(32),
  [311] = {.count = 1, .reusable = false}, REDUCE(sym__attributed_variable, 2),
  [313] = {.count = 1, .reusable = true}, REDUCE(sym__attributed_variable, 2),
  [315] = {.count = 1, .reusable = true}, REDUCE(sym_array_expression, 2),
  [317] = {.count = 1, .reusable = false}, REDUCE(sym_array_expression, 2),
  [319] = {.count = 1, .reusable = true}, SHIFT(151),
  [321] = {.count = 1, .reusable = false}, SHIFT(152),
  [323] = {.count = 1, .reusable = true}, SHIFT(154),
  [325] = {.count = 1, .reusable = false}, SHIFT(154),
  [327] = {.count = 1, .reusable = false}, SHIFT(156),
  [329] = {.count = 1, .reusable = true}, SHIFT(159),
  [331] = {.count = 1, .reusable = false}, SHIFT(159),
  [333] = {.count = 1, .reusable = false}, SHIFT(160),
  [335] = {.count = 1, .reusable = true}, SHIFT(162),
  [337] = {.count = 1, .reusable = false}, SHIFT(162),
  [339] = {.count = 1, .reusable = true}, SHIFT(164),
  [341] = {.count = 1, .reusable = true}, SHIFT(165),
  [343] = {.count = 1, .reusable = false}, SHIFT(166),
  [345] = {.count = 1, .reusable = false}, SHIFT(165),
  [347] = {.count = 2, .reusable = true}, REDUCE(aux_sym_array_expression_repeat1, 2), SHIFT_REPEAT(24),
  [350] = {.count = 1, .reusable = false}, REDUCE(sym__non_array_expression, 3),
  [352] = {.count = 1, .reusable = true}, REDUCE(sym__non_array_expression, 3),
  [354] = {.count = 1, .reusable = true}, SHIFT(167),
  [356] = {.count = 1, .reusable = false}, SHIFT(33),
  [358] = {.count = 1, .reusable = false}, SHIFT(167),
  [360] = {.count = 1, .reusable = false}, SHIFT(25),
  [362] = {.count = 1, .reusable = false}, SHIFT(26),
  [364] = {.count = 1, .reusable = false}, SHIFT(27),
  [366] = {.count = 1, .reusable = false}, SHIFT(32),
  [368] = {.count = 1, .reusable = false}, SHIFT(171),
  [370] = {.count = 1, .reusable = false}, SHIFT(28),
  [372] = {.count = 1, .reusable = false}, SHIFT(29),
  [374] = {.count = 1, .reusable = true}, SHIFT(171),
  [376] = {.count = 1, .reusable = false}, REDUCE(sym_scriptblock, 3),
  [378] = {.count = 1, .reusable = true}, REDUCE(sym_scriptblock, 3),
  [380] = {.count = 1, .reusable = false}, SHIFT(172),
  [382] = {.count = 1, .reusable = true}, SHIFT(174),
  [384] = {.count = 1, .reusable = false}, SHIFT(174),
  [386] = {.count = 1, .reusable = true}, SHIFT(172),
  [388] = {.count = 1, .reusable = false}, SHIFT(178),
  [390] = {.count = 1, .reusable = true}, SHIFT(178),
  [392] = {.count = 1, .reusable = true}, SHIFT(180),
  [394] = {.count = 1, .reusable = true}, SHIFT(179),
  [396] = {.count = 1, .reusable = true}, REDUCE(sym__typename_array, 2),
  [398] = {.count = 1, .reusable = false}, REDUCE(sym__typename_array, 2),
  [400] = {.count = 1, .reusable = true}, SHIFT(181),
  [402] = {.count = 1, .reusable = false}, REDUCE(sym_type_expr, 3),
  [404] = {.count = 1, .reusable = true}, REDUCE(sym_type_expr, 3),
  [406] = {.count = 1, .reusable = true}, SHIFT(182),
  [408] = {.count = 1, .reusable = true}, REDUCE(sym_param_block, 3),
  [410] = {.count = 1, .reusable = false}, REDUCE(sym_param_block, 3),
  [412] = {.count = 1, .reusable = false}, REDUCE(aux_sym_param_block_variable_repeat1, 1),
  [414] = {.count = 1, .reusable = true}, SHIFT(183),
  [416] = {.count = 1, .reusable = false}, SHIFT(183),
  [418] = {.count = 1, .reusable = true}, REDUCE(sym_param_block_variable, 1),
  [420] = {.count = 1, .reusable = true}, SHIFT(184),
  [422] = {.count = 1, .reusable = true}, SHIFT(185),
  [424] = {.count = 1, .reusable = false}, REDUCE(sym_hashtable_expression, 3),
  [426] = {.count = 1, .reusable = true}, REDUCE(sym_hashtable_expression, 3),
  [428] = {.count = 1, .reusable = false}, REDUCE(aux_sym__newlines, 2),
  [430] = {.count = 2, .reusable = true}, REDUCE(aux_sym__newlines, 2), SHIFT_REPEAT(125),
  [433] = {.count = 2, .reusable = false}, REDUCE(aux_sym__newlines, 2), SHIFT_REPEAT(125),
  [436] = {.count = 1, .reusable = false}, SHIFT(189),
  [438] = {.count = 1, .reusable = true}, SHIFT(191),
  [440] = {.count = 1, .reusable = false}, SHIFT(191),
  [442] = {.count = 1, .reusable = false}, SHIFT(194),
  [444] = {.count = 1, .reusable = false}, SHIFT(193),
  [446] = {.count = 1, .reusable = true}, SHIFT(193),
  [448] = {.count = 1, .reusable = true}, SHIFT(197),
  [450] = {.count = 1, .reusable = false}, SHIFT(197),
  [452] = {.count = 1, .reusable = false}, REDUCE(aux_sym_flat_array_expression_repeat1, 1),
  [454] = {.count = 1, .reusable = true}, REDUCE(aux_sym_flat_array_expression_repeat1, 1),
  [456] = {.count = 1, .reusable = false}, REDUCE(sym_flat_array_expression, 3),
  [458] = {.count = 1, .reusable = true}, REDUCE(sym_flat_array_expression, 3),
  [460] = {.count = 1, .reusable = false}, REDUCE(aux_sym_flat_array_expression_repeat1, 2),
  [462] = {.count = 2, .reusable = false}, REDUCE(aux_sym_flat_array_expression_repeat1, 2), SHIFT_REPEAT(132),
  [465] = {.count = 2, .reusable = true}, REDUCE(aux_sym_flat_array_expression_repeat1, 2), SHIFT_REPEAT(132),
  [468] = {.count = 1, .reusable = true}, SHIFT(200),
  [470] = {.count = 1, .reusable = false}, SHIFT(200),
  [472] = {.count = 1, .reusable = false}, SHIFT(199),
  [474] = {.count = 1, .reusable = false}, REDUCE(sym_double_quote_string, 3),
  [476] = {.count = 1, .reusable = true}, REDUCE(sym_double_quote_string, 3),
  [478] = {.count = 1, .reusable = true}, SHIFT(204),
  [480] = {.count = 2, .reusable = false}, REDUCE(aux_sym_double_quote_string_repeat1, 2), SHIFT_REPEAT(205),
  [483] = {.count = 2, .reusable = false}, REDUCE(aux_sym_double_quote_string_repeat1, 2), SHIFT_REPEAT(141),
  [486] = {.count = 1, .reusable = false}, REDUCE(aux_sym_double_quote_string_repeat1, 2),
  [488] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(206),
  [491] = {.count = 1, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2),
  [493] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(206),
  [496] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 3),
  [498] = {.count = 1, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2),
  [500] = {.count = 1, .reusable = true}, SHIFT(207),
  [502] = {.count = 1, .reusable = false}, SHIFT(207),
  [504] = {.count = 1, .reusable = false}, REDUCE(aux_sym_pipeline_statement_repeat1, 2),
  [506] = {.count = 1, .reusable = true}, REDUCE(aux_sym_pipeline_statement_repeat1, 2),
  [508] = {.count = 2, .reusable = false}, REDUCE(aux_sym_pipeline_statement_repeat1, 2), SHIFT_REPEAT(75),
  [511] = {.count = 1, .reusable = true}, REDUCE(sym_pipeline_statement, 3),
  [513] = {.count = 1, .reusable = false}, REDUCE(sym_pipeline_statement, 3),
  [515] = {.count = 1, .reusable = false}, SHIFT(211),
  [517] = {.count = 1, .reusable = true}, SHIFT(211),
  [519] = {.count = 1, .reusable = false}, SHIFT(212),
  [521] = {.count = 1, .reusable = true}, SHIFT(213),
  [523] = {.count = 1, .reusable = false}, SHIFT(213),
  [525] = {.count = 1, .reusable = true}, SHIFT(212),
  [527] = {.count = 1, .reusable = false}, SHIFT(215),
  [529] = {.count = 1, .reusable = true}, SHIFT(217),
  [531] = {.count = 1, .reusable = false}, SHIFT(217),
  [533] = {.count = 1, .reusable = true}, SHIFT(219),
  [535] = {.count = 1, .reusable = false}, SHIFT(219),
  [537] = {.count = 1, .reusable = false}, SHIFT(218),
  [539] = {.count = 1, .reusable = true}, SHIFT(221),
  [541] = {.count = 2, .reusable = true}, REDUCE(aux_sym_pipeline_statement_repeat1, 2), SHIFT_REPEAT(99),
  [544] = {.count = 1, .reusable = false}, REDUCE(sym_scriptblock, 4),
  [546] = {.count = 1, .reusable = true}, REDUCE(sym_scriptblock, 4),
  [548] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(225),
  [551] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(225),
  [554] = {.count = 1, .reusable = true}, SHIFT(226),
  [556] = {.count = 1, .reusable = false}, SHIFT(226),
  [558] = {.count = 1, .reusable = true}, SHIFT(227),
  [560] = {.count = 1, .reusable = false}, SHIFT(227),
  [562] = {.count = 1, .reusable = true}, SHIFT(230),
  [564] = {.count = 1, .reusable = true}, SHIFT(231),
  [566] = {.count = 1, .reusable = true}, SHIFT(233),
  [568] = {.count = 1, .reusable = true}, SHIFT(234),
  [570] = {.count = 1, .reusable = true}, SHIFT(236),
  [572] = {.count = 1, .reusable = false}, REDUCE(aux_sym_param_block_variable_repeat1, 2),
  [574] = {.count = 1, .reusable = true}, SHIFT(237),
  [576] = {.count = 1, .reusable = false}, SHIFT(237),
  [578] = {.count = 1, .reusable = true}, SHIFT(238),
  [580] = {.count = 1, .reusable = true}, REDUCE(sym_param_block, 4),
  [582] = {.count = 1, .reusable = false}, REDUCE(sym_param_block, 4),
  [584] = {.count = 1, .reusable = true}, SHIFT(240),
  [586] = {.count = 1, .reusable = true}, REDUCE(sym_param_block_variable, 2),
  [588] = {.count = 1, .reusable = true}, REDUCE(aux_sym_param_block_variable_repeat1, 2),
  [590] = {.count = 2, .reusable = true}, REDUCE(aux_sym_param_block_variable_repeat1, 2), SHIFT_REPEAT(118),
  [593] = {.count = 1, .reusable = false}, REDUCE(sym_hashtable_expression, 4),
  [595] = {.count = 1, .reusable = true}, REDUCE(sym_hashtable_expression, 4),
  [597] = {.count = 1, .reusable = false}, SHIFT(242),
  [599] = {.count = 1, .reusable = true}, SHIFT(243),
  [601] = {.count = 1, .reusable = false}, SHIFT(243),
  [603] = {.count = 1, .reusable = false}, SHIFT(245),
  [605] = {.count = 1, .reusable = true}, SHIFT(245),
  [607] = {.count = 1, .reusable = false}, REDUCE(sym_hashtable_entry, 3),
  [609] = {.count = 1, .reusable = true}, REDUCE(sym_hashtable_entry, 3),
  [611] = {.count = 1, .reusable = false}, REDUCE(aux_sym_hashtable_expression_repeat1, 2),
  [613] = {.count = 2, .reusable = true}, REDUCE(aux_sym_hashtable_expression_repeat1, 2), SHIFT_REPEAT(129),
  [616] = {.count = 2, .reusable = false}, REDUCE(aux_sym_hashtable_expression_repeat1, 2), SHIFT_REPEAT(129),
  [619] = {.count = 2, .reusable = true}, REDUCE(aux_sym_flat_array_expression_repeat1, 2), SHIFT_REPEAT(197),
  [622] = {.count = 2, .reusable = false}, REDUCE(aux_sym_flat_array_expression_repeat1, 2), SHIFT_REPEAT(197),
  [625] = {.count = 1, .reusable = true}, REDUCE(aux_sym_hashtable_expression_repeat1, 2),
  [627] = {.count = 1, .reusable = false}, REDUCE(sym_flat_array_expression, 4),
  [629] = {.count = 1, .reusable = true}, REDUCE(sym_flat_array_expression, 4),
  [631] = {.count = 1, .reusable = false}, SHIFT(248),
  [633] = {.count = 1, .reusable = true}, SHIFT(249),
  [635] = {.count = 1, .reusable = false}, SHIFT(249),
  [637] = {.count = 1, .reusable = true}, REDUCE(aux_sym_flat_array_expression_repeat2, 2),
  [639] = {.count = 1, .reusable = false}, REDUCE(aux_sym_flat_array_expression_repeat2, 2),
  [641] = {.count = 2, .reusable = true}, REDUCE(aux_sym_flat_array_expression_repeat2, 2), SHIFT_REPEAT(250),
  [644] = {.count = 2, .reusable = false}, REDUCE(aux_sym_flat_array_expression_repeat2, 2), SHIFT_REPEAT(250),
  [647] = {.count = 1, .reusable = false}, REDUCE(sym_double_quote_string, 4),
  [649] = {.count = 1, .reusable = true}, REDUCE(sym_double_quote_string, 4),
  [651] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 4),
  [653] = {.count = 1, .reusable = false}, REDUCE(aux_sym_pipeline_statement_repeat1, 3),
  [655] = {.count = 1, .reusable = true}, REDUCE(aux_sym_pipeline_statement_repeat1, 3),
  [657] = {.count = 1, .reusable = true}, REDUCE(sym_pipeline_statement, 4),
  [659] = {.count = 1, .reusable = false}, REDUCE(sym_pipeline_statement, 4),
  [661] = {.count = 2, .reusable = false}, REDUCE(aux_sym__newlines, 2), SHIFT_REPEAT(211),
  [664] = {.count = 2, .reusable = true}, REDUCE(aux_sym__newlines, 2), SHIFT_REPEAT(211),
  [667] = {.count = 1, .reusable = true}, SHIFT(252),
  [669] = {.count = 1, .reusable = false}, SHIFT(252),
  [671] = {.count = 1, .reusable = true}, SHIFT(253),
  [673] = {.count = 1, .reusable = false}, SHIFT(253),
  [675] = {.count = 1, .reusable = false}, SHIFT(254),
  [677] = {.count = 1, .reusable = true}, SHIFT(255),
  [679] = {.count = 1, .reusable = false}, SHIFT(255),
  [681] = {.count = 1, .reusable = false}, SHIFT(256),
  [683] = {.count = 1, .reusable = true}, SHIFT(257),
  [685] = {.count = 1, .reusable = false}, SHIFT(257),
  [687] = {.count = 1, .reusable = false}, REDUCE(sym_scriptblock, 5),
  [689] = {.count = 1, .reusable = true}, REDUCE(sym_scriptblock, 5),
  [691] = {.count = 1, .reusable = true}, SHIFT(259),
  [693] = {.count = 1, .reusable = true}, REDUCE(sym_non_type_attribute, 5),
  [695] = {.count = 1, .reusable = true}, SHIFT(261),
  [697] = {.count = 1, .reusable = true}, SHIFT(262),
  [699] = {.count = 1, .reusable = true}, SHIFT(263),
  [701] = {.count = 1, .reusable = true}, REDUCE(sym__typename_generic, 4),
  [703] = {.count = 1, .reusable = false}, REDUCE(sym__typename_generic, 4),
  [705] = {.count = 1, .reusable = true}, SHIFT(264),
  [707] = {.count = 1, .reusable = true}, SHIFT(267),
  [709] = {.count = 1, .reusable = true}, SHIFT(266),
  [711] = {.count = 2, .reusable = true}, REDUCE(aux_sym__newlines, 2), SHIFT_REPEAT(237),
  [714] = {.count = 2, .reusable = false}, REDUCE(aux_sym__newlines, 2), SHIFT_REPEAT(237),
  [717] = {.count = 1, .reusable = true}, REDUCE(sym_param_block, 5),
  [719] = {.count = 1, .reusable = false}, REDUCE(sym_param_block, 5),
  [721] = {.count = 1, .reusable = true}, REDUCE(aux_sym_param_block_repeat1, 2),
  [723] = {.count = 1, .reusable = true}, SHIFT(268),
  [725] = {.count = 2, .reusable = true}, REDUCE(aux_sym_param_block_repeat1, 2), SHIFT_REPEAT(269),
  [728] = {.count = 1, .reusable = false}, REDUCE(sym_hashtable_expression, 5),
  [730] = {.count = 1, .reusable = true}, REDUCE(sym_hashtable_expression, 5),
  [732] = {.count = 1, .reusable = false}, SHIFT(270),
  [734] = {.count = 2, .reusable = false}, REDUCE(aux_sym__newlines, 2), SHIFT_REPEAT(245),
  [737] = {.count = 2, .reusable = true}, REDUCE(aux_sym__newlines, 2), SHIFT_REPEAT(245),
  [740] = {.count = 1, .reusable = false}, REDUCE(sym_hashtable_entry, 4),
  [742] = {.count = 1, .reusable = true}, REDUCE(sym_hashtable_entry, 4),
  [744] = {.count = 1, .reusable = false}, REDUCE(sym_flat_array_expression, 5),
  [746] = {.count = 1, .reusable = true}, REDUCE(sym_flat_array_expression, 5),
  [748] = {.count = 1, .reusable = false}, SHIFT(271),
  [750] = {.count = 1, .reusable = false}, SHIFT(272),
  [752] = {.count = 1, .reusable = true}, SHIFT(272),
  [754] = {.count = 1, .reusable = true}, REDUCE(sym_pipeline_statement, 5),
  [756] = {.count = 1, .reusable = false}, REDUCE(sym_pipeline_statement, 5),
  [758] = {.count = 1, .reusable = true}, SHIFT(273),
  [760] = {.count = 1, .reusable = false}, SHIFT(274),
  [762] = {.count = 1, .reusable = false}, SHIFT(275),
  [764] = {.count = 1, .reusable = false}, REDUCE(sym_scriptblock, 6),
  [766] = {.count = 1, .reusable = true}, REDUCE(sym_scriptblock, 6),
  [768] = {.count = 1, .reusable = true}, REDUCE(sym_non_type_attribute, 6),
  [770] = {.count = 1, .reusable = true}, SHIFT(276),
  [772] = {.count = 1, .reusable = true}, REDUCE(aux_sym__typename_generic_repeat1, 2),
  [774] = {.count = 1, .reusable = true}, REDUCE(sym__typename_generic, 5),
  [776] = {.count = 1, .reusable = false}, REDUCE(sym__typename_generic, 5),
  [778] = {.count = 2, .reusable = true}, REDUCE(aux_sym__typename_generic_repeat1, 2), SHIFT_REPEAT(233),
  [781] = {.count = 1, .reusable = true}, SHIFT(277),
  [783] = {.count = 1, .reusable = true}, SHIFT(278),
  [785] = {.count = 1, .reusable = true}, REDUCE(sym_param_block, 6),
  [787] = {.count = 1, .reusable = false}, REDUCE(sym_param_block, 6),
  [789] = {.count = 1, .reusable = false}, REDUCE(sym_hashtable_expression, 6),
  [791] = {.count = 1, .reusable = true}, REDUCE(sym_hashtable_expression, 6),
  [793] = {.count = 1, .reusable = false}, REDUCE(sym_flat_array_expression, 6),
  [795] = {.count = 1, .reusable = true}, REDUCE(sym_flat_array_expression, 6),
  [797] = {.count = 2, .reusable = false}, REDUCE(aux_sym_flat_array_expression_repeat1, 2), SHIFT_REPEAT(272),
  [800] = {.count = 2, .reusable = true}, REDUCE(aux_sym_flat_array_expression_repeat1, 2), SHIFT_REPEAT(272),
  [803] = {.count = 1, .reusable = true}, REDUCE(sym_non_type_attribute, 7),
  [805] = {.count = 1, .reusable = false}, REDUCE(sym_non_type_attribute, 5),
  [807] = {.count = 1, .reusable = true}, SHIFT(280),
  [809] = {.count = 1, .reusable = true}, SHIFT(281),
  [811] = {.count = 1, .reusable = false}, REDUCE(sym_non_type_attribute, 6),
  [813] = {.count = 1, .reusable = true}, SHIFT(282),
  [815] = {.count = 1, .reusable = false}, REDUCE(sym_non_type_attribute, 7),
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
