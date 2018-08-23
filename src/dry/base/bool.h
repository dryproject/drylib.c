/* This is free and unencumbered software released into the public domain. */

#pragma once

#if !__cplusplus && __STDC_VERSION__ < 201112L
#error "DRYlib for C requires a C11 compiler (CFLAGS='-std=c11')"
#endif

////////////////////////////////////////////////////////////////////////////////

#include <stdbool.h> /* for _Bool */

////////////////////////////////////////////////////////////////////////////////

#ifndef __cplusplus
typedef _Bool dry_bool_t;
#else
typedef bool dry_bool_t;
#endif
