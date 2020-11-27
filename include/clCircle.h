#ifndef CLCIRCLE_H
#define CLCIRCLE_H
#include <graphics.h>
#include "CLDraw.h"
#include <math.h>
#include <stdio.h>
#include <limits.h>
#include<stdbool.h>
#include <stdlib.h>
#include <graphics.h>
#define V 6

class clCircle : public clDraw
{
public:
    clCircle();
    clCircle(int a, int b, int c);
    virtual ~clCircle();

    int Getx() { return x; }
    void Setx(int val) { x = val; }
    int Gety() { return y; }
    void Sety(int val) { y = val; }
    int Getr() { return R; }
    void Show();

private:
    int x;
    int y;
    const int R;
};


#endif // CLCIRCLE_H
