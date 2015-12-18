#include <QPushButton>
#include <QString>
class myButton: public QPushButton
{
  Q_OBJECT
  public:
  	myButton(QWidget *parent);
	bool isGreen;
	
  public slots:
	void changeColor();
};
 
