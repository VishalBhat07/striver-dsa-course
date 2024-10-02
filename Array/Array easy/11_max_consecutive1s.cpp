#include <iostream>
#include <vector>
using namespace std;

int findMaxConsecutiveOnes(vector<int> &nums)
{
    int count = 0;
    int maxi = 0;

    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] == 1)
        {
            count++;
            maxi = max(maxi, count);
        }
        else
            count = 0;
    }

    return maxi;
}

int main()
{
    vector<int> arr = {1, 0, 1, 1, 0, 1};

    cout << "Maximum consecutive ones : " << findMaxConsecutiveOnes(arr);
    return 0;
}