#include <iostream>
#include <cmath>
using namespace std;

int calcGCD(int n, int m)
{

    // -------------- Brute --------------
    // int gcd = 1;
    // for (int i = min(m, n); i >= 1; i--)
    // {
    //     if (n % i == 0 && m % i == 0)
    //     {
    //         gcd = i;
    //         break;
    //     }
    // }
    // return gcd;

    // -------------- Optimal --------------
    while (n > 0 && m > 0)
    {
        if (n > m)
        {
            n = n % m;
        }
        else
        {
            m = m % n;
        }
    }
    return max(n, m);
}

int main()
{
    cout << calcGCD(9, 6) << endl;
    return 0;
}