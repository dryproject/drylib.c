/* This is free and unencumbered software released into the public domain. */

#pragma once

#if !__cplusplus && __STDC_VERSION__ < 201112L
#error "DRYlib for C requires a C11 compiler (CFLAGS='-std=c11')"
#endif

////////////////////////////////////////////////////////////////////////////////

#include "real.h"

////////////////////////////////////////////////////////////////////////////////

typedef struct dry_complex dry_complex_t;

////////////////////////////////////////////////////////////////////////////////

typedef struct dry_complex {
  dry_real_t real;
  dry_real_t imaginary;
} dry_complex_t;
