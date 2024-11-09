#include <iostream>
using namespace std;

int toggleBit(int n, int i)
{
    return n & (~(1 << i));
}

int main()
{

    cout << toggleBit(13, 2) << endl;
    cout << toggleBit(13, 1) << endl;

    return 0;
}