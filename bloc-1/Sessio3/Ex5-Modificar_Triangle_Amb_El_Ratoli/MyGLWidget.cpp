#include <GL/glew.h>
#include "MyGLWidget.h"

#include <iostream>
#include <QGLShader>
#include <QGLShaderProgram>
#include <QKeyEvent>
MyGLWidget::MyGLWidget (QGLFormat &f, QWidget* parent) : QGLWidget(f, parent)
{
  setFocusPolicy(Qt::ClickFocus);  // per rebre events de teclat
}

void MyGLWidget::initializeGL ()
{
  // glew és necessari per cridar funcions de les darreres versions d'OpenGL
  glewExperimental = GL_TRUE;
  glewInit(); 
  glGetError();  // Reinicia la variable d'error d'OpenGL

  sx=0.5;
  sy=0.5;
  posx=0;
  posy=0;
  b=-1;
  glClearColor (0.5, 0.7, 1.0, 1.0); // defineix color de fons (d'esborrat)
  loadShaders();
  createBuffers();
  setMouseTracking(true);
  
}

void MyGLWidget::paintGL ()
{
  glClear (GL_COLOR_BUFFER_BIT);  // Esborrem el frame-buffer

  // Activem l'Array a pintar 
  glBindVertexArray(VAO);
 
  // Pintem l'escena
  glDrawArrays(GL_TRIANGLES, 0, 3);
  
  // Desactivem el VAO
  glBindVertexArray(0);
}

void MyGLWidget::resizeGL (int w, int h)
{
  glViewport (0, 0, w, h);
}

void MyGLWidget::createBuffers ()
{
  glm::vec3 Vertices[3];  // Tres vèrtexs amb X, Y i Z
  Vertices[0] = glm::vec3(-1.0, -1.0, 0.0);
  Vertices[1] = glm::vec3(1.0, -1.0, 0.0);
  Vertices[2] = glm::vec3(0.0, 1.0, 0.0);
  
  glm::vec3 Color[3];  // Tres vèrtexs amb X, Y i Z
  Color[0] = glm::vec3(1.0, 0.0, 0.0);
  Color[1] = glm::vec3(0.0,1.0, 0.0);
  Color[2] = glm::vec3(0.0, 0.0, 1.0);
  
  
  // Creació del Vertex Array Object (VAO) que usarem per pintar
  glGenVertexArrays(1, &VAO);
  glBindVertexArray(VAO);

  // Creació del buffer amb les dades dels vèrtexs
  glGenBuffers(1, &VBO);
  glBindBuffer(GL_ARRAY_BUFFER, VBO);
  glBufferData(GL_ARRAY_BUFFER, sizeof(Vertices), Vertices, GL_STATIC_DRAW);
  // Activem l'atribut que farem servir per vèrtex (només el 0 en aquest cas)	
  pos=glGetAttribLocation(program->programId(),"vertex");
  
  glVertexAttribPointer(pos, 3, GL_FLOAT, GL_FALSE, 0, 0);
  glEnableVertexAttribArray(pos);

  glGenBuffers(1, &VBOC);
  glBindBuffer(GL_ARRAY_BUFFER, VBOC);
  glBufferData(GL_ARRAY_BUFFER, sizeof(Color), Color, GL_STATIC_DRAW);
  
  colu=glGetAttribLocation(program->programId(),"col");
   glVertexAttribPointer(colu, 3, GL_FLOAT, GL_FALSE, 0, 0);
  glEnableVertexAttribArray(colu);
  
  // Desactivem el VAO
  glBindVertexArray(pos);
  glBindVertexArray(colu);
}

void MyGLWidget::loadShaders ()
{
  QGLShader fs(QGLShader::Fragment, this);
  fs.compileSourceFile("./fragshad.frag");
  QGLShader vs(QGLShader::Vertex, this);
  vs.compileSourceFile("./vertshad.vert");
  
  program= new QGLShaderProgram(this);
  program->addShader(&fs);
  program->addShader(&vs);
  program ->link();
  program->bind();
  varLoc=glGetUniformLocation(program->programId(),"val");
  transLoc=glGetUniformLocation(program->programId(),"mati");
  glUniform1f(varLoc,scl);
  modelTransform();
  
}

void MyGLWidget::keyPressEvent(QKeyEvent *e)
{
  switch(e->key()){
    case Qt::Key_Escape:
      exit(0);
    case Qt::Key_Left:
      posx -=0.1;
      modelTransform();
      updateGL();
      break;
    case Qt::Key_Right:
      posx +=0.1;
      modelTransform();
      updateGL();
      break;
    case Qt::Key_Up:
      posy +=0.1;
      modelTransform();
      updateGL();
      break;
    case Qt::Key_Down:
      posy -=0.1;
      modelTransform();
      updateGL();
      break;
    default: e->ignore ();
    
  }

  
}

void MyGLWidget::mouseMoveEvent(QMouseEvent *e)		// AQUESTA ES LA FUNCIO QUE FA QUE S'ESCALI DIFERENT SEGONS MOGUIS EL MOUSE
{

    int xnew=e->x();
    int ynew=e->y();
    //std::cout << xnew << " " <<ynew << endl;
    
    if(b==-1){
      b=1;
      
    }
    
    else{
      
      if(rx<xnew){
      
	sx+=0.01;
      }
      else if(rx>xnew){
	sx-=0.01;
      }
      if(ry<ynew){
	sy+=0.01;
      }
      else if(ry>ynew){
	sy-=0.01;
      }
      modelTransform();
      updateGL();
      
    }
    rx=xnew;
    ry=ynew;
  
}



void MyGLWidget::modelTransform()
{
  glm::mat4 TG;
  TG= glm::translate(glm::mat4(1.0),glm::vec3(posx,posy,0.0));
  TG= glm::rotate(TG,float(M_PI/4),glm::vec3(0.0,0.0,1.0));
  TG= glm::scale(TG,glm::vec3(sx,sy,0));
  
  glUniformMatrix4fv(transLoc,1,GL_FALSE,&TG[0][0]);
  
} 




