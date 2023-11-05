#include <bits/stdc++.h>
using namespace std;
int arr[5050][2000];
int len = 1;
void func(int k)
{
    for (int i = 1; i <= len; i++)
        arr[k][i] = arr[k - 1][i] + arr[k - 2][i];
    for (int i = 1; i <= len; i++)
    {
        if (arr[k][i] > 9)
        {
            arr[k][i + 1] += arr[k][i] / 10;
            arr[k][i] %= 10;
            if (arr[k][len + 1])
                len++;
        }
    }
}

int main()
{
    int n;
    arr[1][1] = 1, arr[2][1] = 2;
    cin >> n;
    for (int i = 3; i <= n; i++)
        func(i);
    for (int i = len; i >= 1; i--)
    {
        cout << arr[n][i];
    }
    return 0;
}
