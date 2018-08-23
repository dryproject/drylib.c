/* This is free and unencumbered software released into the public domain. */

#pragma once

#if !__cplusplus && __STDC_VERSION__ < 201112L
#error "DRYlib for C requires a C11 compiler (CFLAGS='-std=c11')"
#endif

////////////////////////////////////////////////////////////////////////////////

#include "base/bool.h"
#include "base/char.h"
#include "base/complex.h"
#include "base/float.h"
#include "base/integer.h"
#include "base/natural.h"
#include "base/optional.h"
#include "base/predicate.h"
#include "base/rational.h"
#include "base/real.h"
#include "base/string.h"
#include "base/word.h"
