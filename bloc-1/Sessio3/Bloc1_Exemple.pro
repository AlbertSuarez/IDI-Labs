TEMPLATE    = app
QT         += opengl

LIBS += -lGLEW
INCLUDEPATH +=  /usr/include/glm
RESOURCES +=shaders.qrc

HEADERS += MyGLWidget.h

SOURCES += main.cpp \
        MyGLWidget.cpp
