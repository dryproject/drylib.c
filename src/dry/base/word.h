/* This is free and unencumbered software released into the public domain. */

#pragma once

#if !__cplusplus && __STDC_VERSION__ < 201112L
#error "DRYlib for C requires a C11 compiler (CFLAGS='-std=c11')"
#endif

////////////////////////////////////////////////////////////////////////////////

#include <stdint.h>  /* for __WORDSIZE, uint*_t */

////////////////////////////////////////////////////////////////////////////////

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
