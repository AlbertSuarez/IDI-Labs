#include <QLabel>
#include <QString>
class myLabel: public QLabel
{
  Q_OBJECT
  public:
  	myLabel(QWidget *parent);
	int red;
	int green;
	int blue;
	
	
  public slots:
	void getRed(int n);
	void getGreen(int n);
	void getBlue(int n);
	void ok();

};
 
