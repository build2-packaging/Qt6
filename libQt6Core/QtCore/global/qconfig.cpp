// This file is included by corelib/global/qlibraryinfo.cpp only (never
// compiled). In the upstream build it is auto-generated. In our build it
// provides declarations with definitions auto-generated in
// qconfig-{install,develop}.cpp. See the buildfile and then qconfig.cpp.in
// for details.

#include <QByteArrayView>
#include <QtCore/private/qoffsetstringarray_p.h> // For qlibraryinfo.cpp.

extern const char qt_configure_prefix_path_str[12 + 256];
#define QT_CONFIGURE_PREFIX_PATH qt_configure_prefix_path_str + 12

// A version of the upstream QOffsetStringArray interface (defined in
// qoffsetstringarray_p.h) that doesn't bake the sizes/offsets of the strings
// into its type via template parameters. Thus we can use different paths in
// qconfig-install.cpp and qconfig-develop.cpp.
//
// Note that this class is only used for the qt_configure_strs variable below
// (which is only used in qlibraryinfo.cpp) -- everywhere else the original
// upstream version is used.
//
class QtConfigureStrs
{
public:
  const char*
  operator[] (int i) const noexcept
  {
    return strings_[i];
  }

  const char*
  at (int i) const noexcept
  {
    return operator[] (i);
  }

  QByteArrayView
  viewAt (qsizetype i) const noexcept
  {
    return {strings_[i], static_cast<qsizetype> (lengths_[i])};
  }

  constexpr int
  count () const
  {
    return static_cast<int> (path_count_);
  }

private:
  static constexpr size_t path_count_ = 13;
  static const char* strings_[path_count_];
  static const size_t lengths_[path_count_];
};

extern const QtConfigureStrs qt_configure_strs;

extern const char* QT_CONFIGURE_SETTINGS_PATH;
extern const char* QT_CONFIGURE_LIBLOCATION_TO_PREFIX_PATH;
