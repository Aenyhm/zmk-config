#pragma once

#define STRINGIFY(x) #x

#define MORPH(name, k1, mod, k2) \
/ { \
  behaviors { \
    name: name { \
      compatible = "zmk,behavior-mod-morph"; \
      #binding-cells = <0>; \
      bindings = <k1>, <k2>; \
      mods = <(MOD_##mod)>; \
    }; \
  }; \
};

#define MORPH_UP(name, k1, k2) MORPH(name, k1, LSFT, k2)

#define MACRO(...) \
/ { \
  macros { \
    ZMK_MACRO(__VA_ARGS__) \
  }; \
};

#define COND_LAYER(if_layers, then_layer) \
/ { \
  conditional_layers { \
    compatible = "zmk,conditional-layers"; \
    then_layer##_cond_layer { \
      if-layers = <if_layers>; \
      then-layer = <then_layer>; \
    }; \
  }; \
};

#define LAYER(name, layout) \
/ { \
  keymap { \
    compatible = "zmk,keymap"; \
    name##_layer { \
      label = STRINGIFY(name); \
      bindings = <layout>; \
    }; \
  }; \
};
