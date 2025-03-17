/*
 * Copyright (c) 2020 The ZMK Contributors
 *
 * SPDX-License-Identifier: MIT
 */

#include <behaviors.dtsi>
#include <dt-bindings/zmk/keys.h>
#include <dt-bindings/zmk/bt.h>

/*
 * Here is a translation for all the French keys (AZERTY layout)
 */

#define FR_SUP2 GRAVE        // ²
#define FR_AMPR N1           // &
#define FR_EACU N2           // é
#define FR_DQT N3            // "
#define FR_SQT N4            // '
#define FR_LPAR N5           // (
#define FR_MINUS N6          // -
#define FR_EGRV N7           // è
#define FR_UNDS N8           // _
#define FR_CCED N9           // ç
#define FR_AGRV N0           // à
#define FR_RPAR MINUS        // )
#define FR_EQUAL EQUAL       // =
#define FR_A Q               // A
#define FR_Z W               // Z
#define FR_E E               // E
#define FR_R R               // R
#define FR_T T               // T
#define FR_Y Y               // Y
#define FR_U U               // U
#define FR_I I               // I
#define FR_O O               // O
#define FR_P P               // P
#define FR_CIRC LBKT         // ^
#define FR_DLR RBKT          // $
#define FR_Q A               // Q
#define FR_S S               // S
#define FR_D D               // D
#define FR_F F               // F
#define FR_G G               // G
#define FR_H H               // H
#define FR_J J               // J
#define FR_K K               // K
#define FR_L L               // L
#define FR_M SEMI            // M
#define FR_UGRV SQT          // ù
#define FR_AST NUHS          // *
#define FR_LT NUBS           // <
#define FR_W Z               // W
#define FR_X X               // X
#define FR_C C               // C
#define FR_V V               // V
#define FR_B B               // B
#define FR_N N               // N
#define FR_COMMA M           // .
#define FR_SEMI COMMA        // ;
#define FR_COLON DOT         // :
#define FR_EXCL FSLH         // !
#define FR_1 LS(FR_AMPR)     // 1
#define FR_2 LS(FR_EACU)     // 2
#define FR_3 LS(FR_DQT)      // 3
#define FR_4 LS(FR_SQT)      // 4
#define FR_5 LS(FR_LPAR)     // 5
#define FR_6 LS(FR_MINUS)    // 6
#define FR_7 LS(FR_EGRV)     // 7
#define FR_8 LS(FR_UNDS)     // 8
#define FR_9 LS(FR_CCED)     // 9
#define FR_0 LS(FR_AGRV)     // 0
#define FR_DEG LS(FR_RPAR)   // °
#define FR_PLUS LS(FR_EQUAL) // +
#define FR_DIAE LS(FR_CIRC)  // ¨
#define FR_PND  LS(FR_DLR)   // £
#define FR_PERC LS(FR_UGRV)  // %
#define FR_MICR LS(FR_AST)   // µ
#define FR_GT LS(FR_LT)      // >
#define FR_QUES LS(FR_COMMA) // ?
#define FR_DOT  LS(FR_SEMI)  // .
#define FR_SLSH LS(FR_COLON) // /
#define FR_SECT LS(FR_EXCL)  // §
#define FR_TILD RA(FR_EACU)  // ~
#define FR_HASH RA(FR_DQT)   // #
#define FR_LBRC RA(FR_SQT)   // {
#define FR_LBRK RA(FR_LPAR)  // [
#define FR_PIPE RA(FR_MINUS) // |
#define FR_GRV  RA(FR_EGRV)  // `
#define FR_BSLS RA(FR_UNDS)  // (backslash)
#define FR_AT   RA(FR_AGRV)  // @
#define FR_RBRK RA(FR_RPAR)  // ]
#define FR_RBRC RA(FR_EQUAL) // }
#define FR_EURO RA(E)        // €
#define FR_CURR RA(FR_DLR)   // ¤

