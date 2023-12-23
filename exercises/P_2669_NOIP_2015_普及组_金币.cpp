#include <bits/stdc++.h>
using namespace std;

int main()
{
    int k, ans = 0;
    cin >> k;
    int i = 1, day = 0;
    while (1)
    {
        for (int j = 1; j <= i; j++)
        {
            ans += i, day++;
            if (day == k)
            {
                cout << ans;
                return 0;
            }
        }
        i++;
    }
    return 0;
}
