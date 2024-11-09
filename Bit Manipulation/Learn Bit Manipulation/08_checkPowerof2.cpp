#include <iostream>
using namespace std;

bool checkPowerof2(int n)
{
    if ((n & (n - 1)) == 0)
        return 1;

    return 0;
}

int main()
{

    cout << checkPowerof2(16) << endl;
    cout << checkPowerof2(2) << endl;
    cout << checkPowerof2(1) << endl;
    cout << checkPowerof2(0) << endl;
    cout << checkPowerof2(7) << endl;
    cout << checkPowerof2(6) << endl;
    cout << checkPowerof2(64) << endl;
    cout << checkPowerof2(100) << endl;

    return 0;
}