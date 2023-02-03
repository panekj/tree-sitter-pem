/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: "pem",
  extras: () => [],
  rules: {
    // ABNF (Lax)

    laxtextualmsg: $ => seq(
      repeat($.W),
      $.preeb,
      optional($.laxbase64text),
      $.posteb,
      repeat($.W),
    ),

    W: $ => choice(
      $.WSP,
      $.CR,
      $.LF,
      "\u000B",
      "\u000C",
    ),

    _laxbase64text_char: $ => choice(
      $.W,
      $.base64char,
    ),

    _laxbase64text_padding: $ => seq(
      $.base64pad,
      repeat($.W),
      optional(seq(
        $.base64pad,
        repeat($.W),
      )),
    ),

    // NOTE: this doesn't correspond directly to the ABNF, which allows both
    // the characters and padding to be omitted at once, since tree-sitter
    // doesn't support rules that match the empty string. Instead, we force at
    // least one of either to be present here, and optional($.laxbase64text) is
    // used wherever laxbase64text is specified in the ABNF.
    laxbase64text: $ => choice(
      seq(
        repeat1($._laxbase64text_char),
        optional($._laxbase64text_padding),
      ),
      $._laxbase64text_padding,
    ),

    // ABNF (Standard)

    preeb: $ => seq("-----BEGIN ", optional($.label), "-----"),

    posteb: $ => seq("-----END ", optional($.label), "-----"),

    base64char: $ => choice($.ALPHA, $.DIGIT, "+", "/"),

    base64pad: () => "=",

    base64line: $ => seq(repeat1($.base64char), repeat($.WSP), $.eol),

    base64finl: $ => seq(
      repeat($.base64char),
      $.base64pad,
      repeat($.WSP),
      $.eol,
      choice(
        $.base64pad,
        optional(seq(
          $.base64pad,
          optional($.base64pad),
        )),
      ),
      repeat($.WSP),
      $.eol,
    ),


    base64text: $ => seq(repeat($.base64line), $.base64finl),

    labelchar: () => /[!-,.-~]/,

    // NOTE: this doesn't correspond directly to the ABNF, which wraps the
    // whole token in [...] since tree-sitter doesn't support rules that match
    // the empty string. Instead, that is omitted here, and optional($.label)
    // is used wherever label is specified in the ABNF.
    label: $ => seq(
      $.labelchar,
      repeat(seq(
        optional(choice("-", $.SP)),
        $.labelchar,
      )),
    ),

    eol: $ => choice($.CRLF, $.CR, $.LF),

    eolWSP: $ => seq($.WSP, $.CR, $.LF),

    // ABNF (Builtins)

    ALPHA: () => /[A-Za-z]/,

    DIGIT: () => /[0-9]/,

    SP: () => " ",

    HTAB: () => "\t",

    WSP: $ => choice($.SP, $.HTAB),

    CR: () => "\r",

    LF: () => "\n",

    CRLF: $ => seq($.CR, $.LF),
  },
})
