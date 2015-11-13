TEMPLATE    = app
QT         += opengl

LIBS += -lGLEW
INCLUDEPATH +=  /usr/include/glm

HEADERS += MyGLWidget.h

SOURCES += main.cpp \
        MyGLWidget.cpp
