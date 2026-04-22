#include <iostream>
using namespace std;

void swapValues(int &, int &);
void swapValues(int &, int &, int &);
void swapValues(int &, int &, int &, int &);

void swapValues(int &n1, int &n2)
{
    // TODO
    int tmp;
    tmp = n1;
    n1 = n2;
    n2 = tmp;
    // END TODO
}

void swapValues(int &n1, int &n2, int &n3)
{
    // TODO
    swap(n1, n3);
    swap (n2, n1);
    // END TODO
}

void swapValues(int &n1, int &n2, int &n3, int &n4)
{
    // TODO
    int tmp;
    tmp = n1;
    n1 = n4;
    n4 = tmp;
    tmp = n2;
    n2 = n3;
    n3 = tmp;
    // END TODO
}
