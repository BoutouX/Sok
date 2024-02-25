#ifndef MUR_H
#define MUR_H

#include "case.h"

#include<QPixmap>
#include <QPainter>


/**
 * @brief La classe Mur représente une case de type mur.
 */
class Mur : public Case
{
public:
    /**
     * @brief Constructeur de la classe Mur.
     * @param x La position en x du mur.
     * @param y La position en y du mur.
     */
    Mur(int x, int y);

    /**
     * @brief Redéfinition de la méthode isclasse de la classe Case.
     */
    void isclasse() override;

    /**
     * @brief Dessine la case mur.
     * @param c Le QPainter utilisé pour dessiner la case.
     */
    void dessinercase(QPainter *c);
};


#endif // MUR_H
