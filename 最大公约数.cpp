#include <bits/stdc++.h>
using namespace std;
int func(int x, int y)
{
    if (x % y == 0)
        return y;
    else
    {
        return func(y, x % y);
    }
}
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int x, y;
        cin >> x >> y;
        cout << func(x, y) << endl;
    }
    return 0;
}
