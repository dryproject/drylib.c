CC       ?= cc -std=c11
CPPFLAGS ?=
CPPFLAGS += -I src

PANDOC   ?= pandoc

PACKAGE  :=
VERSION  := $(shell cat VERSION)

SOURCES  :=

TARGETS  := test

%.html: %.rst
	$(PANDOC) -o $@ -t html5 -s $<

%.o: %.c
	$(CC) $(CFLAGS) $(CPPFLAGS) $(TARGET_ARCH) -o $@ -c $<

%: %.o
	$(CC) $(LDFLAGS) $(TARGET_ARCH) -o $@ $^ $(LOADLIBES) $(LDLIBS)

test: test.o src/dry/base.o

all: build

build: $(TARGETS)

check: test
	./test

dist:
	@echo "not implemented"; exit 2 # TODO

install:
	@echo "not implemented"; exit 2 # TODO

uninstall:
	@echo "not implemented"; exit 2 # TODO

clean:
	@rm -f *~ *.o src/*.o src/dry/*.o $(TARGETS)

distclean: clean

mostlyclean: clean

.PHONY: check dist install clean distclean mostlyclean
.SECONDARY:
.SUFFIXES:
