CC       ?= cc
CPPFLAGS ?=
CPPFLAGS += -I ../../../src
CPPFLAGS += -Wall -Wextra -Wno-unused-parameter -Wno-unused-function -Werror
CPPFLAGS += -I$(shell brew --prefix gmp)/include
CFLAGS   ?=
CFLAGS   += -std=c11
LDFLAGS  ?=
LDFLAGS  += -L$(shell brew --prefix gmp)/lib

PACKAGE  := drylib-glib

TARGETS  := test
OBJECTS  := test.o
SOURCES  := test.c

GMP      := $(shell brew --prefix gmp)/lib/libgmp.a

%.o: %.c
	$(CC) $(CFLAGS) $(CPPFLAGS) $(TARGET_ARCH) -o $@ -c $<

%: %.o
	$(CC) $(LDFLAGS) $(TARGET_ARCH) -o $@ $^ $(LOADLIBES) $(LDLIBS)

test: test.o ../../../dry.a $(GMP)

all: $(TARGETS)

check: test
	./test

clean:
	@rm -f *~ *.o $(TARGETS) $(OBJECTS)

.PHONY: check clean
.SECONDARY:
.SUFFIXES:
