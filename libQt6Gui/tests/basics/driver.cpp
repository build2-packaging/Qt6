// The QGuiApplication constructor should load at least the platform
// plugin. Set the environment variable QT_DEBUG_PLUGINS to 1 for
// confirmation.
//

#include <QtGui/QGuiApplication>

int
main (int argc, char** argv)
{
  QGuiApplication app (argc, argv);
  return 0;
}
