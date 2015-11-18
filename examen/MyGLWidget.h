#define GLM_FORCE_RADIANS
#include <QGLWidget>
#include <QGLShader>
#include <QGLShaderProgram>
#include <QKeyEvent>
#include <cmath>
#include "glm/glm.hpp"
#include "glm/gtc/matrix_transform.hpp"

#include "model.h"

class MyGLWidget : public QGLWidget 
{
  Q_OBJECT

  public:
    MyGLWidget (QGLFormat &f, QWidget *parent=0);
  
  protected:
    // initializeGL - Aqui incluim les inicialitzacions del contexte grafic.
    virtual void initializeGL ();

    // paintGL - Mètode cridat cada cop que cal refrescar la finestra.
    // Tot el que es dibuixa es dibuixa aqui.
    virtual void paintGL ();
 
    // resizeGL - Es cridat quan canvi la mida del widget
    virtual void resizeGL (int width, int height);  

    // keyPressEvent - Es cridat quan es prem una tecla
    virtual void keyPressEvent (QKeyEvent *event); 
    // mouse{Press/Release/Move}Event - Són cridades quan es realitza l'event 
    // corresponent de ratolí
    virtual void mousePressEvent (QMouseEvent *event);
    virtual void mouseReleaseEvent (QMouseEvent *event);
    virtual void mouseMoveEvent (QMouseEvent *event);

  private:
    void createBuffers ();
    void updateModel();
    void carregaShaders ();
    void projectTransform ();
    void viewTransform ();
    void modelTransformTerra ();
    void modelTransformPatricio1 ();
    void modelTransformPatricio2 ();
    void modelTransformPatricio3 ();
    void modelTransformCow ();
    void calculaCapsaModel ();
    void calculaCapsaModelCow ();
    void carregaFocus();

    // VAO i VBO names
    GLuint VAO_Patr, VBO_PatrPos, VBO_PatrNorm, VBO_PatrMatamb, VBO_PatrMatdiff, VBO_PatrMatspec, VBO_PatrMatshin;
    GLuint VAO_Cow, VBO_CowPos, VBO_CowNorm, VBO_CowMatamb, VBO_CowMatdiff, VBO_CowMatspec, VBO_CowMatshin;
    GLuint VAO_Terra, VBO_TerraPos, VBO_TerraNorm, VBO_TerraMatamb, VBO_TerraMatdiff, VBO_TerraMatspec, VBO_TerraMatshin;
    QGLShaderProgram *program;

    GLuint transLoc, projLoc, viewLoc, posFocusLoc;
    GLuint vertexLoc, normalLoc, matambLoc, matdiffLoc, matspecLoc, matshinLoc;
    Model patr, cow;
    // paràmetres calculats a partir de la capsa contenidora del model
    glm::vec3 centrePatr, centrebasePatr, centreCow, centrebaseCow;
    float escala, escalaPatrPetit, escalaCow, distance, FOVini, FOV, ZNear, ZFar, ra, zoom, angle, movX;
    glm::vec3 posFocus, OBS, VRP, UP;

    struct Capsa {
        float minx, miny, minz, maxx, maxy, maxz;

        glm::vec3 getCentre() {
            return glm::vec3((minx+maxx)/2.0, (miny+maxy)/2.0, (minz+maxz)/2.0);
        }

        glm::vec3 getBaseCentre() {
            return glm::vec3((minx+maxx)/2.0, miny, (minz+maxz)/2.0);
        }

        float getRadi() {
            //return sqrt((maxx-minx)*(maxx-minx)+(maxy-miny)*(maxy-miny)+(maxz-minz)*(maxz-minz))/2;
            return (glm::distance(glm::vec3(maxx, maxy, maxz), glm::vec3(minx, miny, minz)))/2;
        }

        float getRadiv2() {
            return sqrt((maxx-minx)*(maxx-minx)+(2*(maxy-miny))*(2*(maxy-miny))+(maxz-minz)*(maxz-minz))/2;
        }
    };
    Capsa capsa, capsaCow;

    typedef  enum {NONE, ROTATE} InteractiveAction;
    InteractiveAction DoingInteractive;
    int xClick, yClick;
    float angleY, angleX;
};