/ {
          conditional_layers {
              compatible = "zmk,conditional-layers";
              tri_layer {
                  if-layers = <1 2>;
                  then-layer = <3>;
              };
          };
          keymap {
                compatible = "zmk,keymap";

                default_layer {
// -----------------------------------------------------------------------------------------
// | ESC |  A  |  Z  |  E   |  R  |  T   |   |  Y  |  U  |  I  |  O  |  P  | BKSP |
// | TAB |  Q  |  S  |  D   |  F  |  G   |   |  H  |  J  |  K  |  L  |  M  | ENT  |
// | CTRL|  W  |  X  |  C   |  V  |  B   |   |  N  |  ,  |  ;  |  :  |  !  |  $   |
//                   | GUI  | LWR | SHFT |   | SPC | RSE | ALT |
                        bindings = <
   &kp ESC   &kp FR_A &kp FR_Z &kp FR_E  &kp FR_R  &kp FR_T    &kp FR_Y    &kp FR_U     &kp FR_I    &kp FR_O     &kp FR_P    &kp BKSP
   &kp TAB   &kp FR_Q &kp FR_S &kp FR_D  &kp FR_F  &kp FR_G    &kp FR_H    &kp FR_J     &kp FR_K    &kp FR_L     &kp FR_M    &kp RET
   &kp LCTRL &kp FR_W &kp FR_X &kp FR_C  &kp FR_V  &kp FR_B    &kp FR_N    &kp FR_COMMA &kp FR_SEMI &kp FR_COLON &kp FR_EXCL &kp FR_DLR
                               &kp LGUI  &mo 1     &kp LSHFT    &kp SPACE   &mo 2        &kp LALT
                        >;
                };
                lower_layer {
// -----------------------------------------------------------------------------------------
// | ESC  |  & |  é |  " |  ' |  (  |   |  -  |  è  |  _  |  ç  |  à  | BKSP |
// | TAB  | F1 | F2 | F3 | F4 | F5  |   | LFT | DWN | UP  | RGT |  %  |  ù   |
// | CTRL | F6 | F7 | F8 | F9 | F10 |   | F11 | F12 |     |     |     | DEL  |
//                     | GUI |     | SHFT |   | SPC | RSE | ALT |
                        bindings = <
   &kp ESC   &kp FR_AMPR &kp FR_EACU &kp FR_DQT &kp FR_SQT &kp FR_LPAR &kp FR_MINUS &kp FR_EGRV &kp FR_UNDS &kp FR_CCED &kp FR_AGRV &kp BKSP
   &kp TAB   &kp F1      &kp F2      &kp F3     &kp F4     &kp F5      &kp LEFT     &kp DOWN    &kp UP      &kp RIGHT   &kp FR_PERC &kp FR_UGRV
   &kp LCTRL &kp F6      &kp F7      &kp F8     &kp F9     &kp F10     &kp F11      &kp F12     &trans      &trans      &trans      &kp DEL
                                     &kp LGUI   &trans     &kp LSHFT   &kp SPACE    &mo 2       &kp LALT
                        >;
                };

                raise_layer {
// -----------------------------------------------------------------------------------------
// | ESC  |  ~  |  #  |  {  |  [  | "|"  |   |  \  | ^ |  @  | ] | } | BKSP |
// | TAB  |  1  |  2  |  3  |  4  |  5   |   |  6  | 7 |  8  | 9 | 0 |  *   |
// | CTRL | VMU | VDO | VUP |  <  |  >   |   |  )  | + |  =  |   |   |      |
//                    | GUI | LWR | SHFT |   | SPC |   | ALT |
                        bindings = <
   &kp ESC   &kp FR_TILD &kp FR_HASH  &kp FR_LBRC  &kp FR_LBRK &kp FR_PIPE &kp FR_BSLS &kp FR_CIRC &kp FR_AT    &kp FR_RBRK &kp FR_RBRC &kp BKSP
   &kp TAB   &kp FR_1    &kp FR_2     &kp FR_3     &kp FR_4    &kp FR_5    &kp FR_6    &kp FR_7    &kp FR_8     &kp FR_9    &kp FR_0    &kp FR_AST
   &kp LCTRL &kp C_MUTE  &kp C_VOL_DN &kp C_VOL_UP &kp FR_LT   &kp FR_GT   &kp FR_RPAR &kp KP_PLUS &kp FR_EQUAL &trans      &trans      &trans
                                      &kp LGUI     &mo 1       &kp LSHFT   &kp SPACE   &trans      &kp LALT
                        >;
                };

                adjust_layer {
// -----------------------------------------------------------------------------------------
// |  ESC  |     |     |     |     |RESET |   |RESET|     |     |     |     | BKSP |
// |  TAB  |PL/PA| PRE | NEX | BDO | BUP  |   |     |     |     |     |     |      |
// | BTCLR | BT1 | BT2 | BT3 | BT4 | BT5  |   |     |     |     |     |     |      |
//                     | GUI |     | SHFT |   | SPC |     | ALT |
                        bindings = <
   &kp ESC    &trans       &trans       &trans       &trans       &bootloader   &bootloader &trans &trans &trans &trans &kp BKSP
   &kp TAB    &kp C_PP     &kp C_NEXT   &kp C_PREV   &kp C_BRI_DN &kp C_BRI_UP  &trans    &trans &trans &trans &trans &trans
   &bt BT_CLR &bt BT_SEL 0 &bt BT_SEL 1 &bt BT_SEL 2 &bt BT_SEL 3 &bt BT_SEL 4  &trans    &trans &trans &trans &trans &trans 
                                          &kp LGUI     &trans       &kp LSHFT     &kp SPACE &trans &kp LALT
                          >;
                  };
        };
};
