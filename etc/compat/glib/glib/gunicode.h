/* This is free and unencumbered software released into the public domain. */

/**
 * Compatibility shim for GLib's Unicode manipulation functions.
 *
 * @author Arto Bendiken
 * @see https://drylib.org/xref/glib.html
 * @see https://developer.gnome.org/glib/stable/glib-Unicode-Manipulation.html
 */

#pragma once

////////////////////////////////////////////////////////////////////////////////

#include "gerror.h"
#include "gtypes.h"

#include <dry/base/char.h>
#include <dry/text/utf8.h>

////////////////////////////////////////////////////////////////////////////////

typedef dry_char_t gunichar;
