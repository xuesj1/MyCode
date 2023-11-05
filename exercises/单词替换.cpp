#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s, a, b;
    vector<string> vec;
    getline(cin, s);
    cin >> a >> b;
    s += ' ';
    int xb = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == ' ')
        {
            vec.push_back(s.substr(xb, i - xb));
            xb = i + 1;
        }
    }
    for (int i = 0; i < vec.size(); i++)
    {
        if (vec[i] == a)
            vec[i] = b;
    }
    for (int i = 0; i < vec.size(); i++)
        cout << vec[i] << " ";
    return 0;
}
