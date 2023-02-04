#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 43
#define LARGE_STATE_COUNT 6
#define SYMBOL_COUNT 32
#define ALIAS_COUNT 0
#define TOKEN_COUNT 17
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_ = 1,
  anon_sym_2 = 2,
  anon_sym_DASH_DASH_DASH_DASH_DASHBEGIN = 3,
  anon_sym_DASH_DASH_DASH_DASH_DASH = 4,
  anon_sym_DASH_DASH_DASH_DASH_DASHEND = 5,
  anon_sym_PLUS = 6,
  anon_sym_SLASH = 7,
  sym_base64pad = 8,
  sym_labelchar = 9,
  anon_sym_DASH = 10,
  sym_ALPHA = 11,
  sym_DIGIT = 12,
  sym_SP = 13,
  sym_HTAB = 14,
  sym_CR = 15,
  sym_LF = 16,
  sym_pem_file = 17,
  sym_laxtextualmsg = 18,
  sym_W = 19,
  sym__laxbase64text_char = 20,
  sym__laxbase64text_padding = 21,
  sym_laxbase64text = 22,
  sym_preeb = 23,
  sym_posteb = 24,
  sym_base64char = 25,
  sym_label = 26,
  sym_WSP = 27,
  aux_sym_pem_file_repeat1 = 28,
  aux_sym_laxtextualmsg_repeat1 = 29,
  aux_sym_laxbase64text_repeat1 = 30,
  aux_sym_label_repeat1 = 31,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_] = "",
  [anon_sym_2] = "\f",
  [anon_sym_DASH_DASH_DASH_DASH_DASHBEGIN] = "-----BEGIN ",
  [anon_sym_DASH_DASH_DASH_DASH_DASH] = "-----",
  [anon_sym_DASH_DASH_DASH_DASH_DASHEND] = "-----END ",
  [anon_sym_PLUS] = "+",
  [anon_sym_SLASH] = "/",
  [sym_base64pad] = "base64pad",
  [sym_labelchar] = "labelchar",
  [anon_sym_DASH] = "-",
  [sym_ALPHA] = "ALPHA",
  [sym_DIGIT] = "DIGIT",
  [sym_SP] = "SP",
  [sym_HTAB] = "HTAB",
  [sym_CR] = "CR",
  [sym_LF] = "LF",
  [sym_pem_file] = "pem_file",
  [sym_laxtextualmsg] = "laxtextualmsg",
  [sym_W] = "W",
  [sym__laxbase64text_char] = "_laxbase64text_char",
  [sym__laxbase64text_padding] = "_laxbase64text_padding",
  [sym_laxbase64text] = "laxbase64text",
  [sym_preeb] = "preeb",
  [sym_posteb] = "posteb",
  [sym_base64char] = "base64char",
  [sym_label] = "label",
  [sym_WSP] = "WSP",
  [aux_sym_pem_file_repeat1] = "pem_file_repeat1",
  [aux_sym_laxtextualmsg_repeat1] = "laxtextualmsg_repeat1",
  [aux_sym_laxbase64text_repeat1] = "laxbase64text_repeat1",
  [aux_sym_label_repeat1] = "label_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_] = anon_sym_,
  [anon_sym_2] = anon_sym_2,
  [anon_sym_DASH_DASH_DASH_DASH_DASHBEGIN] = anon_sym_DASH_DASH_DASH_DASH_DASHBEGIN,
  [anon_sym_DASH_DASH_DASH_DASH_DASH] = anon_sym_DASH_DASH_DASH_DASH_DASH,
  [anon_sym_DASH_DASH_DASH_DASH_DASHEND] = anon_sym_DASH_DASH_DASH_DASH_DASHEND,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [sym_base64pad] = sym_base64pad,
  [sym_labelchar] = sym_labelchar,
  [anon_sym_DASH] = anon_sym_DASH,
  [sym_ALPHA] = sym_ALPHA,
  [sym_DIGIT] = sym_DIGIT,
  [sym_SP] = sym_SP,
  [sym_HTAB] = sym_HTAB,
  [sym_CR] = sym_CR,
  [sym_LF] = sym_LF,
  [sym_pem_file] = sym_pem_file,
  [sym_laxtextualmsg] = sym_laxtextualmsg,
  [sym_W] = sym_W,
  [sym__laxbase64text_char] = sym__laxbase64text_char,
  [sym__laxbase64text_padding] = sym__laxbase64text_padding,
  [sym_laxbase64text] = sym_laxbase64text,
  [sym_preeb] = sym_preeb,
  [sym_posteb] = sym_posteb,
  [sym_base64char] = sym_base64char,
  [sym_label] = sym_label,
  [sym_WSP] = sym_WSP,
  [aux_sym_pem_file_repeat1] = aux_sym_pem_file_repeat1,
  [aux_sym_laxtextualmsg_repeat1] = aux_sym_laxtextualmsg_repeat1,
  [aux_sym_laxbase64text_repeat1] = aux_sym_laxbase64text_repeat1,
  [aux_sym_label_repeat1] = aux_sym_label_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_DASH_DASH_DASH_DASHBEGIN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_DASH_DASH_DASH_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_DASH_DASH_DASH_DASHEND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [sym_base64pad] = {
    .visible = true,
    .named = true,
  },
  [sym_labelchar] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [sym_ALPHA] = {
    .visible = true,
    .named = true,
  },
  [sym_DIGIT] = {
    .visible = true,
    .named = true,
  },
  [sym_SP] = {
    .visible = true,
    .named = true,
  },
  [sym_HTAB] = {
    .visible = true,
    .named = true,
  },
  [sym_CR] = {
    .visible = true,
    .named = true,
  },
  [sym_LF] = {
    .visible = true,
    .named = true,
  },
  [sym_pem_file] = {
    .visible = true,
    .named = true,
  },
  [sym_laxtextualmsg] = {
    .visible = true,
    .named = true,
  },
  [sym_W] = {
    .visible = true,
    .named = true,
  },
  [sym__laxbase64text_char] = {
    .visible = false,
    .named = true,
  },
  [sym__laxbase64text_padding] = {
    .visible = false,
    .named = true,
  },
  [sym_laxbase64text] = {
    .visible = true,
    .named = true,
  },
  [sym_preeb] = {
    .visible = true,
    .named = true,
  },
  [sym_posteb] = {
    .visible = true,
    .named = true,
  },
  [sym_base64char] = {
    .visible = true,
    .named = true,
  },
  [sym_label] = {
    .visible = true,
    .named = true,
  },
  [sym_WSP] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_pem_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_laxtextualmsg_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_laxbase64text_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_label_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(19);
      if (lookahead == '\t') ADVANCE(33);
      if (lookahead == '\n') ADVANCE(35);
      if (lookahead == 11) ADVANCE(20);
      if (lookahead == '\f') ADVANCE(21);
      if (lookahead == '\r') ADVANCE(34);
      if (lookahead == ' ') ADVANCE(32);
      if (lookahead == '+') ADVANCE(25);
      if (lookahead == '-') ADVANCE(29);
      if (lookahead == '/') ADVANCE(26);
      if (lookahead == '=') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(28);
      if (('!' <= lookahead && lookahead <= '@') ||
          ('[' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(28);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(28);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(32);
      if (lookahead == '-') ADVANCE(29);
      if (('!' <= lookahead && lookahead <= '~')) ADVANCE(28);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(24);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(22);
      END_STATE();
    case 4:
      if (lookahead == '-') ADVANCE(23);
      END_STATE();
    case 5:
      if (lookahead == '-') ADVANCE(11);
      END_STATE();
    case 6:
      if (lookahead == '-') ADVANCE(4);
      END_STATE();
    case 7:
      if (lookahead == '-') ADVANCE(5);
      END_STATE();
    case 8:
      if (lookahead == '-') ADVANCE(6);
      END_STATE();
    case 9:
      if (lookahead == '-') ADVANCE(7);
      END_STATE();
    case 10:
      if (lookahead == '-') ADVANCE(9);
      END_STATE();
    case 11:
      if (lookahead == 'B') ADVANCE(13);
      if (lookahead == 'E') ADVANCE(16);
      END_STATE();
    case 12:
      if (lookahead == 'D') ADVANCE(2);
      END_STATE();
    case 13:
      if (lookahead == 'E') ADVANCE(14);
      END_STATE();
    case 14:
      if (lookahead == 'G') ADVANCE(15);
      END_STATE();
    case 15:
      if (lookahead == 'I') ADVANCE(17);
      END_STATE();
    case 16:
      if (lookahead == 'N') ADVANCE(12);
      END_STATE();
    case 17:
      if (lookahead == 'N') ADVANCE(3);
      END_STATE();
    case 18:
      if (eof) ADVANCE(19);
      if (lookahead == '\t') ADVANCE(33);
      if (lookahead == '\n') ADVANCE(35);
      if (lookahead == 11) ADVANCE(20);
      if (lookahead == '\f') ADVANCE(21);
      if (lookahead == '\r') ADVANCE(34);
      if (lookahead == ' ') ADVANCE(32);
      if (lookahead == '+') ADVANCE(25);
      if (lookahead == '-') ADVANCE(10);
      if (lookahead == '/') ADVANCE(26);
      if (lookahead == '=') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(31);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_2);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_DASH_DASH_DASHBEGIN);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_DASH_DASH_DASH);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_DASH_DASH_DASHEND);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_base64pad);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_labelchar);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(8);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_ALPHA);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_DIGIT);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_SP);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_HTAB);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_CR);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_LF);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 18},
  [2] = {.lex_state = 18},
  [3] = {.lex_state = 18},
  [4] = {.lex_state = 18},
  [5] = {.lex_state = 18},
  [6] = {.lex_state = 18},
  [7] = {.lex_state = 18},
  [8] = {.lex_state = 18},
  [9] = {.lex_state = 18},
  [10] = {.lex_state = 18},
  [11] = {.lex_state = 18},
  [12] = {.lex_state = 18},
  [13] = {.lex_state = 18},
  [14] = {.lex_state = 18},
  [15] = {.lex_state = 18},
  [16] = {.lex_state = 18},
  [17] = {.lex_state = 18},
  [18] = {.lex_state = 18},
  [19] = {.lex_state = 18},
  [20] = {.lex_state = 18},
  [21] = {.lex_state = 18},
  [22] = {.lex_state = 18},
  [23] = {.lex_state = 18},
  [24] = {.lex_state = 18},
  [25] = {.lex_state = 18},
  [26] = {.lex_state = 18},
  [27] = {.lex_state = 18},
  [28] = {.lex_state = 18},
  [29] = {.lex_state = 1},
  [30] = {.lex_state = 1},
  [31] = {.lex_state = 1},
  [32] = {.lex_state = 1},
  [33] = {.lex_state = 1},
  [34] = {.lex_state = 1},
  [35] = {.lex_state = 18},
  [36] = {.lex_state = 18},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 18},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 18},
  [41] = {.lex_state = 1},
  [42] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_] = ACTIONS(1),
    [anon_sym_2] = ACTIONS(1),
    [anon_sym_DASH_DASH_DASH_DASH_DASH] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [sym_base64pad] = ACTIONS(1),
    [sym_labelchar] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [sym_ALPHA] = ACTIONS(1),
    [sym_DIGIT] = ACTIONS(1),
    [sym_SP] = ACTIONS(1),
    [sym_HTAB] = ACTIONS(1),
    [sym_CR] = ACTIONS(1),
    [sym_LF] = ACTIONS(1),
  },
  [1] = {
    [sym_pem_file] = STATE(39),
    [sym_laxtextualmsg] = STATE(8),
    [sym_W] = STATE(20),
    [sym_preeb] = STATE(2),
    [sym_WSP] = STATE(6),
    [aux_sym_pem_file_repeat1] = STATE(8),
    [aux_sym_laxtextualmsg_repeat1] = STATE(20),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_] = ACTIONS(5),
    [anon_sym_2] = ACTIONS(5),
    [anon_sym_DASH_DASH_DASH_DASH_DASHBEGIN] = ACTIONS(7),
    [sym_SP] = ACTIONS(9),
    [sym_HTAB] = ACTIONS(9),
    [sym_CR] = ACTIONS(5),
    [sym_LF] = ACTIONS(5),
  },
  [2] = {
    [sym_W] = STATE(4),
    [sym__laxbase64text_char] = STATE(4),
    [sym__laxbase64text_padding] = STATE(40),
    [sym_laxbase64text] = STATE(35),
    [sym_posteb] = STATE(16),
    [sym_base64char] = STATE(4),
    [sym_WSP] = STATE(6),
    [aux_sym_laxbase64text_repeat1] = STATE(4),
    [anon_sym_] = ACTIONS(5),
    [anon_sym_2] = ACTIONS(5),
    [anon_sym_DASH_DASH_DASH_DASH_DASHEND] = ACTIONS(11),
    [anon_sym_PLUS] = ACTIONS(13),
    [anon_sym_SLASH] = ACTIONS(13),
    [sym_base64pad] = ACTIONS(15),
    [sym_ALPHA] = ACTIONS(13),
    [sym_DIGIT] = ACTIONS(13),
    [sym_SP] = ACTIONS(9),
    [sym_HTAB] = ACTIONS(9),
    [sym_CR] = ACTIONS(5),
    [sym_LF] = ACTIONS(5),
  },
  [3] = {
    [sym_W] = STATE(4),
    [sym__laxbase64text_char] = STATE(4),
    [sym__laxbase64text_padding] = STATE(40),
    [sym_laxbase64text] = STATE(36),
    [sym_posteb] = STATE(21),
    [sym_base64char] = STATE(4),
    [sym_WSP] = STATE(6),
    [aux_sym_laxbase64text_repeat1] = STATE(4),
    [anon_sym_] = ACTIONS(5),
    [anon_sym_2] = ACTIONS(5),
    [anon_sym_DASH_DASH_DASH_DASH_DASHEND] = ACTIONS(11),
    [anon_sym_PLUS] = ACTIONS(13),
    [anon_sym_SLASH] = ACTIONS(13),
    [sym_base64pad] = ACTIONS(15),
    [sym_ALPHA] = ACTIONS(13),
    [sym_DIGIT] = ACTIONS(13),
    [sym_SP] = ACTIONS(9),
    [sym_HTAB] = ACTIONS(9),
    [sym_CR] = ACTIONS(5),
    [sym_LF] = ACTIONS(5),
  },
  [4] = {
    [sym_W] = STATE(5),
    [sym__laxbase64text_char] = STATE(5),
    [sym__laxbase64text_padding] = STATE(38),
    [sym_base64char] = STATE(5),
    [sym_WSP] = STATE(6),
    [aux_sym_laxbase64text_repeat1] = STATE(5),
    [anon_sym_] = ACTIONS(5),
    [anon_sym_2] = ACTIONS(5),
    [anon_sym_DASH_DASH_DASH_DASH_DASHEND] = ACTIONS(17),
    [anon_sym_PLUS] = ACTIONS(13),
    [anon_sym_SLASH] = ACTIONS(13),
    [sym_base64pad] = ACTIONS(15),
    [sym_ALPHA] = ACTIONS(13),
    [sym_DIGIT] = ACTIONS(13),
    [sym_SP] = ACTIONS(9),
    [sym_HTAB] = ACTIONS(9),
    [sym_CR] = ACTIONS(5),
    [sym_LF] = ACTIONS(5),
  },
  [5] = {
    [sym_W] = STATE(5),
    [sym__laxbase64text_char] = STATE(5),
    [sym_base64char] = STATE(5),
    [sym_WSP] = STATE(6),
    [aux_sym_laxbase64text_repeat1] = STATE(5),
    [anon_sym_] = ACTIONS(19),
    [anon_sym_2] = ACTIONS(19),
    [anon_sym_DASH_DASH_DASH_DASH_DASHEND] = ACTIONS(22),
    [anon_sym_PLUS] = ACTIONS(24),
    [anon_sym_SLASH] = ACTIONS(24),
    [sym_base64pad] = ACTIONS(22),
    [sym_ALPHA] = ACTIONS(24),
    [sym_DIGIT] = ACTIONS(24),
    [sym_SP] = ACTIONS(27),
    [sym_HTAB] = ACTIONS(27),
    [sym_CR] = ACTIONS(19),
    [sym_LF] = ACTIONS(19),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 1,
    ACTIONS(30), 14,
      ts_builtin_sym_end,
      anon_sym_,
      anon_sym_2,
      anon_sym_DASH_DASH_DASH_DASH_DASHBEGIN,
      anon_sym_DASH_DASH_DASH_DASH_DASHEND,
      anon_sym_PLUS,
      anon_sym_SLASH,
      sym_base64pad,
      sym_ALPHA,
      sym_DIGIT,
      sym_SP,
      sym_HTAB,
      sym_CR,
      sym_LF,
  [17] = 1,
    ACTIONS(32), 14,
      ts_builtin_sym_end,
      anon_sym_,
      anon_sym_2,
      anon_sym_DASH_DASH_DASH_DASH_DASHBEGIN,
      anon_sym_DASH_DASH_DASH_DASH_DASHEND,
      anon_sym_PLUS,
      anon_sym_SLASH,
      sym_base64pad,
      sym_ALPHA,
      sym_DIGIT,
      sym_SP,
      sym_HTAB,
      sym_CR,
      sym_LF,
  [34] = 8,
    ACTIONS(7), 1,
      anon_sym_DASH_DASH_DASH_DASH_DASHBEGIN,
    ACTIONS(34), 1,
      ts_builtin_sym_end,
    STATE(2), 1,
      sym_preeb,
    STATE(6), 1,
      sym_WSP,
    ACTIONS(9), 2,
      sym_SP,
      sym_HTAB,
    STATE(9), 2,
      sym_laxtextualmsg,
      aux_sym_pem_file_repeat1,
    STATE(20), 2,
      sym_W,
      aux_sym_laxtextualmsg_repeat1,
    ACTIONS(5), 4,
      anon_sym_,
      anon_sym_2,
      sym_CR,
      sym_LF,
  [65] = 8,
    ACTIONS(36), 1,
      ts_builtin_sym_end,
    ACTIONS(41), 1,
      anon_sym_DASH_DASH_DASH_DASH_DASHBEGIN,
    STATE(2), 1,
      sym_preeb,
    STATE(6), 1,
      sym_WSP,
    ACTIONS(44), 2,
      sym_SP,
      sym_HTAB,
    STATE(9), 2,
      sym_laxtextualmsg,
      aux_sym_pem_file_repeat1,
    STATE(20), 2,
      sym_W,
      aux_sym_laxtextualmsg_repeat1,
    ACTIONS(38), 4,
      anon_sym_,
      anon_sym_2,
      sym_CR,
      sym_LF,
  [96] = 5,
    STATE(6), 1,
      sym_WSP,
    ACTIONS(52), 2,
      sym_SP,
      sym_HTAB,
    STATE(10), 2,
      sym_W,
      aux_sym_laxtextualmsg_repeat1,
    ACTIONS(47), 4,
      ts_builtin_sym_end,
      anon_sym_DASH_DASH_DASH_DASH_DASHBEGIN,
      anon_sym_DASH_DASH_DASH_DASH_DASHEND,
      sym_base64pad,
    ACTIONS(49), 4,
      anon_sym_,
      anon_sym_2,
      sym_CR,
      sym_LF,
  [120] = 1,
    ACTIONS(55), 12,
      anon_sym_,
      anon_sym_2,
      anon_sym_DASH_DASH_DASH_DASH_DASHEND,
      anon_sym_PLUS,
      anon_sym_SLASH,
      sym_base64pad,
      sym_ALPHA,
      sym_DIGIT,
      sym_SP,
      sym_HTAB,
      sym_CR,
      sym_LF,
  [135] = 1,
    ACTIONS(57), 12,
      anon_sym_,
      anon_sym_2,
      anon_sym_DASH_DASH_DASH_DASH_DASHEND,
      anon_sym_PLUS,
      anon_sym_SLASH,
      sym_base64pad,
      sym_ALPHA,
      sym_DIGIT,
      sym_SP,
      sym_HTAB,
      sym_CR,
      sym_LF,
  [150] = 1,
    ACTIONS(59), 12,
      anon_sym_,
      anon_sym_2,
      anon_sym_DASH_DASH_DASH_DASH_DASHEND,
      anon_sym_PLUS,
      anon_sym_SLASH,
      sym_base64pad,
      sym_ALPHA,
      sym_DIGIT,
      sym_SP,
      sym_HTAB,
      sym_CR,
      sym_LF,
  [165] = 5,
    STATE(6), 1,
      sym_WSP,
    ACTIONS(61), 2,
      ts_builtin_sym_end,
      anon_sym_DASH_DASH_DASH_DASH_DASHBEGIN,
    ACTIONS(66), 2,
      sym_SP,
      sym_HTAB,
    STATE(10), 2,
      sym_W,
      aux_sym_laxtextualmsg_repeat1,
    ACTIONS(63), 4,
      anon_sym_,
      anon_sym_2,
      sym_CR,
      sym_LF,
  [187] = 5,
    STATE(6), 1,
      sym_WSP,
    ACTIONS(69), 2,
      ts_builtin_sym_end,
      anon_sym_DASH_DASH_DASH_DASH_DASHBEGIN,
    ACTIONS(74), 2,
      sym_SP,
      sym_HTAB,
    STATE(10), 2,
      sym_W,
      aux_sym_laxtextualmsg_repeat1,
    ACTIONS(71), 4,
      anon_sym_,
      anon_sym_2,
      sym_CR,
      sym_LF,
  [209] = 5,
    STATE(6), 1,
      sym_WSP,
    ACTIONS(77), 2,
      ts_builtin_sym_end,
      anon_sym_DASH_DASH_DASH_DASH_DASHBEGIN,
    ACTIONS(82), 2,
      sym_SP,
      sym_HTAB,
    STATE(14), 2,
      sym_W,
      aux_sym_laxtextualmsg_repeat1,
    ACTIONS(79), 4,
      anon_sym_,
      anon_sym_2,
      sym_CR,
      sym_LF,
  [231] = 6,
    ACTIONS(85), 1,
      anon_sym_DASH_DASH_DASH_DASH_DASHEND,
    ACTIONS(87), 1,
      sym_base64pad,
    STATE(6), 1,
      sym_WSP,
    ACTIONS(9), 2,
      sym_SP,
      sym_HTAB,
    STATE(22), 2,
      sym_W,
      aux_sym_laxtextualmsg_repeat1,
    ACTIONS(5), 4,
      anon_sym_,
      anon_sym_2,
      sym_CR,
      sym_LF,
  [255] = 5,
    STATE(6), 1,
      sym_WSP,
    ACTIONS(89), 2,
      ts_builtin_sym_end,
      anon_sym_DASH_DASH_DASH_DASH_DASHBEGIN,
    ACTIONS(94), 2,
      sym_SP,
      sym_HTAB,
    STATE(15), 2,
      sym_W,
      aux_sym_laxtextualmsg_repeat1,
    ACTIONS(91), 4,
      anon_sym_,
      anon_sym_2,
      sym_CR,
      sym_LF,
  [277] = 5,
    STATE(6), 1,
      sym_WSP,
    ACTIONS(89), 2,
      ts_builtin_sym_end,
      anon_sym_DASH_DASH_DASH_DASH_DASHBEGIN,
    ACTIONS(94), 2,
      sym_SP,
      sym_HTAB,
    STATE(10), 2,
      sym_W,
      aux_sym_laxtextualmsg_repeat1,
    ACTIONS(91), 4,
      anon_sym_,
      anon_sym_2,
      sym_CR,
      sym_LF,
  [299] = 6,
    ACTIONS(7), 1,
      anon_sym_DASH_DASH_DASH_DASH_DASHBEGIN,
    STATE(3), 1,
      sym_preeb,
    STATE(6), 1,
      sym_WSP,
    ACTIONS(9), 2,
      sym_SP,
      sym_HTAB,
    STATE(10), 2,
      sym_W,
      aux_sym_laxtextualmsg_repeat1,
    ACTIONS(5), 4,
      anon_sym_,
      anon_sym_2,
      sym_CR,
      sym_LF,
  [323] = 5,
    STATE(6), 1,
      sym_WSP,
    ACTIONS(61), 2,
      ts_builtin_sym_end,
      anon_sym_DASH_DASH_DASH_DASH_DASHBEGIN,
    ACTIONS(66), 2,
      sym_SP,
      sym_HTAB,
    STATE(19), 2,
      sym_W,
      aux_sym_laxtextualmsg_repeat1,
    ACTIONS(63), 4,
      anon_sym_,
      anon_sym_2,
      sym_CR,
      sym_LF,
  [345] = 6,
    ACTIONS(97), 1,
      anon_sym_DASH_DASH_DASH_DASH_DASHEND,
    ACTIONS(99), 1,
      sym_base64pad,
    STATE(6), 1,
      sym_WSP,
    ACTIONS(9), 2,
      sym_SP,
      sym_HTAB,
    STATE(10), 2,
      sym_W,
      aux_sym_laxtextualmsg_repeat1,
    ACTIONS(5), 4,
      anon_sym_,
      anon_sym_2,
      sym_CR,
      sym_LF,
  [369] = 5,
    ACTIONS(97), 1,
      anon_sym_DASH_DASH_DASH_DASH_DASHEND,
    STATE(6), 1,
      sym_WSP,
    ACTIONS(9), 2,
      sym_SP,
      sym_HTAB,
    STATE(26), 2,
      sym_W,
      aux_sym_laxtextualmsg_repeat1,
    ACTIONS(5), 4,
      anon_sym_,
      anon_sym_2,
      sym_CR,
      sym_LF,
  [390] = 5,
    ACTIONS(101), 1,
      anon_sym_DASH_DASH_DASH_DASH_DASHEND,
    STATE(6), 1,
      sym_WSP,
    ACTIONS(9), 2,
      sym_SP,
      sym_HTAB,
    STATE(10), 2,
      sym_W,
      aux_sym_laxtextualmsg_repeat1,
    ACTIONS(5), 4,
      anon_sym_,
      anon_sym_2,
      sym_CR,
      sym_LF,
  [411] = 5,
    ACTIONS(103), 1,
      anon_sym_DASH_DASH_DASH_DASH_DASHEND,
    STATE(6), 1,
      sym_WSP,
    ACTIONS(9), 2,
      sym_SP,
      sym_HTAB,
    STATE(24), 2,
      sym_W,
      aux_sym_laxtextualmsg_repeat1,
    ACTIONS(5), 4,
      anon_sym_,
      anon_sym_2,
      sym_CR,
      sym_LF,
  [432] = 5,
    ACTIONS(103), 1,
      anon_sym_DASH_DASH_DASH_DASH_DASHEND,
    STATE(6), 1,
      sym_WSP,
    ACTIONS(9), 2,
      sym_SP,
      sym_HTAB,
    STATE(10), 2,
      sym_W,
      aux_sym_laxtextualmsg_repeat1,
    ACTIONS(5), 4,
      anon_sym_,
      anon_sym_2,
      sym_CR,
      sym_LF,
  [453] = 1,
    ACTIONS(105), 8,
      ts_builtin_sym_end,
      anon_sym_,
      anon_sym_2,
      anon_sym_DASH_DASH_DASH_DASH_DASHBEGIN,
      sym_SP,
      sym_HTAB,
      sym_CR,
      sym_LF,
  [464] = 1,
    ACTIONS(107), 8,
      ts_builtin_sym_end,
      anon_sym_,
      anon_sym_2,
      anon_sym_DASH_DASH_DASH_DASH_DASHBEGIN,
      sym_SP,
      sym_HTAB,
      sym_CR,
      sym_LF,
  [475] = 5,
    ACTIONS(109), 1,
      anon_sym_DASH_DASH_DASH_DASH_DASH,
    ACTIONS(111), 1,
      sym_labelchar,
    ACTIONS(114), 1,
      anon_sym_DASH,
    ACTIONS(117), 1,
      sym_SP,
    STATE(29), 1,
      aux_sym_label_repeat1,
  [491] = 5,
    ACTIONS(120), 1,
      anon_sym_DASH_DASH_DASH_DASH_DASH,
    ACTIONS(122), 1,
      sym_labelchar,
    ACTIONS(124), 1,
      anon_sym_DASH,
    ACTIONS(126), 1,
      sym_SP,
    STATE(31), 1,
      aux_sym_label_repeat1,
  [507] = 5,
    ACTIONS(124), 1,
      anon_sym_DASH,
    ACTIONS(126), 1,
      sym_SP,
    ACTIONS(128), 1,
      anon_sym_DASH_DASH_DASH_DASH_DASH,
    ACTIONS(130), 1,
      sym_labelchar,
    STATE(29), 1,
      aux_sym_label_repeat1,
  [523] = 2,
    ACTIONS(132), 1,
      anon_sym_DASH,
    ACTIONS(109), 3,
      anon_sym_DASH_DASH_DASH_DASH_DASH,
      sym_labelchar,
      sym_SP,
  [532] = 3,
    ACTIONS(134), 1,
      anon_sym_DASH_DASH_DASH_DASH_DASH,
    ACTIONS(136), 1,
      sym_labelchar,
    STATE(37), 1,
      sym_label,
  [542] = 3,
    ACTIONS(136), 1,
      sym_labelchar,
    ACTIONS(138), 1,
      anon_sym_DASH_DASH_DASH_DASH_DASH,
    STATE(42), 1,
      sym_label,
  [552] = 2,
    ACTIONS(11), 1,
      anon_sym_DASH_DASH_DASH_DASH_DASHEND,
    STATE(21), 1,
      sym_posteb,
  [559] = 2,
    ACTIONS(11), 1,
      anon_sym_DASH_DASH_DASH_DASH_DASHEND,
    STATE(18), 1,
      sym_posteb,
  [566] = 1,
    ACTIONS(140), 1,
      anon_sym_DASH_DASH_DASH_DASH_DASH,
  [570] = 1,
    ACTIONS(142), 1,
      anon_sym_DASH_DASH_DASH_DASH_DASHEND,
  [574] = 1,
    ACTIONS(144), 1,
      ts_builtin_sym_end,
  [578] = 1,
    ACTIONS(17), 1,
      anon_sym_DASH_DASH_DASH_DASH_DASHEND,
  [582] = 1,
    ACTIONS(146), 1,
      sym_labelchar,
  [586] = 1,
    ACTIONS(148), 1,
      anon_sym_DASH_DASH_DASH_DASH_DASH,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(6)] = 0,
  [SMALL_STATE(7)] = 17,
  [SMALL_STATE(8)] = 34,
  [SMALL_STATE(9)] = 65,
  [SMALL_STATE(10)] = 96,
  [SMALL_STATE(11)] = 120,
  [SMALL_STATE(12)] = 135,
  [SMALL_STATE(13)] = 150,
  [SMALL_STATE(14)] = 165,
  [SMALL_STATE(15)] = 187,
  [SMALL_STATE(16)] = 209,
  [SMALL_STATE(17)] = 231,
  [SMALL_STATE(18)] = 255,
  [SMALL_STATE(19)] = 277,
  [SMALL_STATE(20)] = 299,
  [SMALL_STATE(21)] = 323,
  [SMALL_STATE(22)] = 345,
  [SMALL_STATE(23)] = 369,
  [SMALL_STATE(24)] = 390,
  [SMALL_STATE(25)] = 411,
  [SMALL_STATE(26)] = 432,
  [SMALL_STATE(27)] = 453,
  [SMALL_STATE(28)] = 464,
  [SMALL_STATE(29)] = 475,
  [SMALL_STATE(30)] = 491,
  [SMALL_STATE(31)] = 507,
  [SMALL_STATE(32)] = 523,
  [SMALL_STATE(33)] = 532,
  [SMALL_STATE(34)] = 542,
  [SMALL_STATE(35)] = 552,
  [SMALL_STATE(36)] = 559,
  [SMALL_STATE(37)] = 566,
  [SMALL_STATE(38)] = 570,
  [SMALL_STATE(39)] = 574,
  [SMALL_STATE(40)] = 578,
  [SMALL_STATE(41)] = 582,
  [SMALL_STATE(42)] = 586,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pem_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_laxbase64text, 1),
  [19] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_laxbase64text_repeat1, 2), SHIFT_REPEAT(6),
  [22] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_laxbase64text_repeat1, 2),
  [24] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_laxbase64text_repeat1, 2), SHIFT_REPEAT(13),
  [27] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_laxbase64text_repeat1, 2), SHIFT_REPEAT(7),
  [30] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_W, 1),
  [32] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_WSP, 1),
  [34] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pem_file, 1),
  [36] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pem_file_repeat1, 2),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pem_file_repeat1, 2), SHIFT_REPEAT(6),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pem_file_repeat1, 2), SHIFT_REPEAT(34),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pem_file_repeat1, 2), SHIFT_REPEAT(7),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_laxtextualmsg_repeat1, 2),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_laxtextualmsg_repeat1, 2), SHIFT_REPEAT(6),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_laxtextualmsg_repeat1, 2), SHIFT_REPEAT(7),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_preeb, 3),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_preeb, 2),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_base64char, 1),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_laxtextualmsg, 3),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_laxtextualmsg, 3), SHIFT(6),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_laxtextualmsg, 3), SHIFT(7),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_laxtextualmsg, 5),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_laxtextualmsg, 5), SHIFT(6),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_laxtextualmsg, 5), SHIFT(7),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_laxtextualmsg, 2),
  [79] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_laxtextualmsg, 2), SHIFT(6),
  [82] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_laxtextualmsg, 2), SHIFT(7),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__laxbase64text_padding, 1),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_laxtextualmsg, 4),
  [91] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_laxtextualmsg, 4), SHIFT(6),
  [94] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_laxtextualmsg, 4), SHIFT(7),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__laxbase64text_padding, 2),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__laxbase64text_padding, 4),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__laxbase64text_padding, 3),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posteb, 3),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posteb, 2),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_label_repeat1, 2),
  [111] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_label_repeat1, 2), SHIFT_REPEAT(29),
  [114] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_label_repeat1, 2), SHIFT_REPEAT(41),
  [117] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_label_repeat1, 2), SHIFT_REPEAT(41),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 1),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [124] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 2),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_label_repeat1, 2),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_laxbase64text, 2),
  [144] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_pem(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
