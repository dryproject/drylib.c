/* This is free and unencumbered software released into the public domain. */

#if __STDC_VERSION__ < 201112L
#error "DRYlib for C requires a C11 compiler (CFLAGS='-std=c11')"
#endif

#include "drylib.h"

////////////////////////////////////////////////////////////////////////////////

// cc -std=c11 -DMAIN drylib.c
#ifdef MAIN
int main(int argc, char* argv[]) {
  return 0; // TODO
}
#endif
