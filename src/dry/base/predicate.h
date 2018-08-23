/* This is free and unencumbered software released into the public domain. */

#pragma once

#if !__cplusplus && __STDC_VERSION__ < 201112L
#error "DRYlib for C requires a C11 compiler (CFLAGS='-std=c11')"
#endif

////////////////////////////////////////////////////////////////////////////////

#include "char.h"
#include "string.h"

////////////////////////////////////////////////////////////////////////////////

typedef dry_bool_t (*dry_predicate_t)(const void*);

typedef dry_bool_t (*dry_predicate_char_t)(dry_char_t);

typedef dry_bool_t (*dry_predicate_string_t)(const dry_string_t*);
