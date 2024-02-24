#ifndef CASE_H
#define CASE_H

#include <QPainter>
//!  La classe Case, elle permet de créer une case du jeu de Sokoban et de ses dérivées (Mur, Caisse, Cible, Personnage, Vide)
#include <iostream>
#include <string>


class Case
{
protected:
/*! \brief Les attributs x et y de Case sont protégés */
    int x,y;


public:

    int classe=1;
    /*! \brief Constructeur de la classe Case, il prend en paramètre les coordonnées de la case, par défaut elles sont à 0 */
    Case (int x, int y);
    /*!
    \param x int
    \param y int
    */  
    /*! \brief Méthode qui permet de dessiner la case, elle prend en paramètre un QPainter, un QPainter est un objet qui permet de dessiner dans une fenêtre */
    virtual void isclasse()=0;
    

    virtual void dessinercase(QPainter * c)=0;
    /*!
    \param c QPainter
    */

};

#endif // CASE_H
