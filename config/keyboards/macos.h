#pragma once

#include "../node_free.h"
#include "linux.h"

/*
┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐
│ @ │   │   │   │   │   │ § │   │ ! │   │   │   │ - │       │
├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤
│     │   │   │   │   │   │   │   │   │   │   │   │   │     │
├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐    │
│      │   │   │   │   │   │   │   │   │   │   │   │`☠️│    │
├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴────┤
│    │   │   │   │   │   │   │   │   │   │   │ = │          │
├────┼───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬────┤
│    │    │    │                        │    │    │    │    │
└────┴────┴────┴────────────────────────┴────┴────┴────┴────┘
*/
// Row 1
#define MAC_AT    GRAVE // @
#define MAC_SECT  N6    // §
#define MAC_EXCL  N8    // !
#define MAC_MINUS EQUAL // -
// Row 3
#define MAC_GRAVD NUHS  // ` (dead)
// Row 4
#define MAC_EQUAL SLASH // =

/* Shifted symbols
┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐
│ # │   │   │   │   │   │   │   │   │   │   │   │ _ │       │
├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤
│     │   │   │   │   │   │   │   │   │   │   │   │ * │     │
├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐    │
│      │   │   │   │   │   │   │   │   │   │   │   │ £ │    │
├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴────┤
│    │   │   │   │   │   │   │   │   │   │   │ + │          │
├────┼───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬────┤
│    │    │    │                        │    │    │    │    │
└────┴────┴────┴────────────────────────┴────┴────┴────┴────┘
*/
// Row 1
#define MAC_HASH LS(GRAVE) // #
#define MAC_UNDS LS(EQUAL) // _
// Row 2
#define MAC_ASTR LS(RBKT)  // *
// Row 3
#define MAC_PND  LS(NUHS)  // £
// Row 4
#define MAC_PLUS LS(SLASH) // +

/* AltGr symbols
┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐
│   │   │   │   │   │ { │   │ « │ ¡ │ Ç │   │ } │ — │       │
├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤
│     │   │   │   │   │   │   │   │   │   │   │   │ € │     │
├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐    │
│      │   │   │   │   │   │   │   │   │ | │ µ │   │   │    │
├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴────┤
│    │   │   │   │   │   │   │~☠️│   │ … │   │ ≠ │          │
├────┼───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬────┤
│    │    │    │                        │    │    │    │    │
└────┴────┴────┴────────────────────────┴────┴────┴────┴────┘
*/
// Row 1
#define MAC_LCBR    RA(N5)    // {
#define MAC_QML     RA(N7)    // «
#define MAC_IEM     RA(N8)    // ¡
#define MAC_CCED_UP RA(N9)    // Ç
#define MAC_RCBR    RA(MINUS) // }
#define MAC_EMDASH  RA(EQUAL) // —
// Row 2
#define MAC_EURO    RA(RBKT)  // €
// Row 3
#define MAC_PIPE    RA(L)     // |
#define MAC_MICR    RA(SEMI)  // µ
// Row 4
#define MAC_TILDD   RA(N)     // ~ (dead)
#define MAC_DDD     RA(COMMA) // …
#define MAC_FR_DIFF RA(SLASH) // ≠

/* AltGr+Shifted symbols
┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐
│   │´☠️│   │   │ ’ │ [ │   │ » │   │   │   │ ] │   │       │
├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤
│     │   │   │   │   │ ™ │   │   │   │   │   │   │   │     │
├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐    │
│      │   │   │   │   │   │   │   │   │   │   │   │   │    │
├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴────┤
│    │   │   │   │   │   │   │   │ ¿ │   │ \ │ ± │          │
├────┼───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬────┤
│    │    │    │                        │    │    │    │    │
└────┴────┴────┴────────────────────────┴────┴────┴────┴────┘
*/
// Row 1
#define MAC_ACUTE LS(RA(N1))    // ´ (dead)
#define MAC_APOS  LS(RA(N4))    // ’
#define MAC_LBRC  LS(RA(N5))    // [
#define MAC_QMR   LS(RA(N7))    // »
#define MAC_RBRC  LS(RA(MINUS)) // ]
// Row 2
#define MAC_TM    LS(RA(T))     // ™
// Row 4
#define MAC_IQM   LS(RA(M))     // ¿
#define MAC_BSLS  LS(RA(DOT))   // backslash
#define MAC_PLUMI LS(RA(SLASH)) // ±


/* Actions */
#define MAC_CUT   LG(FR_X)
#define MAC_COPY  LG(FR_C)
#define MAC_PASTE LG(FR_V)
#define MAC_UNDO  LG(FR_Z)
#define MAC_REDO  LS(LG(FR_Z))
#define MAC_SAVE  LG(FR_S)

/* Alternate Alphas & Symbols */
MACRO(mac_agrv_up, bindings = <&kp MAC_GRAVD &kp LS(FR_A)>;)
MACRO(mac_eacu_up, bindings = <&kp MAC_ACUTE &kp LS(FR_E)>;)
MACRO(mac_egrv_up, bindings = <&kp MAC_GRAVD &kp LS(FR_E)>;)
