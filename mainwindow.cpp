#include "mainwindow.h"
#include "ui_mainwindow.h"

#include "case.h"
#include "casevide.h"
#include "cible.h"
#include "mur.h"
#include "personnage.h"
#include "caisse.h"

#include <QDebug>
#include <QKeyEvent>
#include <QVector>




MainWindow::MainWindow(QWidget *parent): QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);


    for (int i = 0; i < ligne; i++) {
        for (int j = 0; j < col; j++) {
            tableau[i][j] = new Casevide(i*(taille), j*(taille));
        }
    }

    tableau[8][8] = new Cible(8*(taille), 8*(taille));
    tableau[8][8]->isclasse();

    tableau[2][ligne-2] = new Cible(2*(taille), (ligne-2)*(taille));
    tableau[2][ligne-2]->isclasse();

    for (int i = 0; i < ligne; i++) {
        tableau[0][i] = new Mur(0*(taille), i*(taille));
        tableau[0][i]->isclasse();

        tableau[col-1][i] = new Mur((col-1)*(taille), i*(taille));
        tableau[col-1][i]->isclasse();

    }
    for (int j = 0; j < col; j++) {
        tableau[j][0] = new Mur(j*(taille), 0*(taille));
        tableau[j][0]->isclasse();

        tableau[j][ligne-1] = new Mur(j*(taille), (ligne-1)*(taille));
        tableau[j][ligne-1]->isclasse();

    }
    tableau[1][ligne-2] = new Mur(1*(taille), (ligne-2)*(taille));
    tableau[1][ligne-2]->isclasse();

    tableau[1][ligne-3] = new Mur(1*(taille), (ligne-3)*(taille));
    tableau[1][ligne-3]->isclasse();

    tableau[2][ligne-3] = new Mur(2*(taille), (ligne-3)*(taille));
    tableau[2][ligne-3]->isclasse();

    tableau[3][ligne-3] = new Mur(3*(taille), (ligne-3)*(taille));
    tableau[3][ligne-3]->isclasse();

    p = new Personnage(50,50);

    ca[0] = new Caisse(100,100);
    ca[1] = new Caisse(150,150);
    ca[2] = new Caisse(400,100);
    ca[3] = new Caisse(100,300);
}


void MainWindow::paintEvent(QPaintEvent* e) {

    QWidget::paintEvent(e);
    QPainter painter(this);

    for (int i = 0; i < ligne; i++) {
        for (int j = 0; j < col; j++) {
            if(tableau[i][j]->classe==1){
                tableau[i][j]->dessinercase(&painter);
            }
            else if(tableau[i][j]->classe==2){
                tableau[i][j]->dessinercase(&painter);
            }
            else if(tableau[i][j]->classe==3){
                tableau[i][j]->dessinercase(&painter);
            }
        }
    }

    p->dessiner(&painter);

    ca[0]->dessiner(&painter);
    ca[1]->dessiner(&painter);
    ca[2]->dessiner(&painter);
    ca[3]->dessiner(&painter);

}


int MainWindow::indexof(int x, int y, int tableauCaisse[4][2]){
    for (int i=0; i<4; i++)
    {
        if(tableauCaisse[i][1]==x && tableauCaisse[i][2]==y){
            return i;
        }
    }
    return 400; //retourne 400 si la x,y ne contient pas de caisse (pour eviter de creer une autre fonction similaire contient
}


void MainWindow::puisjemedeplacer(const int x, const int y,int dep){

    int tableauCaisse[4][2];
    for (int i = 0; i < 4; i++) {
        tableauCaisse[i][1]= ca[i]->getX();
        tableauCaisse[i][2]= ca[i]->getY();
    }

    if (dep==0){                 //dep = 0 vers le haut, 1 a droite, 2 en bas, 3 a gauche
        if(indexof(x,y,tableauCaisse)!=400)
        {          //x,y est dans tableauCaisse
            if(tableau[x/50][(y-50)/50]->classe==1 || tableau[x/50][(y-50)/50]->classe==2){   //condition pour ne pas deplacer un caisse sur les murs
              ca[indexof(x,y,tableauCaisse)]->deplacer(x,y-50);
              p->deplacer(x,y);
            }
        }
        else if (tableau[x/50][y/50]->classe==1 || tableau[x/50][y/50]->classe==2) {
             p->deplacer(x,y);

              }

    }
// faire de meme pour les trois auytres directions
    if (dep==1){                 //dep = 0 vers le haut, 1 a droite, 2 en bas, 3 a gauche
        if(indexof(x,y,tableauCaisse)!=400){          //x,y est dans tableauCaisse
            if(tableau[(x+50)/50][(y)/50]->classe==1 || tableau[(x+50)/50][y/50]->classe==2){
                ca[indexof(x,y,tableauCaisse)]->deplacer(x+50,y);
                p->deplacer(x,y);
            }
        }
        else if (tableau[x/50][y/50]->classe==1 || tableau[x/50][y/50]->classe==2) {
            p->deplacer(x,y);

        }
    }
    if (dep==2){                 //dep = 0 vers le haut, 1 a droite, 2 en bas, 3 a gauche
        if(indexof(x,y,tableauCaisse)!=400){          //x,y est dans tableauCaisse
            if(tableau[x/50][(y+50)/50]->classe==1 || tableau[x/50][(y+50)/50]->classe==2){
                ca[indexof(x,y,tableauCaisse)]->deplacer(x,y+50);
                p->deplacer(x,y);
            }
        }
        else if (tableau[x/50][y/50]->classe==1 || tableau[x/50][y/50]->classe==2) {
            p->deplacer(x,y);

        }

    }
    // faire de meme pour les trois auytres directions
    if (dep==3){                 //dep = 0 vers le haut, 1 a droite, 2 en bas, 3 a gauche
        if(indexof(x,y,tableauCaisse)!=400){          //x,y est dans tableauCaisse
            if(tableau[(x-50)/50][(y)/50]->classe==1 || tableau[(x-50)/50][y/50]->classe==2){
                ca[indexof(x,y,tableauCaisse)-1]->deplacer(x-50,y);
                p->deplacer(x,y);
            }
        }
        else if (tableau[x/50][y/50]->classe==1 || tableau[x/50][y/50]->classe==2) {
            p->deplacer(x,y);

        }
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
        puisjemedeplacer(p->getX()-taille, p->getY(),dep);
        break;
    }
    case Qt::Key_Right :
    {
        dep=1;
        puisjemedeplacer(p->getX()+taille,p->getY(),dep);
        break;
    }
    case Qt::Key_Down :
    {
        dep=2;
        puisjemedeplacer(p->getX(),p->getY()+taille,dep);
        break;
    }
    case Qt::Key_Up :
    {
        dep=0;
        puisjemedeplacer(p->getX(),p->getY()-taille,dep);
        break;
    }
    }
    repaint();
}

MainWindow::~MainWindow()
{
    delete ui;
}



