#include "maptutorial.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MapTutorial w;
    w.show();
    return a.exec();
}
