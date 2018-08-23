/* This is free and unencumbered software released into the public domain. */

#pragma once

#if !__cplusplus && __STDC_VERSION__ < 201112L
#error "DRYlib for C requires a C11 compiler (CFLAGS='-std=c11')"
#endif

////////////////////////////////////////////////////////////////////////////////

#include "base/types.h"

////////////////////////////////////////////////////////////////////////////////

typedef dry_nat_t dry_qty_bit_t;

typedef dry_nat_t dry_qty_byte_t;

typedef dry_float_t dry_qty_degree_t;

typedef dry_float_t dry_qty_percent_t;

typedef dry_float_t dry_qty_radian_t;
