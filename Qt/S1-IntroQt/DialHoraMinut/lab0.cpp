#include <QApplication>
#include <QFrame>
#include <QLayout>
#include <QLabel>
#include <QLineEdit>
#include <QPushButton>
#include <QVBoxLayout>
#include <QLCDNumber>                                           // import per ficar el Number en LCD
#include <QDial>

int main( int argc, char ** argv)
{
  // Creem tots els components
  QApplication app(argc, argv);
  QFrame *w = new QFrame();
  QVBoxLayout *mainLayout = new QVBoxLayout(w);                // layout principal
  QHBoxLayout *layoutHM = new QHBoxLayout();                   // layout horitzontal per Hora i Minut
  QHBoxLayout *layoutNumbers = new QHBoxLayout();              // layout horitzontal per Numeros
  QHBoxLayout *layoutDials = new QHBoxLayout();                // layout horitzontal per Dials
  QHBoxLayout *layoutExit = new QHBoxLayout();                 // layout horitzontal per Exit

  mainLayout->addItem(layoutHM);
  mainLayout->addItem(layoutNumbers);
  mainLayout->addItem(layoutDials);
  mainLayout->addItem(layoutExit);

  // ---------------- PRIMER LAYOUT

  QLabel *label_Hours = new QLabel ("Hours");                 // labelHours
  QLabel *label_Minutes = new QLabel ("Minutes");             // labelMinutes

  // Afegim els labels de hora i minutes
  layoutHM->addWidget(label_Hours);
  layoutHM->addWidget(label_Minutes);

  // ---------------- SEGON LAYOUT

  QLCDNumber *label_Hours_LCD = new QLCDNumber();               // Numero Hour
  QLCDNumber *label_Minutes_LCD = new QLCDNumber();             // Numero Minute

  /*
  // Configurem el Hour
  label_Hours_LCD->setFixedSize(800, 245);
  label_Hours_LCD->setDigitCount(23);
  label_Hours_LCD->display("0");

  // Configurem el Minute
  label_Minutes_LCD->setFixedSize(800, 245);
  label_Minutes_LCD->setDigitCount(23);
  label_Minutes_LCD->display("0");
  */

  // Afegim els labels dels numeros
  layoutNumbers->addWidget(label_Hours_LCD);
  layoutNumbers->addWidget(label_Minutes_LCD);


  // --------------- TERCER LAYOUT

  QDial *label_Hours_Dial = new QDial();                        // Dial Hour
  QDial *label_Minutes_Dial = new QDial();                      // Dial Minute

  // Afegim els labels dels dials

  layoutDials->addWidget(label_Hours_Dial);
  layoutDials->addWidget(label_Minutes_Dial);

  // --------------- QUART LAYOUT

  QPushButton* exit = new QPushButton("Exit");                 // Exit

  // Afegim els labels del exit
  layoutExit->addWidget(exit);


  // ---------------------------------------------------------

  // Connecta el fet de clicar el "quitButton" amb l'accio de close() del widget principal 'w' (frame)
  app.connect(exit, SIGNAL(clicked()), w, SLOT(close()));
  // Connecta el fet de canviar el text del "txtLine" amb l'accio de setText() del label_mostra
  // app.connect(txtLine, SIGNAL(textChanged(const QString&)), label_mostra, SLOT(setText(const QString &)));

  w->show();
  return app.exec();
}
