#include <bits/stdc++.h>
using namespace std;
int fj2(int n)
{
    int sum = 0;
    while (n != 0)
    {
        if (n % 10 == 2)
            sum++;
        n /= 10;
    }
    return sum;
}

int main()
{
    int l, r, ans = 0;
    cin >> l >> r;
    for (int i = l; i <= r; i++)
    {
        ans += fj2(i);
    }
    cout << ans << endl;
    return 0;
}
