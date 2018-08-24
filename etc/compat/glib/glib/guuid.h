/* This is free and unencumbered software released into the public domain. */

/**
 * Compatibility shim for GLib's UUID functions.
 *
 * @author Arto Bendiken
 * @see https://drylib.org/xref/glib.html
 * @see https://developer.gnome.org/glib/stable/glib-GUuid.html
 */

#pragma once

////////////////////////////////////////////////////////////////////////////////

#include "gtypes.h"

////////////////////////////////////////////////////////////////////////////////

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @since 2.52
 */
static inline gboolean
g_uuid_string_is_valid(const gchar* str) {
  return 0; // TODO
}

/**
 * @since 2.52
 */
static inline gchar*
g_uuid_string_random(void) {
  return NULL; // TODO
}

#ifdef __cplusplus
} // extern "C"
#endif
