#include <bits/stdc++.h>
using namespace std;
int arr[3005], cha[3005];
int main()
{
    int n, nn;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 1; i < n; i++)
    {
        cha[i] = abs(arr[i] - arr[i + 1]);
    }
    sort(cha + 1, cha + n);
    bool flag = 1;
    for (int i = 1; i < n; i++)
    {
        // cout << cha[i] << endl;
        if (cha[i] != i)
        {
            flag = 0;
        }
    }
    if (flag == 1)
        cout << "Jolly";
    else
        cout << "Not jolly";
    return 0;
}
