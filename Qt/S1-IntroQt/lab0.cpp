#include <QApplication>
#include <QFrame>
#include <QLayout>
#include <QLabel>
#include <QLineEdit>
#include <QPushButton>
#include <QVBoxLayout>


int main( int argc, char ** argv)
{
  // Creem tots els components
  QApplication app(argc, argv);
  QFrame *w = new QFrame();
  QVBoxLayout *mainLayout = new QVBoxLayout(w);                         // posem el frame 'w' com a principal
  QLabel *label_mostra   = new QLabel ( "Etiqueta de mostra", w);       // lbl1
  QHBoxLayout *layHoriz  = new QHBoxLayout();                           // lo1  Layout Horizontal
  QLabel *label_nouText  = new QLabel( "Entra el nou text:", w);        // lbl2
  QLineEdit *txtLine = new QLineEdit( "Line Edit", w);
  QHBoxLayout *qButtonLayout = new QHBoxLayout();
  // IMPORTANT
  // el simbol de '&' d'abans del Quit permet crear un atajo amb Alt+Q per tal de fer accionar el botó.
  QPushButton *quitButton = new QPushButton("&Quit", w);

  // Insertem el label i el editor de text al primer layout horizontal
  layHoriz->addWidget(label_nouText);
  layHoriz->addWidget(txtLine);

  // Insertem l'espai i el buttó de quit al layout horizontal del botó
  qButtonLayout->addItem(new QSpacerItem(30,10,QSizePolicy::Expanding,QSizePolicy::Minimum));
  qButtonLayout->addWidget(quitButton);

  // QSpacerItem(x,y,...)
  // x = espai horitzontal
  // y = espai vertical
  
  // Afegim tots els elements dins del layout principal
  mainLayout->addWidget(label_mostra);
  mainLayout->addLayout(layHoriz);
  mainLayout->addItem(new QSpacerItem(20,40,QSizePolicy::Minimum,QSizePolicy::Expanding));
  mainLayout->addLayout(qButtonLayout);

  // Connecta el fet de clicar el "quitButton" amb l'accio de close() del widget principal 'w' (frame)
  app.connect(quitButton, SIGNAL(clicked()), w, SLOT(close()));
  // Connecta el fet de canviar el text del "txtLine" amb l'accio de setText() del label_mostra
  app.connect(txtLine, SIGNAL(textChanged(const QString&)), label_mostra, SLOT(setText(const QString &)));

  w->show();
  return app.exec();
}
