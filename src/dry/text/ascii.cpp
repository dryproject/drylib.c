/* This is free and unencumbered software released into the public domain. */

#include "ascii.h"
#include "../meta/error.hpp"

#include <dry/text/ascii.hpp>

#include <cassert> /* for assert() */
#include <cstdlib> /* for std::malloc() */

////////////////////////////////////////////////////////////////////////////////

struct dry_string {
  dry::string value;
};

////////////////////////////////////////////////////////////////////////////////

extern "C" void dry_text_ascii() {}

////////////////////////////////////////////////////////////////////////////////

static inline dry_string_t*
alloc(void) {
  return reinterpret_cast<dry_string_t*>(std::malloc(sizeof(dry_string_t)));
}

static inline dry_string_t*
wrap_copy(const dry::string& value) {
  dry_string_t* const result = alloc();
  require_nonnull_allocation(result);
  result->value = value;
  return result;
}

static inline const dry::string&
unwrap(const dry_string_t* string) {
  assert(string != nullptr);
  return string->value;
}

////////////////////////////////////////////////////////////////////////////////

dry_string_t*
dry_text_ascii_make_string_of_char(const dry_char_t character) {
  return wrap_copy(dry::text::ascii::make_string(character));
}

dry_string_t*
dry_text_ascii_make_string(const char* data) {
  require_nonnull_argument(data);
  return wrap_copy(dry::text::ascii::make_string(data));
}

dry_string_t*
dry_text_ascii_make_string_with_size(const char* data,
                                     const dry_qty_byte_t size) {
  require_nonnull_argument(data);
  return wrap_copy(dry::text::ascii::make_string(data, size));
}

dry_bool_t
dry_text_ascii_is_blank_char(const dry_char_t character) {
  return dry::text::ascii::is_blank(character);
}

dry_bool_t
dry_text_ascii_is_blank_string(const dry_string_t* const string) {
  require_nonnull_argument(string);
  return dry::text::ascii::is_blank(unwrap(string));
}

dry_int_t
dry_text_ascii_compare_char(const dry_char_t character1,
                            const dry_char_t character2) {
  return dry::text::ascii::compare(character1, character2);
}

dry_int_t
dry_text_ascii_compare(const dry_string_t* const string1,
                       const dry_string_t* const string2) {
  require_nonnull_argument(string1);
  require_nonnull_argument(string2);
  return dry::text::ascii::compare(unwrap(string1), unwrap(string2));
}

dry_string_t*
dry_text_ascii_concat(const dry_string_t* const string1,
                      const dry_string_t* const string2) {
  require_nonnull_argument(string1);
  require_nonnull_argument(string2);
  return wrap_copy(dry::text::ascii::concat(unwrap(string1), unwrap(string2)));
}

dry_bool_t
dry_text_ascii_contains_char(const dry_string_t* const string,
                             const dry_char_t character) {
  require_nonnull_argument(string);
  return dry::text::ascii::contains(unwrap(string), character);
}

dry_bool_t
dry_text_ascii_contains_string(const dry_string_t* const string,
                               const dry_string_t* const substring) {
  require_nonnull_argument(string);
  require_nonnull_argument(substring);
  return dry::text::ascii::contains(unwrap(string), unwrap(substring));
}

dry_bool_t
dry_text_ascii_contains(const dry_string_t* const string,
                        const char* const substring) {
  require_nonnull_argument(string);
  require_nonnull_argument(substring);
  return dry::text::ascii::contains(unwrap(string), substring);
}

dry_bool_t
dry_text_ascii_is_empty(const dry_string_t* const string) {
  require_nonnull_argument(string);
  return dry::text::ascii::empty(unwrap(string));
}

dry_bool_t
dry_text_ascii_ends_with_char(const dry_string_t* const string,
                              const dry_char_t suffix) {
  require_nonnull_argument(string);
  return dry::text::ascii::ends_with(unwrap(string), suffix);
}

dry_bool_t
dry_text_ascii_ends_with_string(const dry_string_t* const string,
                                const dry_string_t* const suffix) {
  require_nonnull_argument(string);
  require_nonnull_argument(suffix);
  return dry::text::ascii::ends_with(unwrap(string), unwrap(suffix));
}

dry_bool_t
dry_text_ascii_ends_with(const dry_string_t* const string,
                         const char* const suffix) {
  require_nonnull_argument(string);
  require_nonnull_argument(suffix);
  return dry::text::ascii::ends_with(unwrap(string), suffix);
}

dry_bool_t
dry_text_ascii_equals(const dry_string_t* const string1,
                      const dry_string_t* const string2) {
  require_nonnull_argument(string1);
  require_nonnull_argument(string2);
  return dry::text::ascii::equals(unwrap(string1), unwrap(string2));
}

dry_qty_byte_t
dry_text_ascii_length(const dry_string_t* const string) {
  require_nonnull_argument(string);
  return dry::text::ascii::length(unwrap(string));
}

dry_optional_char_t
dry_text_ascii_nth(const dry_string_t* const string,
                   const dry_nat_t index) {
  require_nonnull_argument(string);
  const auto unwrapped = dry::text::ascii::nth(unwrap(string), index);
  dry_optional_char_t result;
  result.has_value = unwrapped.has_value();
  result.value = unwrapped.value_or(0);
  return result;
}

dry_string_t*
dry_text_ascii_reverse(const dry_string_t* const string) {
  require_nonnull_argument(string);
  return wrap_copy(dry::text::ascii::reverse(unwrap(string)));
}

dry_qty_byte_t
dry_text_ascii_size(const dry_string_t* const string) {
  require_nonnull_argument(string);
  return dry::text::ascii::size(unwrap(string));
}

dry_bool_t
dry_text_ascii_starts_with_char(const dry_string_t* const string,
                                const dry_char_t prefix) {
  require_nonnull_argument(string);
  return dry::text::ascii::starts_with(unwrap(string), prefix);
}

dry_bool_t
dry_text_ascii_starts_with_string(const dry_string_t* const string,
                                  const dry_string_t* const prefix) {
  require_nonnull_argument(string);
  require_nonnull_argument(prefix);
  return dry::text::ascii::starts_with(unwrap(string), unwrap(prefix));
}

dry_bool_t
dry_text_ascii_starts_with(const dry_string_t* const string,
                           const char* const prefix) {
  require_nonnull_argument(string);
  require_nonnull_argument(prefix);
  return dry::text::ascii::starts_with(unwrap(string), prefix);
}

dry_string_t*
dry_text_ascii_trim(const dry_string_t* const string) {
  require_nonnull_argument(string);
  return wrap_copy(dry::text::ascii::trim(unwrap(string)));
}

dry_string_t*
dry_text_ascii_trim_left(const dry_string_t* const string) {
  require_nonnull_argument(string);
  return wrap_copy(dry::text::ascii::trim_left(unwrap(string)));
}

dry_string_t*
dry_text_ascii_trim_right(const dry_string_t* const string) {
  require_nonnull_argument(string);
  return wrap_copy(dry::text::ascii::trim_right(unwrap(string)));
}

dry_bool_t
dry_text_ascii_is_valid_char(const dry_char_t character) {
  return dry::text::ascii::is_valid(character);
}

dry_bool_t
dry_text_ascii_is_valid(const dry_string_t* const string) {
  require_nonnull_argument(string);
  return dry::text::ascii::is_valid(unwrap(string));
}
