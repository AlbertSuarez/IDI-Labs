#include <QApplication>
#include “myForm.h“
int main( int argc, char ** argv )
{
 QApplication app( argc, argv);
myForm form;
form.show();
return app.exec();
}
