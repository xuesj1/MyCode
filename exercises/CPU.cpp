#include <bits/stdc++.h>
using namespace std;

int main()
{
    int c, t;
    cin >> c >> t;
    for (int i = 2; i <= c; i++)
    {
        if (i * 2 + c - i == t)
        {
            cout << i << " " << c - i;
            return 0;
        }
    }
    cout << "Error" << endl;
    return 0;
}
