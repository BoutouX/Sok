#ifndef PLATEAU_H
#define PLATEAU_H

#include <QPainter>
#include <QKeyEvent>
#include <QList>
#include <QPoint>
#include "personnage.h"
#include "caisse.h"
#include "mur.h"
#include "case.h"
#include "cible.h"
#include "casevide.h"
#include "partie.h"
#include "personnage.h"


#include <iostream>
#include <string>

/**
 * @brief Classe représentant le plateau de jeu.
 * Cette classe gère le plateau de jeu, les cases, les caisses et le personnage. Elle permet les diffférentes manipulations du plateau.
 * On peut y trouver les méthodes permettant de dessiner le plateau, de déplacer le personnage, de vérifier si le personnage peut se déplacer, etc.
 */
class Plateau
{
public:


    int ligne = 10;
    int col = 10;
    int taille = 50 ;
    int niveau;
    Personnage *p = new Personnage(50,50);
    Caisse *ca1[4] = {new Caisse(100,100),new Caisse(150,150),new Caisse(400,100),new Caisse(200,300)};
    Caisse *ca2[6] = {new Caisse(100,100),new Caisse(150,150),new Caisse(400,100),new Caisse(250,300), new Caisse(300,300),new Caisse(350,300)};
    Case* tableau[10][10];
    int tableauCaisse1[4][2];
    int tableauCaisse2[6][2];

    ~Plateau();
public:
/*Constructeur de la classe plateau, il initialise le plateau avec le niveau de difficulté choisis*/
    Plateau(int niveau);
    int indexof(int x, int y, int tableauCaisse1[4][2], int tableauCaisse2[6][2]);
    
    void puisjemedeplacer(const int x, const int y,int dep);

};

#endif // PLATEAU_H
