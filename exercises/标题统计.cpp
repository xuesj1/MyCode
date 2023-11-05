#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int sum=0;
    getline(cin, s);
    int len = s.length();
    for (int i = 0; i < len; i++)
    {
        if(s[i]!=' '&&s[i]!='\n')
            sum++;
    }
    cout << sum << endl;
    return 0;
}
