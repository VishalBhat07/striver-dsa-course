#include <iostream>
using namespace std;

int XORTillN(int n)
{
    if (n % 4 == 1)
        return 1;
    else if (n % 4 == 2)
        return n + 1;
    else if (n % 4 == 3)
        return 0;

    return n;
}

int findXOR(int l, int r)
{
    return XORTillN(l - 1) ^ XORTillN(r);
}

int main()
{
    cout << findXOR(4, 8) << endl;
    return 0;
}