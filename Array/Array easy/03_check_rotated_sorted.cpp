#include <iostream>
#include <vector>
using namespace std;

bool check(vector<int> &nums)
{
    int pairs = 0;

    for (int i = 1; i < nums.size(); i++)
    {
        if (nums[i - 1] > nums[i])
            pairs++;
    }

    if (nums[nums.size() - 1] > nums[0])
        pairs++;

    return pairs <= 1;
}

int main()
{
    vector<int> v = {3, 4, 5, 1, 2};

    cout << check(v);

    return 0;
}
