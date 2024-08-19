#pragma once

#include "node_free.h"

// Alphas and OS overlays
#define DEF 0
#define WIN 1
#define MAC 2


// Symbols and Alternate Alphas
#define SYM 3
#define WIN_SYM 4
#define MAC_SYM 5

COND_LAYER(WIN SYM, WIN_SYM)
COND_LAYER(MAC SYM, MAC_SYM)


// Numbers and Function keys
#define NUM 6
#define WIN_NUM 7
#define MAC_NUM 8

COND_LAYER(WIN NUM, WIN_NUM)
COND_LAYER(MAC NUM, MAC_NUM)


// Navigation & Media
#define NAV 9
#define WIN_NAV 10
#define MAC_NAV 11

COND_LAYER(WIN NAV, WIN_NAV)
COND_LAYER(MAC NAV, MAC_NAV)


// Bluetooth & Keyboard
#define ADM 12

COND_LAYER(NAV SYM, ADM)


// Gaming
#define GAM 13
#define GAM_ARC 14
