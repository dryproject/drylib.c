/* This is free and unencumbered software released into the public domain. */

#pragma once

#if !__cplusplus && __STDC_VERSION__ < 201112L
#error "DRYlib for C requires a C11 compiler (CFLAGS='-std=c11')"
#endif

////////////////////////////////////////////////////////////////////////////////

#include "float.h"

////////////////////////////////////////////////////////////////////////////////

typedef struct dry_real dry_real_t;

////////////////////////////////////////////////////////////////////////////////

typedef struct dry_real {
  dry_float64_t value; // TODO
} dry_real_t;