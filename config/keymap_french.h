/* Copyright 2015-2016 Jack Humbert
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#include <dt-bindings/zmk/hid_usage.h>
#include <dt-bindings/zmk/hid_usage_pages.h>
#include <dt-bindings/zmk/modifiers.h>
#include <dt-bindings/zmk/keys.h>

// clang-format off

/*
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐
 * │²/œ│ & │ é │ " │ ' │ ( │ - │ è │ _ │ ç │ à │ ) │ = │       │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤
 * │     │ A │ Z │ E │ R │ T │ Y │ U │ I │ O │ P │ ^ │ $ │     │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐    │
 * │      │ Q │ S │ D │ F │ G │ H │ J │ K │ L │ M │ ù │ * │    │
 * ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴────┤
 * │    │ < │ W │ X │ C │ V │ B │ N │ , │ ; │ : │ ! │          │
 * ├────┼───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬────┤
 * │    │    │    │                        │    │    │    │    │
 * └────┴────┴────┴────────────────────────┴────┴────┴────┴────┘
 */
// Row 1
#define FR_OE    GRAVE // ² win / œ lnx
#define FR_AMPR  N1    // &
#define FR_EACU  N2    // é
#define FR_DQT   N3    // "
#define FR_SQT   N4    // '
#define FR_LPRN  N5    // (
#define FR_MINUS N6    // -
#define FR_EGRV  N7    // è
#define FR_UNDS  N8    // _
#define FR_CCED  N9    // ç
#define FR_AGRV  N0    // à
#define FR_RPRN  MINUS // )
#define FR_EQUAL EQUAL // =
// Row 2
#define FR_A     Q     // A
#define FR_Z     W     // Z
#define FR_E     E     // E
#define FR_R     R     // R
#define FR_T     T     // T
#define FR_Y     Y     // Y
#define FR_U     U     // U
#define FR_I     I     // I
#define FR_O     O     // O
#define FR_P     P     // P
#define FR_CARET LBKT  // ^ (dead)
#define FR_DLR   RBKT  // $
// Row 3
#define FR_Q     A     // Q
#define FR_S     S     // S
#define FR_D     D     // D
#define FR_F     F     // F
#define FR_G     G     // G
#define FR_H     H     // H
#define FR_J     J     // J
#define FR_K     K     // K
#define FR_L     L     // L
#define FR_M     SEMI  // M
#define FR_UGRV  SQT   // ù
#define FR_ASTR  NUHS  // *
// Row 4
#define FR_LT    NUBS  // <
#define FR_W     Z     // W
#define FR_X     X     // X
#define FR_C     C     // C
#define FR_V     V     // V
#define FR_B     B     // B
#define FR_N     N     // N
#define FR_COMMA M     // ,
#define FR_SEMI  COMMA // ;
#define FR_COLON DOT   // :
#define FR_EXCL  SLASH // !

/* Shifted symbols
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐
 * │ /Œ│ 1 │ 2 │ 3 │ 4 │ 5 │ 6 │ 7 │ 8 │ 9 │ 0 │ ° │ + │       │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤
 * │     │   │   │   │   │   │   │   │   │   │   │ ¨ │ £ │     │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐    │
 * │      │   │   │   │   │   │   │   │   │   │   │ % │ µ │    │
 * ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴────┤
 * │    │ > │   │   │   │   │   │   │ ? │ . │ / │ § │          │
 * ├────┼───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬────┤
 * │    │    │    │                        │    │    │    │    │
 * └────┴────┴────┴────────────────────────┴────┴────┴────┴────┘
 */
// Row 1
#define FR_OE_UP LS(FR_OE)    // Œ
#define FR_1     LS(FR_AMPR)  // 1
#define FR_2     LS(FR_EACU)  // 2
#define FR_3     LS(FR_DQT)   // 3
#define FR_4     LS(FR_SQT)   // 4
#define FR_5     LS(FR_LPRN)  // 5
#define FR_6     LS(FR_MINUS) // 6
#define FR_7     LS(FR_EGRV)  // 7
#define FR_8     LS(FR_UNDS)  // 8
#define FR_9     LS(FR_CCED)  // 9
#define FR_0     LS(FR_AGRV)  // 0
#define FR_DEG   LS(FR_RPRN)  // °
#define FR_PLUS  LS(FR_EQUAL) // +
// Row 2
#define FR_DIAE  LS(FR_CARET) // ¨ (dead)
#define FR_PND   LS(FR_DLR)   // £
// Row 3
#define FR_PRCNT LS(FR_UGRV)  // %
#define FR_MICR  LS(FR_ASTR)  // µ
// Row 4
#define FR_GT    LS(FR_LT)    // >
#define FR_QMARK LS(FR_COMMA) // ?
#define FR_DOT   LS(FR_SEMI)  // .
#define FR_SLSH  LS(FR_COLON) // /
#define FR_SECT  LS(FR_EXCL)  // §

/* AltGr symbols
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐
 * │   │   │ ~ │ # │ { │ [ │ | │ ` │ \ │   │ @ │ ] │ } │       │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤
 * │     │   │   │ € │   │   │   │   │   │   │   │   │ ¤ │     │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐    │
 * │      │   │   │   │   │   │   │   │   │   │   │   │   │    │
 * ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴────┤
 * │    │   │ /«│ /»│   │   │   │   │   │   │   │   │          │
 * ├────┼───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬────┤
 * │    │    │    │                        │    │    │    │    │
 * └────┴────┴────┴────────────────────────┴────┴────┴────┴────┘
 */
// Row 1
#define FR_TILD  RA(FR_EACU)  // ~ (dead)
#define FR_HASH  RA(FR_DQT)   // #
#define FR_LCBR  RA(FR_SQT)   // {
#define FR_LBRC  RA(FR_LPRN)  // [
#define FR_PIPE  RA(FR_MINUS) // |
#define FR_GRAVE RA(FR_EGRV)  // ` (dead)
#define FR_BSLS  RA(FR_UNDS)  // (backslash)
#define FR_AT    RA(FR_AGRV)  // @
#define FR_RBRC  RA(FR_RPRN)  // ]
#define FR_RCBR  RA(FR_EQUAL) // }
// Row 2
#define FR_EURO  RA(FR_E)     // €
#define FR_CURR  RA(FR_DLR)   // ¤
// Row 3
// Row 4
#define FR_QML   RA(FR_W)    // « lnx
#define FR_QMR   RA(FR_X)    // » lnx
