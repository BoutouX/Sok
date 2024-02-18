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

#include <iostream>
#include <string>

class Plateau
{
public:

    int ligne = 10;
    int col = 10;
    int taille = 50 ;

    Case* tableau[10][10];
    int tableauCaisse[4][2];

public:
    Plateau();
    Personnage *p;
    Caisse *ca[4];
    int indexof(int x, int y, int tableauCaisse[4][2]);
    void puisjemedeplacer(const int x, const int y,int dep);

};

#endif // PLATEAU_H
