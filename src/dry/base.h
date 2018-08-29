/* This is free and unencumbered software released into the public domain. */

#pragma once

#if !__cplusplus && __STDC_VERSION__ < 201112L
#error "DRYlib for C requires a C11 compiler (CFLAGS='-std=c11')"
#endif

////////////////////////////////////////////////////////////////////////////////

#include "base/bool.h"
#include "base/char.h"
#include "base/complex.h"
#include "base/error.h"
#include "base/float.h"
#include "base/function.h"
#include "base/integer.h"
#include "base/interval.h"
#include "base/list.h"
#include "base/map.h"
#include "base/matrix.h"
#include "base/natural.h"
#include "base/number.h"
#include "base/optional.h"
#include "base/predicate.h"
#include "base/quantity.h"
#include "base/rational.h"
#include "base/real.h"
#include "base/result.h"
#include "base/scalar.h"
#include "base/seq.h"
#include "base/set.h"
#include "base/string.h"
#include "base/symbol.h"
#include "base/tensor.h"
#include "base/tuple.h"
#include "base/unit.h"
#include "base/vector.h"
#include "base/word.h"
