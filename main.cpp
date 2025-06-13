#include "mainwindow.h"
#include <QApplication>
#include "QFont"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QFont font("微软雅黑",16);
    QApplication::setFont(font);
    MainWindow w;    

    w.show();

    return a.exec();
}
