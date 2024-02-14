#ifndef MAINWINDOW_H
#define MAINWINDOW_H


#include <QMainWindow>
#include <QPainter>
#include <QKeyEvent>
#include <QList>
#include <QPoint>
#include "personnage.h"
#include "caisse.h"
#include "mur.h"
#include "case.h"
#include "cible.h"
#include "plateau.h"

#include <iostream>
#include <string>


#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

protected:
    Plateau *plateau;

    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;

    int indexof(int x, int y, int tableauCaisse[4][2]);
    void paintEvent(QPaintEvent* e);
    void keyPressEvent(QKeyEvent* event);
    void puisjemedeplacer(const int x, const int y,int dep);
};
#endif // MAINWINDOW_H
