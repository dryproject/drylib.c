/* This is free and unencumbered software released into the public domain. */

#ifndef __cplusplus
#error "DRYlib for C requires a C++ compiler to build"
#endif

#if __cplusplus < 201703L
#error "DRYlib for C requires a C++17 compiler to build (CXXFLAGS='-std=c++17')"
#endif

////////////////////////////////////////////////////////////////////////////////

#include "base.h"

////////////////////////////////////////////////////////////////////////////////

extern "C" void dry_base() {}
