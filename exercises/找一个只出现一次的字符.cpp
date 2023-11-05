#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    char ch = '0';
    map<char, int> m;
    cin >> s;
    for (int i = 0; i < s.length(); i++)
        m[s[i]]++;
    for (int i = 0; i < s.length(); i++)
    {
        if (m[s[i]] == 1)
        {
            ch = s[i];
            break;
        }
    }
    if (ch != '0')
        cout << ch << endl;
    else
        cout << "no" << endl;
    return 0;
}
