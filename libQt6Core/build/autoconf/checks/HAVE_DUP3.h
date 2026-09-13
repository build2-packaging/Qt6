// HAVE_DUP3 : BUILD2_AUTOCONF_LIBC_VERSION

#ifndef BUILD2_AUTOCONF_LIBC_VERSION
#  error BUILD2_AUTOCONF_LIBC_VERSION appears to be conditionally included
#endif

#undef HAVE_DUP3

/* Check for the dup3() function.
 *
 * Since glibc 2.9 (declared only if _GNU_SOURCE is defined) and FreeBSD 10.0
 * (symbol version FBSD_1.3).
 */
#if BUILD2_AUTOCONF_GLIBC_PREREQ(2, 9) || \
    BUILD2_AUTOCONF_FREEBSD_PREREQ(10, 0)
#  define HAVE_DUP3 1
#endif
