#include <bits/stdc++.h>
using namespace std;
int n, arr[11][11];
int ans = 0;

void dfs(int k, int i, int j) // k表示现在在第几个机场
{
    if (k == n)
    {
        ans = 1;
    }
    else
    {
        for (i; i <= n; i++)
        {
            for (j; j <= n; j++)
            {
                if (arr[i][j] != 0 && arr[i][j] != -1)
                {
                    int temp = arr[i][j];
                    arr[i][j] = -1;
                    dfs(j, j, 1);
                    arr[i][j] = temp;
                }
            }
        }
    }
}

int main()
{
    int sum;
    cin >> sum;
    for (int a = 0; a < sum; a++)
    {
        ans = 0;
        cin >> n;
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                cin >> arr[i][j];
            }
        }
        dfs(1, 1, 1);
        if (ans)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
