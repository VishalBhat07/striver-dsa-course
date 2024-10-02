#include <iostream>
#include <vector>
using namespace std;

void reverse(vector<int> &nums, int l, int r)
{
    while (l < r)
    {
        swap(nums[l], nums[r]);
        l++;
        r--;
    }
}

void rotate(vector<int> &nums, int k)
{
    // Brute
    // int n = nums.size();

    // k = k % n;

    // if (n != k && n != 1)
    // {
    //     vector<int> temp;
    //     for (int i = n - k; i < n; i++)
    //         temp.push_back(nums[i]);

    //     for (int i = 0; i < n - k; i++)
    //         temp.push_back(nums[i]);

    //     for (int i = 0; i < n; i++)
    //         nums[i] = temp[i];
    // }

    // Optimal
    reverse(nums, 0, k);
    reverse(nums, k + 1, nums.size());
    reverse(nums, 0, nums.size());
}

int main()
{
    vector<int> v = {1,2,3,4,5,6,7};

    rotate(v, 4);

    for (auto itr : v)
    {
        cout << itr << " ";
    }
    cout << endl;

    return 0;
}
