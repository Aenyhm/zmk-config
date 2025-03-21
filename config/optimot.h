#include <behaviors.dtsi>
#include <dt-bindings/zmk/bt.h>
#include <dt-bindings/zmk/keys.h>
#include <dt-bindings/zmk/outputs.h>

#include "node_free.h"
#include "layers.h"
#include "keyboards/linux.h"
#include "keyboards/windows.h"
#include "keyboards/macos.h"

#define ___ &trans


/*
    ╭─────┬─────┬─────┬─────┬─────┬─────╮   ╭─────┬─────┬─────┬─────┬─────┬─────╮
    │ TAB │  À  │  J  │  O  │  É  │  B  │   │  F  │  D  │  L  │ ' ? │  Qu │  X  │
    │CTRL │  A  │  I  │  E  │  U  │ , ; │   │  P  │  T  │  S  │  R  │  N  │ ^ ! │
    │ GUI │  K  │  Y  │  È  │ . : │  W  │   │  G  │  C  │  M  │  H  │  V  │  Z  │
    ╰─────┴─────┴─────┼─────┼─────┼─────┤   ├─────┼─────┼─────┼─────┴─────┴─────╯
                      │ ALT │<nav>│ℕ]SPC│   │⇧]RET│<sym>│BSPC │
                      ╰─────┴─────┴─────╯   ╰─────┴─────┴─────╯
*/

MACRO(q_u, bindings = <&kp FR_Q &kp FR_U>;)
MACRO(q_u_up_lnx,
  tap-ms = <LNX_CAPS_DELAY>;
  // Using Caps Lock because LSHFT/RSHFT are retained by Mod-Morph on Linux.
  bindings = <&kp CAPS &kp FR_Q &kp CAPS &kp FR_U>;
)
MORPH_UP(qu_lnx, &q_u, &q_u_up_lnx)

MORPH_UP(agrv, &kp FR_AGRV, &kp FR_AGRV_UP)
MORPH_UP(eacu, &kp FR_EACU, &kp FR_EACU_UP)
MORPH_UP(egrv, &kp FR_EGRV, &kp FR_EGRV_UP)

MORPH_UP(caret_excl, &kp FR_CARET, &kp FR_EXCL)
MORPH_UP(comma_semi, &kp FR_COMMA, &kp FR_SEMI)
MORPH_UP(dot_colon,  &kp FR_DOT,   &kp FR_COLON)
MORPH_UP(sqt_qmark,  &kp FR_SQT,   &kp FR_QMARK)

LAYER(DEFAULT, "Linux",
  &kp TAB    &agrv     &kp FR_J  &kp FR_O   &eacu       &kp FR_B       &kp FR_F       &kp FR_D  &kp FR_L  &sqt_qmark  &qu_lnx   &kp FR_X
  &kp LCTRL  &kp FR_A  &kp FR_I  &kp FR_E   &kp FR_U    &comma_semi    &kp FR_P       &kp FR_T  &kp FR_S  &kp FR_R    &kp FR_N  &caret_excl
  &kp LGUI   &kp FR_K  &kp FR_Y  &egrv      &dot_colon  &kp FR_W       &kp FR_G       &kp FR_C  &kp FR_M  &kp FR_H    &kp FR_V  &kp FR_Z
                                 &kp LALT   &mo NAV     &lt NUM SPC    &mt LSHFT RET  &mo SYM   &kp BSPC
)

MACRO(q_u_up, bindings = <&kp RS(FR_Q) &kp FR_U>;) // Windows & macOS
MORPH(qu, &q_u, MOD_LSFT, &q_u_up)

MORPH_UP(win_agrv, &kp FR_AGRV, &win_agrv_up)
MORPH_UP(win_eacu, &kp FR_EACU, &win_eacu_up)
MORPH_UP(win_egrv, &kp FR_EGRV, &win_egrv_up)

LAYER(WINDOWS, "Windows",
  ___  &win_agrv  ___  ___        &win_eacu       ___    ___  ___               ___  ___  &qu  ___
  ___  ___        ___  ___        ___             ___    ___  ___               ___  ___  ___  ___
  ___  ___        ___  &win_egrv  ___             ___    ___  ___               ___  ___  ___  ___
  ___  ___  ___  ___  ___  ___
)

MORPH_UP(mac_agrv, &kp FR_AGRV, &mac_agrv_up)
MORPH_UP(mac_eacu, &kp FR_EACU, &mac_eacu_up)
MORPH_UP(mac_egrv, &kp FR_EGRV, &mac_egrv_up)
MORPH_UP(mac_caret_excl, &kp FR_CARET, &kp MAC_EXCL)

