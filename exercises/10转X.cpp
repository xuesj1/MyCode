#include <bits/stdc++.h>
using namespace std;
string s;
int n, x;
int main()
{
    cin >> n >> x;
    int xb = 0;
    while (n != 0)
    {
        if (n % x > 9)
            s += char(n % x + 55);
        else
            s += char(n % x + 48);
        n /= x;
        xb++;
    }
    for (int j = s.size(); j >= 0; j--)
        cout << s[j];
    return 0;
}
