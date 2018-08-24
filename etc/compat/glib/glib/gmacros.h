/* This is free and unencumbered software released into the public domain. */

/**
 * Compatibility shim for GLib's macro definitions.
 *
 * @author Arto Bendiken
 * @see https://drylib.org/xref/glib.html
 * @see https://developer.gnome.org/glib/stable/glib-Standard-Macros.html
 */

#pragma once

////////////////////////////////////////////////////////////////////////////////

#include <stddef.h> /* for NULL */

////////////////////////////////////////////////////////////////////////////////

#ifndef FALSE
#define FALSE (0)
#endif

#ifndef TRUE
#define TRUE (!FALSE)
#endif
