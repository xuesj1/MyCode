#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    int sum = s.size(), sum2 = 0;
    for (int i = 0; i < sum; i++)
    {
        if (s[i] == '.')
            sum2++;
    }
    cout << s << endl;
    cout << "字符个数:" << sum << endl;
    cout << ".的个数:" << sum2 << endl;
    return 0;
}
