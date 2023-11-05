// 洛谷P1055
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int n = 0;
    getline(cin, s);
    int l = s.length();
    int j = 1;
    for (int i = 0; i < l - 2; i++)
    {
        if (s[i] != '-')
        {
            n += (s[i] - '0') * j;
            j++;
        }
    }
    n %= 11;
    // cout<<(n%=11)<<endl;

    if ((s[l - 1] - '0') == n)
    {
        cout << "Right" << endl;
    }
    else if (n == 10)
    {
        if (s[l - 1] == 'X')
            cout << "Right" << endl;
        else
        {
            s[l - 1] = 'X';
            for (int i = 0; i < l; i++)
            {
                cout << s[i];
            }
        }
    }
    else
    {
        s[l - 1] = n + '0';
        for (int i = 0; i < l; i++)
        {
            cout << s[i];
        }
    }
    return 0;
}
