/* This is free and unencumbered software released into the public domain. */

#include "module.h"
#include "../meta/error.hpp"

////////////////////////////////////////////////////////////////////////////////

extern "C" void dry_meta_module() {}

////////////////////////////////////////////////////////////////////////////////

bool
dry_meta_module_exists(const char* const name) {
  require_nonnull_argument(name);
  return false; // TODO
}
