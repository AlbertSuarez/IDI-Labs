#include <QLabel>

class MyLabel: public QLabel
{
  Q_OBJECT
  public:
  	MyLabel(QWidget *parent);
  	int un;
  	int dos;
  	int tres;

  public slots:
  	void numUn(int n);
  	void numDos(int n);
  	void numTres(int n);
  	void Ok();
};
