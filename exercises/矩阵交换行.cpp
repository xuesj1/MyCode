#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[6][6];
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> arr[i][j];
        }
    }
    int n, m;
    cin >> m >> n;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (i != n - 1 && i != m - 1)
                cout << arr[i][j] << " ";
            else if (i == n - 1)
                cout << arr[m - 1][j] << " ";
            else if (i == m - 1)
                cout << arr[n - 1][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
