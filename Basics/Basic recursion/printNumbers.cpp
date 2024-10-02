#include <iostream>
#include <vector>
using namespace std;

vector<int> printNos(int x)
{
    vector<int> arr;

    if (x == 1)
    {

        arr.push_back(x);

        return arr;
    }

    arr = printNos(x - 1);

    arr.push_back(x);
}

// int count = 1;
// void func(int x)
// {
//     if (count > x)
//     {
//         cout << "Ho gaya !!" << endl;
//         return;
//     }
//     cout << count << " ";
//     count++;
//     func(x);
// }
int main()
{
    vector<int> nums = printNos(5);
    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << " ";
    }

    return 0;
}