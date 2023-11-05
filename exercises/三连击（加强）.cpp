#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll a, b, c, flag = 0;
    cin >> a >> b >> c;
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    do
    {
        ll t1 = arr[0] * 100 + arr[1] * 10 + arr[2];
        ll t2 = arr[3] * 100 + arr[4] * 10 + arr[5];
        ll t3 = arr[6] * 100 + arr[7] * 10 + arr[8];
        if (t1 * b == t2 * a && t2 * c == t3 * b)
            cout << t1 << ' ' << t2 << ' ' << t3 << endl, flag = 1;
    } while (next_permutation(arr, arr + 9));
    if (!flag)
        cout << "No!!!" << endl;
    return 0;
}
