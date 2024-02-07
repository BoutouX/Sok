#ifndef CIBLE_H
#define CIBLE_H

#include "case.h"

#include<QPixmap>
#include <QPainter>


class Cible : public Case
{
public:
    Cible(int x, int y);
    void isclasse() override;
    void dessinercase(QPainter * c);
};


#endif // CIBLE_H
