#include <iostream>
using namespace std;

int singleNumber(vector<int> &nums)
{
    int xorr = 0;
    for (auto it : nums)
        xorr ^= it;

    return xorr;
}

int main()
{
    vector<int> nums = {1, 2, 2, 3, 3, 1, 5};
    cout << singleNumber(nums) << endl;

    return 0;
}