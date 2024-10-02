#include <iostream>
#include <vector>
using namespace std;

int lowerBound(vector<int> nums, int x)
{
    int l = 0;
    int r = nums.size() - 1;
    int mid = (l + r) / 2;
    int ans = nums.size();

    while (l <= r)
    {
        if (nums[mid] >= x)
        {
            ans = mid;
            r = mid - 1;
        }
        else
            l = mid + 1;
        mid = (l + r) / 2;
    }
    return ans;
}

int upperBound(vector<int> nums, int x)
{
    int l = 0;
    int r = nums.size() - 1;
    int mid = (l + r) / 2;
    int ans = nums.size();

    while (l <= r)
    {
        if (nums[mid] > x)
        {
            ans = mid;
            r = mid - 1;
        }
        else
            l = mid + 1;
        mid = (l + r) / 2;
    }
    return ans;
}

vector<int> searchRange(vector<int> &nums, int target)
{
    int lb = lowerBound(nums, target);

    if (lb == nums.size() || nums[lb] != target)
        return {-1, -1};

    return {lb, upperBound(nums, target) - 1};
}

int main()
{
    vector<int> nums = {5, 7, 7, 8, 8, 8, 8, 10};
    vector<int> ans = searchRange(nums, 8);

    cout << ans[0] << " " << ans[1] << endl;

    return 0;
}