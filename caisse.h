#ifndef CAISSE_H
#define CAISSE_H


#include <QPainter>


class Caisse
{
protected:
    int x,y;

public:
    Caisse(int x=0,int y=0);
    void dessiner(QPainter * ca);
    void deplacer(int x, int y);
    int getX() const;
    int getY() const;
    void setX(int x);
    void setY(int y);

};

#endif // CAISSE_H
