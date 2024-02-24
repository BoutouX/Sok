#ifndef CASEBASE_H
#define CASEBASE_H

#include "case.h"

#include <QObject>
#include <QWidget>
/*! Classe Casebase*/
class Casebase : public Case
{
    Q_OBJECT
public:
    
    explicit Casebase (QWidget *parent = nullptr);
    /*! \brief définition de la taille d'une case */
    void setSize(int width, int height);

private:
    QLabel *imageLabel;
};

#endif // CASEBASE_H
