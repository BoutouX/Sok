#ifndef PERSONNAGE_H
#define PERSONNAGE_H

#include <QPainter>
#include <QObject>
#include <QRect>


class Personnage
{

public:
    int x,y;

public:
    Personnage(int x=0,int y=0);

    void dessiner(QPainter * p);
    void deplacer(int new_x, int new_y);
    int getX() const;
    int getY() const;
    void setX(int x);
    void setY(int y);

};

#endif // PERSONNAGE_H
