/*#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N((2 * (1e6)) + 1);
bool a[N], b[N];
int main()
{
    ll n;
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i], b[i] = a[i];
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if (i % 2 != 0)
                a[j] = !(b[i - j + 1]);
            else
                b[j] = !(a[i - j + 1]);
        }
    }
    if (n % 2 == 0)
        for (int i = 1; i <= n; i++)
            cout << b[i] << ' ';
    else
        for (int i = 1; i <= n; i++)
            cout << a[i] << ' ';
    return 0;
}
*/
#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N((2 * (1e6)) + 1);
int a[N], b[N];

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    if (n % 2 == 0)
    {
        for (int i = 1; i <= n; i++)
        {
            if (i % 2 == 0)
                b[(n / 2) - (i / 2) + 1] = a[i];
            else
                b[(n / 2) + (i / 2) + 1] = a[i];
        }
    }
    else
    {
        for (int i = 1; i <= n; i++)
        {
            if (i % 2 == 0)
                b[(n / 2) + (i / 2) + 1] = a[i];
            else
                b[(n / 2) - (i / 2) + 1] = a[i];
        }
    }
    for (int i = 1; i <= n; i++)
    {
        if (n % 2 == 0)
        {
            if (i <= n / 2)
                cout << !b[i] << ' ';
            else
                cout << b[i] << ' ';
        }
        else
        {
            if (i <= n / 2 + 1)
                cout << !b[i] << ' ';
            else
                cout << b[i] << ' ';
        }
    }
    return 0;
}
