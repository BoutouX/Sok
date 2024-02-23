#include "mainwindow.h"
#include "ui_mainwindow.h"


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

                partie->plateau->tableau[i][j]->dessinercase(&painter);
        }
    }

    partie->plateau->p->dessiner(&painter);


    for (int i=0; i< partie->nbrcaisse;i++){
        partie->plateau->ca[i]->dessiner(&painter);
    }
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



