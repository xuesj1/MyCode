/*
样例输入：
5 4
10 10 10 10
9 8 9 6 5
样例输出：
79
思路：
考虑贪心。贪心策略：找第一个比自身便宜的加油站，并且尽量用最少的油跑到那个加油站
如样例：第一个加油站9元，第二个加油站8元，那么就去第二个加油站（因为是第一个比自身便宜的加油站），于是我们在第一个加油站加ceil(10/4)
升的油，即第一个加油站买三升油，用3*9=27可得第一个加油站所需钱数。接下来以此类推。
如何用代码实现？
路程计算：假设我们记第一个到第i个加油站的路程为sum[i]，那么第B个加油站到第A个加油站的路程为sum[b]-sum[a]
找第一个自身便宜的加油站：用一个数组记录第i个加油站的第一个比自身便宜的加油站的下标。例如一号加油站的第一个比自身便宜的加油站为二号
那么可以表示为：arr[1]=2 而二号加油站的第一个比自身便宜的加油站为四号那么可以表示为：arr[2]=4
计算价钱：需要注意的是“且每个站点只出售整数升的油”这个条件限制，也就意味着我们即使用最少的油跑到了目标加油站也可能会有多余的油，例如
样例一中从第一个加油站到第二个加油站用了3升油，可以跑12KM，但是它们直接的间隔只有10KM，所以会余下2KM.
油价=ceil((路程-多余的油)/d)*a[i]
多余的油=ceil((路程-多余的油)/d)*d-间隔路程)
*/
#include <bits/stdc++.h>
#define ll long long int // 由于计算出来的钱数会超出int范围，所以用longlong
using namespace std;
const int N = (1e5 + 5); // 数组的数据范围是1e5
ll v[N], a[N], sum[N];   // v是题目中表示站点间的距离，a是题目中表示每个加油站的钱数，sum是1到i的总路程
ll t_xb, t_a, t_arr[N];  // 这些变量均用于求第一个比自身便宜的加油站，t_xb存目前是第几个加油站，t_a存当前加油站的价格
// t_arr存当前加油站第一个比自身便宜的加油站的下标
int main()
{
    // freopen("road.in", "r", stdin);
    // freopen("road.out", "w", stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n, d, moneyans = 0; // n为有多少加油站，d为每升油可以前进的距离，moneyans存最后的金钱数
    cin >> n >> d;         // 输入
    for (int i = 1; i <= n - 1; i++)
        cin >> v[i];                    // 输入v
    sum[1] = 0;                         // 开始计算第一个到第i个加油站的总路程，此处初始化第一个加油站，因为第一个加油站到第一个加油站为0KM
    for (int i = 2; i <= n; i++)        // 从第二个开始
        sum[i] = sum[i - 1] + v[i - 1]; // 第一个到第i个加油站的路程为第一个到第i-1个加油站的路程加第i个与i-1之间的距离
    for (int i = 1; i <= n; i++)
        cin >> a[i];                               // 输入a
    t_xb = 1, t_a = a[1];                          // 开始求第一个比自身便宜的加油站，从第一个加油站开始，第一个加油站的价钱是a[i]
    for (int i = 2; i <= n - 1; i++)               // 从第二个比到第n-1个，至于为什么是n-1个后面说
        if (a[i] < t_a)                            // 如果找到了比自身便宜的加油站
            t_arr[t_xb] = i, t_a = a[i], t_xb = i; // 将当前第一个比自身便宜的加油站的下标存下了，更新当前加油站为你将去的那个第一个比自身便宜的加油站，价格也更新
    t_arr[t_xb] = n;                               // 当你算到第n-1个加油站的时候，下一个去的只有终点加油站了
    ll i = 1, dis = 0, d_oil = 0;                  // 开始计算价格
    while (i < n)                                  // 知道算到终点加油站
    {
        dis = sum[t_arr[i]] - sum[i];                       // 计算你要去的加油站（即前文求得第一个比自身便宜的加油站）与当前加油站直接的路程
        moneyans += (ceil((dis - d_oil * 1.0) / d)) * a[i]; // 计算价格，先计算要几升油（向上取整），然后*单价
        d_oil += (ceil((dis - d_oil * 1.0) / d) * d - dis); // 计算多余的油，用买的油总共能跑的路程减去站点之间的距离（及实际要跑的距离）
        i = t_arr[i];                                       // 去第一个比自身便宜的加油站
    }
    cout << moneyans << endl; // 输出答案
    return 0;                 // 完结撒花 ヾ(≧▽≦*)o
}