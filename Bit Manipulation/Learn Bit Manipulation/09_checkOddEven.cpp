#include <iostream>
using namespace std;

bool checkOdd(int n)
{
    return (n & 1) ? 1 : 0;
}

int main()
{
    cout << checkOdd(23) << endl;
    cout << checkOdd(0) << endl;
    cout << checkOdd(39) << endl;
    cout << checkOdd(30) << endl;
    cout << checkOdd(4) << endl;
    return 0;
}