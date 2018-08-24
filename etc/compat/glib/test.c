/* This is free and unencumbered software released into the public domain. */

//#include <glib.h>
#include "glib.h"

#include <assert.h> /* for assert() */
#include <stdlib.h> /* for EXIT_SUCCESS */
#include <stdio.h>  /* for printf() */

////////////////////////////////////////////////////////////////////////////////

void
test_gstring(void) {
  GString* const s = g_string_new(NULL);
  g_string_assign(s, "initial");
  g_string_printf(s, "printf %s", "value");
  g_string_prepend(s, "prefix ");
  g_string_append(s, " suffix");
  printf("%s\n", g_string_free(s, 0));
}

////////////////////////////////////////////////////////////////////////////////

int
main(int argc, char* argv[]) {
  test_gstring();
  return EXIT_SUCCESS;
}
