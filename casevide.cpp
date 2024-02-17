#include "casevide.h"
#include "case.h"


#include <QPixmap>


Casevide::Casevide(int x, int y): Case(x,y) {}



void Casevide::isclasse(){
    classe = 1;

}

void Casevide::dessinercase(QPainter * c){
    c->setPen( QPen(Qt::black, 1) );
    c->drawPixmap(x, y,50,50,QPixmap(":/case/case.jpg"));
}

