#ifndef CAISSE_H
#define CAISSE_H


#include <QPainter>
//!  La classe Caisse, elle permet de créer une caisse du jeu de Sokoban

class Caisse
{
protected:
//!  Les coordonnées de la caisse, elles sont protégées
    int x,y;

public:
    Caisse(int x=0,int y=0);//!< Constructeur de la classe Caisse, il prend en paramètre les coordonnées de la caisse, par défaut elles sont à 0
    /*!
    \param x int
    \param y int
    */

   /*!
    \brief Méthode qui permet de dessiner la caisse, elle prend en paramètre un QPainter, un QPainter est un objet qui permet de dessiner dans une fenêtre
   */
    void dessiner(QPainter * ca);
    /*!
    \param ca QPainter
    */

   /*! \brief Méthode permettant de déplacer la caisse, les paramètres x et y correspondent aux coordonnées */
    void deplacer(int x, int y);
    /*!
    \param x int
    \param y int
    */

    /*! \brief Méthode permettant de récupérer l'attribut protégé x */
    int getX() const;
    /*! \brief Méthode permettant de récupérer l'attribut protégé y */
    int getY() const;
    /*! \brief Méthode permettant de modifier l'attribut protégé x */
    void setX(int x);
    /*!
    \param x int
    */
    /*! \brief Méthode permettant de modifier l'attribut protégé y */
    void setY(int y);
    /*!
    \param y int
    */

};

#endif // CAISSE_H
