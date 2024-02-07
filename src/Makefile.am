## Process this file with automake to produce Makefile.in

## Created by Anjuta

AM_CPPFLAGS = \
	-DPACKAGE_LOCALE_DIR=\""$(localedir)"\" \
	-DPACKAGE_SRC_DIR=\""$(srcdir)"\" \
	-DPACKAGE_DATA_DIR=\""$(pkgdatadir)"\" \
	$(LKN_CFLAGS)

AM_CFLAGS =\
	 -Wall\
	 -g

bin_PROGRAMS = lkn

lkn_SOURCES = \
	main.cc

lkn_LDFLAGS = 

lkn_LDADD = $(LKN_LIBS)


if NATIVE_WIN32
lkn_LDFLAGS += -mwindows
endif
