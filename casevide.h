#ifndef CASEVIDE_H
#define CASEVIDE_H
#include "case.h"

#include<QPixmap>
#include <QPainter>

/*! Classe Casevide, elle hérite de Case. Cette classe définit une entité graphique ou le personnage peut se déplacer*/
class Casevide : public Case
{
public:
    /*! \brief Constructeur de la classe Casevide, elle possède deux paramètres x et y initialisés a 0 par défaut */
    Casevide(int x, int y);
    /*!
    \param x int
    \param y int
    */
    /*! \brief Méthode qui permet de renvoyer l'attribut classe des Cases, c'est un identifiant pour faciliter leur manipulation*/
    void isclasse() override;
    /*! \brief Méthode qui permet de dessiner la case, elle prend en paramètre un QPainter, un QPainter est un objet qui permet de dessiner dans une fenêtre*/
    void dessinercase(QPainter * c);
    /*!
    \param c QPainter
    */
};

#endif // CASEVIDE_H
