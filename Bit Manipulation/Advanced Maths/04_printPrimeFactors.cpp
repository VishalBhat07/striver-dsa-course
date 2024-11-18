#include <iostream>
#include <vector>

using namespace std;

vector<int> findPrimeFactors(int N)
{
    vector<int> sieve(N + 1);
    vector<int> result;

    for (int i = 2; i <= N; i++)
        sieve[i] = i;

    for (int i = 2; i * i <= N; i++)
        if (sieve[i] == i)
            for (int j = i * i; j <= N; j += i)
                if (sieve[j] == j)
                    sieve[j] = i;

    while (N != 1)
    {
        result.push_back(sieve[N]);
        N = N / sieve[N];
    }

    sort(result.begin(), result.end());

    return result;
}

int main()
{

    vector<int> ans = findPrimeFactors(19999);
    for (auto it : ans)
        cout << it << " ";

    return 0;
}