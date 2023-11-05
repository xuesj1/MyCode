#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[6][6], swap[6], n, m;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> arr[i][j];
        }
    }
    cin >> n >> m;
    for (int i = 0; i < 5; i++)
    {
        swap[i] = arr[n - 1][i];
        arr[n - 1][i] = arr[m - 1][i];
        arr[m - 1][i] = swap[i];
    }
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << arr[i][j] << ' ';
        }
        cout << endl;
    }
    return 0;
}
