#include <QLabel>
class MyQLabel: public QLabel
{
  Q_OBJECT
  public:
  MyQLabel(QWidget *parent);
  int i;
  
  public slots:

  void changecolor();
	/*signals:

	void setreturn(QString);*/
};
