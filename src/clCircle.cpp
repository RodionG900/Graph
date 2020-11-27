#include "clCircle.h"
using namespace std;

clCircle::clCircle():R(40){
    cout << "clCircle();\n";
}
clCircle::clCircle(int a, int b, int c):x(a), y(b), R(c){
    cout << "clCircle(int, int, int);\n";
}
clCircle::~clCircle(){
    cout << x << "   ~clCircle();\n";
}
void clCircle::Show(){
    circle(x, y, R);

    }



