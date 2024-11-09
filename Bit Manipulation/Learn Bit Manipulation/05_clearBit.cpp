#include <iostream>
using namespace std;

int clearBit(int n, int i)
{
    return n ^ (1 << i);
}

int main()
{

    cout << clearBit(13, 2) << endl;
    cout << clearBit(13, 1) << endl;

    return 0;
}