#include <QApplication>
#include <QPushButton>

// Per a poder utilitzar el contenidor QFrame
#include <QFrame>

// Per a poder utilitzar el ’layout’
#include <QLayout>

// Per a poder utilitzar QLineEdit
#include <QLineEdit>

int main(int argc, char **argv )
{

    QApplication a(argc, argv);

    QString fontFamily = "Arial";
    a.setFont(fontFamily);

    // Crea un frame
    QFrame F(0, NULL);

    // Crea un contenidor horitzontal
    QHBoxLayout* cH = new QHBoxLayout(&F);

    // Afegeix una caixa de text
    QLineEdit* le = new QLineEdit(&F);
    cH->addWidget(le);

    // Afegeix un espai (horitzontal, vertical)
    QSpacerItem *sp = new QSpacerItem(100,20);
    cH->addItem(sp);

    // Afegeix un boto
    QPushButton* ok = new QPushButton("D’acord", &F);
    cH->addWidget(ok);

    // Afegeix un altre boto
    QPushButton* surt = new QPushButton("Surt", &F);
    cH->addWidget(surt);

    F.show();
    return a.exec();
}
