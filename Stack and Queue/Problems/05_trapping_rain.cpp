#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int trap(vector<int> &height)
{

    // Brute

    // int n = height.size();
    // vector<int> prefixMax(n, 0);
    // vector<int> suffixMax(n, 0);
    // int water = 0;

    // prefixMax[0] = height[0];
    // for (int i = 1; i < n; i++)
    //     prefixMax[i] = max(height[i], prefixMax[i - 1]);

    // suffixMax[n - 1] = height[n - 1];
    // for (int i = n - 2; i >= 0; i--)
    //     suffixMax[i] = max(height[i], suffixMax[i + 1]);

    // int leftMax = height[0];
    // for (int i = 0; i < n; i++)
    //     if (height[i] < prefixMax[i] && height[i] < suffixMax[i])
    //         water += min(prefixMax[i], suffixMax[i]) - height[i];

    // return water;

    // Better

    // int n = height.size();
    // vector<int> suffixMax(n, 0);
    // int water = 0;

    // suffixMax[n - 1] = height[n - 1];
    // for (int i = n - 2; i >= 0; i--)
    //     suffixMax[i] = max(height[i], suffixMax[i + 1]);

    // int leftMax = height[0];
    // for (int i = 0; i < n; i++)
    // {
    //     leftMax = max(leftMax, height[i]);
    //     if (height[i] < leftMax && height[i] < suffixMax[i])
    //         water += min(leftMax, suffixMax[i]) - height[i];
    // }

    // return water;

    // Optimal

    int leftMax = 0;
    int rightMax = 0;
    int total = 0;
    int l = 0;
    int r = height.size() - 1;

    while (l < r)
    {
        if (height[l] <= height[r])
        {
            if (leftMax > height[l])
                total += leftMax - height[l];
            elsetest.r
                leftMax = height[l];
            l++;
        }
        else
        {
            if (rightMax > height[r])
                total += rightMax - height[r];
            else
                rightMax = height[r];
            r--;
        }
    }
    return total;
}

int main()
{
    vector<int> water = {0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};
    cout << trap(water) << endl;

    return 0;
}