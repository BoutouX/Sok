#ifndef PERSONNAGE_H
#define PERSONNAGE_H

#include <QPainter>
#include <QObject>
#include <QRect>

/*! Classe personnage, cette classe crée le personnage du jeu, dans notre cas Wall-E. */
class Personnage
{

private:
    /*! \brief Attributs du personnage, ses coordonnées sont enregistrées dans deux entiers x et y */
    int x,y;

public:
    /*! \brief Constructeur de la classe Personnage, il prend en paramètre les coordonnées du personnage, par défaut elles sont à 0 */
    Personnage(int x=0,int y=0);
    /*!
    \param x int
    \param y int
    */
    /*! \brief Méthode qui permet de dessiner le personnage, elle prend en paramètre un QPainter, un QPainter est un objet qui permet de dessiner dans une fenêtre */
    void dessiner(QPainter * p);
    /*!
    \param p QPainter
    */
    /*! \brief Méthode permettant de déplacer le personnage, les paramètres x et y correspondent aux coordonnées */
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

#endif // PERSONNAGE_H
