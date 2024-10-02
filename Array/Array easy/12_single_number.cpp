#include <iostream>
#include <vector>
using namespace std;

int singleNumber(vector<int> v)
{
    // Brute
    int i = 0;
    while (i < v.size())
    {
        if (v[i] != v[i + 1])
            return v[i];
        else
            i += 2;
    }
    return -1;

    //  Optimal
    //   int xorr = 0;
    //     for (int i = 0; i < nums.size(); i++)
    //         xorr ^= nums[i];
    //     return xorr;
}

int main()
{

    vector<int> arr = {1, 1, 2, 2, 3, 4, 4};
    cout << "Single number : " << singleNumber(arr) << endl;

    return 0;
}