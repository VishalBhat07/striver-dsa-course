#include <iostream>
using namespace std;

int floorSqrt(int n)
{
    if (n == 0)
        return 0;

    if (n == 1)
        return 1;

    int l = 1;
    int r = n;
    int ans = -1;
    int mid = (l + r) / 2;

    while (l <= r)
    {
        if (mid * mid >= n)
        {
            ans = mid;
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
        mid = (l + r) / 2;
    }
    return ans;
}

int main()
{
    int n;
    cout << "Enter a number : ";
    cin >> n;

    cout << "sqrt(" << n << ") = " << floorSqrt(n) << endl;
    return 0;
}