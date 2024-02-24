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


class Partie
{
public:
    /*! \brief Attribut plateau, cet attribut est de type plateau, cet objet représente le terrain de jeu*/
    
    Partie();
    Partie(int niveau);
    bool testersigagne();
    Plateau *plateau;
    ~Partie();
};

#endif // PARTIE_H
