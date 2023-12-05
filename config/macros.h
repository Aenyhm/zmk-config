#define STRINGIFY(x) #x

#define MORPH(name, k1, mod, k2) \
name: name { \
    compatible = "zmk,behavior-mod-morph"; \
    label = STRINGIFY(name); \
    #binding-cells = <0>; \
    bindings = <&kp k1>, <&kp k2>; \
    mods = <(MOD_##mod)>; \
};
