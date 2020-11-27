#include "clEdge.h"

clEdge::clEdge():w(new char[3])
{
    //ctor
}

void clEdge::Show(){

    clLine::Show();
    outtextxy((Getx_1()+Getx_2())/2,(Gety_1()+Gety_2())/2,w);;
}

clEdge::~clEdge()
{
    //dtor
}
