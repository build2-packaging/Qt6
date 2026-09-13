// HAVE_CXA_THREAD_ATEXIT : BUILD2_AUTOCONF_LIBC_VERSION

#ifndef BUILD2_AUTOCONF_LIBC_VERSION
#  error BUILD2_AUTOCONF_LIBC_VERSION appears to be conditionally included
#endif

#undef HAVE_CXA_THREAD_ATEXIT

/* Check whether the C runtime provides __cxa_thread_atexit() or
 * __cxa_thread_atexit_impl() which the C++ runtime uses to run the
 * destructors of thread_local objects when a thread exits.
 *
 * __cxa_thread_atexit_impl() since glibc 2.18. Both since FreeBSD 12.0
 * (symbol version FBSD_1.5). __cxa_thread_atexit() on all MacOS versions
 * supported by Qt 6.
 *
 * Note that this check must err on the side of being undefined: if it is
 * defined on a platform without such support, QThread will not work around
 * the resulting broken execution of thread_local destructors.
 */
#if BUILD2_AUTOCONF_GLIBC_PREREQ(2, 18)  || \
    BUILD2_AUTOCONF_FREEBSD_PREREQ(12, 0) || \
    defined(BUILD2_AUTOCONF_MACOS)
#  define HAVE_CXA_THREAD_ATEXIT 1
#endif
