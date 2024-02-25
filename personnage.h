#ifndef PERSONNAGE_H
#define PERSONNAGE_H

#include <QPainter>
#include <QObject>
#include <QRect>


/**
 * @brief La classe Personnage représente un personnage dans le jeu.
 */
class Personnage
{

public:
    int x,y;

public:
/*! Constructeur de la classe personnage*/
    Personnage(int x=0,int y=0);
    /*!Dessine le personnage sur le QPainter spécifié.*/
    void dessiner(QPainter * p);    
    /*!Déplace le personnage à la position spécifiée.*/
    void deplacer(int new_x, int new_y);
    /*!Retourne la position en x du personnage.*/
    int getX() const;
    /*!Retourne la position en y du personnage.*/
    int getY() const;
    /*!Définit la position en x du personnage.*/
    void setX(int x);
    /*!Définit la position en y du personnage.*/
    void setY(int y);

};

#endif // PERSONNAGE_H
