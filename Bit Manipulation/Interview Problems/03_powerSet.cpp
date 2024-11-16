#include <iostream>
using namespace std;

void print(vector<int> nums)
{
    int n = nums.size();
    int subsets = (1 << n);
    vector<vector<int>> powerSet;

    for (int i = 0; i < subsets; i++)
    {
        vector<int> temp;
        for (int j = 0; j < n; j++)
        {
            if (i & (1 << j))
                temp.push_back(nums[j]);
        }
        powerSet.push_back(temp);
    }

    for (int i = 0; i < subsets; i++)
    {
        cout << "[ ";
        for (int j = 0; j < powerSet[i].size(); j++)
        {
            cout << powerSet[i][j] << " ";
        }
        cout << "]" << endl;
    }
}

int main()
{

    vector<int> nums = {1, 2, 3};
    print(nums);

    return 0;
}