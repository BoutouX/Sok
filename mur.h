#ifndef MUR_H
#define MUR_H

#include "case.h"

#include<QPixmap>
#include <QPainter>

/*classe %ur, cette classe définit un objet graphique qui délimite le terrain du jeu, le personnage ne peut pas traverser cette entité, les caisses non plus*/
class Mur : public Case
{
public:
    /*! \brief Constructeur de la classe Mur, elle possède deux paramètres x et y initialisés a 0 par défaut */
    Mur(int x, int y);
    /*!
    \param x int
    \param y int
    */
    /*! \brief Méthode qui permet de renvoyer l'attribut classe des Cases, c'est un identifiant pour faciliter leur manipulation*/
    void isclasse() override ;
    /*! \brief Méthode qui permet de dessiner la case, elle prend en paramètre un QPainter, un QPainter est un objet qui permet de dessiner dans une fenêtre*/
    void dessinercase(QPainter * c);
    /*!
    \param c QPainter
    */


};

#endif // MUR_H
