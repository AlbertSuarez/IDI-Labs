#include <QLCDNumber>
class myLCD: public QLCDNumber
{
  Q_OBJECT
  public:
  	myLCD(QWidget *parent);

  public slots:

  void setZero();
  void setNumber(int);
};
 
