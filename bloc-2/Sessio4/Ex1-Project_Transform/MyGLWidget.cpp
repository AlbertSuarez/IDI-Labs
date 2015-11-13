#include <GL/glew.h>
#include "MyGLWidget.h"

#include <iostream>

MyGLWidget::MyGLWidget (QGLFormat &f, QWidget* parent) : QGLWidget(f, parent)
{
  setFocusPolicy(Qt::ClickFocus); // per rebre events de teclat
  scale = 1.0f;
}

void MyGLWidget::initializeGL () 
{
  // glew és necessari per cridar funcions de les darreres versions d'OpenGL
  glewExperimental = GL_TRUE;
  glewInit(); 
  glGetError();  // Reinicia la variable d'error d'OpenGL

  glClearColor(0.5, 0.7, 1.0, 1.0); // defineix color de fons (d'esborrat)
  carregaShaders();
  createBuffers();
  modelTransform ();
  projectTransform();
}

void MyGLWidget::paintGL () 
{
  // Esborrem el frame-buffer
  glClear (GL_COLOR_BUFFER_BIT);

  // Activem el VAO per a pintar el terra 
  glBindVertexArray (VAO_Terra);

  // pintem
  glDrawArrays(GL_TRIANGLE_STRIP, 0, 4);

  // Activem el VAO per a pintar la caseta 
  glBindVertexArray (VAO_Casa);

  // pintem
  glDrawArrays(GL_TRIANGLE_STRIP, 0, 5);

  glBindVertexArray (0);
}

void MyGLWidget::modelTransform () 
{
  // Matriu de transformació de model
  glm::mat4 transform = glm::scale(glm::mat4(1.0f), glm::vec3(scale));
  transform = glm::rotate(transform, .58f, glm::vec3(1.,0.,0.));
  glUniformMatrix4fv(transLoc, 1, GL_FALSE, &transform[0][0]);
}

void MyGLWidget::resizeGL (int w, int h) 
{
  glViewport(0, 0, w, h);
}

void MyGLWidget::keyPressEvent(QKeyEvent* event) 
{
  switch (event->key()) {
    case Qt::Key_Escape:
      exit(0);
    case Qt::Key_S: { // escalar a més gran
      scale += 0.05;
      modelTransform ();
      updateGL();
      break;
    }
    case Qt::Key_D: { // escalar a més petit
      scale -= 0.05;
      modelTransform ();
      updateGL();
      break;
    }
    default: event->ignore(); break;
  }
}

void MyGLWidget::createBuffers () 
{
  // Dades de la caseta
  // Dos VBOs, un amb posició i l'altre amb color
  glm::vec3 posicio[5] = {
	glm::vec3(-0.5, -1.0, 0.0),
	glm::vec3( 0.5, -1.0, 0.0),
	glm::vec3(-0.5,  0.0, 0.0),
	glm::vec3( 0.5,  0.0, 0.0),
	glm::vec3( 0.0,  0.6, 0.0)
  }; 
  glm::vec3 color[5] = {
	glm::vec3(1,0,0),
	glm::vec3(0,1,0),
	glm::vec3(0,0,1),
	glm::vec3(1,0,0),
	glm::vec3(0,1,0)
  };

  // Creació del Vertex Array Object per pintar
  glGenVertexArrays(1, &VAO_Casa);
  glBindVertexArray(VAO_Casa);

  glGenBuffers(1, &VBO_CasaPos);
  glBindBuffer(GL_ARRAY_BUFFER, VBO_CasaPos);
  glBufferData(GL_ARRAY_BUFFER, sizeof(posicio), posicio, GL_STATIC_DRAW);

  // Activem l'atribut vertexLoc
  glVertexAttribPointer(vertexLoc, 3, GL_FLOAT, GL_FALSE, 0, 0);
  glEnableVertexAttribArray(vertexLoc);

  glGenBuffers(1, &VBO_CasaCol);
  glBindBuffer(GL_ARRAY_BUFFER, VBO_CasaCol);
  glBufferData(GL_ARRAY_BUFFER, sizeof(color), color, GL_STATIC_DRAW);

  // Activem l'atribut colorLoc
  glVertexAttribPointer(colorLoc, 3, GL_FLOAT, GL_FALSE, 0, 0);
  glEnableVertexAttribArray(colorLoc);

  // Dades del terra
  // Dos VBOs, un amb posició i l'altre amb color
  glm::vec3 posterra[4] = {
	glm::vec3(-1.0, -1.0, -1.0),
	glm::vec3(-1.0, -1.0, 1.0),
	glm::vec3(1.0, -1.0, -1.0),
	glm::vec3(1.0, -1.0, 1.0)
  }; 
  glm::vec3 colterra[4] = {
	glm::vec3(1,0,1),
	glm::vec3(1,0,1),
	glm::vec3(1,0,1),
	glm::vec3(1,0,1)
  };

  // Creació del Vertex Array Object per pintar
  glGenVertexArrays(1, &VAO_Terra);
  glBindVertexArray(VAO_Terra);

  glGenBuffers(1, &VBO_TerraPos);
  glBindBuffer(GL_ARRAY_BUFFER, VBO_TerraPos);
  glBufferData(GL_ARRAY_BUFFER, sizeof(posterra), posterra, GL_STATIC_DRAW);

  // Activem l'atribut vertexLoc
  glVertexAttribPointer(vertexLoc, 3, GL_FLOAT, GL_FALSE, 0, 0);
  glEnableVertexAttribArray(vertexLoc);

  glGenBuffers(1, &VBO_TerraCol);
  glBindBuffer(GL_ARRAY_BUFFER, VBO_TerraCol);
  glBufferData(GL_ARRAY_BUFFER, sizeof(colterra), colterra, GL_STATIC_DRAW);

  // Activem l'atribut colorLoc
  glVertexAttribPointer(colorLoc, 3, GL_FLOAT, GL_FALSE, 0, 0);
  glEnableVertexAttribArray(colorLoc);

  glBindVertexArray (0);
}

void MyGLWidget::carregaShaders() 
{
  // Creem els shaders per al fragment shader i el vertex shader
  QGLShader fs (QGLShader::Fragment, this);
  QGLShader vs (QGLShader::Vertex, this);
  // Carreguem el codi dels fitxers i els compilem
  fs.compileSourceFile("shaders/fragshad.frag");
  vs.compileSourceFile("shaders/vertshad.vert");
  // Creem el program
  program = new QGLShaderProgram(this);
  // Li afegim els shaders corresponents
  program->addShader(&fs);
  program->addShader(&vs);
  // Linkem el program
  program->link();
  // Indiquem que aquest és el program que volem usar
  program->bind();

  // Obtenim identificador per a l'atribut “vertex” del vertex shader
  vertexLoc = glGetAttribLocation (program->programId(), "vertex");
  // Obtenim identificador per a l'atribut “color” del vertex shader
  colorLoc = glGetAttribLocation (program->programId(), "color");
  // Uniform locations
  transLoc = glGetUniformLocation(program->programId(), "TG");
  projLoc =glGetUniformLocation(program->programId(), "proj");
  
}

void MyGLWidget::projectTransform(){

  glm::mat4 Proj=glm::perspective(M_PI/2.0,1.0,1.0,3.0);
  glUniformMatrix4fv(projLoc,1,GL_FALSE,&Proj[0][0]);

}

