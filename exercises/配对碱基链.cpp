// A->T  G->C
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == 'A')
            cout << "T";
        if (s[i] == 'T')
            cout << "A";
        if (s[i] == 'G')
            cout << "C";
        if (s[i] == 'C')
            cout << "G";
    }
    return 0;
}
