/* This is free and unencumbered software released into the public domain. */

#pragma once

#if !__cplusplus && __STDC_VERSION__ < 201112L
#error "DRYlib for C requires a C11 compiler (CFLAGS='-std=c11')"
#endif

////////////////////////////////////////////////////////////////////////////////

#include "../base.h"
#include "../qty.h"

#ifdef __cplusplus
extern "C" {
#endif

////////////////////////////////////////////////////////////////////////////////

/**
 * Implements dry:text/ascii/string.
 */
dry_string_t* dry_text_ascii_make_string_of_char(dry_char_t character);

/**
 * Implements dry:text/ascii/string.
 */
dry_string_t* dry_text_ascii_make_string(const char* data);

/**
 * Implements dry:text/ascii/string.
 */
dry_string_t* dry_text_ascii_make_string_with_size(const char* data, dry_qty_byte_t size);

/*
 * Implements dry:text/ascii/blank?.
 */
dry_bool_t dry_text_ascii_is_blank_char(dry_char_t character);

/*
 * Implements dry:text/ascii/blank?.
 */
dry_bool_t dry_text_ascii_is_blank_string(const dry_string_t* string);

/*
 * Implements dry:text/ascii/blank?.
 */
#define dry_text_ascii_is_blank(x)                      \
  _Generic((x),                                         \
    int: dry_text_ascii_is_blank_char,                  \
    dry_char_t: dry_text_ascii_is_blank_char,           \
    const dry_string_t*: dry_text_ascii_is_blank_string \
  )(x)

/**
 * Implements dry:text/ascii/compare.
 */
dry_int_t dry_text_ascii_compare_char(dry_char_t character1, dry_char_t character2);

/**
 * Implements dry:text/ascii/compare.
 */
dry_int_t dry_text_ascii_compare_string(const dry_string_t* string1, const dry_string_t* string2);

/**
 * Implements dry:text/ascii/compare.
 */
#define dry_text_ascii_compare(x, y)                   \
  _Generic((x),                                        \
    int: dry_text_ascii_compare_char,                  \
    dry_char_t: dry_text_ascii_compare_char,           \
    const dry_string_t*: dry_text_ascii_compare_string \
  )(x, y)

/**
 * Implements dry:text/ascii/concat.
 */
dry_string_t* dry_text_ascii_concat(const dry_string_t* string1, const dry_string_t* string2);

/**
 * Implements dry:text/ascii/contains?.
 */
dry_bool_t dry_text_ascii_contains_char(const dry_string_t* string, dry_char_t character);

/**
 * Implements dry:text/ascii/contains?.
 */
dry_bool_t dry_text_ascii_contains_string(const dry_string_t* string, const dry_string_t* substring);

/**
 * Implements dry:text/ascii/contains?.
 */
dry_bool_t dry_text_ascii_contains_literal(const dry_string_t* string, const char* substring);

/**
 * Implements dry:text/ascii/contains?.
 */
#define dry_text_ascii_contains(x, y)                    \
  _Generic((y),                                          \
    int: dry_text_ascii_contains_char,                   \
    dry_char_t: dry_text_ascii_contains_char,            \
    const dry_string_t*: dry_text_ascii_contains_string, \
    default: dry_text_ascii_contains_literal             \
  )(x, y)

/**
 * Implements dry:text/ascii/empty?.
 */
dry_bool_t dry_text_ascii_is_empty(const dry_string_t* string);

/**
 * Implements dry:text/ascii/ends-with?.
 */
dry_bool_t dry_text_ascii_ends_with_char(const dry_string_t* string, dry_char_t suffix);

/**
 * Implements dry:text/ascii/ends-with?.
 */
dry_bool_t dry_text_ascii_ends_with_string(const dry_string_t* string, const dry_string_t* suffix);

/**
 * Implements dry:text/ascii/ends-with?.
 */
dry_bool_t dry_text_ascii_ends_with_literal(const dry_string_t* string, const char* suffix);

/**
 * Implements dry:text/ascii/ends-with?.
 */
#define dry_text_ascii_ends_with(x, y)                    \
  _Generic((y),                                             \
    int: dry_text_ascii_ends_with_char,                   \
    dry_char_t: dry_text_ascii_ends_with_char,            \
    const dry_string_t*: dry_text_ascii_ends_with_string, \
    default: dry_text_ascii_ends_with_literal             \
  )(x, y)

/**
 * Implements dry:text/ascii/equals?.
 */
dry_bool_t dry_text_ascii_equals(const dry_string_t* string1, const dry_string_t* string2);

/**
 * Implements dry:text/ascii/length.
 */
dry_qty_byte_t dry_text_ascii_length(const dry_string_t* string);

/**
 * Implements dry:text/ascii/nth.
 */
dry_optional_char_t dry_text_ascii_nth(const dry_string_t* string, dry_nat_t index);

/**
 * Implements dry:text/ascii/reverse.
 */
dry_string_t* dry_text_ascii_reverse(const dry_string_t* string);

/**
 * Implements dry:text/ascii/size.
 */
dry_qty_byte_t dry_text_ascii_size(const dry_string_t* string);

/**
 * Implements dry:text/ascii/starts-with?.
 */
dry_bool_t dry_text_ascii_starts_with_char(const dry_string_t* string, dry_char_t prefix);

/**
 * Implements dry:text/ascii/starts-with?.
 */
dry_bool_t dry_text_ascii_starts_with_string(const dry_string_t* string, const dry_string_t* prefix);

/**
 * Implements dry:text/ascii/starts-with?.
 */
dry_bool_t dry_text_ascii_starts_with_literal(const dry_string_t* string, const char* prefix);

/**
 * Implements dry:text/ascii/starts-with?.
 */
#define dry_text_ascii_starts_with(x, y)                    \
  _Generic((y),                                             \
    int: dry_text_ascii_starts_with_char,                   \
    dry_char_t: dry_text_ascii_starts_with_char,            \
    const dry_string_t*: dry_text_ascii_starts_with_string, \
    default: dry_text_ascii_starts_with_literal             \
  )(x, y)

/**
 * Implements dry:text/ascii/trim.
 */
dry_string_t* dry_text_ascii_trim(const dry_string_t* string);

/**
 * Implements dry:text/ascii/trim-left.
 */
dry_string_t* dry_text_ascii_trim_left(const dry_string_t* string);

/**
 * Implements dry:text/ascii/trim-right.
 */
dry_string_t* dry_text_ascii_trim_right(const dry_string_t* string);

/**
 * Implements dry:text/ascii/valid?.
 */
dry_bool_t dry_text_ascii_is_valid_char(dry_char_t character);

/**
 * Implements dry:text/ascii/valid?.
 */
dry_bool_t dry_text_ascii_is_valid_string(const dry_string_t* string);

/**
 * Implements dry:text/ascii/valid?.
 */
#define dry_text_ascii_is_valid(x)                      \
  _Generic((x),                                         \
    int: dry_text_ascii_is_valid_char,                  \
    dry_char_t: dry_text_ascii_is_valid_char,           \
    const dry_string_t*: dry_text_ascii_is_valid_string \
  )(x)

////////////////////////////////////////////////////////////////////////////////

#ifdef __cplusplus
} // extern "C"
#endif
