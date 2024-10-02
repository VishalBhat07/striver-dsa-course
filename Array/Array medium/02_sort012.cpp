#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void sort012(vector<int> &v)
{
    // Brute
    // sort(v.begin(), v.end());

    // Better
    // int zeros = 0;
    // int ones = 0;

    // for (auto itr : v)
    // {
    //     if (itr == 0)
    //         zeros++;
    //     else if (itr == 1)
    //         ones++;
    // }

    // for (int i = 0; i < zeros; i++)
    //     v[i] = 0;

    // for (int i = zeros; i < zeros + ones; i++)
    //     v[i] = 1;

    // for (int i = zeros + ones; i < v.size(); i++)
    //     v[i] = 2;

    // Opitmal - Dutch National Flag algorithm

    int low = 0;
    int mid = 0;
    int high = v.size() - 1;

    while (mid <= high)
    {

        if (v[mid] == 0)
        {
            swap(v[mid], v[low]);
            mid++;
            low++;
        }
        else if (v[mid] == 1)
        {
            mid++;
        }
        else
        {
            swap(v[mid], v[high]);
            high--;
        }
    }
}

int main()
{

    vector<int> v = {1, 2, 0, 2, 0, 0, 1};
    sort012(v);

    for (auto itr : v)
        cout << itr << endl;

    return 0;
}