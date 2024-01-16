// Alphas and OS overlays
#define DEF 0
#define WIN 1
#define MAC 2

// Symbols and Alternate Alphas
#define SYM 3
#define WIN_SYM 4
#define MAC_SYM 5

// Numbers and Function keys
#define NUM 6
#define WIN_NUM 7
#define MAC_NUM 8

// Navigation & Media
#define NAV 9
#define WIN_NAV 10
#define MAC_NAV 11

// Bluetooth & Keyboard
#define ADM 12

/ {
  conditional_layers {
    compatible = "zmk,conditional-layers";

    adm_layer { if-layers = <SYM NUM>; then-layer = <ADM>; };

    win_sym_layer { if-layers = <WIN SYM>; then-layer = <WIN_SYM>; };
    mac_sym_layer { if-layers = <MAC SYM>; then-layer = <MAC_SYM>; };

    win_num_layer { if-layers = <WIN NUM>; then-layer = <WIN_NUM>; };
    mac_num_layer { if-layers = <MAC NUM>; then-layer = <MAC_NUM>; };

    win_nav_layer { if-layers = <WIN NAV>; then-layer = <WIN_NAV>; };
    mac_nav_layer { if-layers = <MAC NAV>; then-layer = <MAC_NAV>; };
  };
};
