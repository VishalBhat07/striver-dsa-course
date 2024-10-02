#include <iostream>
#include <stack>
#include <vector>
#include <math.h>
using namespace std;

vector<int> PSE(vector<int> nums)
{
}

vector<int> NSE(vector<int> nums)
{
    stack<int> st;
    vector<int> nse(nums.size(), 0);

    nse[nums.size() - 1] = -1;
    for (int i = nums.size() - 2; i >= 0; i--)
    {
        while (!st.empty() && nums[i] < st.top())
            st.pop();

        nse[i] = st.top();
        st.push(nums[i]);
    }

    return nse;
}

int sumSubarrayMins(vector<int> &arr)
{
    // Brute

    // int n = arr.size();
    // int total = 0;
    // int mod = (int)(1e9 + 7);

    // for (int i = 0; i < n; i++)
    // {
    //     int mini = arr[i];
    //     for (int j = i; j < n; j++)
    //     {
    //         mini = min(mini, arr[j]);
    //         total = (total + mini) % mod;
    //     }
    // }
    // return total;

    // Optimal

    int n = arr.size();
    int total = 0;
    int mod = 1e9 + 7;
    vector<int> pse = PSE(arr);
    vector<int> nse = NSE(arr);
    for (int i = 0; i < n; i++)
    {
        int left = i - pse[arr[i]];
        int right = nse[arr[i]] - i;

        total = total + (right)
    }
}

int main()
{
    vector<int> nums = {3, 1, 2, 4};

    cout << sumSubarrayMins(nums) << endl;

    return 0;
}