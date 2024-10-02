#include <iostream>
#include <vector>
using namespace std;

vector<string> printNTimes(int n)
{
    if (n > 0)
    {
        cout << "Coding Ninjas"
             << " ";
        printNTimes(n - 1);
    }
    return {};
}

int main()
{
    int n;
    cin >> n;
    printNTimes(n);
    return 0;
}