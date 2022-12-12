// The QApplication constructor should load the platform's style plugin
// (although there are currently only style plugins for macOS and Windows).
// Set the environment variable QT_DEBUG_PLUGINS to 1 for confirmation.
//

#include <QtWidgets/QApplication>

int
main (int argc, char** argv)
{
  QApplication app (argc, argv);
  return 0;
}
