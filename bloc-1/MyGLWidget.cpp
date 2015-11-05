#include <GL/glew.h>
#include "MyGLWidget.h"
#include <QGLShader>
#include <QGLShaderProgram>
#include <iostream>
#include <QKeyEvent>
#include "glm/gtc/matrix_transform.hpp"

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

  glClearColor (0.5, 0.7, 1.0, 1.0); // defineix color de fons (d'esborrat)
  createBuffers();
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
  QGLShaderProgram program(this);

  glm::vec3 Vertices[3];  // Tres vèrtexs amb X, Y i Z
  Vertices[0] = glm::vec3(-0.5, -0.5, 0);
  Vertices[1] = glm::vec3(0.5, -0.5, 0);
  Vertices[2] = glm::vec3(0, 0.5, 0);

  // Creació del Vertex Array Object (VAO) que usarem per pintar
  glGenVertexArrays(1, &VAO);
  glBindVertexArray(VAO);

  // Creació del buffer amb les dades dels vèrtexs
  glGenBuffers(1, &VBO);
  glBindBuffer(GL_ARRAY_BUFFER, VBO);
  glBufferData(GL_ARRAY_BUFFER, sizeof(Vertices), Vertices, GL_STATIC_DRAW);
  // Activem l'atribut que farem servir per vèrtex (només el 0 en aquest cas)	
  glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 0, 0);
  glEnableVertexAttribArray(0);

  // Desactivem el VAO
  glBindVertexArray(0);

  QGLShader fs(QGLShader::Fragment, this);
  fs.compileSourceFile("./fragshad.frag");
  QGLShader vs(QGLShader::Vertex, this);
  vs.compileSourceFile("./vertshad.vert");

  program.addShader(&fs);
  program.addShader(&vs);
  program.link();
  program.bind();

  transLoc = glGetUniformLocation(program.programId(), "TG");
  glUniformMatrix4fv(transLoc, 1, GL_FALSE, &TG[0][0]);
}

void MyGLWidget::keyPressEvent(QKeyEvent *e){
  switch(e->key()){
    case Qt::Key_Escape :
      exit(0);
    case Qt::Key_Left :
      TG = glm::translate(TG, glm::vec3(-0.1,0.,0.));
      glUniformMatrix4fv(transLoc, 1, GL_FALSE, &TG[0][0]);
      updateGL();
      break;
    case Qt::Key_Right :
      TG = glm::translate(TG, glm::vec3(0.1,0.,0.));
      glUniformMatrix4fv(transLoc, 1, GL_FALSE, &TG[0][0]);
      updateGL();
      break;
    case Qt::Key_Up :
      TG = glm::translate(TG, glm::vec3(0.,0.1,0.));
      glUniformMatrix4fv(transLoc, 1, GL_FALSE, &TG[0][0]);
      updateGL();
      break;
    case Qt::Key_Down :
      TG = glm::translate(TG, glm::vec3(0.,-0.1,0.));
      glUniformMatrix4fv(transLoc, 1, GL_FALSE, &TG[0][0]);
      updateGL();
      break;
    default: e->ignore();
  }
}

