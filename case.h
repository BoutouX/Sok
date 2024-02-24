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
    /*! \brief Attribut classe, il permet de distinguer les différentes cases entre elles */
    int classe=1;
    /*! \brief Constructeur de la classe Case, il prend en paramètre les coordonnées de la case, par défaut elles sont à 0 */
    Case (int x, int y);
    /*!
    \param x int
    \param y int
    */  
    /*! \brief Cette méthodes permet de renvoyer l'attribut classe des Cases, c'est un identifiant pour faciliter leur manipulation*/
    virtual void isclasse()=0;

    /*! \brief Méthode qui permet de dessiner la case, elle prend en paramètre un QPainter, un QPainter est un objet qui permet de dessiner dans une fenêtre. Cette méthode est abstraite */
    virtual void dessinercase(QPainter * c)=0;
    /*!
    \param c QPainter
    */

};

#endif // CASE_H
