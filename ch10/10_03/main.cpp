#include "golf.h"
#include <QCoreApplication>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    Golf ann;
    ann.showgolf();
    ann = setgolf();
    ann.showgolf();
    Golf andy("Andy Birdfree", 20);
    andy.showgolf();
    return a.exec();
}
