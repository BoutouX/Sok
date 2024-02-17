#include "mainwindow.h"
#include "ui_mainwindow.h"

#include "case.h"
#include "casevide.h"
#include "cible.h"
#include "mur.h"
#include "personnage.h"
#include "caisse.h"
#include "plateau.h"
#include "partie.h"

#include <QDebug>
#include <QKeyEvent>
#include <QVector>




MainWindow::MainWindow(QWidget *parent): QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    partie = new Partie();
}


void MainWindow::paintEvent(QPaintEvent* e) {

    QWidget::paintEvent(e);
    QPainter painter(this);

    for (int i = 0; i < partie->plateau->ligne; i++) {
        for (int j = 0; j < partie->plateau->col; j++) {
            if(partie->plateau->tableau[i][j]->classe==1){
                partie->plateau->tableau[i][j]->dessinercase(&painter);
            }
            else if(partie->plateau->tableau[i][j]->classe==2){
                partie->plateau->tableau[i][j]->dessinercase(&painter);
            }
            else if(partie->plateau->tableau[i][j]->classe==3){
                partie->plateau->tableau[i][j]->dessinercase(&painter);
            }
        }
    }

    partie->plateau->p->dessiner(&painter);

    partie->plateau->ca[0]->dessiner(&painter);
    partie->plateau->ca[1]->dessiner(&painter);
    partie->plateau->ca[2]->dessiner(&painter);
    partie->plateau->ca[3]->dessiner(&painter);

}

void MainWindow::keyPressEvent(QKeyEvent* event) {

    int taille = 50;
    int dep;

    switch(event->key())
    {
    case Qt::Key_Left :
    {
        dep=3;
        partie->plateau->puisjemedeplacer(partie->plateau->p->getX()-taille, partie->plateau->p->getY(),dep);
        break;
    }
    case Qt::Key_Right :
    {
        dep=1;
        partie->plateau->puisjemedeplacer(partie->plateau->p->getX()+taille, partie->plateau->p->getY(),dep);
        break;
    }
    case Qt::Key_Down :
    {
        dep=2;
        partie->plateau->puisjemedeplacer(partie->plateau->p->getX(),partie->plateau->p->getY()+taille,dep);
        break;
    }
    case Qt::Key_Up :
    {
        dep=0;
        partie->plateau->puisjemedeplacer(partie->plateau->p->getX(), partie->plateau->p->getY()-taille,dep);
        break;
    }
    }
    repaint();
}

MainWindow::~MainWindow()
{
    delete ui;
}



