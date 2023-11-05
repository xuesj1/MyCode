#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    int sum = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == ' ')
            sum++;
        else
        {
            if (sum != 0)
                cout << " ";
            cout << s[i];
            sum = 0;
        }
    }
    return 0;
}
