#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int reverseInt(int n)
{
    cout << "Enter a number : ";
    cin >> n;
    vector<int> nums;
    int ans = 0;
    while (n > 0)
    {
        nums.push_back(n % 10);
        n = n / 10;
    }

    for (int i = nums.size(); i > 0; i--)
    {
        ans = ans + nums[i] * pow(10, i);
    }
    return ans;
}

int main()
{
    cout << reverseInt(625) << endl;
    return 0;
}