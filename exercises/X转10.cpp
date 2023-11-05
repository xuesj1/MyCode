#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int x, len;
    cin >> s >> x;
    len = s.size();
    int num = 0;
    for (int i = len - 1; i >= 0; i--)
    {
        if (s[i] >= 'A' && s[i] <= 'F')
            num += (s[i] - 55) * pow(x, len - 1 - i);
        else
            num += (s[i] - 48) * pow(x, len - 1 - i);
    }
    cout << num << endl;
    return 0;
}
