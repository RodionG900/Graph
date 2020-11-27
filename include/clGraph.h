#ifndef CLGRAPH_H
#define CLGRAPH_H
#include "CLDraw.h"
#define V 6
#include <graphics.h>
#include "CLDraw.h"
#include <math.h>
#include <stdio.h>
#include <limits.h>
#include<stdbool.h>
#include <stdlib.h>
#include "clNode.h"

class clGraph : public clDraw
{
    public:
        //clGraph();
        clGraph(int n, int *a);
        virtual ~clGraph();

        int Getn() { return n; }
        void Setn(int val) { n = val; }

        void Show();
        void primMST();

    protected:

    private:
        int n;
        int *a;
        clNode *v;
        int printMST(int parent[]);
        int minKey(int key[], bool mstSet[]);
};

#endif
