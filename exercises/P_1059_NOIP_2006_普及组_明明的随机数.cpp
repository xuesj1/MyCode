#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, arr[105];
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    sort(arr, arr + n);
    int len = unique(arr, arr + n) - arr;
    cout << len << endl;
    for (int i = 0; i < len; i++)
    {
        cout << arr[i] << ' ';
    }
    return 0;
}
