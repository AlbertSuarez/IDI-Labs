#include <QTextEdit>
class MYQTextEdit: public QTextEdit {

  Q_OBJECT
  public:
  	MYQTextEdit(QWidget *parent);
  	QString texto;
  	QString num;


  public slots:

  void setTexto(QString t);

  void setNum(QString n);

  void confirmar();

  void deshacer();


};