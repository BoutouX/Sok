#include "mur.h"
#include "case.h"

#include <QPixmap>


Mur::Mur (int x, int y): Case(x,y){
}

void Mur::isclasse(){
    classe = 3;
}


void  Mur::dessinercase(QPainter * c){
    c->setPen( QPen(Qt::black, 1) );
    c->drawPixmap(x,y,50,50,QPixmap(":/mur/Mur.jpg"));
}
