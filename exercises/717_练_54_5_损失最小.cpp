#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n, m;
    cin >> n >> m;
    int arr[n];
    for (long long i = 0; i < n; i++)
        cin >> arr[i];
    sort(arr, arr + n);
    for (long long i = 0; i < m; i++)
        cout << arr[i] << "\n";
    return 0;
}
