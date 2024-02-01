#ifndef CIBLE_H
#define CIBLE_H

#include "case.h"

#include<QPixmap>
#include <QPainter>
#include <QObject>
#include <QRect>
class Cible : public Case
{
public:
    Cible(int x, int y);
    void isclasse() override;
};


#endif // CIBLE_H
