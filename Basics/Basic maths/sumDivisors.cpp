#include <iostream>
using namespace std;

int sumOfAllDivisors(int n)
{
    int ans = 0;
    for (int k = 1; k <= n; k++)
    {
        int sum = 0;
        for (int i = 1; i * i <= k; i++)
        {
            if (k % i == 0)
            {
                if (i * i == k)
                {
                    sum = sum + i;
                }
                else
                {
                    sum = sum + i + (k / i);
                }
            }
        }
        ans = ans + sum;
    }
    return ans;
}
int main()
{
    cout << sumOfAllDivisors(3) << endl;
    cout << sumOfAllDivisors(5) << endl;
    cout << sumOfAllDivisors(1) << endl;
    cout << sumOfAllDivisors(4) << endl;
    return 0;
}