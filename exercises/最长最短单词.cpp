#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    string smax, smin;
    getline(cin, s);
    vector<string> vec;
    // s += ' ';
    int front = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == ' ' || s[i] == ',' || s[i] == '.')
        {
            vec.push_back(s.substr(front, i - front));
            front = i + 1;
        }
    }
    int m_max = -1, m_min = INT_MAX;
    for (int i = 0; i < vec.size(); i++)
    {
        int len = vec[i].size();
        if (m_max < len)
        {
            m_max = len;
            smax = vec[i];
        }
        if (m_min > vec[i].size())
        {
            m_min = len;
            smin = vec[i];
        }
    }
    cout << smax << "\n"
         << smin << endl;
    return 0;
}
