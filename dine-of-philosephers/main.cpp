#include "widget.h"
#include "philosopher.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Widget w;
    w.show();
    QVector<int>d;
    d[0]=1;
    d[1]=2;
    d[2]=3;

    
    return a.exec();
}
