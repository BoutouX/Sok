#include "message.h"

#include<QDebug>

Message::Message() {

}


void Message::dessiner(QPainter * m) {
    qDebug()<<"hey";
    m->setPen( QPen(Qt::black, 1) );
    m->drawPixmap(0,0,500,500,QPixmap(":/message/message.jpg"));
}
