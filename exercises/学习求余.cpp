// n/2+1
// n/2
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll n;
    cin >> n;
    cout << n % (n / 2 + 1) * (n / 2 + 1) << endl;
    return 0;
}
