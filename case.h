#ifndef CASE_H
#define CASE_H

#include <QPainter>

#include <iostream>
#include <string>

//coucou
class Case
{
protected:
    int x,y;


public:
    int classe=1;
    Case (int x, int y);
    virtual void isclasse()=0;
    virtual void dessinercase(QPainter * c)=0;

};

#endif // CASE_H
