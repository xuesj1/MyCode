#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s, ss;
    getline(cin, s);
    getline(cin, ss);
    for (int i = 0; i < min(s.size(), ss.size()); i++)
    {
        if (s[i] == ss[i])
            cout << i + 1 << " ";
    }
    return 0;
}
