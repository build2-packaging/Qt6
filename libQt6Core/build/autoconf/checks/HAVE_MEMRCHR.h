// HAVE_MEMRCHR : BUILD2_AUTOCONF_LIBC_VERSION

#ifndef BUILD2_AUTOCONF_LIBC_VERSION
#  error BUILD2_AUTOCONF_LIBC_VERSION appears to be conditionally included
#endif

#undef HAVE_MEMRCHR

/* Check for the memrchr() function (a GNU extension).
 *
 * Since glibc 2.2 (declared only if _GNU_SOURCE is defined), FreeBSD 8.0
 * (symbol version FBSD_1.1; the manual page states 6.4 which appears to have
 * been a backport), and OpenBSD 4.3 (May 2008). Not available on MacOS.
 */
#if BUILD2_AUTOCONF_GLIBC_PREREQ(2, 2)   || \
    BUILD2_AUTOCONF_FREEBSD_PREREQ(8, 0) || \
    BUILD2_AUTOCONF_OPENBSD_PREREQ(200805)
#  define HAVE_MEMRCHR 1
#endif
