#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, temp;
    cin >> n;
    temp = n;
    while (n--)
    {
        string s;
        cin >> s;
        if (s != "AC")
            cout << temp - n << " ";
    }
    return 0;
}
