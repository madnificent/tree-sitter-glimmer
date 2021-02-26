#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 12
#define STATE_COUNT 31
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 31
#define ALIAS_COUNT 0
#define TOKEN_COUNT 17
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3

enum {
  sym_text_node = 1,
  sym_tag_name = 2,
  anon_sym_LT = 3,
  anon_sym_GT = 4,
  anon_sym_LT_SLASH = 5,
  anon_sym_SLASH_GT = 6,
  sym_mustache_statement_start = 7,
  sym_mustache_statement_end = 8,
  sym_path_expression = 9,
  anon_sym_SQUOTE = 10,
  aux_sym__single_quote_string_literal_token1 = 11,
  anon_sym_DQUOTE = 12,
  aux_sym__double_quote_string_literal_token1 = 13,
  sym_number_literal = 14,
  anon_sym_true = 15,
  anon_sym_false = 16,
  sym_template = 17,
  sym_element_node_start = 18,
  sym_element_node_end = 19,
  sym_element_node_void = 20,
  sym_element_node = 21,
  sym__value = 22,
  sym_mustache_statement = 23,
  sym_string_literal = 24,
  sym__single_quote_string_literal = 25,
  sym__double_quote_string_literal = 26,
  sym_boolean_literal = 27,
  aux_sym_template_repeat1 = 28,
  aux_sym_element_node_repeat1 = 29,
  aux_sym_mustache_statement_repeat1 = 30,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_text_node] = "text_node",
  [sym_tag_name] = "tag_name",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [anon_sym_LT_SLASH] = "</",
  [anon_sym_SLASH_GT] = "/>",
  [sym_mustache_statement_start] = "mustache_statement_start",
  [sym_mustache_statement_end] = "mustache_statement_end",
  [sym_path_expression] = "path_expression",
  [anon_sym_SQUOTE] = "'",
  [aux_sym__single_quote_string_literal_token1] = "_single_quote_string_literal_token1",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym__double_quote_string_literal_token1] = "_double_quote_string_literal_token1",
  [sym_number_literal] = "number_literal",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [sym_template] = "template",
  [sym_element_node_start] = "element_node_start",
  [sym_element_node_end] = "element_node_end",
  [sym_element_node_void] = "element_node_void",
  [sym_element_node] = "element_node",
  [sym__value] = "_value",
  [sym_mustache_statement] = "mustache_statement",
  [sym_string_literal] = "string_literal",
  [sym__single_quote_string_literal] = "_single_quote_string_literal",
  [sym__double_quote_string_literal] = "_double_quote_string_literal",
  [sym_boolean_literal] = "boolean_literal",
  [aux_sym_template_repeat1] = "template_repeat1",
  [aux_sym_element_node_repeat1] = "element_node_repeat1",
  [aux_sym_mustache_statement_repeat1] = "mustache_statement_repeat1",
};

static TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_text_node] = sym_text_node,
  [sym_tag_name] = sym_tag_name,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_LT_SLASH] = anon_sym_LT_SLASH,
  [anon_sym_SLASH_GT] = anon_sym_SLASH_GT,
  [sym_mustache_statement_start] = sym_mustache_statement_start,
  [sym_mustache_statement_end] = sym_mustache_statement_end,
  [sym_path_expression] = sym_path_expression,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym__single_quote_string_literal_token1] = aux_sym__single_quote_string_literal_token1,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym__double_quote_string_literal_token1] = aux_sym__double_quote_string_literal_token1,
  [sym_number_literal] = sym_number_literal,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [sym_template] = sym_template,
  [sym_element_node_start] = sym_element_node_start,
  [sym_element_node_end] = sym_element_node_end,
  [sym_element_node_void] = sym_element_node_void,
  [sym_element_node] = sym_element_node,
  [sym__value] = sym__value,
  [sym_mustache_statement] = sym_mustache_statement,
  [sym_string_literal] = sym_string_literal,
  [sym__single_quote_string_literal] = sym__single_quote_string_literal,
  [sym__double_quote_string_literal] = sym__double_quote_string_literal,
  [sym_boolean_literal] = sym_boolean_literal,
  [aux_sym_template_repeat1] = aux_sym_template_repeat1,
  [aux_sym_element_node_repeat1] = aux_sym_element_node_repeat1,
  [aux_sym_mustache_statement_repeat1] = aux_sym_mustache_statement_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_text_node] = {
    .visible = true,
    .named = true,
  },
  [sym_tag_name] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH_GT] = {
    .visible = true,
    .named = false,
  },
  [sym_mustache_statement_start] = {
    .visible = true,
    .named = true,
  },
  [sym_mustache_statement_end] = {
    .visible = true,
    .named = true,
  },
  [sym_path_expression] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__single_quote_string_literal_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__double_quote_string_literal_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_number_literal] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [sym_template] = {
    .visible = true,
    .named = true,
  },
  [sym_element_node_start] = {
    .visible = true,
    .named = true,
  },
  [sym_element_node_end] = {
    .visible = true,
    .named = true,
  },
  [sym_element_node_void] = {
    .visible = true,
    .named = true,
  },
  [sym_element_node] = {
    .visible = true,
    .named = true,
  },
  [sym__value] = {
    .visible = false,
    .named = true,
  },
  [sym_mustache_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_string_literal] = {
    .visible = true,
    .named = true,
  },
  [sym__single_quote_string_literal] = {
    .visible = false,
    .named = true,
  },
  [sym__double_quote_string_literal] = {
    .visible = false,
    .named = true,
  },
  [sym_boolean_literal] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_template_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_element_node_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_mustache_statement_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static TSSymbol ts_alias_sequences[1][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(9);
      if (lookahead == '"') ADVANCE(30);
      if (lookahead == '\'') ADVANCE(27);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 's') ||
          ('u' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      if (lookahead == '/') ADVANCE(1);
      if (lookahead == '<') ADVANCE(12);
      if (lookahead == '>') ADVANCE(13);
      if (lookahead == 'f') ADVANCE(19);
      if (lookahead == 't') ADVANCE(23);
      if (lookahead == '{') ADVANCE(2);
      if (lookahead == '}') ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(33);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(20);
      END_STATE();
    case 1:
      if (lookahead == '>') ADVANCE(15);
      END_STATE();
    case 2:
      if (lookahead == '{') ADVANCE(16);
      END_STATE();
    case 3:
      if (lookahead == '}') ADVANCE(17);
      END_STATE();
    case 4:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(28);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(29);
      END_STATE();
    case 5:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(31);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(32);
      END_STATE();
    case 6:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(33);
      END_STATE();
    case 7:
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(11);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      END_STATE();
    case 8:
      if (eof) ADVANCE(9);
      if (lookahead == '<') ADVANCE(12);
      if (lookahead == '{') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (lookahead != 0 &&
          lookahead != '>' &&
          lookahead != '}') ADVANCE(10);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(sym_text_node);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(10);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(11);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '/') ADVANCE(14);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_LT_SLASH);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_SLASH_GT);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_mustache_statement_start);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_mustache_statement_end);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_path_expression);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'k') ||
          ('m' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      if (lookahead == '_') ADVANCE(6);
      if (lookahead == 'l') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(33);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(20);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_path_expression);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      if (lookahead == '_') ADVANCE(6);
      if (lookahead == 'a') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(33);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(20);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_path_expression);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      if (lookahead == '_') ADVANCE(6);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(33);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(20);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_path_expression);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 't') ||
          ('v' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      if (lookahead == 'u') ADVANCE(24);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_path_expression);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'r') ||
          ('t' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      if (lookahead == 's') ADVANCE(25);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_path_expression);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      if (lookahead == 'r') ADVANCE(21);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_path_expression);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      if (lookahead == 'e') ADVANCE(34);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_path_expression);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      if (lookahead == 'e') ADVANCE(35);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_path_expression);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(aux_sym__single_quote_string_literal_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(28);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(29);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(aux_sym__single_quote_string_literal_token1);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(29);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(aux_sym__double_quote_string_literal_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(31);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(32);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(aux_sym__double_quote_string_literal_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(32);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '_') ADVANCE(6);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(33);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 8},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 8},
  [6] = {.lex_state = 8},
  [7] = {.lex_state = 8},
  [8] = {.lex_state = 8},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 8},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 8},
  [15] = {.lex_state = 8},
  [16] = {.lex_state = 8},
  [17] = {.lex_state = 8},
  [18] = {.lex_state = 8},
  [19] = {.lex_state = 8},
  [20] = {.lex_state = 8},
  [21] = {.lex_state = 8},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 7},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 4},
  [29] = {.lex_state = 7},
  [30] = {.lex_state = 5},
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_LT_SLASH] = ACTIONS(1),
    [anon_sym_SLASH_GT] = ACTIONS(1),
    [sym_mustache_statement_start] = ACTIONS(1),
    [sym_mustache_statement_end] = ACTIONS(1),
    [sym_path_expression] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_number_literal] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
  },
  [1] = {
    [sym_template] = STATE(24),
    [sym_element_node_start] = STATE(7),
    [sym_element_node_void] = STATE(16),
    [sym_element_node] = STATE(5),
    [sym_mustache_statement] = STATE(5),
    [aux_sym_template_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_text_node] = ACTIONS(5),
    [anon_sym_LT] = ACTIONS(7),
    [sym_mustache_statement_start] = ACTIONS(9),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(11), 1,
      sym_mustache_statement_end,
    ACTIONS(16), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(13), 2,
      sym_path_expression,
      sym_number_literal,
    ACTIONS(22), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(12), 2,
      sym__single_quote_string_literal,
      sym__double_quote_string_literal,
    STATE(2), 4,
      sym__value,
      sym_string_literal,
      sym_boolean_literal,
      aux_sym_mustache_statement_repeat1,
  [28] = 7,
    ACTIONS(25), 1,
      sym_mustache_statement_end,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 2,
      sym_path_expression,
      sym_number_literal,
    ACTIONS(33), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(12), 2,
      sym__single_quote_string_literal,
      sym__double_quote_string_literal,
    STATE(4), 4,
      sym__value,
      sym_string_literal,
      sym_boolean_literal,
      aux_sym_mustache_statement_repeat1,
  [56] = 7,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      sym_mustache_statement_end,
    ACTIONS(33), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(37), 2,
      sym_path_expression,
      sym_number_literal,
    STATE(12), 2,
      sym__single_quote_string_literal,
      sym__double_quote_string_literal,
    STATE(2), 4,
      sym__value,
      sym_string_literal,
      sym_boolean_literal,
      aux_sym_mustache_statement_repeat1,
  [84] = 7,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(9), 1,
      sym_mustache_statement_start,
    ACTIONS(39), 1,
      ts_builtin_sym_end,
    ACTIONS(41), 1,
      sym_text_node,
    STATE(7), 1,
      sym_element_node_start,
    STATE(16), 1,
      sym_element_node_void,
    STATE(6), 3,
      sym_element_node,
      sym_mustache_statement,
      aux_sym_template_repeat1,
  [108] = 7,
    ACTIONS(43), 1,
      ts_builtin_sym_end,
    ACTIONS(45), 1,
      sym_text_node,
    ACTIONS(48), 1,
      anon_sym_LT,
    ACTIONS(51), 1,
      sym_mustache_statement_start,
    STATE(7), 1,
      sym_element_node_start,
    STATE(16), 1,
      sym_element_node_void,
    STATE(6), 3,
      sym_element_node,
      sym_mustache_statement,
      aux_sym_template_repeat1,
  [132] = 7,
    ACTIONS(54), 1,
      sym_text_node,
    ACTIONS(56), 1,
      anon_sym_LT,
    ACTIONS(58), 1,
      anon_sym_LT_SLASH,
    STATE(7), 1,
      sym_element_node_start,
    STATE(15), 1,
      sym_element_node_end,
    STATE(16), 1,
      sym_element_node_void,
    STATE(8), 2,
      sym_element_node,
      aux_sym_element_node_repeat1,
  [155] = 7,
    ACTIONS(56), 1,
      anon_sym_LT,
    ACTIONS(58), 1,
      anon_sym_LT_SLASH,
    ACTIONS(60), 1,
      sym_text_node,
    STATE(7), 1,
      sym_element_node_start,
    STATE(16), 1,
      sym_element_node_void,
    STATE(18), 1,
      sym_element_node_end,
    STATE(10), 2,
      sym_element_node,
      aux_sym_element_node_repeat1,
  [178] = 2,
    ACTIONS(62), 3,
      sym_mustache_statement_end,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
    ACTIONS(64), 4,
      sym_path_expression,
      sym_number_literal,
      anon_sym_true,
      anon_sym_false,
  [190] = 6,
    ACTIONS(66), 1,
      sym_text_node,
    ACTIONS(69), 1,
      anon_sym_LT,
    ACTIONS(72), 1,
      anon_sym_LT_SLASH,
    STATE(7), 1,
      sym_element_node_start,
    STATE(16), 1,
      sym_element_node_void,
    STATE(10), 2,
      sym_element_node,
      aux_sym_element_node_repeat1,
  [210] = 2,
    ACTIONS(74), 3,
      sym_mustache_statement_end,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
    ACTIONS(76), 4,
      sym_path_expression,
      sym_number_literal,
      anon_sym_true,
      anon_sym_false,
  [222] = 2,
    ACTIONS(78), 3,
      sym_mustache_statement_end,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
    ACTIONS(80), 4,
      sym_path_expression,
      sym_number_literal,
      anon_sym_true,
      anon_sym_false,
  [234] = 2,
    ACTIONS(82), 3,
      sym_mustache_statement_end,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
    ACTIONS(84), 4,
      sym_path_expression,
      sym_number_literal,
      anon_sym_true,
      anon_sym_false,
  [246] = 2,
    ACTIONS(88), 1,
      anon_sym_LT,
    ACTIONS(86), 4,
      ts_builtin_sym_end,
      sym_text_node,
      anon_sym_LT_SLASH,
      sym_mustache_statement_start,
  [256] = 2,
    ACTIONS(92), 1,
      anon_sym_LT,
    ACTIONS(90), 4,
      ts_builtin_sym_end,
      sym_text_node,
      anon_sym_LT_SLASH,
      sym_mustache_statement_start,
  [266] = 2,
    ACTIONS(96), 1,
      anon_sym_LT,
    ACTIONS(94), 4,
      ts_builtin_sym_end,
      sym_text_node,
      anon_sym_LT_SLASH,
      sym_mustache_statement_start,
  [276] = 2,
    ACTIONS(100), 1,
      anon_sym_LT,
    ACTIONS(98), 4,
      ts_builtin_sym_end,
      sym_text_node,
      anon_sym_LT_SLASH,
      sym_mustache_statement_start,
  [286] = 2,
    ACTIONS(104), 1,
      anon_sym_LT,
    ACTIONS(102), 4,
      ts_builtin_sym_end,
      sym_text_node,
      anon_sym_LT_SLASH,
      sym_mustache_statement_start,
  [296] = 1,
    ACTIONS(106), 4,
      ts_builtin_sym_end,
      sym_text_node,
      anon_sym_LT,
      sym_mustache_statement_start,
  [303] = 1,
    ACTIONS(108), 4,
      ts_builtin_sym_end,
      sym_text_node,
      anon_sym_LT,
      sym_mustache_statement_start,
  [310] = 2,
    ACTIONS(112), 1,
      anon_sym_LT,
    ACTIONS(110), 2,
      sym_text_node,
      anon_sym_LT_SLASH,
  [318] = 2,
    ACTIONS(114), 1,
      anon_sym_GT,
    ACTIONS(116), 1,
      anon_sym_SLASH_GT,
  [325] = 1,
    ACTIONS(118), 1,
      sym_tag_name,
  [329] = 1,
    ACTIONS(120), 1,
      ts_builtin_sym_end,
  [333] = 1,
    ACTIONS(122), 1,
      anon_sym_GT,
  [337] = 1,
    ACTIONS(124), 1,
      anon_sym_DQUOTE,
  [341] = 1,
    ACTIONS(126), 1,
      anon_sym_SQUOTE,
  [345] = 1,
    ACTIONS(128), 1,
      aux_sym__single_quote_string_literal_token1,
  [349] = 1,
    ACTIONS(130), 1,
      sym_tag_name,
  [353] = 1,
    ACTIONS(132), 1,
      aux_sym__double_quote_string_literal_token1,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 28,
  [SMALL_STATE(4)] = 56,
  [SMALL_STATE(5)] = 84,
  [SMALL_STATE(6)] = 108,
  [SMALL_STATE(7)] = 132,
  [SMALL_STATE(8)] = 155,
  [SMALL_STATE(9)] = 178,
  [SMALL_STATE(10)] = 190,
  [SMALL_STATE(11)] = 210,
  [SMALL_STATE(12)] = 222,
  [SMALL_STATE(13)] = 234,
  [SMALL_STATE(14)] = 246,
  [SMALL_STATE(15)] = 256,
  [SMALL_STATE(16)] = 266,
  [SMALL_STATE(17)] = 276,
  [SMALL_STATE(18)] = 286,
  [SMALL_STATE(19)] = 296,
  [SMALL_STATE(20)] = 303,
  [SMALL_STATE(21)] = 310,
  [SMALL_STATE(22)] = 318,
  [SMALL_STATE(23)] = 325,
  [SMALL_STATE(24)] = 329,
  [SMALL_STATE(25)] = 333,
  [SMALL_STATE(26)] = 337,
  [SMALL_STATE(27)] = 341,
  [SMALL_STATE(28)] = 345,
  [SMALL_STATE(29)] = 349,
  [SMALL_STATE(30)] = 353,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_mustache_statement_repeat1, 2),
  [13] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_mustache_statement_repeat1, 2), SHIFT_REPEAT(2),
  [16] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_mustache_statement_repeat1, 2), SHIFT_REPEAT(28),
  [19] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_mustache_statement_repeat1, 2), SHIFT_REPEAT(30),
  [22] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_mustache_statement_repeat1, 2), SHIFT_REPEAT(9),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template, 1),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_template_repeat1, 2),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(6),
  [48] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(29),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(3),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [56] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_literal, 1),
  [64] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean_literal, 1),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_element_node_repeat1, 2), SHIFT_REPEAT(10),
  [69] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_element_node_repeat1, 2), SHIFT_REPEAT(29),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_element_node_repeat1, 2),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__double_quote_string_literal, 3),
  [76] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__double_quote_string_literal, 3),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 1),
  [80] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 1),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_quote_string_literal, 3),
  [84] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__single_quote_string_literal, 3),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_node_end, 3),
  [88] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element_node_end, 3),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_node, 2),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element_node, 2),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_node, 1),
  [96] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element_node, 1),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_node_void, 3),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element_node_void, 3),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_node, 3),
  [104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element_node, 3),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mustache_statement, 2),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mustache_statement, 3),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_node_start, 3),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element_node_start, 3),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [120] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_glimmer(void) {
  static TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .parse_table = (const uint16_t *)ts_parse_table,
    .parse_actions = ts_parse_actions,
    .lex_modes = ts_lex_modes,
    .alias_sequences = (const TSSymbol *)ts_alias_sequences,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .lex_fn = ts_lex,
    .field_count = FIELD_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .small_parse_table = (const uint16_t *)ts_small_parse_table,
    .small_parse_table_map = (const uint32_t *)ts_small_parse_table_map,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .state_count = STATE_COUNT,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
