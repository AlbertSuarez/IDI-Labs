#include <QTextEdit>
class MyQTextEdit: public QTextEdit
{
  Q_OBJECT
  public:
  MyQTextEdit(QWidget *parent);
  QString a;
  QString b;
  
  public slots:
    
    void receivenumber(QString number);
    void receivetext(QString text);
    void receiveok();

	/*signals:

	void setreturn(QString);*/
};
