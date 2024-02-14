#include "mainwindow.h"
#include "ui_mainwindow.h"

#include "case.h"
#include "casevide.h"
#include "cible.h"
#include "mur.h"
#include "personnage.h"
#include "caisse.h"
#include "plateau.h"

#include <QDebug>
#include <QKeyEvent>
#include <QVector>




MainWindow::MainWindow(QWidget *parent): QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    plateau = new Plateau();

}


void MainWindow::paintEvent(QPaintEvent* e) {

    QWidget::paintEvent(e);
    QPainter painter(this);

    for (int i = 0; i < plateau.ligne; i++) {
        for (int j = 0; j < plateau.col; j++) {
            if(plateau.tableau[i][j]->classe==1){
                plateau.tableau[i][j]->dessinercase(&painter);
            }
            else if(plateau.tableau[i][j]->classe==2){
                plateau.tableau[i][j]->dessinercase(&painter);
            }
            else if(plateau.tableau[i][j]->classe==3){
                plateau.tableau[i][j]->dessinercase(&painter);
            }
        }
    }

    plateau.p->dessiner(&painter);

    plateau.ca[0]->dessiner(&painter);
    plateau.ca[1]->dessiner(&painter);
    plateau.ca[2]->dessiner(&painter);
    plateau.ca[3]->dessiner(&painter);

}

void MainWindow::keyPressEvent(QKeyEvent* event) {

    int taille = 50;
    int dep;

    switch(event->key())
    {
    case Qt::Key_Left :
    {
        dep=3;
        puisjemedeplacer(plateau.p->getX()-taille, plateau.p->getY(),dep);
        break;
    }
    case Qt::Key_Right :
    {
        dep=1;
        puisjemedeplacer(plateau.p->getX()+taille,plateau.p->getY(),dep);
        break;
    }
    case Qt::Key_Down :
    {
        dep=2;
        puisjemedeplacer(plateau.p->getX(),plateau.p->getY()+taille,dep);
        break;
    }
    case Qt::Key_Up :
    {
        dep=0;
        puisjemedeplacer(plateau.p->getX(),plateau.p->getY()-taille,dep);
        break;
    }
    }
    repaint();
}

MainWindow::~MainWindow()
{
    delete ui;
}



