#include <QtGui/QApplication>
#include "switcher.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Switcher w;
    w.show();

    return a.exec();

}
