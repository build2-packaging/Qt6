// A minimal QtGui application that shows a blank window.
//
// Options:
//
// --auto-close
//
//   Automatically close the window after a few seconds.
//

#include <QtGui>
#include <QtGui/QGuiApplication>

#include "rasterwindow.h"

// A QGuiApplication that quits when it receives a timer event.
//
struct Application: public QGuiApplication
{
  using QGuiApplication::QGuiApplication;

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

  RasterWindow window;
  window.show ();

  return app.exec ();
}

#include "moc_rasterwindow.cpp"
