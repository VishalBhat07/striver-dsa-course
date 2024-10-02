#include <iostream>
#include <vector>
using namespace std;

int missingNumber(vector<int> &nums)

{
    //  Optimal 1
    // int sum = 0;
    // int n = nums.size();

    // for (int i = 0; i < n; i++)
    // {
    //     sum += nums[i];
    // }

    // int total = (n * n + n) / 2;
    // return total - sum;

    // Optimal 2

    int xor1 = 0;

    for (int i = 1; i < nums.size(); i++)
        xor1 ^= i;


    for (int i = 0; i < nums.size() - 1; i++)
        xor1 ^= nums[i];

    return xor1;
}

int main()
{
    vector<int> arr = {0, 1, 2, 3, 4, 6, 7, 8};
    cout << missingNumber(arr);

    return 0;
}