#include <QLabel>
#include <QString>
class myLabel: public QLabel
{
  Q_OBJECT
  public:
  	myLabel(QWidget *parent);
	
	
  public slots:
	void truncar(int);
};
 
