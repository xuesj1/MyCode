#include <bits/stdc++.h>
using namespace std;
int arr[100];
int flag[100];
int ans = 0, n;
bool zs(int a)
{
    for (int i = 2; i <= sqrt(a); i++)
    {
        if (a % i == 0)
            return false;
    }
    return true;
}
void print()
{
    ans++;
    cout << "第" << ans << "个可能：" << endl;
    for (int i = 1; i <= n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void dns(int k)
{
    for (int i = 1; i <= n; i++)
    {
        if (zs(arr[k - 1] + i) && flag[i] == 0)
        {
            arr[k] = i;
            flag[i] = 1;
            if (k == n && zs(arr[1] + arr[n]))
                print();
            else
                dns(k + 1);
            flag[i] = 0;
        }
    }
}
int main()
{
    cin >> n;
    dns(1);
    return 0;
}
