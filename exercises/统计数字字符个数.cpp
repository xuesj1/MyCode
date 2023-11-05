#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int cut = 0;
    getline(cin, s);
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] >= '0' && s[i] <= '9')
            cut++;
    }
    cout << cut << endl;
    return 0;
}
