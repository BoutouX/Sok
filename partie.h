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
/*La classe Partie, cette classe permet de définir les règles de jeu du sokoban, on définit les paramètres de jeu*/
class Partie
{
public:
    /*! \brief Attribut plateau, cet attribut est de type plateau, cet objet représente le terrain de jeu*/
    Plateau* plateau;
    
    Partie();

    bool testersigagne();
};

#endif // PARTIE_H
