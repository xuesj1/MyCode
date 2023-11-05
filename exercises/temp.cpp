#include <bits/stdc++.h>
using namespace std;
int func(int n)
{
    int a = 0, b = 0;
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else if (n == 2)
        return 2;
    else if (n == 3)
        return 2;
    else
    {
        return func(n - 2) + func(n - 3);
    }
}
int main()
{
    int n;
    cin >> n;
    cout << func(n) << endl;
    return 0;
}
