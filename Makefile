PACKAGE  := drylib-c
VERSION  := $(shell cat VERSION)

AR       ?= ar
CC       ?= cc
CXX      ?= c++
INSTALL  ?= install
PANDOC   ?= pandoc
RANLIB   ?= ranlib
SED      ?= sed

CFLAGS   ?= -Wall -Wextra -Wno-unused-parameter -Wno-unused-function -Werror
CFLAGS   += -std=c11
CXXFLAGS ?= -Wall -Wextra -Wno-unused-parameter -Wno-unused-function -Werror
CXXFLAGS += -std=c++17
CPPFLAGS ?= -I ../drylib.cpp/src
CPPFLAGS += -I src
LDFLAGS  ?=
LDFLAGS  += -L.

INSTALL_PROGRAM = $(INSTALL)
INSTALL_DATA    = $(INSTALL) -m 644

prefix     ?= /usr/local
exec_prefix = $(prefix)
includedir  = $(prefix)/include
libdir      = $(exec_prefix)/lib

HEADERS  := $(wildcard src/*.h src/*/*.h src/*/*/*.h)
SOURCES  := $(wildcard src/*.cpp src/*/*.cpp src/*/*/*.cpp)
OBJECTS  := $(patsubst %.cpp,%.o,$(SOURCES))
TARGETS  := libdry.a

%.html: %.rst
	$(PANDOC) -o $@ -t html5 -s $<

%.o: %.c $(HEADERS)
	$(CC) $(CFLAGS) $(CPPFLAGS) $(TARGET_ARCH) -o $@ -c $<

%.o: %.cpp $(HEADERS)
	$(CXX) $(CXXFLAGS) $(CPPFLAGS) $(TARGET_ARCH) -o $@ -c $<

%: %.o
	$(CC) $(LDFLAGS) $(TARGET_ARCH) -o $@ $^ $(LOADLIBES) $(LDLIBS)

all: build

drylib-c.pc: etc/pkgconfig/drylib-c.pc.in
	$(SED) -e 's:@prefix@:$(prefix):g' -e 's:@version@:$(VERSION):g' $^ > $@

libdry.a: $(OBJECTS)
	$(AR) rcs $@ $^ && $(RANLIB) $@

test: test.o libdry.a

build: $(TARGETS)

check: test
	./test

dist:
	@echo "not implemented"; exit 2 # TODO

installdirs:
	$(INSTALL) -d $(DESTDIR)$(libdir)
	$(INSTALL) -d $(DESTDIR)$(libdir)/pkgconfig
	$(INSTALL) -d $(DESTDIR)$(includedir)
	$(INSTALL) -d $(DESTDIR)$(includedir)/dry
	$(INSTALL) -d $(DESTDIR)$(includedir)/dry/base
	$(INSTALL) -d $(DESTDIR)$(includedir)/dry/meta
	$(INSTALL) -d $(DESTDIR)$(includedir)/dry/text

install: installdirs drylib-c.pc $(TARGETS) $(HEADERS)
	$(INSTALL_DATA) drylib-c.pc $(DESTDIR)$(libdir)/pkgconfig/drylib.pc
	$(INSTALL_DATA) drylib-c.pc $(DESTDIR)$(libdir)/pkgconfig/drylib-c.pc
	$(foreach file,$(TARGETS),$(INSTALL_DATA) $(file) $(DESTDIR)$(libdir)/$(file);)
	$(foreach file,$(HEADERS),$(INSTALL_DATA) $(file) $(DESTDIR)$(includedir)/$(file:src/%=%);)

uninstall:
	rm -f $(DESTDIR)$(libdir)/pkgconfig/drylib.pc
	rm -f $(DESTDIR)$(libdir)/pkgconfig/drylib-c.pc
	$(foreach file,$(TARGETS),rm -f $(DESTDIR)$(libdir)/$(file);)
	$(foreach file,$(HEADERS),rm -f $(DESTDIR)$(includedir)/$(file:src/%=%);)
	rmdir $(DESTDIR)$(includedir)/dry/base || true
	rmdir $(DESTDIR)$(includedir)/dry/meta || true
	rmdir $(DESTDIR)$(includedir)/dry/text || true
	rmdir $(DESTDIR)$(includedir)/dry || true

clean:
	@rm -f test *~ *.o $(TARGETS) $(OBJECTS)

distclean: clean

mostlyclean: clean

.PHONY: check dist installdirs install install-strip clean distclean mostlyclean
.SECONDARY:
.SUFFIXES:
