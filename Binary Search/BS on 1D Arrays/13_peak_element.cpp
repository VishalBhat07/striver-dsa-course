#include <iostream>
#include <vector>
using namespace std;

int findPeakElement(vector<int> &nums)
{
    int n = nums.size();

    if (n == 1)
        return 0;

    if (nums[0] > nums[1])
        return 0;

    if (nums[n - 1] > nums[n - 2])
        return n - 1;

    int l = 1;
    int r = nums.size() - 2;
    int mid = (l + r) / 2;

    while (l <= r)
    {
        if (nums[mid - 1] < nums[mid] && nums[mid] > nums[mid + 1])
            return mid;
        else if (nums[mid - 1] < nums[mid])
            l = mid + 1;
        else
            r = mid - 1;

        mid = (l + r) / 2;
    }
    return -1;
}

int main()
{

    vector<int> nums = {1, 8, 1, 5, 3};
    cout << findPeakElement(nums) << endl;

    return 0;
}