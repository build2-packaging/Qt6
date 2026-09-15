// HAVE_MEMMEM : BUILD2_AUTOCONF_LIBC_VERSION

#ifndef BUILD2_AUTOCONF_LIBC_VERSION
#  error BUILD2_AUTOCONF_LIBC_VERSION appears to be conditionally included
#endif

#undef HAVE_MEMMEM

/* Check for the memmem() function.
 *
 * Since glibc 2.0 (declared only if _GNU_SOURCE is defined), FreeBSD 6.0,
 * and MacOS 10.7.
 */
#if BUILD2_AUTOCONF_GLIBC_PREREQ(2, 0)   || \
    BUILD2_AUTOCONF_FREEBSD_PREREQ(6, 0) || \
    BUILD2_AUTOCONF_MACOS_PREREQ(10, 7)
#  define HAVE_MEMMEM 1
#endif
