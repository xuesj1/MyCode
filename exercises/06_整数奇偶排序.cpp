#include <bits/stdc++.h>
using namespace std;
bool cmp(int a, int b)
{
    return a > b;
}
int main()
{
    int arr[15], ou[15], ji[15], oou = 0, jii = 0;
    for (int i = 0; i < 10; i++)
    {
        cin >> arr[i];
        if (arr[i] % 2 == 0)
            ou[oou] = arr[i], oou++;
        else
            ji[jii] = arr[i], jii++;
    }
    sort(ou, ou + oou), sort(ji, ji + jii, cmp);
    for (int i = 0; i < jii; i++)
        cout << ji[i] << ' ';
    for (int i = 0; i < oou; i++)
        cout << ou[i] << ' ';
    return 0;
}
