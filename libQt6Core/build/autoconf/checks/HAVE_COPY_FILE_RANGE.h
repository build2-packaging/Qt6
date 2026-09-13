// HAVE_COPY_FILE_RANGE : BUILD2_AUTOCONF_LIBC_VERSION

#ifndef BUILD2_AUTOCONF_LIBC_VERSION
#  error BUILD2_AUTOCONF_LIBC_VERSION appears to be conditionally included
#endif

#undef HAVE_COPY_FILE_RANGE

/* Check for the copy_file_range() function.
 *
 * Since glibc 2.27 and FreeBSD 13.0. Note that the corresponding system call
 * may still be unavailable at runtime (older Linux kernels) in which case it
 * fails with ENOSYS.
 */
#if BUILD2_AUTOCONF_GLIBC_PREREQ(2, 27) || \
    BUILD2_AUTOCONF_FREEBSD_PREREQ(13, 0)
#  define HAVE_COPY_FILE_RANGE 1
#endif
