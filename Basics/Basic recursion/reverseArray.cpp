#include <iostream>
#include <vector>
using namespace std;

void reverseArray(int s, int n, int arr[])
{
    if (s >= (n / 2))
        return;
    swap(arr[s], arr[n - s - 1]);
    reverseArray(s + 1, n, arr);
}

int main()
{
    int a[5] = {1, 2, 3, 4, 5};
    reverseArray(0, 5, a);
    cout << "After reversing : " << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    return 0;
}