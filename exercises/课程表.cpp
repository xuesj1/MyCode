#include <bits/stdc++.h>
using namespace std;
int arr[4005][2];
int main()
{
    int n, m, ans = 0;
    while (1)
    {
        cin >> n >> m;
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                cin >> arr[i][j];
            }
        }
        if (m == 1)
        {
            cout << "True" << endl;
            continue;
        }
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                if ((j == 1 && arr[i][j] == arr[i + 1][j - 1]) || (j == 0 && arr[i][j] == arr[i + 1][j + 1]))
                    ans++;
            }
        }
        if (ans == m - 1 || ans / 2 == m - 1)
            cout << "False" << endl;
        else
            cout << "True" << endl;
    }
    return 0;
}
