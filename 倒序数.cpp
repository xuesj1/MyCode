#include <bits/stdc++.h>
using namespace std;
int dx(int n)
{
    if (n <= 10)
        return n;
    else
    {
        cout << n % 10;
        return dx(n / 10);
    }
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long int n;
    cin >> n;
    cout << dx(n) << endl;
    return 0;
}
