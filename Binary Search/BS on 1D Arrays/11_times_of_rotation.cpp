#include <iostream>
#include <vector>
using namespace std;

int findRot(vector<int> &nums)
{
    int l = 0;
    int r = nums.size() - 1;
    int mid = (l + r) / 2;
    int ans = INT32_MAX;
    int index = -1;

    while (l <= r)
    {

        if (nums[l] <= nums[mid])
        {
            if (nums[l] < ans)
            {
                ans = nums[l];
                index = l;
            }
            l = mid + 1;
        }
        else
        {
            if (nums[mid] < ans)
            {
                ans = nums[mid];
                index = mid;
            }
            r = mid - 1;
        }

        mid = (l + r) / 2;
    }
    return index;
}

int main()
{
    vector<int> nums = {4, 5, 6, 7, 0, 1, 2, 3};
    cout << findRot(nums) << endl;

    return 0;
}