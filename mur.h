#ifndef MUR_H
#define MUR_H

#include "case.h"

#include<QPixmap>
#include <QPainter>


class Mur : public Case
{
public:
    Mur(int x, int y);
    void isclasse() override ;
    void dessinercase(QPainter * c);


};

#endif // MUR_H
