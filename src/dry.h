/* This is free and unencumbered software released into the public domain. */

#pragma once

#if !__cplusplus && __STDC_VERSION__ < 201112L
#error "DRYlib for C requires a C11 compiler (CFLAGS='-std=c11')"
#endif

////////////////////////////////////////////////////////////////////////////////

#include "dry/base.h"
#include "dry/meta/error.h"
#include "dry/meta/feature.h"
#include "dry/meta/memory.h"
#include "dry/meta/module.h"
#include "dry/meta/version.h"
#include "dry/text/ascii.h"
#include "dry/text/printf.h"
#include "dry/text/utf8.h"
