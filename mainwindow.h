#ifndef MAINWINDOW_H
#define MAINWINDOW_H


#include <QMainWindow>
#include <QPainter>
#include <QKeyEvent>
#include <QList>
#include <QPoint>
#include "personnage.h"
#include "mur.h"
#include "case.h"
#include "cible.h"


#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:

    int ligne = 10;
    int col = 10;
    int taille = 50 ;

    Case* tableau[10][10];

    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    Personnage *p;
    void paintEvent(QPaintEvent* e);
    void keyPressEvent(QKeyEvent* event);
    void puisjemedeplacer(const int x, const int y);
};
#endif // MAINWINDOW_H
