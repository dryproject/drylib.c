/* This is free and unencumbered software released into the public domain. */

#if 1
#include "mini-gmp.h"
#include "mini-mpq.h"
#else
#include <gmp.h>
#endif

#include <assert.h> /* for assert() */
#include <stdlib.h> /* for EXIT_SUCCESS */
#include <stdio.h>  /* for printf() */

////////////////////////////////////////////////////////////////////////////////

static void
test_mpz(void) {
  mpz_t a, b, c;

  mpz_init_set_si(a, 6);
  assert(mpz_get_si(a) == 6);

  mpz_init_set_si(b, 7);
  assert(mpz_get_si(b) == 7);

  mpz_init(c);
  assert(mpz_get_si(c) == 0);

  mpz_mul(c, a, b);
  assert(mpz_get_si(c) == 42);

  mpz_clear(a);
  mpz_clear(b);
  mpz_clear(c);
}

////////////////////////////////////////////////////////////////////////////////

static void
test_mpq(void) {}

////////////////////////////////////////////////////////////////////////////////

int
main(int argc, char* argv[]) {
  test_mpz();
  test_mpq();
  return EXIT_SUCCESS;
}
