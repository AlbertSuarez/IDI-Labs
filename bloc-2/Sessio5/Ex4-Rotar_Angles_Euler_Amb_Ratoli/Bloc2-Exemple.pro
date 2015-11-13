TEMPLATE    = app
QT         += opengl

LIBS += -lGLEW
INCLUDEPATH +=  /usr/include/glm
INCLUDEPATH += Model
SOURCES += Model/model.cpp


HEADERS += MyGLWidget.h

SOURCES += main.cpp \
        MyGLWidget.cpp
