#define MORPH(name, k1, mod, k2) \
name: name { \
  compatible = "zmk,behavior-mod-morph"; \
  #binding-cells = <0>; \
  bindings = <&kp k1>, <&kp k2>; \
  mods = <(MOD_##mod)>; \
};


// --- Windows Alt Codes ------------------------

#define WIN_ALT_CODE(name, n) \
ZMK_MACRO(win_##name, \
  bindings \
    = <&macro_press &kp LALT> \
    , <&macro_tap TAP_NUMBER(n)> \
    , <&macro_release &kp LALT> \
    ; \
)

#define TAP_NUMBER(n) \
TAP_DIGIT(((n) / 100) % 10) TAP_DIGIT(((n) / 10) % 10) TAP_DIGIT((n) % 10)

#define TAP_DIGIT(d) &kp KP_N##d
