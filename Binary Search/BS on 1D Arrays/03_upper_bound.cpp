#include <iostream>
#include <vector>
using namespace std;

int upperBound(vector<int> arr, int x)
{
    int l = 0;
    int r = arr.size() - 1;
    int mid = (l + r) / 2;
    int ans = arr.size();

    while (l <= r)
    {

        if (arr[mid] > x)
        {
            ans = min(ans, mid);
            r = mid - 1;
        }
        else
            l = mid + 1;
        mid = (l + r) / 2;
    }
    return ans;
}

int main()
{

    vector<int> arr = {1, 2, 3, 3, 4, 4, 5};

    int ans = upperBound(arr, 3);
    cout << ans;
    return 0;
}