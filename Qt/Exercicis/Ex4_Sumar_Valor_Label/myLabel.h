#include <QLabel>
#include <QString>
class myLabel: public QLabel
{
  Q_OBJECT
  public:
  	myLabel(QWidget *parent);
	int suma;
	
  public slots:
	void sumOne();
	void sumTwo();
	void setZero();
};
 
