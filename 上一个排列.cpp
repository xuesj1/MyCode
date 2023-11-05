#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, arr[10];
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    if (prev_permutation(arr, arr + n))
    {
        for (int i = 0; i < n; i++)
            cout << arr[i] << ' ';
    }
    else
        cout << "ERROR" << endl;
    return 0;
}
