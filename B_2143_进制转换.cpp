#include <bits/stdc++.h>
using namespace std;
string ans;
string func(int x, int m)
{
    if (x < m)
    {
        if (x < 10)
            ans = char(x + '0') + ans;
        else
            ans = (char)('A' + x - 10) + ans;
    }
    else
    {
        if (x % m < 10)
            ans = char((x % m) + '0') + ans;
        else
            ans = (char)('A' + x % m - 10) + ans;
        func(x / m, m);
    }
    return ans;
}

int main()
{
    int x, m;
    cin >> x >> m;
    cout << func(x, m) << endl;
    return 0;
}
