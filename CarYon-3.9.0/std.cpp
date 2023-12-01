#include <algorithm>
#include <iostream>
using namespace std;
int things[30001];
bool vis[30001]; // 存储这个纪念品是不是已经被选了
int main()
{
    int w, n; // w表每组纪念品价格之和的上上限，n表购来的纪念品的总件数
    cin >> w >> n;
    for (int i = 1; i <= n; i++)
        cin >> things[i];
    sort(things + 1, things + 1 + n); // 将纪念品价格从高到低排序
    int ans = 0;                      // 一共需要分几组
    for (int i = 1; i <= n; i++)
        if (vis[i] != true)
            for (int j = n; j > i; j--)
            { // 在不超过w元的情况下，尽可能让每组的钱数最大
                if (vis[j] != true && things[i] + things[j] <= w)
                {
                    ans++;
                    vis[i] = true;
                    vis[j] = true;
                    break;
                }
            }
    for (int i = 1; i <= n; i++)
        if (vis[i] != true) // 有一些纪念品无法两个一组，就单独一组
            ans++;
    cout << ans << endl;
    return 0;
}
