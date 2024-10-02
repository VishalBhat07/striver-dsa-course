#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;

vector<int> twoSum(vector<int> &nums, int target)
{
    // Brute
    // for (int i = 0; i < nums.size(); i++)
    //     for (int j = 0; j < nums.size(); j++)
    //         if (nums[i] + nums[j])
    //             return {i, j};

    // return {};

    // Better
    // for (int i = 0; i < nums.size(); i++)
    //     for (int j = i + 1; j < nums.size(); j++)
    //         if (nums[i] + nums[j])
    //             return {i, j};

    // Optimal 1 - Hashing
    // map<int, int> mpp;
    // int n = nums.size();

    // for (int i = 0; i < n; i++)
    // {
    //     int rem = target - nums[i];
    //     if (mpp.find(rem) != mpp.end())
    //         return {mpp[rem], i};

    //     mpp[nums[i]] = i;
    // }
    // return {};

    // Optimal 2 - Greedy

    sort(nums.begin(), nums.end());
    int l = 0;
    int r = nums.size() - 1;

    while (l < r)
    {
        if (nums[l] + nums[r] == target)
            return {l, r};

        else if (nums[l] + nums[r] < target)
            l++;
        else
            r--;
    }
    return {-1, -1};
}

int main()
{

    vector<int> nums = {2, 7, 11, 15};

    vector<int> ans = twoSum(nums, 9);

    cout << ans[0] << " " << ans[1] << endl;

    return 0;
}