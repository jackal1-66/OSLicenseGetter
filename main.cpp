#include "osget.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    osget w;
    w.show();
    return a.exec();
}
