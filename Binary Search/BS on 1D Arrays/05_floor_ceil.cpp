#include <iostream>
#include <vector>
using namespace std;

int searchFloor(vector<int> v, int x)
{
    int l = 0;
    int r = v.size() - 1;
    int mid = l - (l - r) / 2;
    int ans = -1;

    while (l <= r)
    {
        if (v[mid] <= x)
        {
            ans = v[mid];
            l = mid + 1;
        }
        else
            r = mid - 1;
        mid = (l + r) / 2;
    }
    return ans;
}

int searchCeil(vector<int> v, int x)
{
    int l = 0;
    int r = v.size() - 1;
    int mid = l - (l - r) / 2;
    int ans = -1;

    while (l <= r)
    {
        if (v[mid] >= x)
        {
            ans = v[mid];
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
    vector<int> v = {1, 3, 5, 6};

    cout << searchFloor(v, 4) << endl;
    cout << searchCeil(v, 4) << endl;
    return 0;
}