#include <QtCore/QString>

int
main ()
{
  QString s ("aaa");
  s.append ("bbb");
  return s.size () == 6 ? 0 : 1;
}
