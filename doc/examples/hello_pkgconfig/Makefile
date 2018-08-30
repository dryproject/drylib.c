CC       ?= cc
CFLAGS   ?= -Wall -Wextra -Wno-unused-parameter -Wno-unused-function
CFLAGS   += -std=c11
CFLAGS   += $(shell pkg-config --cflags-only-other drylib-c)
CPPFLAGS ?=
CPPFLAGS += $(shell pkg-config --cflags-only-I drylib-c)
LDFLAGS  ?=
LDFLAGS  += $(shell pkg-config --libs-only-L drylib-c)
LDFLAGS  += $(shell pkg-config --libs-only-other drylib-c)
LDLIBS   ?=
LDLIBS   += $(shell pkg-config --libs-only-l drylib-c)

SOURCES  := hello.c
OBJECTS  := hello.o
TARGETS  := hello

%.o: %.c
	$(CC) $(CFLAGS) $(CPPFLAGS) $(TARGET_ARCH) -o $@ -c $<

%: %.o
	$(CC) $(LDFLAGS) $(TARGET_ARCH) -o $@ $^ $(LOADLIBES) $(LDLIBS)

hello: $(OBJECTS)

all: hello

clean:
	@rm -f *~ $(TARGETS) $(OBJECTS)

.PHONY: clean
.SECONDARY:
.SUFFIXES:
