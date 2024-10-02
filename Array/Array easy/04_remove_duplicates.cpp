#include <iostream>
#include <vector>
#include <set>
using namespace std;

int removeDuplicates(vector<int> &nums)
{
    //  Brute force
    //     set<int> st;

    //     for (auto i : nums)
    //     {
    //         st.insert(i);
    //     }

    //     int j = 0;
    //     for (auto i : st)
    //     {
    //         nums[j] = i;
    //         j++;
    //     }
    //     return j;

    // Better - 2 pointer method

    int i = 0;
    for (int j = 1; j < nums.size(); j++)
    {
        if (nums[j] != nums[i])
        {
            nums[i + 1] = nums[j];
            i++;
        }
    }

    return i + 1;
}

int main()
{
    vector<int> v = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};

    cout << removeDuplicates(v) << endl;

    return 0;
}