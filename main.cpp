#include "mainwindow.h"
#include "personnage.h"

#include <QGraphicsView>
#include <QGraphicsScene>

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
