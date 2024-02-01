#include "personnage.h"
#include<QDebug>
#include<QPixmap>

Personnage::Personnage(int x, int y)
{
    this->x = x;
    this->y = y;
}


void Personnage::dessiner(QPainter * p) {
    p->setPen( QPen(Qt::black, 1) );
    p->drawPixmap(x,y,50,50,QPixmap(":/personnage/WallEPX.png"));

}


void Personnage::deplacer(int x, int y)
{
    this->x = x;
    this->y = y;
}

int Personnage::getX() const
{
    return x;
}

int Personnage::getY() const
{
    return y;
}

void Personnage::setX(int x){
    this->x=x;
}
void Personnage::setY(int y)
{
    this->y=y;
}


