#include "MainWindow.h"
#include <QApplication>

#include "DGPSMesGen.h"


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}