#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[3];
    cin >> arr[0] >> arr[1] >> arr[2];
    sort(arr, arr + 3);
    if (pow(arr[0], 2) + pow(arr[1], 2) == pow(arr[2], 2))
        cout << pow(arr[2], 2);
    else
        cout << pow(arr[1], 2) + pow(arr[2], 2) << endl;
    return 0;
}
