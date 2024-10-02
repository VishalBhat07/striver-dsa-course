#include <iostream>
#include <vector>
#include <map>
using namespace std;

vector<int> majorityElement(vector<int> &nums)
{

    // Brute

    // int n = nums.size();
    // vector<int> ls;

    // for (int i = 0; i < n; i++)
    // {
    //     // selected element is v[i]:
    //     //  Checking if v[i] is not already
    //     //  a part of the answer:
    //     if (ls.size() == 0 || ls[0] != nums[i])
    //     {
    //         int cnt = 0;
    //         for (int j = 0; j < n; j++)
    //             if (nums[j] == nums[i])
    //                 cnt++;

    //         if (cnt > (n / 3))
    //             ls.push_back(nums[i]);
    //     }

    //     if (ls.size() == 2)
    //         break;
    // }

    // return ls;

    // Better

    // vector<int> ans;
    // int n = nums.size();
    // map<int, int> mpp;

    // for (int i = 0; i < nums.size(); i++)
    // {
    //     mpp[nums[i]]++;

    //     if (mpp[nums[i]] > (n / 3))
    //         ans.push_back(nums[i]);
    // }
    // return ans;

    // Optimal

    int n = nums.size();
    int el1 = INT32_MIN;
    int el2 = INT32_MIN;
    int count1 = 0;
    int count2 = 0;

    for (int i = 0; i < n; i++)
    {

        if (count1 == 0 && nums[i] != el2)
        {
            count1 = 1;
            el1 = nums[i];
        }
        else if (count2 == 0 && nums[i] != el1)
        {
            count2 = 1;
            el2 = nums[i];
        }
        else if (nums[i] == el1)
            count1++;
        else if (nums[i] == el2)
            count2++;
        else
        {
            count1--;
            count2--;
        }
    }

    vector<int> ls;
    count1 = 0;
    count2 = 0;

    for (int i = 0; i < n; i++)
    {
        if (el1 == nums[i])
            count1++;
        if (el2 == nums[i])
            count2++;
    }

    int mm = (int)(n / 3) + 1;

    if (count1 >= mm)
        ls.push_back(el1);

    if (count2 >= mm)
        ls.push_back(el2);

    return ls;
}

int main()
{

    vector<int> nums = {1, 1, 1, 1, 3, 3, 2, 2, 2};

    nums = majorityElement(nums);

    for (auto itr : nums)
        cout << itr << " ";

    cout << endl;

    return 0;
}