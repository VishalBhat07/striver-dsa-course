#include <iostream>
using namespace std;

bool isPrime(int n)
{
    int count = 0;
    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            count++;
            if ((n / i) != i)
            {
                count++;
            }
        }
    }
    if (count == 2)
    {
        return true;
    }
    return false;
}

int main()
{
    cout << isPrime(2) << endl;
    cout << isPrime(20) << endl;
    cout << isPrime(5) << endl;
    cout << isPrime(7) << endl;
    cout << isPrime(9) << endl;
    return 0;
}