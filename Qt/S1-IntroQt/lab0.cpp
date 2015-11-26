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
  QFrame *w=new QFrame();
  QVBoxLayout *mainLayout=new QVBoxLayout(w);
  QLabel *label_mostra   = new QLabel ( "Etiqueta de mostra", w); //lbl1
  QHBoxLayout *layHoriz  = new QHBoxLayout();          // lo1  Layout Horizontal
  QLabel *label_nouText  = new QLabel( "Entra el nou text:", w);  //lbl2
  QLineEdit *txtLine=new QLineEdit( "Line Edit", w);
  QHBoxLayout *qButtonLayout = new QHBoxLayout();
  QPushButton *quitButton = new QPushButton("&Quit", w);

  // Insertem el label i el editor de text al primer layout horizontal
  layHoriz->addWidget(label_nouText);
  layHoriz->addWidget(txtLine);

  // Insertem l'espai i el buttó de quit al layout horizontal del botó
  qButtonLayout->addItem(new QSpacerItem(30,10,QSizePolicy::Expanding,QSizePolicy::Minimum));
  qButtonLayout->addWidget(quitButton);
  
  // Afegim tots els elements dins del layout principal
  mainLayout->addWidget(label_mostra);
  mainLayout->addLayout(layHoriz);
  mainLayout->addItem(new QSpacerItem(20,40,QSizePolicy::Minimum,QSizePolicy::Expanding));
  mainLayout->addLayout(qButtonLayout);

  app.connect(quitButton, SIGNAL(clicked()), w, SLOT(close()));
  app.connect(txtLine, SIGNAL(textChanged(const QString&)), label_mostra, SLOT(setText(const QString &)));

  w->show();
  return app.exec();
}
