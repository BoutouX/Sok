#include "mainwindow.h"
#include "ui_mainwindow.h"


#include <QDebug>
#include <QKeyEvent>
#include <QVector>
#include <QWidget>
#include <QPainter>
#include<QPixmap>

MainWindow::MainWindow(QWidget *parent): QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}


void MainWindow::paintEvent(QPaintEvent* e) {

    QWidget::paintEvent(e);
    QPainter painter(this);


    if (partie->testersigagne() && (partie->plateau->niveau)==2){
        m->dessiner2(&painter);
    }
    else if(partie->testersigagne()) {
        m->dessiner1(&painter);
    }
    else{
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

        if (partie->plateau->niveau == 1) {
            for(int i=0;i<4;i++){
                partie->plateau->ca1[i]->dessiner(&painter);

            }

        } else if (partie->plateau->niveau == 2) {
            for(int i=0;i<6;i++){
                partie->plateau->ca2[i]->dessiner(&painter);
            }
        }
    }

}

void MainWindow::keyPressEvent(QKeyEvent* event) {

    int taille = 50;
    int dep;
    int key = event->key();
    QMainWindow::keyPressEvent(event);
    switch(key)
    {
    case Qt::Key_Right:
        dep = 1;
        partie->plateau->puisjemedeplacer((partie->plateau->p->getX()) + taille, partie->plateau->p->getY(), dep);
        break;
    case Qt::Key_Left:

        dep = 3;
        partie->plateau->puisjemedeplacer((partie->plateau->p->getX()) - taille, partie->plateau->p->getY(), dep);
        break;
    case Qt::Key_Down:
        dep = 2;
        partie->plateau->puisjemedeplacer(partie->plateau->p->getX(), (partie->plateau->p->getY()) + taille, dep);
        break;
    case Qt::Key_Up:
        dep = 0;
        partie->plateau->puisjemedeplacer(partie->plateau->p->getX(), (partie->plateau->p->getY()) - taille, dep);
        break;
    case Qt::Key_Enter:
        partie->plateau->niveau=2;
        partie->plateau = new Plateau(2);
        break;
    }
    repaint();

}

MainWindow::~MainWindow()
{
    delete partie;
    delete ui;
}



