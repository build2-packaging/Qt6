// HAVE_PTHREAD_CONDATTR_SETCLOCK : BUILD2_AUTOCONF_LIBC_VERSION

#ifndef BUILD2_AUTOCONF_LIBC_VERSION
#  error BUILD2_AUTOCONF_LIBC_VERSION appears to be conditionally included
#endif

#undef HAVE_PTHREAD_CONDATTR_SETCLOCK

/* Check for the pthread_condattr_setclock() function.
 *
 * Since glibc 2.3.3 and FreeBSD 7.0 (symbol version FBSD_1.0). Not available
 * on MacOS. Note that the glibc check is for 2.4 because patch versions
 * cannot be checked.
 */
#if BUILD2_AUTOCONF_GLIBC_PREREQ(2, 4) || \
    BUILD2_AUTOCONF_FREEBSD_PREREQ(7, 0)
#  define HAVE_PTHREAD_CONDATTR_SETCLOCK 1
#endif
