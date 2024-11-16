#include <iostream>
#include <vector>
using namespace std;

vector<long long> twoOddNum(long long int Arr[], long long int N)
{
    long long xorr = 0;
    for (int i = 0; i < N; i++)
        xorr ^= Arr[i];

    long long bitChange = (xorr & (xorr - 1)) ^ xorr;

    long long b1 = 0;
    long long b2 = 0;

    for (int i = 0; i < N; i++)
    {
        if (Arr[i] & bitChange)
            b1 ^= (Arr[i]);
        else
            b2 ^= (Arr[i]);
    }

    if (b1 > b2)
        return {b1, b2};

    return {b2, b1};
}

int main()
{
    long long int Arr[6] = {1, 2, 2, 1, 4, 3};
    vector<long long> ans = twoOddNum(Arr, 6);
    cout << ans[0] << " " << ans[1] << endl;

    return 0;
}