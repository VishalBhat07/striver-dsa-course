#include <iostream>
using namespace std;

bool checkSetBit(int n, int i)
{
    // Using left shift
    // return (n >> i & 1) ? 1 : 0;

    return (n & (1 << i)) ? 1 : 0; // using left shift
}

int main()
{
    cout << checkSetBit(13, 0) << endl;
    cout << checkSetBit(13, 1) << endl;
    cout << checkSetBit(13, 2) << endl;
    cout << checkSetBit(13, 3) << endl;
    return 0;
}