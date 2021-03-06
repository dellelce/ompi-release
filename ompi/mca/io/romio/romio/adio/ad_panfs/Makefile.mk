## -*- Mode: Makefile; -*-
## vim: set ft=automake :
##
## (C) 2011 by Argonne National Laboratory.
##     See COPYRIGHT in top-level directory.
##

if BUILD_AD_PANFS

# I don't like this hard-coded path to the PANFS headers but I guess that's
# where they always are?
AM_CPPFLAGS += -I/opt/panfs/include

noinst_HEADERS += adio/ad_panfs/ad_panfs.h

romio_other_sources +=              \
    adio/ad_panfs/ad_panfs.c        \
    adio/ad_panfs/ad_panfs_open.c   \
    adio/ad_panfs/ad_panfs_hints.c  \
    adio/ad_panfs/ad_panfs_read.c   \
    adio/ad_panfs/ad_panfs_resize.c \
    adio/ad_panfs/ad_panfs_write.c

endif BUILD_AD_PANFS

