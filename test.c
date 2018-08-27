/* This is free and unencumbered software released into the public domain. */

#include "drylib.h"

#include <assert.h> /* for assert() */
#include <stdlib.h> /* for EXIT_SUCCESS */

////////////////////////////////////////////////////////////////////////////////

void
test_text_ascii(void) {
  const dry_string_t* empty  = dry_text_ascii_make_string("");
  assert(dry_text_ascii_is_valid(empty) == true);
  assert(dry_text_ascii_is_empty(empty) == true);
  assert(dry_text_ascii_is_blank(empty) == false);

  const dry_string_t* foobar = dry_text_ascii_make_string("foobar");
  assert(dry_text_ascii_is_valid(foobar) == true);
  assert(dry_text_ascii_is_empty(foobar) == false);
  assert(dry_text_ascii_is_blank(foobar) == false);
  assert(dry_text_ascii_contains(foobar, 'f') == true);
  assert(dry_text_ascii_contains(foobar, 'r') == true);
  assert(dry_text_ascii_contains(foobar, 'x') == false);
  assert(dry_text_ascii_compare(foobar, foobar) == 0);
  assert(dry_text_ascii_size(foobar) == 6);
  assert(dry_text_ascii_length(foobar) == 6);
  assert(dry_text_ascii_equals(foobar, foobar) == true);
  assert(dry_text_ascii_nth(foobar, 0).has_value == true);
  assert(dry_text_ascii_nth(foobar, 0).value == 'f');
  assert(dry_text_ascii_nth(foobar, 5).has_value == true);
  assert(dry_text_ascii_nth(foobar, 5).value == 'r');
  assert(dry_text_ascii_nth(foobar, 6).has_value == false);
  //assert(dry_text_ascii_starts_with(foobar, "")); // TODO
  //assert(dry_text_ascii_ends_with(foobar, "")); // TODO
  //assert(dry_text_ascii_contains(foobar, "")); // TODO
}

////////////////////////////////////////////////////////////////////////////////

int
main(int argc, char* argv[]) {
  test_text_ascii();
  return EXIT_SUCCESS; // TODO
}
