#include <iostream>
#include <vector>
using namespace std;

int secondLargestElement(vector<int> &arr)
{
    // Brute
    // int maxi = -1;
    // int secMaxi = -1;

    // for (auto itr : arr)
    // {
    //     if (itr > maxi)
    //         maxi = itr;
    // }

    // for (auto i : arr)
    // {
    //     if (i > secMaxi && i < maxi)
    //         secMaxi = i;
    // }
    // return secMaxi;

    // Optimal
    int maxi = arr[0];
    int secMaxi = -1;

    for (int i = 1; i < arr.size(); i++)
    {
        if (arr[i] > maxi)
        {
            secMaxi = maxi;
            maxi = arr[i];
        }
        else if (arr[i] < maxi && arr[i] > secMaxi)
        {
            secMaxi = arr[i];
        }
    }
    return secMaxi;
}

int secondSmallestElement(vector<int> &arr)
{
    // Brute
    // int mini = arr[0];
    // int secMini = INT32_MAX;

    // for (int i = 0; i < arr.size(); i++)
    // {
    //     if (arr[i] < mini)
    //         mini = arr[i];
    // }

    // for (int i = 0; i < arr.size(); i++)
    // {
    //     if (arr[i] > mini && arr[i] < secMini)
    //         secMini = arr[i];
    // }
    // return secMini;

    // Optimal
    int mini = arr[0];
    int secMini = INT32_MAX;

    for (int i = 1; i < arr.size(); i++)
    {
        if (arr[i] < mini)
        {
            secMini = mini;
            mini = arr[i];
        }
        else if (arr[i] > mini && arr[i] < secMini)
        {
            secMini = arr[i];
        }
    }
    return secMini;
}

int main()
{

    vector<int> v = {1, 5, 2, 9, 8, 9, 11};

    cout << secondLargestElement(v) << endl;
    cout << secondSmallestElement(v) << endl;

    return 0;
}