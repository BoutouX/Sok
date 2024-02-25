#ifndef CASEVIDE_H
#define CASEVIDE_H
#include "case.h"

#include<QPixmap>
#include <QPainter>


/**
 * @brief La classe Casevide représente une case vide dans le jeu.
 */
class Casevide : public Case
{
public:
    /**
     * @brief Constructeur de la classe Casevide.
     * @param x La position en x de la case.
     * @param y La position en y de la case.
     */
    Casevide(int x, int y);

    /**
     * @brief Redéfinition de la méthode isclasse de la classe Case.
     */
    void isclasse() override;

    /**
     * @brief Dessine la case vide.
     * @param c Le QPainter utilisé pour dessiner la case.
     */
    void dessinercase(QPainter * c);
};

#endif // CASEVIDE_H
