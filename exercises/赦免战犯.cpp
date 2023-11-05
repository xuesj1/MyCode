#include <bits/stdc++.h>
using namespace std;
int arr[2000][2000];
void func(int x, int y, int n)
{
    if (n == 0)
    {
        arr[x][y] = 1;
    }
    else
    {
        func(x, y + (1 << n - 1), n - 1);
        func(x + (1 << n - 1), y, n - 1);
        func(x + (1 << n - 1), y + (1 << n - 1), n - 1);
    }
}
int main()
{
    int n;
    cin >> n;
    func(0, 0, n);
    for (int i = 0; i < (1 << n); i++)
    {
        for (int j = 0; j < (1 << n); j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
