#include <iostream>
#include <string>
using namespace std;

string largestOddNumber(string num)
{

    if ((int)(num.at(num.size() - 1)) % 2 != 0)
        return num;

    for (int i = num.size() - 1; i >= 0; i--)
    {
        if (num[i] % 2 != 0)
        {
            return num.substr(0, i + 1);
        }
    }
    return "";
}

int main()
{

    string str = "3546";
    str = largestOddNumber(str);

    cout << str << endl;

    return 0;
}