// A QtWidgets application that shows window with some scrollbars.
//
// Options:
//
// --auto-close
//
//   Automatically close the window after a few seconds.
//

#include <QtWidgets/QApplication>

#include "window.h"

// A QApplication that quits when it receives a timer event.
//
struct Application: public QApplication
{
  using QApplication::QApplication;

  void
  timerEvent (QTimerEvent*) override
  {
    quit ();
  }
};

int
main (int argc, char** argv)
{
  bool auto_close (false); // If true, auto-close the window.

  // Process options.
  //
  for (int i (1); i != argc; ++i)
  {
    if (QString (argv[i]) == "--auto-close")
      auto_close = true;
  }

  Application app (argc, argv);

  if (auto_close)
    app.startTimer (3000);

  Window window;
  window.show ();

  return app.exec ();
}

#include "moc_window.cpp"
