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

class Plateau
{
public:

    int ligne = 10;
    int col = 10;
    int taille = 50 ;
    Personnage *p = new Personnage(50,50);
    Caisse *ca[4] = {new Caisse(100,100),new Caisse(150,150),new Caisse(400,100),new Caisse(100,300)};
    Case* tableau[10][10];
    int tableauCaisse[4][2];
    ~Plateau();
public:
    Plateau();
    int indexof(int x, int y, int tableauCaisse[4][2]);
    void puisjemedeplacer(const int x, const int y,int dep);

};

#endif // PLATEAU_H
