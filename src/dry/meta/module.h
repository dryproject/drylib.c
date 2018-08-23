/* This is free and unencumbered software released into the public domain. */

#pragma once

#if !__cplusplus && __STDC_VERSION__ < 201112L
#error "DRYlib for C requires a C11 compiler (CFLAGS='-std=c11')"
#endif

////////////////////////////////////////////////////////////////////////////////

#include "../base.h"

#ifdef __cplusplus
extern "C" {
#endif

////////////////////////////////////////////////////////////////////////////////

/**
 * Implements dry:meta/module/exists?.
 */
bool dry_meta_module_exists(const char* name);

////////////////////////////////////////////////////////////////////////////////

#ifdef __cplusplus
} // extern "C"
#endif
