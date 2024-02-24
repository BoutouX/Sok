#ifndef PLATEAU_H
#define PLATEAU_H

#include <QPainter>
#include <QKeyEvent>
#include <QList>
#include <QPoint>
#include "personnage.h"
#include "caisse.h"
#include "mur.h"
#include "case.h"
#include "cible.h"
#include "casevide.h"
#include "partie.h"
#include "personnage.h"


#include <iostream>
#include <string>
/*! classe plateau, cette classe initialise le plateau du jeu, on définit les dimensions et les caisse*/

/**
 * @brief Classe représentant le plateau de jeu.
 * 
 * Cette classe définit les caractéristiques et les fonctionnalités du plateau de jeu.
 * Elle contient des informations sur la taille du plateau, les cases du plateau, les caisses et le personnage.
 */
class Plateau {
public:
    /*! définit la longueur du plateau*/
    int ligne = 10;
    /*! définit la largeur du plateau*/
    int col = 10;
    /*! définit la taille des cases*/
    int taille = 50 ;
    /*! tableau de pointeurs de cases, ce tableau représente le plateau de jeu, chaque case est un objet de la classe Case*/
    Case* tableau[10][10];
    /*! tableau caisses, ce tableau représente les caisses du jeu, chaque caisse est un objet de la classe Caisse*/
    int tableauCaisse[4][2];
    ~Plateau();
public:
    /*! 
     * @brief Constructeur de la classe Plateau.
     * 
     * Ce constructeur initialise le plateau de jeu, les caisses et le personnage.
     */
    Plateau();
    Personnage *p;
    Caisse *ca[4];

    /**
     * @brief Recherche l'index d'une caisse dans le tableau des caisses.
     * 
     * @param x La coordonnée x de la caisse.
     * @param y La coordonnée y de la caisse.
     * @param tableauCaisse Le tableau des caisses.
     * @return L'index de la caisse dans le tableau des caisses, -1 si la caisse n'est pas trouvée.
     */
    int indexof(int x, int y, int tableauCaisse[4][2]);

    /**
     * @brief Vérifie si le personnage peut se déplacer vers une position donnée.
     * 
     * @param x La coordonnée x de la position.
     * @param y La coordonnée y de la position.
     * @param dep Le déplacement du personnage.
     */
    void puisjemedeplacer(const int x, const int y, int dep);
};

#endif // PLATEAU_H
