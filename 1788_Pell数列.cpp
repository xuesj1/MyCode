/*#include <bits/stdc++.h>
using namespace std;
int func(int n)
{
    if (n == 1)
        return 1;
    else if (n == 2)
        return 2;
    else
        return (2 * func(n - 1) + func(n - 2)) % 32767;
}
int main()
{
    int t = 0, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        cout << func(n) << endl;
    }
    return 0;
}*/
#include <bits/stdc++.h>
using namespace std;
long long arr[1000005];
int main()
{
    int t = 0, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        memset(arr, 0, sizeof arr);
        arr[1] = 1, arr[2] = 2;
        for (int i = 3; i <= n; i++)
        {
            arr[i] = (2 * arr[i - 1] + arr[i - 2]) % 32767;
        }
        cout << arr[n] << endl;
    }
    return 0;
}
