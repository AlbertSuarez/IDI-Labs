TEMPLATE    = app
QT         += opengl

LIBS += -lGLEW
INCLUDEPATH +=  /usr/include/glm
INCLUDEPATH += ../Model

HEADERS += MyGLWidget.h

SOURCES += main.cpp \
        MyGLWidget.cpp ../Model/model.cpp

OTHER_FILES += \
    shaders/fragshad.frag \
    shaders/vertshad.vert
