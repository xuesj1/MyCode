#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int a, b, c, m, op, k, tj, t1 = 0, t2 = 0, t3 = 0;
    cin >> a >> b >> c >> m;
    tj = a * b * c;
    for (int i = 0; i < m; i++)
    {
        cin >> op >> k;
        if (op == 1 && k > t1)
        {
            tj = (a - (k - t1)) * b * c;
            a -= (k - t1);
            t1 = max(t1, k);
        }
        else if (op == 2 && k > t2)
        {
            tj = a * (b - (k - t2)) * c;
            b -= (k - t2);
            t2 = max(t2, k);
        }
        else if (op == 3 && k > t3)
        {
            tj = a * b * (c - (k - t3));
            c -= (k - t3);
            t3 = max(t3, k);
        }
        if (tj <= 0)
            cout << 0 << endl;
        else
            cout << tj << endl;
    }
    return 0;
}
