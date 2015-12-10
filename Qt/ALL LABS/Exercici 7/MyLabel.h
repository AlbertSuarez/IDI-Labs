#include <QLabel>
class MyLabel: public QLabel
{
  Q_OBJECT
  public:
		MyLabel(QWidget *parent);
		int i = 0;

	public slots:
  		void canvi();
};
