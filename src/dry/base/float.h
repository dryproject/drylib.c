/* This is free and unencumbered software released into the public domain. */

#pragma once

#if !__cplusplus && __STDC_VERSION__ < 201112L
#error "DRYlib for C requires a C11 compiler (CFLAGS='-std=c11')"
#endif

////////////////////////////////////////////////////////////////////////////////

typedef double dry_float_t;

typedef float dry_float16_t; // TODO: _Float16

typedef float dry_float32_t;

typedef double dry_float64_t;

#ifdef __FLOAT128__
typedef __float128 dry_float128_t;
#endif
