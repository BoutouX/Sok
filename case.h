/**
 * @brief La classe Case est une classe abstraite qui sert de base pour les différentes cases d'un jeu.
 * 
 * Elle contient les méthodes virtuelles pures dessinercase et isclasse. 
 * Elle est caractérisé par ses attributs x et y qui sont les coordonnées de la case.
 */
#ifndef CASE_H
#define CASE_H

#include <QPainter>

#include <iostream>
#include <string>


class Case
{
protected:
    int x,y;


public:

    int classe=1;
    Case (int x, int y);
    /*! Méthode virtuelle pure permettant de renvoyer l'attribut classe pour différencier les types de cases*/
    virtual void isclasse()=0;
    /*! Méthode virtuelle pure permettant de dessiner la case*/
    virtual void dessinercase(QPainter * c)=0;

};

#endif // CASE_H
