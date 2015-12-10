#include <QLCDNumber>
class MYLCD: public QLCDNumber
{
  Q_OBJECT
  public:
  	MYLCD(QWidget *parent);

  public slots:

  void posarCero();
  void posarNumero(int);
};
