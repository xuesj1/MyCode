#include <bits/stdc++.h>
using namespace std;
char arr[500][500];
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i + 1; j++)
            arr[i][j] = ' ';
        for (int k = 1; k <= 2 * i - 1; k++)
            arr[i][k + (n - i)] = '#';
    }
    for (int i = 1; i <= n; i++)
    {
        for (int k = 1; k <= 2 * i - 1; k++)
        {
            int pf = sqrt(k);
            if (pf * pf == k)
            {
                arr[i][k + (n - i + 1) - 1] = '!';
            }
        } // cout << arr[i][j];
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j < n + i; j++)
        {
            cout << arr[i][j];
        }
        cout << endl;
    }
    return 0;
}
