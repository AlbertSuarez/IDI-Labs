#include <QLineEdit>
class MyQLineEdit: public QLineEdit
{
  Q_OBJECT
  public:
  MyQLineEdit(QWidget *parent);
  
  public slots:
    
    void recibereturn();

	signals:

	void setreturn(QString);
};
