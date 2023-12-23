#include <bits/stdc++.h>
using namespace std;

int main()
{
    int k;
    cin >> k;
    for (int i = 1; i <= k; i++)
    {
        long long n, d, e;
        cin >> n >> d >> e;
        bool flag = 1;
        for (long long p = 1; p * p <= n; p++)
        {
            long long q;
            if (n % p == 0)
            {
                q = n / p;
                if (d * e == (p - 1) * (q - 1) + 1)
                {
                    cout << p << ' ' << q << endl;
                    flag = 0;
                    break;
                }
            }
        }
        if (flag)
            cout << "NO" << endl;
    }
    return 0;
}
