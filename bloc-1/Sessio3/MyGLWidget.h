#include <QGLWidget>
#include <QGLShader>
#include <QGLShaderProgram>
#include <QKeyEvent>
#include "glm/glm.hpp"
#include "glm/gtc/matrix_transform.hpp"
#define GLM_FORCE_RADIANS

class MyGLWidget : public QGLWidget 
{
  Q_OBJECT

  public:
    MyGLWidget (QGLFormat &f, QWidget *parent=0);
  
  protected:
    // initializeGL() - Aqui incluim les inicialitzacions del contexte grafic.
    virtual void initializeGL ();

    // paintGL - Mètode cridat cada cop que cal refrescar la finestra.
    // Tot el que es dibuixa es dibuixa aqui.
    virtual void paintGL ();
 
    // resizeGL() - Es cridat quan canvi la mida del widget
    virtual void resizeGL (int width, int height);  

  private:
    void createBuffers ();
    void loadShaders();
    void keyPressEvent(QKeyEvent*);
    void mouseMoveEvent(QMouseEvent *);
    void modelTransform();
    GLuint VAO, VBO,VBOC,pos,colu;
    GLfloat scl;
    GLint varLoc,transLoc;
    double posx,posy,sx,sy,rx,ry;
    int b;
    QGLShaderProgram* program;
};
