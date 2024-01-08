#define ___ &trans

#define MORPH(name, k1, mod, k2) \
name: name { \
  compatible = "zmk,behavior-mod-morph"; \
  #binding-cells = <0>; \
  bindings = <k1>, <k2>; \
  mods = <(MOD_##mod)>; \
};

#define WIN_ALT_CODE(name, d1, d2, d3) \
ZMK_MACRO(win_##name, \
  bindings \
    = <&macro_press &kp LALT> \
    , <&macro_tap &kp KP_N0 &kp KP_N##d1 &kp KP_N##d2 &kp KP_N##d3> \
    , <&macro_release &kp LALT> \
    ; \
)

#define ALL_TRANS_BINDINGS() \
bindings = < \
___ ___ ___ ___ ___ ___ ___ ___ ___ ___ ___ ___ \
___ ___ ___ ___ ___ ___ ___ ___ ___ ___ ___ ___ \
___ ___ ___ ___ ___ ___ ___ ___ ___ ___ ___ ___ \
___ ___ ___ ___ ___ ___ \
>;
