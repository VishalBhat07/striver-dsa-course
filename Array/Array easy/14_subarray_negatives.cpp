#include <iostream>
#include <vector>
#include <map>
using namespace std;

int longestSubarrayWithSumK(vector<int> a, int k)
{
    // Brute force

    // int length = 0;
    // int n = a.size();

    // for (int i = 0; i < n; i++)
    // {
    //     int sum = 0;
    //     for (int j = i; j < n; j++)
    //     {
    //         sum += a[j];

    //         if (sum == k)
    //             length = max(length, j - i + 1);
    //     }
    // }

    // return length;

    // Better - Hashing

    map<int, int> preSumMap;
    int sum = 0;
    int maxLen = 0;

    for (int i = 0; i < a.size(); i++)
    {
        sum += a[i];

        if (sum == k)
            maxLen = max(i + 1, maxLen);

        int rem = sum - k;

        if (preSumMap.find(rem) != preSumMap.end())
        {
            int len = i - preSumMap[rem];
            maxLen = max(len, maxLen);
        }

        if (preSumMap.find(sum) == preSumMap.end())
            preSumMap[sum] = i;
    }

    return maxLen;
}

int main()
{

    vector<int> a = {-1, -2, 3, 1, 1, 1};

    cout << longestSubarrayWithSumK(a, 3);

    return 0;
}