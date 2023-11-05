#include <bits/stdc++.h>
using namespace std;
int arr[1005], brr[1005];
int main()
{
    int n, sum = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    for (int j = 0; j < n; j++)
        cin >> brr[j];
    for (int i = 0; i < n; i++)
        sum += arr[i] * brr[i];
    cout << sum;
    return 0;
}
