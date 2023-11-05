#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    int arr[105][105], ans_arr[105][105];
    double temp;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
            ans_arr[i][j] = arr[i][j];
        }
    }
    for (int i = 1; i < n - 1; i++)
    {
        temp = 0;
        for (int j = 1; j < m - 1; j++)
        {
            ans_arr[i][j] = (arr[i - 1][j] + arr[i][j - 1] + arr[i + 1][j] + arr[i][j + 1] + arr[i][j]) / 5;
            temp = (arr[i - 1][j] + arr[i][j - 1] + arr[i + 1][j] + arr[i][j + 1] + arr[i][j]) / 5;
            if (temp - ans_arr[i][j] >= 0.5)
                ans_arr[i][j] += 1;
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << ans_arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
