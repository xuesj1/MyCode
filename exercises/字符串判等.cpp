#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s, ss;
    getline(cin, s);
    getline(cin, ss);
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
            s[i] -= 32;
    }
    for (int i = 0; i < ss.size(); i++)
    {
        if (ss[i] >= 'a' && ss[i] <= 'z')
            ss[i] -= 32;
    }
    int sum1 = 0, sum2 = 0;
    // cout << s << " " << ss << endl;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] != ' ')
            sum1 += s[i];
    }
    for (int i = 0; i < ss.size(); i++)
    {
        if (ss[i] != ' ')
            sum2 += ss[i];
    }
    if (sum1 == sum2)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}