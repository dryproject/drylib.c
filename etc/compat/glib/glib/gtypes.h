/* This is free and unencumbered software released into the public domain. */

/**
 * Compatibility interface for GLib's basic type definitions.
 *
 * @author Arto Bendiken
 * @see https://developer.gnome.org/glib/stable/glib-Basic-Types.html
 */

#pragma once

////////////////////////////////////////////////////////////////////////////////

#include "glibconfig.h"
#include "gmacros.h"

#include <dry/base/bool.h>
#include <dry/base/float.h>
#include <dry/base/integer.h>
#include <dry/base/natural.h>

////////////////////////////////////////////////////////////////////////////////

typedef dry_bool_t  gboolean;

typedef char        gchar;
typedef dry_int16_t gshort;
typedef dry_int32_t gint;
typedef dry_int64_t glong;

typedef dry_int8_t  guchar;  // FIXME
typedef dry_int16_t gushort; // FIXME
typedef dry_int32_t guint;   // FIXME
typedef dry_int64_t gulong;  // FIXME

typedef dry_float16_t gfloat;
typedef dry_float32_t gdouble;

typedef void* gpointer;
typedef const void* gconstpointer;
