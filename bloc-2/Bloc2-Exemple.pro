TEMPLATE    = app
QT         += opengl

LIBS += -lGLEW
INCLUDEPATH +=  /usr/include/glm
INCLUDEPATH +=  /home2/users/alumnes/1182238/Documents/IDI/Model

HEADERS += MyGLWidget.h

SOURCES += main.cpp \
        MyGLWidget.cpp
SOURCES += /home2/users/alumnes/1182238/Documents/IDI/Model/model.cpp
