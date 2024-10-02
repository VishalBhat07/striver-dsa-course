#include <iostream>
using namespace std;

long long sumN(long long n)
{
    if (n > 1)
    {
        return n + sumN(n - 1);
    }
    return 1;
}

int main()
{
    cout << sumN(5) << endl;
    cout << sumN(3) << endl;
    cout << sumN(20) << endl;
    return 0;
}