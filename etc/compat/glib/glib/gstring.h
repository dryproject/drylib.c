/* This is free and unencumbered software released into the public domain. */

/**
 * Compatibility interface for GLib's string buffer functions.
 *
 * @author Arto Bendiken
 * @see https://developer.gnome.org/glib/stable/glib-Strings.html
 */

#pragma once

////////////////////////////////////////////////////////////////////////////////

#include "gtypes.h"
#include "gunicode.h"
#include "gbytes.h"
#include "gutils.h"

#include <dry/base/string.h>
#include <dry/text/ascii.h>

#include <stdarg.h> /* for va_list */

////////////////////////////////////////////////////////////////////////////////

typedef dry_string_t GString;

////////////////////////////////////////////////////////////////////////////////

static inline GString*
g_string_new(const gchar* init) {
  return NULL; // TODO
}

static inline GString*
g_string_new_len(const gchar* init, gssize len) {
  return NULL; // TODO
}

static inline GString*
g_string_sized_new(gsize dfl_size) {
  return NULL; // TODO
}

static inline gchar*
g_string_free(GString* string, gboolean free_segment) {
  return NULL; // TODO
}

#if 0
/**
 * @since 2.34
 */
static inline GBytes*
g_string_free_to_bytes(GString* string) {
  return NULL; // TODO
}
#endif

static inline gboolean
g_string_equal(const GString* v, const GString* v2) {
  return false; // TODO
}

static inline guint
g_string_hash(const GString* str) {
  return 0; // TODO
}

static inline GString*
g_string_assign(GString* string, const gchar* rval) {
  return NULL; // TODO
}

static inline GString*
g_string_truncate(GString* string, gsize len) {
  return NULL; // TODO
}

static inline GString*
g_string_set_size(GString* string, gsize len) {
  return NULL; // TODO
}

static inline GString*
g_string_insert_len(GString* string, gssize pos, const gchar* val, gssize len) {
  return NULL; // TODO
}

static inline GString*
g_string_append(GString* string, const gchar* val) {
  return NULL; // TODO
}

static inline GString*
g_string_append_len(GString* string, const gchar* val, gssize len) {
  return NULL; // TODO
}

static inline GString*
g_string_append_c(GString* string, gchar c) {
  return NULL; // TODO
}

static inline GString*
g_string_append_unichar(GString* string, gunichar wc) {
  return NULL; // TODO
}

static inline GString*
g_string_prepend(GString* string, const gchar* val) {
  return NULL; // TODO
}

static inline GString*
g_string_prepend_c(GString* string, gchar c) {
  return NULL; // TODO
}

static inline GString*
g_string_prepend_unichar(GString* string, gunichar wc) {
  return NULL; // TODO
}

static inline GString*
g_string_prepend_len(GString* string, const gchar* val, gssize len) {
  return NULL; // TODO
}

static inline GString*
g_string_insert(GString* string, gssize pos, const gchar* val) {
  return NULL; // TODO
}

static inline GString*
g_string_insert_c(GString* string, gssize pos, gchar c) {
  return NULL; // TODO
}

static inline GString*
g_string_insert_unichar(GString* string, gssize pos, gunichar wc) {
  return NULL; // TODO
}

static inline GString*
g_string_overwrite(GString* string, gsize pos, const gchar* val) {
  return NULL; // TODO
}

static inline GString*
g_string_overwrite_len(GString* string, gsize pos, const gchar* val, gssize len) {
  return NULL; // TODO
}

static inline GString*
g_string_erase(GString* string, gssize pos, gssize len) {
  return NULL; // TODO
}

static inline GString*
g_string_ascii_down(GString* string) {
  return NULL; // TODO
}

static inline GString*
g_string_ascii_up(GString* string) {
  return NULL; // TODO
}

static inline void
g_string_vprintf(GString* string, const gchar* format, va_list args) {
  return; // TODO
}

static inline void
g_string_printf(GString* string, const gchar* format, ...) {
  return; // TODO
}

static inline void
g_string_append_vprintf(GString* string, const gchar* format, va_list args) {
  return; // TODO
}

static inline void
g_string_append_printf(GString* string, const gchar* format, ...) {
  return; // TODO
}

static inline GString*
g_string_append_uri_escaped(GString* string, const gchar* unescaped, const gchar* reserved_chars_allowed, gboolean allow_utf8) {
  return NULL; // TODO
}

/**
 * @deprecated
 */
#define g_string_down g_string_ascii_down

/**
 * @deprecated
 */
#define g_string_up g_string_ascii_up

/**
 * @deprecated
 */
#define g_string_sprintf g_string_printf

/**
 * @deprecated
 */
#define g_string_sprintfa g_string_append_printf
