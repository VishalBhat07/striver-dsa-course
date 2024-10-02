#include <iostream>
#include <vector>
using namespace std;

int maxSubArray(vector<int> &nums)
{
    int sum = 0;
    int maxSum = nums[0];

    for (auto it : nums)
    {
        sum += it;
        maxSum = max(maxSum, sum);
        if (sum < 0)
            sum = 0;
    }
    return maxSum;
}

int main()
{

    vector<int> nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};

    cout << maxSubArray(nums) << endl;
    
    return 0;
}