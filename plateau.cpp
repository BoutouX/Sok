#include "plateau.h"
#include "personnage.h"


#include <QDebug>
#include <QKeyEvent>
#include <QVector>

Plateau::Plateau(int niveau){

    this->niveau=niveau;

    for (int i = 0; i < ligne; i++) {
        for (int j = 0; j < col; j++) {
            tableau[i][j] = new Casevide(i*(taille), j*(taille));
        }
    }

    tableau[8][8] = new Cible(8*(taille), 8*(taille));
    tableau[8][8]->isclasse();

    tableau[2][ligne-2] = new Cible(2*(taille), (ligne-2)*(taille));
    tableau[2][ligne-2]->isclasse();

    tableau[3][ligne-5] = new Cible(3*(taille), (ligne-5)*(taille));
    tableau[3][ligne-5]->isclasse();

    tableau[2][ligne-4] = new Cible(2*(taille), (ligne-4)*(taille));
    tableau[2][ligne-4]->isclasse();

    if(niveau==2){
            tableau[4][ligne-4] = new Cible(4*(taille), (ligne-4)*(taille));
            tableau[4][ligne-4]->isclasse();

            tableau[2][ligne-6] = new Cible(2*(taille), (ligne-6)*(taille));
            tableau[2][ligne-6]->isclasse();

            tableau[1][ligne-2] = new Mur(1*(taille), (ligne-2)*(taille));
            tableau[1][ligne-2]->isclasse();

            tableau[1][ligne-3] = new Mur(1*(taille), (ligne-3)*(taille));
            tableau[1][ligne-3]->isclasse();

            tableau[2][ligne-3] = new Mur(2*(taille), (ligne-3)*(taille));
            tableau[2][ligne-3]->isclasse();

            tableau[3][ligne-3] = new Mur(3*(taille), (ligne-3)*(taille));
            tableau[3][ligne-3]->isclasse();

        }

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

}


int Plateau::indexof(int x, int y, int tableauCaisse1[4][2], int tableauCaisse2[6][2]){
    if(this->niveau==1){
        for (int l=0; l<4; l++)
        {
            if(tableauCaisse1[l][1]==x && tableauCaisse1[l][2]==y){
                return l;
            }
        }
        return 400; //retourne 400 si la x,y ne contient pas de caisse (pour eviter de creer une autre fonction similaire contient
    }
    else if(this->niveau==2){
        for (int l=0; l<6; l++)
        {
            if(tableauCaisse2[l][1]==x && tableauCaisse2[l][2]==y){
                return l;
            }
        }
        return 400; //retourne 400 si la x,y ne contient pas de caisse (pour eviter de creer une autre fonction similaire contient
    }
}

