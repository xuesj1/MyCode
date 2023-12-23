#include <bits/stdc++.h>
using namespace std;
int fg(int n, int fx)
{
    if (n == 1)
        return 1;
    if (fx == 1)
        return fg(n - 1, 1) + fg(n - 1, 2) + fg(n - 1, 3);
    else if (fx == 2)
        return fg(n - 1, 1) + fg(n - 1, 3);
    else if (fx == 3)
        return fg(n - 1, 1) + fg(n - 1, 2);
    else
        return 1;
}

int main()
{
    int n;
    cin >> n;
    int ans = fg(n, 1) + fg(n, 2) + fg(n, 3);
    cout << ans << endl;
    return 0;
}
