#include <iostream>
#include <vector>
using namespace std;

int *unionArray(vector<int> arr1, vector<int> arr2)
{

    int n = arr1.size();
    int m = arr2.size();

    int temp[n + m];

    int i = 0;
    int j = 0;
    int k = 0;

    while (i < n && j < m)
    {
        if (arr1[i] <= arr2[j])
        {
            temp[k] = arr1[i];
            i++;
            k++;
        }
        else
        {
            temp[k] = arr2[j];
            j++;
            k++;
        }
    }

    while (i < n)
    {
        temp[k] = arr1[i];
        i++;
        k++;
    }

    while (j < m)
    {
        temp[k] = arr2[j];
        j++;
        k++;
    }
    return temp;
}

int main()
{

    vector<int> arr1 = {1, 2, 3, 4, 6};
    vector<int> arr2 = {2, 3, 5};

    int *ptr = unionArray(arr1, arr2);

    for (int i = 0; i < arr1.size() + arr2.size(); i++)
        cout << *ptr + i << " ";
    cout << endl;

    return 0;
}