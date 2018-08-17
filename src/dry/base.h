/* This is free and unencumbered software released into the public domain. */

#pragma once

#if __STDC_VERSION__ < 201112L
#error "DRYlib for C requires a C11 compiler (CFLAGS='-std=c11')"
#endif

////////////////////////////////////////////////////////////////////////////////

#include <stdbool.h> /* for _Bool */
#include <stdint.h>  /* for __WORDSIZE, *int_t */

////////////////////////////////////////////////////////////////////////////////

typedef _Bool dry_bool_t;

typedef uint32_t dry_char_t;

typedef struct dry_complex dry_complex_t;

typedef double dry_float_t;

typedef float dry_float32_t;

typedef double dry_float64_t;

typedef long dry_int_t;

typedef int8_t dry_int8_t;

typedef int16_t dry_int16_t;

typedef int32_t dry_int32_t;

typedef int64_t dry_int64_t;

typedef __int128 dry_int128_t; // TODO: protect with macro

typedef struct dry_integer dry_integer_t;

typedef dry_integer_t dry_natural_t;

typedef struct dry_rational dry_rational_t;

typedef struct dry_real dry_real_t;

#if __WORDSIZE == 32
typedef uint32_t dry_word_t;
#elif __WORDSIZE == 64
typedef uint64_t dry_word_t;
#else
#error "unsupported size for __WORDSIZE"
#endif

typedef uint8_t dry_word8_t;

typedef uint16_t dry_word16_t;

typedef uint32_t dry_word32_t;

typedef uint64_t dry_word64_t;

////////////////////////////////////////////////////////////////////////////////

typedef struct dry_integer {
  dry_int128_t value; // TODO
} dry_integer_t;

////////////////////////////////////////////////////////////////////////////////

typedef struct dry_rational {
  dry_integer_t numerator;
  dry_integer_t denominator; /* denominator != 0 */
} dry_rational_t;

////////////////////////////////////////////////////////////////////////////////

typedef struct dry_real {
  dry_float64_t value; // TODO
} dry_real_t;

////////////////////////////////////////////////////////////////////////////////

typedef struct dry_complex {
  dry_real_t real;
  dry_real_t imaginary;
} dry_complex_t;

////////////////////////////////////////////////////////////////////////////////
