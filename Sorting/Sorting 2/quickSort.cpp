#include <iostream>
using namespace std;

int partitioninputay(int input[], int start, int end)
{
    int i = start;
    int j = end;
    int pivot = input[i];

    while (i < j)
    {

        while (i <= end - 1 && input[i] <= pivot)
        {
            i++;
        }
        while (input[j] > pivot && j >= start + 1)
        {
            j--;
        }
        if (i < j)
            swap(input[i], input[j]);
    }
    swap(input[start], input[j]);
    return j;
}

void quickSort(int input[], int start, int end)
{
    int partitionIndex = 0;
    if (start < end)
    {
        partitionIndex = partitioninputay(input, start, end);
        quickSort(input, start, partitionIndex - 1);
        quickSort(input, partitionIndex + 1, end);
    }
}

int main()
{
    int arr[8] = {4, 6, 2, 5, 7, 9, 1, 3};
    quickSort(arr, 0, 8);
    cout << "Sorted array : " << endl;
    for (int i = 0; i < 8; i++)
        cout << arr[i] << " ";
    cout << endl;
    return 0;
}