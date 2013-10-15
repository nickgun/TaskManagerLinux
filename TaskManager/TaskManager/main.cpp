#include <QtGui/QApplication>
#include "taskmanager.h"
#include <stdio.h>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    TaskManager w;
    w.show();

    return a.exec();
}
