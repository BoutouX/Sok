#include "caisse.h"

#include<QDebug>
#include<QPixmap>


Caisse::Caisse(int x, int y)
{
    this->x = x;
    this->y = y;
}


void Caisse::dessiner(QPainter * ca) {
    ca->setPen( QPen(Qt::black, 1) );
    ca->drawPixmap(x,y,50,50,QPixmap(":/Caisse/Poubelle.png"));
}


void Caisse::deplacer(int x, int y)
{
    this->x = x;
    this->y = y;
}

int Caisse::getX() const
{
    return x;
}

int Caisse::getY() const
{
    return y;
}

void Caisse::setX(int x){
    this->x=x;
}
void Caisse::setY(int y)
{
    this->y=y;
}
