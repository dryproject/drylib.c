CC       ?= cc

CFLAGS   ?= -Wall -Wextra -Wno-unused-parameter -Wno-unused-function
CFLAGS   += -std=c11
CFLAGS   += $(shell pkg-config --cflags-only-other glib-2.0)
CPPFLAGS ?=
CPPFLAGS += $(shell pkg-config --cflags-only-I glib-2.0)
CPPFLAGS += -I ../../../src
LDFLAGS  ?=
LDFLAGS  += $(shell pkg-config --libs-only-L glib-2.0)
LDFLAGS  += $(shell pkg-config --libs-only-other glib-2.0)
LDLIBS   ?=
LDLIBS   += $(shell pkg-config --libs-only-l glib-2.0)

SOURCES  := test.c
OBJECTS  := test.o
TARGETS  := test

%.o: %.c
	$(CC) $(CFLAGS) $(CPPFLAGS) $(TARGET_ARCH) -o $@ -c $<

%: %.o
	$(CC) $(LDFLAGS) $(TARGET_ARCH) -o $@ $^ $(LOADLIBES) $(LDLIBS)

test: test.o ../../../libdry.a

all: $(TARGETS)

check: test
	./test

clean:
	@rm -f *~ $(TARGETS) $(OBJECTS)

.PHONY: check clean
.SECONDARY:
.SUFFIXES:
