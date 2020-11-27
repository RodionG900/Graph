#include <iostream>
#include <graphics.h>
#include "clCircle.h"
#include "clNode.h"
#include "clEdge.h"
#include "clGraph.h"
#define V 6
#include <fstream>

using namespace std;

int main()
{
    int nn;
    ifstream fin("obj graph.txt");
    fin >> nn;
    cout << nn << "\n";
    int x[nn][nn];
    for (int i = 0; i < nn; i++)
        for (int j = 0; j < nn; j++)
            fin >> x[i][j];

    for (int i = 0; i < nn; i++)
    {
        for (int j = 0; j < nn; j++)
            cout << x[i][j] << " ";
        cout << "\n";
    }
    fin.close();

    int aa[nn*nn];

    for (int i = 0; i < nn; i++) {
        for (int j = 0; j < nn; j++) {
            aa[i * nn + j] = x[i][j];
        }
    }

    clGraph n_1(nn, aa);

    int gd = DETECT;
    int gm;
    initgraph(&gd, &gm,"");

    n_1.Show();
    readkey();
    n_1.primMST();
    readkey();
    closegraph();
    return 0;
}