LAYER(MACOS, "MacOS",
  ___  &mac_agrv  ___  ___        &mac_eacu  ___    ___  ___               ___  ___  &qu  ___
  ___  ___        ___  ___        ___        ___    ___  ___               ___  ___  ___  &mac_caret_excl
  ___  ___        ___  &mac_egrv  ___        ___    ___  ___               ___  ___  ___  ___
  ___  ___  ___  ___  ___  ___
)


/*
          ┌─────┬─────┬─────┬─────┬─────╮   ╭─────┬─────┬─────┬─────┬─────┬─────╮
          │  <  │  >  │ & œ │  |  │  `  │   │  ’  │  {  │  }  │  [  │  ]  │  —  │
          │  @  │  _  │  "  │  -  │  +  │   │  *  │  /  │  =  │  (  │  )  │  ¨  │
          │  «  │  »  │  ~  │  \  │  %  │   │  #  │  Ç  │  €  │  $  │  ù  │  …  │
          └─────┴─────┴─────┴─────┴─────┘   └─────┴─────┴─────┴─────┴─────┴─────╯
*/

MORPH_UP(cced, &kp FR_CCED, &kp FR_CCED_UP)
MORPH(ampr_oe, &kp FR_AMPR, MOD_LCTL, &kp FR_OE)

LAYER(SYMBOLS, "Symbols",
  ___  &kp FR_LT   &kp FR_GT    &ampr_oe     &kp FR_PIPE   &kp FR_GRAVE    &kp FR_APOS  &kp FR_LCBR  &kp FR_RCBR   &kp FR_LBRC  &kp FR_RBRC  &kp FR_EMDASH
  ___  &kp FR_AT   &kp FR_UNDS  &kp FR_DQT   &kp FR_MINUS  &kp FR_PLUS     &kp FR_ASTR  &kp FR_SLSH  &kp FR_EQUAL  &kp FR_LPRN  &kp FR_RPRN  &kp FR_DIAE
  ___  &kp FR_QML  &kp FR_QMR   &kp FR_TILD  &kp FR_BSLS   &kp FR_PRCNT    &kp FR_HASH  &cced        &kp FR_EURO   &kp FR_DLR   &kp FR_UGRV  &kp FR_DDD
  ___  ___  ___  ___  ___  ___
)

MORPH_UP(win_cced, &kp FR_CCED, &win_cced_up)
MORPH(win_ampr_oe, &kp FR_AMPR, MOD_LCTL, &win_oe_lo)

LAYER(WINSYM, "WinSym",
  ___  ___       ___       &win_ampr_oe  ___  &win_grave    &win_apos  ___        ___  ___  ___  &win_emdash
  ___  ___       ___       ___           ___  ___           ___        ___        ___  ___  ___  ___
  ___  &win_qml  &win_qmr  &win_tild     ___  ___           ___        &win_cced  ___  ___  ___  &win_ddd
  ___  ___  ___  ___  ___  ___
)

MORPH_UP(mac_cced, &kp FR_CCED, &kp MAC_CCED_UP)

LAYER(MACSYM, "MacSym",
  ___  ___          ___          ___            &kp MAC_PIPE  &kp MAC_GRAVD    &kp MAC_APOS  &kp MAC_LCBR  &kp MAC_RCBR  &kp MAC_LBRC  &kp MAC_RBRC  &kp MAC_EMDASH
  ___  &kp MAC_AT   &kp MAC_UNDS ___            &kp MAC_MINUS &kp MAC_PLUS     &kp MAC_ASTR  ___           &kp MAC_EQUAL  ___          ___           ___
  ___  &kp MAC_QML  &kp MAC_QMR  &kp MAC_TILDD  &kp MAC_BSLS  ___              &kp MAC_HASH  &mac_cced     &kp MAC_EURO   ___          ___           &kp MAC_DDD
  ___  ___  ___  ___  ___  ___
)


/*
          ┌─────┬─────┬─────┬─────┬─────╮   ╭─────┬─────┬─────┬─────┬─────┬─────╮
          │ F1  │ F2  │ F3  │ F4  │ F5  │   │ F6  │ F7  │ F8  │ F9  │ F10 │ F11 │
          │  1  │  2  │  3  │  4  │  5  │   │  6  │  7  │  8  │  9  │  0  │ F12 │
          │  ¹  │  ²  │  ³  │  -  │  +  │   │  *  │  /  │  =  │  .  │  °  │  ,  │
          └─────┴─────┴─────┴─────┴─────┘   └─────┴─────┴─────┴─────┴─────┴─────╯
*/

