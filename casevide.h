#ifndef CASEVIDE_H
#define CASEVIDE_H
#include "case.h"

#include<QPixmap>
#include <QPainter>


class Casevide : public Case
{
public:
    Casevide(int x, int y);
    void isclasse() override;
    void dessinercase(QPainter * c);
};

#endif // CASEVIDE_H
