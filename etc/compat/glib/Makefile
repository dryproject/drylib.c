CC       ?= cc
CPPFLAGS ?=
CPPFLAGS += -I ../../../src
CPPFLAGS += -Wall -Wextra -Wno-unused-parameter -Wno-unused-function -Werror
#CPPFLAGS += `pkg-config --cflags glib-2.0`
CFLAGS   ?=
CFLAGS   += -std=c11
LDFLAGS  ?=
#LDFLAGS  += `pkg-config --libs glib-2.0`

PACKAGE  := drylib-glib

TARGETS  := test
OBJECTS  := test.o
SOURCES  := test.c

%.o: %.c
	$(CC) $(CFLAGS) $(CPPFLAGS) $(TARGET_ARCH) -o $@ -c $<

%: %.o
	$(CC) $(LDFLAGS) $(TARGET_ARCH) -o $@ $^ $(LOADLIBES) $(LDLIBS)

test: test.o ../../../dry.a

all: $(TARGETS)

check: test
	./test

clean:
	@rm -f *~ *.o $(TARGETS) $(OBJECTS)

.PHONY: check clean
.SECONDARY:
.SUFFIXES:
