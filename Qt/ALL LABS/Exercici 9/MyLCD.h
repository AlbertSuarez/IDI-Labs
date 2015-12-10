#include <QLCDNumber>
class MyLCD: public QLCDNumber
{
  Q_OBJECT
  public:
  	MyLCD(QWidget *parent);
  	int NumeroSuma = 1;
  	int NumAnterior;

  public slots:

	  void resetCero();
	  void getNumero(int n);
	  void suma();
	  void resta();
	  void setNumAnt();
};
