#include <iostream>
#include <vector>
#include <stack>
#include <string>
using namespace std;

bool isValid(string s)
{
    stack<char> st;

    for (int i = 0; i < s.size(); i++)
    {
        if (!st.empty())
        {
            if ((s[i] == ')' && st.top() == '(') ||
                (s[i] == ']' && st.top() == '[') ||
                (s[i] == '}' && st.top() == '{'))
            {
                st.pop();
                continue;
            }
        }
        st.push(s[i]);
    }

    if (st.empty())
        return true;

    return false;
}

int main()
{
    string s1 = "[{()}]";
    string s2 = "()[{}]";
    string s3 = "][()]{}";

    cout << isValid(s1) << endl;
    cout << isValid(s2) << endl;
    cout << isValid(s3) << endl;

    return 0;
}