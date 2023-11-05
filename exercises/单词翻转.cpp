#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    vector<string> vec;
    getline(cin, s);
    s += ' ';
    int xb = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == ' ')
        {
            vec.push_back(s.substr(xb, i - xb));
            xb = i + 1;
        }
    }
    for (int i = 0; i < vec.size(); i++)
        reverse(vec[i].begin(), vec[i].end());
    for (int i = 0; i < vec.size(); i++)
        cout << vec[i] << ' ';
    return 0;
}