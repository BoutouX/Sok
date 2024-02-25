#ifndef CAISSE_H
#define CAISSE_H


#include <QPainter>


/**
 * @brief La classe Caisse représente une caisse dans un jeu.
 * 
 * Cette classe contient les informations et les fonctionnalités nécessaires pour manipuler une caisse.
 */
class Caisse
{
protected:
    int x,y;

public:
    /*! @brief Constructeur de la classe Caisse*/
    Caisse(int x=0,int y=0);
    /*! @brief Dessine la caisse sur le QPainter spécifié.
    @param  ca Le QPainter utilisé pour le dessin*/
    void dessiner(QPainter * ca);
    /*! @brief Déplace la caisse à la position spécifiée.
    @param x La nouvelle position en x de la caisse.
    @param y La nouvelle position en y de la caisse.*/

    void deplacer(int x, int y);
    /*!Retourne la position en x de la caisse.*/
    
    int getX() const;
    /*!Retourne la position en y de la caisse.*/
    int getY() const;
    /*! Change la valeur de la position en x
    @param x La nouvelle position en x de la caisse.*/
    void setX(int x);
    /*! Change la valeur de la position en y
    @param y La nouvelle position en y de la caisse.*/


    void setY(int y);

};

#endif // CAISSE_H