LAYER(NUMBERS, "Numbers",
  ___  &kp F1      &kp F2      &kp F3      &kp F4        &kp F5         &kp F6       &kp F7       &kp F8        &kp F9      &kp F10     &kp F11
  ___  &kp KP_N1   &kp KP_N2   &kp KP_N3   &kp KP_N4     &kp KP_N5      &kp KP_N6    &kp KP_N7    &kp KP_N8     &kp KP_N9   &kp KP_N0   &kp F12
  ___  &kp FR_1UP  &kp FR_2UP  &kp FR_3UP  &kp FR_MINUS  &kp FR_PLUS    &kp FR_ASTR  &kp FR_SLSH  &kp FR_EQUAL  &kp FR_DOT  &kp FR_DEG  &kp FR_COMMA
  ___  ___  ___  ___  ___  ___
)

LAYER(WINNUM, "WinNum",
  ___  ___       ___  ___       ___  ___    ___  ___  ___  ___  ___  ___
  ___  ___       ___  ___       ___  ___    ___  ___  ___  ___  ___  ___
  ___  &win_1up  ___  &win_3up  ___  ___    ___  ___  ___  ___  ___  ___
  ___  ___  ___  ___  ___  ___
)

LAYER(MACNUM, "MacNum",
  ___  ___    ___    ___    ___  ___    ___  ___  ___  ___  ___  ___
  ___  ___    ___    ___    ___  ___    ___  ___  ___  ___  ___  ___
  ___  &none  &none  &none  ___  ___    ___  ___  ___  ___  ___  ___
  ___  ___  ___  ___  ___  ___
)


/*
    ╭─────┬─────┬─────┬─────┬─────┬─────╮   ╭─────┬─────┬─────┬─────┬─────┬─────╮
    │ ESC │     │     │     │RELO │     │   │PREV │PLAY │NEXT │MUTE │VDWN │ VUP │
    │     │UNDO │ CUT │COPY │PASTE│REDO │   │CAPS │  ←  │  ↓  │  ↑  │  →  │CMENU│
    │     │SAVE │     │  ⇧  │ ALT │     │   │ INS │HOME │ PDN │ PUP │ END │PSCRN│
    ╰─────┴─────┴─────┴─────┴─────┴─────┘   └─────┴─────┼─────┼─────┴─────┴─────╯
                                                        │ DEL │
                                                        └─────╯
*/

LAYER(NAVIG, "Navig",
  &kp ESC  &none         &none        &none         &kp LC(LS(FR_R))  &none            &kp C_PREV  &kp C_PP   &kp C_NEXT  &kp C_MUTE  &kp C_VOL_DN  &kp C_VOL_UP
  ___      &kp LC(FR_Z)  &kp LNX_CUT  &kp LNX_COPY  &kp LNX_PASTE     &kp LNX_REDO     &kp CAPS    &kp LEFT   &kp DOWN    &kp UP      &kp RIGHT     &kp K_CMENU
  ___      &kp LC(FR_S)  &none        &kp LSHFT     &kp LALT          &none            &kp INS     &kp HOME   &kp PG_DN   &kp PG_UP   &kp END       &kp PSCRN
                                      ___           ___               ___              ___         ___        &kp DEL
)

LAYER(WINNAV, "WinNav",
  ___  ___  ___          ___           ___            ___             ___  ___  ___  ___  ___  ___
  ___  ___  &kp WIN_CUT  &kp WIN_COPY  &kp WIN_PASTE  &kp WIN_REDO    ___  ___  ___  ___  ___  ___
  ___  ___  ___          ___           ___            ___             ___  ___  ___  ___  ___  ___
  ___  ___  ___  ___  ___  ___
)

LAYER(MACNAV, "MacNav",
  ___  ___           ___          ___           ___            ___             ___  ___  ___  ___  ___  ___
  ___  &kp MAC_UNDO  &kp MAC_CUT  &kp MAC_COPY  &kp MAC_PASTE  &kp MAC_REDO    ___  ___  ___  ___  ___  ___
  ___  &kp MAC_SAVE  ___          ___           ___            ___             ___  ___  ___  ___  ___  ___
  ___  ___  ___  ___  ___  ___
)


