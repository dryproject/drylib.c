/* This is free and unencumbered software released into the public domain. */

#pragma once

////////////////////////////////////////////////////////////////////////////////

#include <cassert> /* for assert() */

////////////////////////////////////////////////////////////////////////////////

static inline void
require_nonnull_allocation(const void* const allocation) {
  assert(allocation != nullptr); // TODO: do better than this
}

static inline void
require_nonnull_argument(const void* const argument) {
  assert(argument != nullptr); // TODO: do better than this
}
