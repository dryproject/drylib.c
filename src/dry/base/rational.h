/* This is free and unencumbered software released into the public domain. */

#pragma once

#if !__cplusplus && __STDC_VERSION__ < 201112L
#error "DRYlib for C requires a C11 compiler (CFLAGS='-std=c11')"
#endif

////////////////////////////////////////////////////////////////////////////////

#include "integer.h"

////////////////////////////////////////////////////////////////////////////////

typedef struct dry_rational dry_rational_t;

////////////////////////////////////////////////////////////////////////////////

typedef struct dry_rational {
  dry_integer_t numerator;
  dry_integer_t denominator; /* denominator != 0 */
} dry_rational_t;
