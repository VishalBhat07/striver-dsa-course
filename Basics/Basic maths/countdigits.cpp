#include <iostream>
#include <vector>
using namespace std;

int countDigits(int n)
{
    int a = n;
    int ans = 0;
    vector<int> digits;
    while (a != 0)
    {
        int lastd = a % 10;
        digits.push_back(lastd);
        a = a / 10;
    }

    for (int i = 0; i < digits.size(); i++)
    {
        if (digits[i] == 0)
        {
            continue;
        }
        if (n % digits[i] == 0)
        {
            ans++;
        }
    }
    return ans;
}

int main()
{
    cout << countDigits(660) << endl;

    return 0;
}