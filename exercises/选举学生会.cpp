#include <bits/stdc++.h>
using namespace std;
int arr[2000005];
int main()
{
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < m; i++)
        cin >> arr[i];
    sort(arr, arr + m);
    for (int i = 0; i < m; i++)
        cout << arr[i] << " ";
    return 0;
}
