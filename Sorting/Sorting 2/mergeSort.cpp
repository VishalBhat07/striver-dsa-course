#include <iostream>
using namespace std;

void merge(int *arr, int l, int mid, int r)
{
    int temp[r - l + 1];
    int leftptr = l;
    int rightptr = mid + 1;
    int i = 0;
    while (leftptr <= mid && rightptr <= r)
    {
        if (arr[leftptr] < arr[rightptr])
        {
            temp[i] = (arr[leftptr]);
            leftptr++;
        }
        else
        {
            temp[i] = (arr[rightptr]);
            rightptr++;
        }
        i++;
    }

    while (leftptr <= mid)
    {
        temp[i] = (arr[leftptr]);
        leftptr++;
        i++;
    }

    while (rightptr <= r)
    {
        temp[i] = (arr[rightptr]);
        rightptr++;
        i++;
    }

    for (int i = l; i <= r; i++)
    {
        arr[i] = temp[i - l];
    }
}

void mergeSort(int arr[], int l, int r)
{
    if (l >= r)
        return;
    int mid = (l + r) / 2;
    mergeSort(arr, l, mid);
    mergeSort(arr, mid + 1, r);
    merge(arr, l, mid, r);
}

int main()
{
    int arr[6] = {13, 2, 67, 9, 1, 2};
    mergeSort(arr, 0, 5);
    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}