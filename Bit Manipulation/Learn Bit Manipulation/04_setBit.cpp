#include <iostream>
using namespace std;

int setBit(int n, int i)
{
    return n | (1 << i);
}

int main()
{
    cout << setBit(9, 2) << endl;
    cout << setBit(13, 2) << endl;
    cout << setBit(0, 2) << endl;

    return 0;
}