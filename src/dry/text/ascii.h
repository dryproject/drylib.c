/* This is free and unencumbered software released into the public domain. */

#pragma once

#if !__cplusplus && __STDC_VERSION__ < 201112L
#error "DRYlib for C requires a C11 compiler (CFLAGS='-std=c11')"
#endif

////////////////////////////////////////////////////////////////////////////////

#include "../base.h"

#ifdef __cplusplus
extern "C" {
#endif

////////////////////////////////////////////////////////////////////////////////

/**
 * Implements dry:text/ascii/string.
 */
dry_string_t* dry_text_ascii_make_string(const char* data);

/*
 * Implements dry:text/ascii/blank?.
 */
void dry_text_ascii_is_blank();

/**
 * Implements dry:text/ascii/compare.
 */
void dry_text_ascii_compare();

/**
 * Implements dry:text/ascii/concat.
 */
void dry_text_ascii_concat();

/**
 * Implements dry:text/ascii/contains?.
 */
void dry_text_ascii_contains_char();

/**
 * Implements dry:text/ascii/contains?.
 */
void dry_text_ascii_contains();

/**
 * Implements dry:text/ascii/empty?.
 */
void dry_text_ascii_is_empty();

/**
 * Implements dry:text/ascii/ends-with?.
 */
void dry_text_ascii_ends_with();

/**
 * Implements dry:text/ascii/equals?.
 */
void dry_text_ascii_equals();

/**
 * Implements dry:text/ascii/length.
 */
void dry_text_ascii_length();

/**
 * Implements dry:text/ascii/nth.
 */
void dry_text_ascii_nth();

/**
 * Implements dry:text/ascii/reverse.
 */
void dry_text_ascii_reverse();

/**
 * Implements dry:text/ascii/size.
 */
void dry_text_ascii_size();

/**
 * Implements dry:text/ascii/starts-with?.
 */
void dry_text_ascii_starts_with();

/**
 * Implements dry:text/ascii/trim.
 */
void dry_text_ascii_trim();

/**
 * Implements dry:text/ascii/trim-left.
 */
void dry_text_ascii_trim_left();

/**
 * Implements dry:text/ascii/trim-right.
 */
void dry_text_ascii_trim_right();

/**
 * Implements dry:text/ascii/valid?.
 */
void dry_text_ascii_is_valid_char();

/**
 * Implements dry:text/ascii/valid?.
 */
void dry_text_ascii_is_valid();

////////////////////////////////////////////////////////////////////////////////

#ifdef __cplusplus
} // extern "C"
#endif
