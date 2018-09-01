dnl configure.ac                                        -*- Autoconf -*-
dnl
dnl Process this file with `autoconf` to produce a configure script.
dnl
dnl This is free and unencumbered software released into the public domain.
AC_PREREQ([2.69])

dnl Define package information:
AC_INIT([hello], [1.0.0], [bugs@example.org])

dnl Configure Autoconf:
AC_CONFIG_HEADERS([config.h])
AC_CONFIG_SRCDIR([hello.c])
AC_CONFIG_MACRO_DIR([.])

dnl Configure Automake:
AM_INIT_AUTOMAKE([foreign -Wall -Werror])
AM_SILENT_RULES([yes])

dnl Check for configuration options:
dnl Check for programs:
AC_PROG_CC
dnl AC_PROG_CC_C11

dnl Check for libraries:
PKG_CHECK_MODULES([DRYLIB], [drylib-c])

dnl Check for header files:

dnl Check for types:

dnl Check for structures:

dnl Check for compiler characteristics:

dnl Check for library functions:

dnl Check for system services:

dnl Generate output:
AC_CONFIG_FILES([Makefile])
AC_OUTPUT
