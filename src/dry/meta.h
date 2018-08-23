/* This is free and unencumbered software released into the public domain. */

#pragma once

#if !__cplusplus && __STDC_VERSION__ < 201112L
#error "DRYlib for C requires a C11 compiler (CFLAGS='-std=c11')"
#endif

////////////////////////////////////////////////////////////////////////////////

#include "meta/error.h"
#include "meta/feature.h"
#include "meta/memory.h"
#include "meta/module.h"
#include "meta/version.h"
