#include <iostream>
#include <vector>
using namespace std;

void rotateArray(vector<int> &nums)
{
    // Optimal
    int temp = nums[0];

    for (int i = 0; i < nums.size(); i++)
        nums[i] = nums[i + 1];

    nums[nums.size() - 1] = temp;
}

int main()
{
    vector<int> v = {1, 2, 3, 4, 5};

    rotateArray(v);

    for (auto itr : v)
    {
        cout << itr << " ";
    }
    cout << endl;

    return 0;
}
