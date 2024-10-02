#include <iostream>
using namespace std;

int binarySearch(int arr[], int low, int high, int n, int key)
{
    // Iterative

    // int l = 0;
    // int r = n - 1;
    // int mid = (l + r) / 2;

    // while (l <= r)
    // {
    //     if (arr[mid] == key)
    //         return mid;
    //     else if (arr[mid] < key)
    //         l = mid + 1;
    //     else
    //         r = mid - 1;

    //     mid = (l + r) / 2;
    // }
    // return -1;

    // Recursive

    if (low > high)
        return -1;

    int mid = (low + high) / 2;

    if (arr[mid] == key)
        return mid;
    else if (arr[mid] < key)
        return binarySearch(arr, mid + 1, high, n, key);

    return binarySearch(arr, low, mid - 1, n, key);
}

int main()
{
    int arr[8] = {3, 4, 6, 7, 9, 12, 16, 17};
    cout << binarySearch(arr, 0, 7, 8, 9) << endl;
    cout << binarySearch(arr, 0, 7, 8, 15) << endl;

    return 0;
}