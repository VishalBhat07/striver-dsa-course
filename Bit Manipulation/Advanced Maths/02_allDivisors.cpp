#include <iostream>
#include <vector>

using namespace std;

void print_divisors(int n)
{

    vector<int> divisors(sqrt(n));

    for (int i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            cout << i << " ";
            if ((n / i) != i)
                divisors.push_back(n / i);
        }
    }

    for (int i = divisors.size() - 1; divisors[i] != 0; i--)
        cout << divisors[i] << " ";
}

int main()
{

    print_divisors(56);

    return 0;
}