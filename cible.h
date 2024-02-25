#ifndef CIBLE_H
#define CIBLE_H

#include "case.h"

#include<QPixmap>
#include <QPainter>


/**
 * @brief La classe Cible représente une case cible dans le jeu.
 * 
 * Elle hérite de la classe Case et ajoute des fonctionnalités spécifiques à une case cible.
 */
class Cible : public Case
{
public:
    /**
     * @brief Constructeur de la classe Cible.
     * 
     * @param x La coordonnée x de la case cible.
     * @param y La coordonnée y de la case cible.
     */
    Cible(int x, int y);

    /**
     * @brief Redéfinition de la méthode isclasse de la classe Case.
     * 
     * Cette méthode indique que la case est de type Cible.
     */
    void isclasse() override;

    /**
     * @brief Dessine la case cible sur le QPainter spécifié.
     * 
     * @param c Le QPainter sur lequel dessiner la case cible.
     */
    void dessinercase(QPainter * c);
};


#endif // CIBLE_H
