// HAVE_PTHREAD_CLOCKJOIN_NP : BUILD2_AUTOCONF_LIBC_VERSION

#ifndef BUILD2_AUTOCONF_LIBC_VERSION
#  error BUILD2_AUTOCONF_LIBC_VERSION appears to be conditionally included
#endif

#undef HAVE_PTHREAD_CLOCKJOIN_NP

/* Check for the pthread_clockjoin_np() function (a GNU extension).
 *
 * Since glibc 2.31.
 */
#if BUILD2_AUTOCONF_GLIBC_PREREQ(2, 31)
#  define HAVE_PTHREAD_CLOCKJOIN_NP 1
#endif
