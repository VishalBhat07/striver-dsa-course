#include <iostream>
using namespace std;

bool checkPalindrome(int i, string s)
{
    if (i >= (s.size() / 2))
        return true;

    if (s[i] != s[s.size() - i - 1])
        return false;
    return checkPalindrome(i + 1, s);
}
int main()
{
    cout << checkPalindrome(0, "racecar") << endl;
    cout << checkPalindrome(0, "0000") << endl;
    cout << checkPalindrome(0, "133") << endl;
    cout << checkPalindrome(0, "11211") << endl;
    cout << checkPalindrome(0, "MADAM") << endl;
    return 0;
}