void Plateau::puisjemedeplacer(const int x, const int y,int dep){

    if (this->niveau==1){
        for (int k = 0; k < sizeof(tableauCaisse1); k++) {
            tableauCaisse1[k][1]= ca1[k]->getX();
            tableauCaisse1[k][2]= ca1[k]->getY();
        }
        if (dep==0){                 //dep = 0 vers le haut, 1 a droite, 2 en bas, 3 a gauche
            if(indexof(x,y,tableauCaisse1,tableauCaisse2)!=400){          //x,y est dans tableauCaisse
                if(tableau[x/50][(y-50)/50]->classe==1 || tableau[x/50][(y-50)/50]->classe==2){   //condition pour ne pas deplacer un caisse sur les murs
                    if(indexof(x,y-50,tableauCaisse1,tableauCaisse2)==400){
                        ca1[indexof(x,y,tableauCaisse1,tableauCaisse2)]->deplacer(x,y-50);
                        p->deplacer(x, y);
                    }
                }
            }
            else if (tableau[x/50][y/50]->classe==1 || tableau[x/50][y/50]->classe==2) {

                p->deplacer(x, y);
            }
        }
        // faire de meme pour les trois auytres directions
        if (dep==1){                 //dep = 0 vers le haut, 1 a droite, 2 en bas, 3 a gauche
            if((indexof(x,y,tableauCaisse1,tableauCaisse2))!=400){          //x,y est dans tableauCaisse
                if(tableau[(x+50)/50][y/50]->classe==1 || tableau[(x+50)/50][y/50]->classe==2){
                    if(indexof(x+50,y,tableauCaisse1,tableauCaisse2)==400){

                        ca1[indexof(x,y,tableauCaisse1,tableauCaisse2)]->deplacer(x+50,y);
                        p->deplacer(x, y);
                    }
                }
            }
            else if (tableau[x/50][y/50]->classe==1 || tableau[x/50][y/50]->classe==2) {

                p->deplacer(x, y);


            }
        }
        if (dep==2){                                                //dep = 0 vers le haut, 1 a droite, 2 en bas, 3 a gauche
            if(indexof(x,y,tableauCaisse1,tableauCaisse2)!=400){                   //x,y est dans tableauCaisse
                if(tableau[x/50][(y+50)/50]->classe==1 || tableau[x/50][(y+50)/50]->classe==2){
                    if(indexof(x,y+50,tableauCaisse1,tableauCaisse2)==400){
                        ca1[indexof(x,y,tableauCaisse1,tableauCaisse2)]->deplacer(x,y+50);
                        p->deplacer(x, y);
                    }
                }
            }
            else if (tableau[x/50][y/50]->classe==1 || tableau[x/50][y/50]->classe==2) {
                p->deplacer(x, y);
            }
        }
        if (dep==3){                 //dep = 0 vers le haut, 1 a droite, 2 en bas, 3 a gauche
            if(indexof(x,y,tableauCaisse1,tableauCaisse2)!=400){          //x,y est dans tableauCaisse
                if(tableau[(x-50)/50][(y)/50]->classe==1 || tableau[(x-50)/50][y/50]->classe==2){
                    if(indexof(x-50,y,tableauCaisse1,tableauCaisse2)==400){
                        ca1[indexof(x,y,tableauCaisse1,tableauCaisse2)]->deplacer(x-50,y);
                        p->deplacer(x, y);
                    }
                }
            }
            else if (tableau[x/50][y/50]->classe==1 || tableau[x/50][y/50]->classe==2) {
                p->deplacer(x, y);

            }
        }
    }
    else{

        for (int k = 0; k < sizeof(tableauCaisse2); k++) {
            tableauCaisse2[k][1]= ca2[k]->getX();
            tableauCaisse2[k][2]= ca2[k]->getY();

        }


        if (dep==0){                 //dep = 0 vers le haut, 1 a droite, 2 en bas, 3 a gauche
            if(indexof(x,y,tableauCaisse1,tableauCaisse2)!=400){          //x,y est dans tableauCaisse
                if(tableau[x/50][(y-50)/50]->classe==1 || tableau[x/50][(y-50)/50]->classe==2){   //condition pour ne pas deplacer un caisse sur les murs
                    if(indexof(x,y-50,tableauCaisse1,tableauCaisse2)==400){
                        ca2[indexof(x,y,tableauCaisse1,tableauCaisse2)]->deplacer(x,y-50);
                        p->deplacer(x, y);
                    }
                }
            }
            else if (tableau[x/50][y/50]->classe==1 || tableau[x/50][y/50]->classe==2) {

                p->deplacer(x, y);
            }
        }
        // faire de meme pour les trois auytres directions
        if (dep==1){                 //dep = 0 vers le haut, 1 a droite, 2 en bas, 3 a gauche
            if((indexof(x,y,tableauCaisse1,tableauCaisse2))!=400){          //x,y est dans tableauCaisse
                if(tableau[(x+50)/50][y/50]->classe==1 || tableau[(x+50)/50][y/50]->classe==2){
                    if(indexof(x+50,y,tableauCaisse1,tableauCaisse2)==400){

                        ca2[indexof(x,y,tableauCaisse1,tableauCaisse2)]->deplacer(x+50,y);
                        p->deplacer(x, y);
                    }
                }
            }
            else if (tableau[x/50][y/50]->classe==1 || tableau[x/50][y/50]->classe==2) {

                p->deplacer(x, y);


            }
        }
        if (dep==2){                                                //dep = 0 vers le haut, 1 a droite, 2 en bas, 3 a gauche
            if(indexof(x,y,tableauCaisse1,tableauCaisse2)!=400){                   //x,y est dans tableauCaisse
                if(tableau[x/50][(y+50)/50]->classe==1 || tableau[x/50][(y+50)/50]->classe==2){
                    if(indexof(x,y+50,tableauCaisse1,tableauCaisse2)==400){
                        ca2[indexof(x,y,tableauCaisse1,tableauCaisse2)]->deplacer(x,y+50);
                        p->deplacer(x, y);
                    }
                }
            }
            else if (tableau[x/50][y/50]->classe==1 || tableau[x/50][y/50]->classe==2) {
                p->deplacer(x, y);
            }
        }
        if (dep==3){                 //dep = 0 vers le haut, 1 a droite, 2 en bas, 3 a gauche
            if(indexof(x,y,tableauCaisse1,tableauCaisse2)!=400){          //x,y est dans tableauCaisse
                if(tableau[(x-50)/50][(y)/50]->classe==1 || tableau[(x-50)/50][y/50]->classe==2){
                    if(indexof(x-50,y,tableauCaisse1,tableauCaisse2)==400){
                        ca2[indexof(x,y,tableauCaisse1,tableauCaisse2)]->deplacer(x-50,y);
                        p->deplacer(x, y);
                    }
                }
            }
            else if (tableau[x/50][y/50]->classe==1 || tableau[x/50][y/50]->classe==2) {
                p->deplacer(x, y);

            }
        }
    }

}
Plateau::~Plateau() {
    // Libérer la mémoire de l'objet Personnage
    delete p;

    // Libérer la mémoire de chaque objet Caisse dans le tableau de caisse
    for (int i = 0; i < 4; ++i) {
        delete ca1[i];
    }
    for (int i = 0; i < ligne; i++) {
        for (int j = 0; j < col; j++) {
            delete tableau[i][j];
        }
    }
    for (int i = 0; i < 6; ++i) {
        delete ca2[i];
    }
}
