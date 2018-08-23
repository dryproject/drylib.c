/* This is free and unencumbered software released into the public domain. */

#pragma once

#if !__cplusplus && __STDC_VERSION__ < 201112L
#error "DRYlib for C requires a C11 compiler (CFLAGS='-std=c11')"
#endif

////////////////////////////////////////////////////////////////////////////////

#include <stdint.h>  /* for __WORDSIZE, int*_t */

////////////////////////////////////////////////////////////////////////////////

typedef long dry_int_t;

typedef int8_t dry_int8_t;

typedef int16_t dry_int16_t;

typedef int32_t dry_int32_t;

typedef int64_t dry_int64_t;

#if 1
typedef __int128 dry_int128_t; // TODO: protect with macro
#endif

typedef struct dry_integer dry_integer_t;

////////////////////////////////////////////////////////////////////////////////

typedef struct dry_integer {
  dry_int128_t value; // TODO
} dry_integer_t;
