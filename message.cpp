#include "message.h"

#include<QDebug>

Message::Message() {
}

void Message::dessiner1(QPainter * m) {

    m->setPen( QPen(Qt::black, 1) );
    m->drawPixmap(0,0,700,600,QPixmap(":/message/message1.jpg"));
}
void Message::dessiner2(QPainter * m) {
    m->setPen( QPen(Qt::black, 1) );
    m->drawPixmap(0,0,700,600,QPixmap(":/message/message.jpg"));
}
