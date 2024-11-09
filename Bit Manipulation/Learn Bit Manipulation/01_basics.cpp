#include <iostream>
using namespace std;

string decimalToBinary(int n)
{
    string ans = "";
    while (n != 0)
    {
        if (n % 2)
            ans += '1';
        else
            ans += '0';

        n /= 2;
    }

    reverse(ans.begin(), ans.end());

    return ans;
}

int binaryToDecimal(string num)
{

    int ans = 0;
    for (int i = num.size() - 1; i >= 0; i--)
        ans += pow(2, num.size() - i - 1) * (num[i] - '0');

    return ans;
}

int onesComplement(string num)
{
    for (int i = 0; i < num.size(); i++)
        num[i] == '1' ? num[i] = '0' : num[i] = '1';

    int n = binaryToDecimal(num);

    return n;
}

int main()
{

    string temp = decimalToBinary(11);
    cout << temp << endl;

    int n = binaryToDecimal(temp);
    cout << n << endl;

    cout << onesComplement(temp) << endl;

    cout << "SHIFT OPERATORS : " << endl;

    cout << "13      = " << decimalToBinary(13) << endl;
    cout << "13 >> 1 = " << decimalToBinary(13 >> 1) << endl;
    cout << "13 << 1 = " << decimalToBinary(13 << 1) << endl;

    cout << "MAX and MIN values : " << endl;
    cout << "INT MAX = " << decimalToBinary(INT32_MAX) << endl;
    cout << "INT MAX = " << binaryToDecimal(decimalToBinary(INT32_MAX)) << endl;
    cout << "INT MIN = " << decimalToBinary(INT32_MIN) << endl;
    cout << "INT MIN = " << binaryToDecimal(decimalToBinary(INT32_MIN)) << endl;

    cout << 5 << endl;
    cout << ~5 << endl;

    return 0;
}