#include <iostream>
#include <vector>
#include <map>
using namespace std;

int majorityElement(vector<int> &nums)
{
    // Brute
    // for (int i = 0; i < nums.size(); i++)
    // {
    //     int count = 0;

    //     for (int j = 0; j < nums.size(); j++)
    //     {
    //         if (nums[j] == nums[i])
    //             count++;
    //         if (count > nums.size() / 2)
    //             return nums[i];
    //     }
    // }
    // return -1;

    // Better
    // map<int, int> mpp;

    // int n = nums.size();

    // for (int i = 0; i < n; i++)
    // {
    //     mpp[nums[i]]++;
    // }

    // for (auto itr : mpp)
    // {
    //     if (itr.second > n / 2)
    //         return itr.first;
    // }
    // return -1;

    // Optimal - Moore's voting algorithm

    int count = 0;
    int ele;

    for (int i = 0; i < nums.size(); i++)
    {
        if (count == 0)
        {
            count = 1;
            ele = nums[i];
        }
        else if (nums[i] == ele)
            count++;
        else
            count--;
    }

    int cnt1 = 0;

    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] == ele)
            cnt1++;
    }

    if (cnt1 > nums.size() / 2)
        return ele;

    return -1;
}

int main()
{

    vector<int> v = {2, 2, 1, 1, 1, 2, 2};

    cout << "Majority element : " << majorityElement(v) << endl;

    return 0;
}