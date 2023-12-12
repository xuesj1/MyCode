#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int x;
    cin >> x;
    if (x <= 150)
        cout << 'S';
    else if (x >= 151 && x <= 160)
        cout << 'M';
    else if (x >= 161 && x <= 170)
        cout << 'L';
    else if (x >= 171 && x <= 180)
        cout << "XL";
    else
        cout << "XXL";
    return 0;
}