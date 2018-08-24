/* This is free and unencumbered software released into the public domain. */

/**
 * Compatibility shim for GLib's auto-configured type definitions.
 *
 * @author Arto Bendiken
 * @see https://drylib.org/xref/glib.html
 * @see https://developer.gnome.org/glib/stable/glib-building.html
 */

#pragma once

////////////////////////////////////////////////////////////////////////////////

#include <dry/base.h>

////////////////////////////////////////////////////////////////////////////////

typedef signed char gint8;
typedef unsigned char guint8;

typedef signed short gint16;
typedef unsigned short guint16;

typedef signed int gint32;
typedef unsigned int guint32;

typedef signed long gint64;
typedef unsigned long guint64;

typedef gint64 gssize;
typedef guint64 gsize;

typedef gint64 goffset;

typedef signed long gintptr;
typedef unsigned long guintptr;
