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

/**
 * @brief La classe Partie représente une partie du jeu Sokoban.
 * 
 * Elle gère le niveau de difficulté, le plateau de jeu et permet de vérifier si le joueur a gagné.
 */
class Partie
{
public:
    Plateau *plateau;
    /**
     * @brief Constructeur de la classe Partie.
     * 
     * @param niveau Le niveau de difficulté de la partie.
     */
    Partie(int niveau);

    /**
     * @brief Vérifie si le joueur a gagné la partie.
     * 
     * @return true si le joueur a gagné, sinon false.
     */
    bool testersigagne();

    

    /**
     * @brief Destructeur de la classe Partie.
     */
    ~Partie();
};

#endif // PARTIE_H
