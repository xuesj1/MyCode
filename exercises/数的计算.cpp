#include <bits/stdc++.h>
using namespace std;
int arr[1005];
int func(int x)
{
    int ans = 1;
    if (arr[x] != 0)
        return arr[x];
    for (int i = 1; i <= x / 2; i++)
        ans += func(i);
    return arr[x] = ans;
}
int main()
{
    int n;
    cin >> n;
    arr[1] = 1;
    cout << func(n) << endl;
    return 0;
}
