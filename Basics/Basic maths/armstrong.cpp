#include <iostream>
#include <cmath>
using namespace std;

bool checkArmstrong(int n)
{
    int value = n;
    int ans = 0;
    int count = (int)(log10(n) + 1);

    while (n > 0)
    {
        if (pow(n % 10, count) < INT32_MAX && pow(n % 10, count) > INT32_MIN)
        {
            ans += pow(n % 10, count);
            n = n / 10;
        }
    }
    cout << ans << " ";
    if (value == ans)
    {
        return true;
    }
    return false;
}

int main()
{
    cout << checkArmstrong(1) << endl;
    cout << checkArmstrong(153) << endl;
    cout << checkArmstrong(370) << endl;
    cout << checkArmstrong(371) << endl;
    cout << checkArmstrong(1634) << endl;
    return 0;
}