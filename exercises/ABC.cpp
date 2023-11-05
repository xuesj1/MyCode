// 洛谷P4414
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[4];
    string s;
    for (int i = 0; i < 3; i++)
    {
        cin >> arr[i];
    }
    cin >> s;
    sort(arr, arr + 3);
    for (int i = 0; i < 3; i++)
    {
        if (s[i] == 'A')
            cout << arr[0] << " ";
        else if (s[i] == 'B')
            cout << arr[1] << " ";
        else
            cout << arr[2] << " ";
    }
    return 0;
}
