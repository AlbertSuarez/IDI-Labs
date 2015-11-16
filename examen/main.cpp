#include <QApplication>

#include "MyGLWidget.h"

int main (int argc, char **argv) {
  QApplication a( argc, argv);

  QGLFormat format;
  format.setDepthBufferSize(24);
  format.setVersion(3, 3);
  format.setProfile(QGLFormat::CoreProfile);
  QGLFormat::setDefaultFormat(format);
  MyGLWidget mygl(format);
  mygl.resize (800, 800);
  mygl.show ();

  return a.exec ();
}

