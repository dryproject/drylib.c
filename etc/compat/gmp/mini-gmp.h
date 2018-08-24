/* This is free and unencumbered software released into the public domain. */

/**
 * Compatibility shim for the GNU Multiple Precision Arithmetic Library (GMP).
 *
 * @author Arto Bendiken
 * @see https://drylib.org/xref/gmp.html
 * @see https://gmplib.org/repo/gmp/file/default/mini-gmp/mini-gmp.h
 */

#pragma once

////////////////////////////////////////////////////////////////////////////////

#include <dry/base/integer.h>

#include <stdarg.h> /* for va_list */
#include <stddef.h> /* for size_t */

////////////////////////////////////////////////////////////////////////////////

typedef dry_integer_t mpz_t[1];

////////////////////////////////////////////////////////////////////////////////

#ifdef __cplusplus
extern "C" {
#endif

static inline void
mpz_init(mpz_t x) {
  x->value = 0;
}

static inline void
mpz_init_set_si(mpz_t rop, signed long int op) {
  rop->value = op;
}

static inline void
mpz_clear(mpz_t x) {
  x->value = 0;
}

static inline long int
mpz_get_si(const mpz_t op) {
  return (long int)op->value;
}

static inline void
mpz_mul(mpz_t rop, const mpz_t op1, const mpz_t op2) {
  rop->value = op1->value * op2->value;
}

#ifdef __cplusplus
} // extern "C"
#endif
