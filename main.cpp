#include "calci.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    calci w;
    w.show();

    return a.exec();
}
