#include <GL/glew.h>
#include "MyGLWidget.h"

#include <iostream>

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

  glClearColor (0.5, 0.7, 0.5, 1.0); // defineix color de fons (d'esborrat)
  createBuffers();
}

void MyGLWidget::paintGL ()
{
  glClear (GL_COLOR_BUFFER_BIT);  // Esborrem el frame-buffer

  // Activem l'Array a pintar 
  glBindVertexArray(VAO);
 
  // Pintem l'escena
  glDrawArrays(GL_TRIANGLE_STRIP, 0, 3);
  glBindVertexArray(0);
  
  glBindVertexArray(VA02);
 
  // Pintem l'escena
  glDrawArrays(GL_TRIANGLE_STRIP, 0, 3);
  
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
  Vertices[0] = glm::vec3(0.5, -0.5, 0.0);
  Vertices[1] = glm::vec3(-0.5, -0.5, 0.0);
  Vertices[2] = glm::vec3(0.5,0.5, 0.0);
  
  glm::vec3 Vertices2[3];
  Vertices2[0] = glm::vec3(0.5,0.5, 0.0);
  Vertices2[1] = glm::vec3(-0.5, 0.5, 0.0);
  Vertices2[2] = glm::vec3(-0.0, 0.75, 0.0);
  
  // ------------------ PRIMER OBJECTE ------------------------
  
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
  
  // ------------------ SEGON OBJECTE -------------------------
  
  // Creació del Vertex Array Object (VAO) que usarem per pintar
  glGenVertexArrays(1,&VA02);
  glBindVertexArray(VA02);
  
  // Creació del buffer amb les dades dels vèrtexs
  glGenBuffers(1,&VB02);
  glBindBuffer(GL_ARRAY_BUFFER,VB02);
  glBufferData(GL_ARRAY_BUFFER,sizeof(Vertices2),Vertices2,GL_STATIC_DRAW);
  
  // Activem l'atribut que farem servir per vèrtex (només el 0 en aquest cas)
  glVertexAttribPointer(0,3,GL_FLOAT,GL_FALSE,0,0);
  glEnableVertexAttribArray(0);
  
  // Desactivem el VAO
  glBindVertexArray(0);
  
}

