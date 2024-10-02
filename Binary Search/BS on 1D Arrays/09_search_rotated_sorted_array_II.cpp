#include <iostream>
#include <vector>
using namespace std;

int search(vector<int> &nums, int target)
{
    int l = 0;
    int r = nums.size() - 1;
    int mid = (l + r) / 2;

    while (l <= r)
    {
        if (nums[mid] == target)
            return true;

        if ((nums[l] == nums[mid]) && (nums[mid] == nums[r]))
        {
            l++;
            r--;
            continue;
        }

        if (nums[l] <= nums[mid])
        {
            if ((nums[l] <= target) && (target <= nums[mid]))
                r = mid - 1;
            else
                l = mid + 1;
        }
        else
        {
            if ((nums[mid] <= target) && (target <= nums[r]))
                l = mid + 1;
            else
                r = mid - 1;
        }
        mid = (l + r) / 2;
    }
    return false;
}

int main()
{
    vector<int> nums = {4, 5, 6, 7, 0, 0, 0, 1, 2};
    cout << search(nums, 0) << endl;

    return 0;
}