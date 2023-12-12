#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    double n;
    cin >> n;
    double b = 50 + n / 3, r = n / 1.2;
    if (b < r)
        cout << "Bike" << endl;
    else if (b > r)
        cout << "Walk" << endl;
    else
        cout << "All" << endl;
    return 0;
}
