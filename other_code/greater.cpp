#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[15];
    mt19937 ran(time(0));
    uniform_int_distribution<> sj(0, 100);
    for (int i = 0; i < 10; i++)
        arr[i] = sj(ran);
    sort(arr, arr + 10);
    for (int i = 0; i < 10; i++)
        cout << arr[i] << ' ';
    cout << endl;
    sort(arr, arr + 10, greater<int>());
    for (int i = 0; i < 10; i++)
        cout << arr[i] << ' ';
    return 0;
}
