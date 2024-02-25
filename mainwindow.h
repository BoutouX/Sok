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
#include "partie.h"
#include "message.h"
#include <iostream>
#include <string>


#include <QMainWindow>

QT_BEGIN_NAMESPACE
/**
 * @brief La classe mainwindow.
 * 
 * Cette classe permet de créer et de dessiner le jeu du sokoban final.
 */

namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    Message *m = new Message();
    Partie *partie = new Partie(1);

    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

public:
    Ui::MainWindow *ui;
    int indexof(int x, int y, int tableauCaisse[4][2]);
    void paintEvent(QPaintEvent* e);
    void keyPressEvent(QKeyEvent* event) override;
};
#endif // MAINWINDOW_H
