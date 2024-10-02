#include <iostream>
#include <vector>
using namespace std;

int findMin(vector<int> &nums)
{
    int l = 0;
    int r = nums.size() - 1;
    int mid = (l + r) / 2;
    int ans = INT32_MAX;

    while (l <= r)
    {

        if (nums[l] <= nums[mid])
        {
            ans = min(nums[l], ans);
            l = mid + 1;
        }
        else
        {
            ans = min(nums[mid], ans);
            r = mid - 1;
        }

        mid = (l + r) / 2;
    }
    return ans;
}

int main()
{
    vector<int> nums = {3, 4, 5, 1, 2};
    cout << findMin(nums) << endl;

    return 0;
}