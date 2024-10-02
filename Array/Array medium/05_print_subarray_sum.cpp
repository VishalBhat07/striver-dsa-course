#include <iostream>
#include <vector>
using namespace std;

void maxSubArray(vector<int> &nums)
{
    // Better

    // int n = nums.size();
    // int maxSum = nums[0];
    // int l = 0;
    // int r = 0;

    // for (int i = 0; i < n; i++)
    // {
    //     int sum = nums[i];
    //     for (int j = i + 1; j < n; j++)
    //     {
    //         sum += nums[j];

    //         if (sum > maxSum)
    //         {
    //             maxSum = sum;
    //             l = i;
    //             r = j;
    //         }
    //     }
    // }

    // for (int i = l; i <= r; i++)
    // {
    //     cout << nums[i] << " ";
    // }
    // cout << endl;
    // cout << maxSum;

    int sum = 0;
    int maxSum = INT32_MIN;
    int start = 0;
    int ansStart = -1;
    int ansEnd = -1;

    for (int i = 0; i < nums.size(); i++)
    {
        if (sum == 0)
            start = i;

        sum += nums[i];

        if (sum > maxSum)
        {
            maxSum = sum;
            ansStart = start;
            ansEnd = i;
        }

        if (sum < 0)
            sum = 0;
    }

    cout << "Max subarray sum : " << maxSum << endl;

    for (int i = ansStart; i <= ansEnd; i++)
        cout << nums[i] << " ";

    cout << endl;
}

int main()
{

    vector<int> nums = {-2, -3, 4, -1, -2, 1, 5, -3};

    maxSubArray(nums);

    return 0;
}