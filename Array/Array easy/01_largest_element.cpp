#include <iostream>
#include <vector>
using namespace std;

int largestElement(vector<int> &arr, int n)
{
    int maxi = -1;

    for (auto itr : arr)
    {
        if (itr > maxi)
            maxi = itr;
    }
    return maxi;
}

int main()
{

    vector<int> v = {1, 5, 2, 9, 8};

    cout << largestElement(v, 5);

    return 0;
}