TEMPLATE    = app
QT         += opengl

LIBS += -lGLEW
INCLUDEPATH +=  /usr/include/glm
INCLUDEPATH += ./Model

HEADERS += MyGLWidget.h

SOURCES += main.cpp \
        MyGLWidget.cpp ./Model/model.cpp
