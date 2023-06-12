#include "statuspanel.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    StatusPanel w;
    w.show();
    return a.exec();
}
