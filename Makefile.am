
AM_MAKEFLAGS = --no-print-directory

sbc_sources = sbc/sbc.h sbc/sbc.c sbc/sbc_math.h sbc/sbc_tables.h \
		sbc/sbc_primitives.h sbc/sbc_primitives.c \
		sbc/sbc_primitives_mmx.h sbc/sbc_primitives_mmx.c \
		sbc/sbc_primitives_iwmmxt.h sbc/sbc_primitives_iwmmxt.c \
		sbc/sbc_primitives_neon.h sbc/sbc_primitives_neon.c \
		sbc/sbc_primitives_armv6.h sbc/sbc_primitives_armv6.c

lib_LTLIBRARIES = sbc/libsbc.la

sbc_libsbc_la_SOURCES = $(sbc_sources)

AM_CFLAGS = -finline-functions -fgcse-after-reload \
					-funswitch-loops -funroll-loops

MAINTAINERCLEANFILES = Makefile.in \
	aclocal.m4 configure config.h.in config.sub config.guess \
	ltmain.sh depcomp compile missing install-sh mkinstalldirs
