#include <iostream>
#include <vector>
using namespace std;

int searchInsert(vector<int> v, int x)
{
    int l = 0;
    int r = v.size() - 1;
    int mid = l - (l - r) / 2;
    int ans = v.size();

    while (l <= r)
    {
        if (v[mid] >= x)
        {
            ans = min(ans, mid);
            r = mid - 1;
        }
        else
            l = mid + 1;
        mid = (l + r) / 2;
    }
}

int main()
{
    vector<int> v = {1, 3, 5, 6};

    int ans = searchInsert(v, 40);
    cout << ans;
    return 0;
}