AR       ?= ar
CC       ?= cc
CXX      ?= c++
CPPFLAGS ?=
CPPFLAGS += -I src
CFLAGS   ?=
CFLAGS   += -std=c11
CXXFLAGS ?=
CXXFLAGS += -std=c++17
RANLIB   ?= ranlib

PANDOC   ?= pandoc

PACKAGE  :=
VERSION  := $(shell cat VERSION)

SOURCES  :=

TARGETS  := dry.a test
OBJECTS  :=             \
  src/dry/base.o        \
  src/dry/text/ascii.o  \
  src/dry/text/printf.o \
  src/dry/text/utf8.o

%.html: %.rst
	$(PANDOC) -o $@ -t html5 -s $<

%.o: %.c
	$(CC) $(CFLAGS) $(CPPFLAGS) $(TARGET_ARCH) -o $@ -c $<

%.o: %.cpp
	$(CXX) $(CXXFLAGS) $(CPPFLAGS) $(TARGET_ARCH) -o $@ -c $<

%: %.o
	$(CC) $(LDFLAGS) $(TARGET_ARCH) -o $@ $^ $(LOADLIBES) $(LDLIBS)

dry.a: $(OBJECTS)
	$(AR) rcs $@ $^
	$(RANLIB) $@

test: test.o dry.a

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
	@rm -f *~ $(TARGETS) $(OBJECTS)

distclean: clean

mostlyclean: clean

.PHONY: check dist install clean distclean mostlyclean
.SECONDARY:
.SUFFIXES:
