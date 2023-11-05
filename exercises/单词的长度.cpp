#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    vector<string> vec;
    getline(cin, s);
    int xb = 0;
    s += ' ';
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == ' ')
        {
            vec.push_back(s.substr(xb, i - xb));
            xb = i + 1;
        }
    }
    for (int i = 0; i < vec.size() - 1; i++)
    {
        if (vec[i].size() != 0)
            cout << vec[i].size() << ",";
    }
    cout << vec[vec.size() - 1].size();
    return 0;
}
