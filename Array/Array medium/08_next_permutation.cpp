#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void nextPermutation(vector<int> &nums)
{
    // Better
    // next_permutation(nums.begin(), nums.end());

    // Optimal

    // Finding the break point
    int n = nums.size();
    int index = -1;
    for (int i = n - 2; i >= 0; i--)
    {
        if (nums[i] < nums[i + 1])
        {
            index = i;
            break;
        }
    }

    if (index == -1)
    {
        reverse(nums.begin(), nums.end());
        return;
    }

    // Finding someone from behind who is greater than dip point but closest to it
    for (int i = n - 1; i > index; i--)
    {
        if (nums[i] > nums[index])
        {
            swap(nums[i], nums[index]);
            break;
        }
    }

    // Reverse the part after dip to get the nuxt permutation
    reverse(nums.begin() + index + 1, nums.end());
}

int main()
{

    vector<int> nums = {2, 1, 5, 4, 3, 0, 0};

    nextPermutation(nums);

    for (auto itr : nums)
        cout << itr << " ";
    cout << endl;

    return 0;
}