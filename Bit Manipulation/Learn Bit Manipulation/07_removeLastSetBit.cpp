#include <iostream>
using namespace std;

int removeLastSetBit(int n)
{
    return n & n - 1;
}

int main()
{

    cout << removeLastSetBit(9) << endl;
    cout << removeLastSetBit(13) << endl;

    return 0;
}