#include <bits/stdc++.h>
using namespace std;
bool cmp(int a, int b)
{
    if (a > b)
        return true;
    else
        return false;
}
int main()
{
    string s;
    int arr[15], temp[15], k;
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> s >> k;
        int len = s.length();
        for (int i = 0; i < len; i++)
        {
            arr[i] = s[i] - '0';
            temp[i] = s[i] - '0';
        }
        sort(temp, temp + len);
        int t = 0;
        for (int i = 0; i < len; i++)
        {
            if (t == k)
            {
                break;
            }
            for (int j = 0; j < len; j++)
            {
                if (arr[j] == temp[i])
                {
                    arr[i] = 0;
                    t++;
                    break;
                }
            }
        }
        for (int i = 0; i < len; i++)
        {
            if (arr[i] != 0)
                cout << arr[i];
        }
    }
    return 0;
}
