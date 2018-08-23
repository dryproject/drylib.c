/* This is free and unencumbered software released into the public domain. */

#pragma once

#if !__cplusplus && __STDC_VERSION__ < 201112L
#error "DRYlib for C requires a C11 compiler (CFLAGS='-std=c11')"
#endif

////////////////////////////////////////////////////////////////////////////////

#include "types.h"

////////////////////////////////////////////////////////////////////////////////

typedef struct dry_optional {
  dry_bool_t has_value;
  union {
    dry_bool_t bool_value;
    dry_char_t char_value;
  };
} dry_optional_t;

typedef struct dry_optional_bool {
  dry_bool_t has_value;
  dry_bool_t value;
} dry_optional_bool_t;

typedef struct dry_optional_char {
  dry_bool_t has_value;
  dry_char_t value;
} dry_optional_char_t;
