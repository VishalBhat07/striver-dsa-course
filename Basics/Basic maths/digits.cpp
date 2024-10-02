#include <iostream>
#include <cmath>
using namespace std;

int main()
{

    int n;
    cout << "Enter a number : " << endl;
    cin >> n;

    // BRUTE
    // while (n != 0)
    // {
    //     int last_digit = n % 10;
    //     cout << last_digit << endl;
    //     n = n / 10;
    // }

    // BETTER
    int count = (int)(log10(n) + 1);
    cout << count << endl;
    return 0;
}