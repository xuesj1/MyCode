#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s, ss;
    cin >> s >> ss;
    int len = max(s.size(), ss.size());
    for (int i = 0; i < len; i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
            s[i] -= 32;
        if (ss[i] >= 'a' && ss[i] <= 'z')
            ss[i] -= 32;
    }
    if (s == ss)
        cout << "=" << endl;
    else if (s > ss)
        cout << ">" << endl;
    else if (s < ss)
        cout << "<" << endl;
    return 0;
}
