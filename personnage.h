#ifndef PERSONNAGE_H
#define PERSONNAGE_H

#include <QPainter>
#include <QObject>
#include <QRect>

class Personnage
{

private:
    int x,y;

public:
    Personnage(int x=0,int y=0);
    void dessiner(QPainter * p);
    void deplacer(int x, int y);
    int getX() const;
    int getY() const;
    void setX(int x);
    void setY(int y);

};

#endif // PERSONNAGE_H
