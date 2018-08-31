CC       ?= cc

CFLAGS   ?= -Wall -Wextra -Wno-unused-parameter -Wno-unused-function
CFLAGS   += -std=c11
CPPFLAGS ?=
CPPFLAGS += -I ../../../src
CPPFLAGS += -I$(shell brew --prefix gmp)/include
LDFLAGS  ?=
LDFLAGS  += -L$(shell brew --prefix gmp)/lib

SOURCES  := test.c
OBJECTS  := test.o
TARGETS  := test

LIBGMP   := $(shell brew --prefix gmp)/lib/libgmp.a

%.o: %.c
	$(CC) $(CFLAGS) $(CPPFLAGS) $(TARGET_ARCH) -o $@ -c $<

%: %.o
	$(CC) $(LDFLAGS) $(TARGET_ARCH) -o $@ $^ $(LOADLIBES) $(LDLIBS)

test: test.o ../../../libdry.a $(LIBGMP)

all: $(TARGETS)

check: test
	./test

clean:
	@rm -f *~ *.o $(TARGETS) $(OBJECTS)

.PHONY: check clean
.SECONDARY:
.SUFFIXES:
