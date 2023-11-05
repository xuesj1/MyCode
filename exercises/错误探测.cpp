#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[105][105];
    int no[5] = {0};
    int n, ans = 0, ans2 = 0;
    bool t = true;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        ans = 0;
        for (int j = 0; j < n; j++)
        {
            if (arr[i][j] == 1)
                ans++;
        }
        if (ans % 2 != 0)
        {
            t = false;
            no[0] = i;
            no[1]++;
        }
    }
    for (int j = 0;  j< n; j++)
    {
        ans2 = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i][j] == 1)
                ans2++;
        }
        if (ans2 % 2 != 0)
        {
            t = false;
            no[2] = j;
            no[3]++;
        }
    }
    if (t == true)
    {
        cout << "OK" << endl;
    }
    else
    {
        if (no[1] == 1 && no[3] == 1)
        {
            cout << no[0]+1 << " " << no[2]+1 << endl;
        }
        else
        {
            cout << "Corrupt" << endl;
        }
    }
    return 0;
}
