#include <iostream>
#include <vector>
using namespace std;

int linearSearch(vector<int> v, int key)
{
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] == key)
            return i;
    }
    return -1;
}
int main()
{

    vector<int> arr = {1, 2, 3, 4, 5};
    cout << linearSearch(arr, 4);

    return 0;
}