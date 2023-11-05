// 洛谷p1177
#include <bits/stdc++.h>
using namespace std;
int n, arr[100000];
void quickSort(int left, int right)
{

    int a = left, b = right, mid = arr[(a + b) / 2];
    while (a <= b)
    {
        while (arr[a] < mid)
            a++;
        while (arr[b] > mid)
            b--;
        if (a <= b)
        {
            swap(arr[a], arr[b]);
            a++, b--;
        }
    }
    if (left < b)
        quickSort(left, b);
    if (right > a)
        quickSort(a, right);
}
int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }
    quickSort(1, n);
    for (int i = 1; i <= n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
