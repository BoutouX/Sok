#include "cible.h"
#include "case.h"

#include <QPixmap>

Cible::Cible (int x, int y): Case(x,y){

}


void Cible::isclasse(){
    classe = 2;
}

void Cible::dessinercase(QPainter * c){
    c->setPen( QPen(Qt::black, 1) );
    c->drawPixmap(x,y,50,50,QPixmap(":/cible/Cible.jpg"));
}

