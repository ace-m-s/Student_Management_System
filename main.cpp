#include "managemenwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    ManagemenWindow w;
    w.show();

    return a.exec();
}
