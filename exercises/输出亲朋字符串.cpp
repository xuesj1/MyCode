#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s1;
    getline(cin, s1);
    for (int i = 0; i < s1.length() - 1; i++)
    {
        cout << char(s1[i] + s1[i + 1]);
    }
    cout << char(s1[0] + s1[s1.length() - 1]);
    return 0;
}
