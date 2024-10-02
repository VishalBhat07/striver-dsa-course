#include <iostream>
#include <vector>
using namespace std;

bool palindrome(int n)
{
    int value = n;
    int rev = 0;
    while (n != 0)
    {
        int digit = n % 10;
        rev = (rev * 10) + digit;
        n = n / 10;
    }

    if (rev == value)
    {
        return true;
    }
    return false;
}

int main()
{
    cout << palindrome(000);
    return 0;
}