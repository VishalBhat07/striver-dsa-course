#include <iostream>
#include <vector>
using namespace std;

int singleNonDuplicate(vector<int> &nums)
{

    int n = nums.size();

    if (n == 1)
        return nums[0];

    if (nums[0] != nums[1])
        return nums[0];

    if (nums[n - 1] != nums[n - 2])
        return nums[n - 1];

    int l = 1;
    int r = n - 2;
    int mid = (l + r) / 2;

    while (l <= r)
    {

        if (nums[mid] != nums[mid - 1] && nums[mid] != nums[mid + 1])
            return nums[mid];

        if ((mid % 2 == 1 && nums[mid - 1] == nums[mid]) ||
            (mid % 2 == 0 && nums[mid] == nums[mid + 1]))
            l = mid + 1;
        else
            r = mid - 1;

        mid = (l + r) / 2;
    }
    return -1;
}

int main()
{
    vector<int> nums = {1, 1, 2, 2, 3, 3, 4, 5, 5, 6, 6};
    cout << singleNonDuplicate(nums) << endl;

    return 0;
}