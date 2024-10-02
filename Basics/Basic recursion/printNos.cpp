#include <iostream>
#include <vector>
using namespace std;

vector<int> printNos(int x)
{
    if (x == 0)
    {
        return {};
    }
    cout << x << " ";
    printNos(x - 1);
}

int main()
{
    printNos(5);
    return 0;
}