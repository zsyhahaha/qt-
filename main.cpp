#include "widget.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    qRegisterMetaType<QVector<int>>("QVector<int>");
    QApplication a(argc, argv);
    Widget w;
    w.show();

    return a.exec();
}
