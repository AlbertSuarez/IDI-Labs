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

    // Crea un contenidor horitzontal/vertical
    QHBoxLayout* cH = new QHBoxLayout(&F);
    //QVBoxLayout* cH = new QVBoxLayout(&F);

    // Afegeix una caixa de text
    QLineEdit* le = new QLineEdit(&F);
    cH->addWidget(le);

    // Afegeix un espai en el contenidor horitzontal/vertical per la dreta/per abaix. El parametre que ho indica es el primer.
    QSpacerItem *sp = new QSpacerItem(100,20);
    cH->addItem(sp);

    // Creem un layout vertical per tal d'afegir nomes els dos botons en posicio vertical
    QVBoxLayout* cV = new QVBoxLayout(&F);
    cH->addItem(cV);

    // Afegeix un boto
    QPushButton* ok = new QPushButton("D’acord", &F);
    cV->addWidget(ok);

    // Afegeix un altre boto
    QPushButton* surt = new QPushButton("Surt", &F);
    cV->addWidget(surt);

    F.show();
    return a.exec();
}
