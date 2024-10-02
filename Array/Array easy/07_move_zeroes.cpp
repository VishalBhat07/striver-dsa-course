#include <iostream>
#include <vector>
using namespace std;

void moveZeroes(vector<int> &nums)
{
    // Brute
    // vector<int> temp;
    // int count = 0;

    // for (auto itr : nums)
    // {
    //     if (itr == 0)
    //         count++;
    //     else
    //         temp.push_back(itr);
    // }

    // for (int i = 0; i < count; i++)
    // {
    //     temp.push_back(0);
    // }

    // nums = temp;

    // Optimal

    int j = -1;

    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] == 0)
        {
            j = i;
            break;
        }
    }

    if (j == -1)
        return;

    for (int i = j + 1; i < nums.size(); i++)
    {
        if (nums[i] != 0)
        {
            swap(nums[i], nums[j]);
            j++;
        }
    }
}

int main()
{

    vector<int> v = {1, 2, 0, 3, 4, 1};

    moveZeroes(v);

    for (auto itr : v)
    {
        cout << itr << " ";
    }
    cout << endl;

    return 0;
}