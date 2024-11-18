#include <iostream>
#include <vector>
using namespace std;

vector<int> AllPrimeFactors(int N)
{

    int i = 2;
    vector<int> ans;

    for (int i = 2; i <= sqrt(N); i++)
    {
        if (N % i == 0)
        {
            ans.push_back(i);
            while (N % i == 0)
                N = N / i;
        }
    }

    if (N != 1)
        ans.push_back(N);
    return ans;
}

int main()
{
    vector<int> nums = AllPrimeFactors(780);
    for (auto it : nums)
        cout << it << " ";

    return 0;
}