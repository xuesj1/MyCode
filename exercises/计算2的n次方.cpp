#include <bits/stdc++.h>
using namespace std;
int n, arr[1005], len = 1;
int main()
{
    cin >> n;
    arr[1] = 1;
    for (int i = 1; i <= n; i++)
    {
        int jin = 0;
        for (int j = 1; j <= len; j++)
        {
            // cout << arr[j] << endl;
            arr[j] = arr[j] * 2 + jin;
            jin = arr[j] / 10;
            arr[j] = arr[j] % 10;
            if (jin != 0 && j == len)
            {
                len++;
                // arr[len - 1] = jin;
            }
        }
    }
    // cout << len << endl;
    for (int i = len; i >= 1; i--)
        cout << arr[i];
    return 0;
}
