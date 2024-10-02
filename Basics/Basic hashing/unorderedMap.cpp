#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{

    int n;
    cout << "Enter the size of the array : ";
    cin >> n;
    int arr[n];
    unordered_map<int, int> mpp;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        // precompute
        mpp[arr[i]]++;
    }

    // Iterate in the map
    for (auto it : mpp)
    {
        cout << it.first << "--->" << it.second << endl;
    }

    int q;
    cout << "Enter the number of queries : ";
    cin >> q;
    while (q--)
    {
        cout << "Query : ";
        int number;
        cin >> number;
        // fetch
        cout << mpp[number] << endl;
    }

    return 0;
}