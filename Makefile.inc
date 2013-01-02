SHELL := /bin/sh
.SUFFIXES:
CPP := cpp
# MAKEDEPEND = $(CPP) $< -o - \
#              | sed -n 's/^\# *[0-9][0-9]* *"\([^"]*\)".*1.*/$@: \1/p' \
#              | sort -u > $*.d # $* may not work
MAKEDEPEND = gcc -x c -MT '$*.d $*.escad' -MM -MG -MF $*.d $<