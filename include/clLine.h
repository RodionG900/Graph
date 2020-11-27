#ifndef CLLINE_H
#define CLLINE_H
#include <graphics.h>
#include "CLDraw.h"


class clLine: public clDraw
{
    public:
        clLine();
        clLine(int a, int b, int c, int d);
        virtual ~clLine();

        int Getx_1() { return x_1; }
        void Setx_1(int val) { x_1 = val; }
        int Gety_1() { return y_1; }
        void Sety_1(int val) { y_1 = val; }

        int Getx_2() { return x_2; }
        void Setx_2(int val) { x_2 = val; }
        int Gety_2() { return y_2; }
        void Sety_2(int val) { y_2 = val; }

        void Show();


    protected:

    private:
        int x_1;
        int y_1;
        int x_2;
        int y_2;
};

#endif
