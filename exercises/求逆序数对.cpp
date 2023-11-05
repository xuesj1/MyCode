#include <bits/stdc++.h>
using namespace std;
int n, arr[20005], ans = 0;
int main()
{
    while (cin >> n)
    {
        if (n == 0)
            return 0;
        else
        {
            memset(arr, 0, sizeof arr);
            for (int i = 0; i < n; i++)
            {
                cin >> arr[i];
            }
            for (int i = 1; i < n; i++)
            {
                for (int j = n - 1; j >= i; j--)
                {
                    if (arr[j] < arr[j - 1])
                    {
                        ans++;
                        swap(arr[j - 1], arr[j]);
                    }
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}
