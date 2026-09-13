// HAVE_PTHREAD_TIMEDJOIN_NP : BUILD2_AUTOCONF_LIBC_VERSION

#ifndef BUILD2_AUTOCONF_LIBC_VERSION
#  error BUILD2_AUTOCONF_LIBC_VERSION appears to be conditionally included
#endif

#undef HAVE_PTHREAD_TIMEDJOIN_NP

/* Check for the pthread_timedjoin_np() function (a non-portable extension).
 *
 * Since glibc 2.3.3 and FreeBSD 6.1 (declared in <pthread_np.h>). Note that
 * the glibc check is for 2.4 because patch versions cannot be checked.
 */
#if BUILD2_AUTOCONF_GLIBC_PREREQ(2, 4)   || \
    BUILD2_AUTOCONF_FREEBSD_PREREQ(6, 1)
#  define HAVE_PTHREAD_TIMEDJOIN_NP 1
#endif
