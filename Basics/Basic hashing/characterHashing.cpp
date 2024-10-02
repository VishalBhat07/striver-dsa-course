#include <iostream>
using namespace std;

int main()
{

    int n;
    cout << "Enter the size of the array : ";
    cin >> n;
    char arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // precompute
    int hash[26] = {0};
    for (int i = 0; i < n; i++)
    {
        hash[(arr[i] - 'a')] += 1;
    }

    int q;
    cout << "Enter the number of queries : ";
    cin >> q;
    while (q--)
    {
        cout << "Query : ";
        char ch;
        cin >> ch;
        // fetch
        cout << hash[ch - 'a'] << endl;
    }

    return 0;
}