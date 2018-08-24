/* This is free and unencumbered software released into the public domain. */

/**
 * Compatibility shim for the GNU Multiple Precision Arithmetic Library (GMP).
 *
 * @author Arto Bendiken
 * @see https://drylib.org/xref/gmp.html
 * @see https://gmplib.org/repo/gmp/file/default/mini-gmp/mini-mpq.h
 */

#pragma once

////////////////////////////////////////////////////////////////////////////////

#include "mini-gmp.h"

#include <dry/base/rational.h>

////////////////////////////////////////////////////////////////////////////////

typedef dry_rational_t mpq_t[1];

////////////////////////////////////////////////////////////////////////////////

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} // extern "C"
#endif
