CC       ?= cc

CFLAGS   ?= -Wall -Wextra -Wno-unused-parameter -Wno-unused-function
CFLAGS   += -std=c11
CPPFLAGS ?=
LDLIBS   ?=
LDLIBS   += -ldry

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
