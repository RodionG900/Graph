#include "clNode.h"


clNode::clNode():clCircle(), num(new char[10]){
    cout << "clNode();\n";
}
clNode::clNode(int a, int b, int c, int i):clCircle(a,b,c), num(new char[10]){
    cout << "clNode(int, int, int, int);\n";
    itoa(i,num,10);
}
clNode::~clNode(){
    cout << Getx() << "   ~clNode();\n";
}
void clNode::Show(){
    int x=Getx()-4;
    int y=Gety()-8;
    clCircle::Show();
    outtextxy(x,y,num);;
}

/*clNode::clNode():clCircle(), num(new char[4])
{
    cout<<"clNode();\n";
}

clNode::clNode(int a, int b, int c, int i):clCircle(), num(new char[4])
{
    cout<<"clNode(int a, int b, int c, int i);\n";
    itoa(i, num, 10);
}

clNode::~clNode()
{
    cout<<Getx()<<"clNode();\n";
}

void clNode::Show()
{
    int x=Getx()-4;
    int y=Gety()-8;
    clCircle::Show();
    outtextxy(x,y, num);;

}*/