/*
    ╭─────┬─────┬─────┬─────┬─────┬─────╮   ╭─────┬─────┬─────┬─────┬─────┬─────╮
    │RESET│     │     │     │     │     │   │BTCLR│     │     │     │     │RESET│
    │     │WIN1 │MAC2 │ BT3 │ BT4 │     │   │     │     │     │     │     │     │
    │     │<gam>│<arc>│     │     │     │   │USBTt│     │     │     │     │     │
    ╰─────┴─────┴─────┴─────┴─────┴─────┘   └─────┴─────┴─────┴─────┴─────┴─────╯
*/

// OS switch: disable previous toggled layers (OS overlays)
MACRO(win1, bindings = <&bt BT_SEL 0 &to DEF &tog WIN>;)
MACRO(mac2, bindings = <&bt BT_SEL 1 &to DEF &tog MAC>;)
MACRO(tbt3, bindings = <&bt BT_SEL 2 &to DEF>;)
MACRO(tbt4, bindings = <&bt BT_SEL 3 &to DEF>;)

LAYER(ADMIN, "Admin",
  &bootloader  &none    &none        &none  &none  &none    &bt BT_CLR    &none  &none  &none  &none  &bootloader
  &none        &win1    &mac2        &tbt3  &tbt4  &none    &none         &none  &none  &none  &none  &none
  &none        &to GAM  &to GAM_ARC  &none  &none  &none    &out OUT_TOG  &none  &none  &none  &none  &none
  ___  ___  ___  ___  ___  ___
)


/*
    ╭─────┬─────┬─────┬─────┬─────┬─────╮   ╭─────┬─────┬─────┬─────┬─────┬─────╮
    │ TAB │  T  │  A  │ Z ↑ │  E  │  R  │   │  7  │  8  │  9  │     │     │<def>│
    │ ESC │SHFT │ Q ← │ S ↓ │ D → │  F  │   │  4  │  5  │  6  │     │     │     │
    │ CTRL│  B  │  W  │  X  │  C  │  V  │   │  1  │  2  │  3  │     │     │     │
    ╰─────┴─────┴─────┼─────┼─────┼─────┤   ├─────┼─────┼─────┼─────┴─────┴─────╯
                      │ ALT │  G  │ SPC │   │ RET │ GUI │  0  │
                      ╰─────┴─────┴─────╯   ╰─────┴─────┴─────╯
*/
LAYER(GAMING, "Gaming",
  &kp TAB    &kp FR_T   &kp FR_A  &kp FR_Z  &kp FR_E  &kp FR_R    &kp KP_N7  &kp KP_N8  &kp KP_N9  &none  &none  &to DEF
  &kp ESC    &kp LSHFT  &kp FR_Q  &kp FR_S  &kp FR_D  &kp FR_F    &kp KP_N4  &kp KP_N5  &kp KP_N6  &none  &none  &none
  &kp LCTRL  &kp FR_B   &kp FR_W  &kp FR_X  &kp FR_C  &kp FR_V    &kp KP_N1  &kp KP_N2  &kp KP_N3  &none  &none  &none
                                  &kp LALT  &kp FR_G  &kp SPC     &kp RET    &kp LGUI   &kp KP_N0
)

/*
    ╭─────┬─────┬─────┬─────┬─────┬─────╮   ╭─────┬─────┬─────┬─────┬─────┬─────╮
    │ TAB │  T  │  A  │  ↑  │  O  │  R  │   │     │     │     │     │     │<def>│
    │ ESC │SHFT │  ←  │  ↓  │  →  │  F  │   │     │     │     │     │     │     │
    │ CTRL│  S  │  W  │  I  │  C  │  L  │   │     │     │     │     │     │SAVE │
    ╰─────┴─────┴─────┼─────┼─────┼─────┤   ├─────┼─────┼─────┼─────┴─────┴─────╯
                      │ ALT │HOME │ SPC │   │ RET │ GUI │     │
                      ╰─────┴─────┴─────╯   ╰─────┴─────┴─────╯
*/
LAYER(ARCANUM, "Arcanum",
  &kp TAB    &kp FR_T   &kp FR_A  &kp UP    &kp FR_O   &kp FR_R    &none    &none     &none  &none  &none  &to DEF
  &kp ESC    &kp LSHFT  &kp LEFT  &kp DOWN  &kp RIGHT  &kp FR_F    &none    &none     &none  &none  &none  &none
  &kp LCTRL  &kp FR_S   &kp FR_W  &kp FR_I  &kp FR_C   &kp FR_L    &none    &none     &none  &none  &none  &kp F7
                                  &kp LALT  &kp HOME   &kp SPC     &kp RET  &kp LGUI  &none
)
