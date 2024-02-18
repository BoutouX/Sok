#ifndef PARTIE_H
#define PARTIE_H

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
#include "plateau.h"

class Plateau;

class Partie
{
public:

    Plateau* plateau;
    Partie();

    bool testersigagne();
};

#endif // PARTIE_H
