// This code was taken from
// https://doc.qt.io/qt-5/qtgui-rasterwindow-example.html.
//

#include <QtGui>

class RasterWindow: public QWindow
{
  Q_OBJECT
public:
  explicit RasterWindow (QWindow* parent = 0)
      : QWindow (parent), m_backingStore (new QBackingStore (this))
  {
    setGeometry (100, 100, 300, 200);
  }

  virtual void
  render (QPainter* painter)
  {
    painter->drawText (QRectF (0, 0, width (), height ()),
                       Qt::AlignCenter,
                       QStringLiteral ("QWindow"));
  }

public slots:
  void
  renderLater ()
  {
    requestUpdate ();
  }

  void
  renderNow ()
  {
    if (!isExposed ())
      return;

    QRect rect (0, 0, width (), height ());
    m_backingStore->beginPaint (rect);

    QPaintDevice* device = m_backingStore->paintDevice ();
    QPainter painter (device);

    painter.fillRect (0, 0, width (), height (), QGradient::NightFade);
    render (&painter);
    painter.end ();

    m_backingStore->endPaint ();
    m_backingStore->flush (rect);
  }

protected:
  bool
  event (QEvent* event) override
  {
    if (event->type () == QEvent::UpdateRequest)
    {
      renderNow ();
      return true;
    }
    return QWindow::event (event);
  }

  void
  resizeEvent (QResizeEvent* event) override
  {
    m_backingStore->resize (event->size ());
  }

  void
  exposeEvent (QExposeEvent*) override
  {
    if (isExposed ())
      renderNow ();
  }

private:
  QBackingStore* m_backingStore;
};
