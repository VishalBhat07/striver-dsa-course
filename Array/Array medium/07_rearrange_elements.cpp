#include <iostream>
#include <vector>
using namespace std;

vector<int> rearrangeArray(vector<int> &nums)
{
    // Brute

    // vector<int> pos;
    // vector<int> neg;

    // for (int i = 0; i < nums.size(); i++)
    //     if (nums[i] > 0)
    //         pos.push_back(nums[i]);

    // for (int i = 0; i < nums.size(); i++)
    //     if (nums[i] < 0)
    //         neg.push_back(nums[i]);

    // for (int i = 0; i < nums.size() / 2; i++)
    // {
    //     nums[2 * i] = pos[i];
    //     nums[(2 * i) + 1] = neg[i];
    // }
    // return nums;

    // Optimal

    int n = nums.size();

    vector<int> ans(n, 0);
    int pos = 0;
    int neg = 1;

    for (int i = 0; i < n; i++)
    {
        if (nums[i] > 0)
        {
            ans[pos] = nums[i];
            pos += 2;
        }
        else
        {
            ans[neg] = nums[i];
            neg += 2;
        }
    }
    return ans;
}

int main()
{
    vector<int> v = {3, 1, -2, -5, 2, -4};

    v = rearrangeArray(v);

    for (auto itr : v)
        cout << itr << " ";
    cout << endl;

    return 0;
}