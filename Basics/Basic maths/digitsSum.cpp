#include <iostream>
#include <vector>
using namespace std;

void sumEvenOdd(int n)
{
    vector<int> digits;

    while (n != 0)
    {
        digits.push_back(n % 10);
        n = n / 10;
    }

    int evenSum = 0;
    int oddSum = 0;

    int i = 0;
    while (i < digits.size())
    {
        if (digits[i] % 2 == 0)
        {
            evenSum += digits[i];
        }
        else
        {
            oddSum += digits[i];
        }
        i++;
    }
    cout << evenSum << " " << oddSum << endl;
}
int main()
{
    int n;
    cout << "Enter a number : " << endl;
    cin >> n;
    sumEvenOdd(n);
}