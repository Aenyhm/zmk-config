#pragma once

#define MORPH(name, k1, modifiers, k2) \
/ { \
  behaviors { \
    name: name { \
      compatible = "zmk,behavior-mod-morph"; \
      #binding-cells = <0>; \
      bindings = <k1>, <k2>; \
      mods = <(modifiers)>; \
    }; \
  }; \
};

#define TAPDANCE(name, ...) \
/ { \
  behaviors { \
    name: name {  \
      compatible = "zmk,behavior-tap-dance"; \
      #binding-cells = <0>; \
      bindings = __VA_ARGS__; \
    }; \
  }; \
};

#define MORPH_UP(name, k1, k2) MORPH(name, k1, MOD_LSFT|MOD_RSFT, k2)

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

#define LAYER(id, display_name, layout) \
/ { \
  keymap { \
    compatible = "zmk,keymap"; \
    id##_layer { \
      label = display_name; \
      bindings = <layout>; \
    }; \
  }; \
};
