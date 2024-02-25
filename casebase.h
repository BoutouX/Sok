#ifndef CASEBASE_H
#define CASEBASE_H

#include "case.h"

#include <QObject>
#include <QWidget>

/**
 * @brief La classe Casebase représente une base de cases.
 * 
 * Cette classe hérite de la classe Case et est utilisée pour stocker et gérer un ensemble de cases.
 * Elle est utilisée dans le contexte d'une application graphique avec une interface utilisateur.
 */
class Casebase : public Case
{
    Q_OBJECT
public:
    /**
     * @brief Constructeur de la classe Casebase.
     * 
     * @param parent Le widget parent de la case.
     */
    explicit Casebase(QWidget *parent = nullptr);

    /**
     * @brief Définit la taille de la base de cases.
     * 
     * @param width La largeur de la base de cases.
     * @param height La hauteur de la base de cases.
     */
    void setSize(int width, int height);

private:
    QLabel *imageLabel; /**< Le label utilisé pour afficher une image dans la base de cases. */
};


#endif // CASEBASE_H
