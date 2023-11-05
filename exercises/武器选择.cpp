/*
题目描述
虎牙老师在玩打怪游戏，游戏共有 𝑛 个关卡，每通过一个关卡就会遇到一把武器，它的代 号为 𝑎𝑖，表示当你第 𝑎𝑖 次遇到代号为 𝑎𝑖 的武器时，才能够获得这把武器（代号相同的武 器可以认为是相同的武器）。 现在有 𝑚 次询问，每次指定一个关卡区间 [𝐿, 𝑅]，在通过这些关卡之后（虎牙老师是一个 高手，所以这些关卡都能通过），虎牙老师需要从获得的武器中选出 𝑘𝑖 个（保证 𝑘𝑖 ≤ 4 ） 来与怪物对决，你需要输出你有多少种组合方案。
输入
第一行输入一个整数 𝑛 表示关卡的数量。
第二行输入 𝑛 个整数 𝑎𝑖 （1 ≤ 𝑎𝑖 ≤ 10^9）表示第 𝑖个关卡遇到的武器的代号（保证任意两个武器的代号互不相同）。
第三行输入一个整数 𝑚 表示挑战次数。
接下来的 𝑚 行，每行三个正整数 𝐿𝑖, 𝑅𝑖, 𝑘𝑖 (1 ≤ 𝐿𝑖 ≤ 𝑅𝑖 ≤ 𝑛, 1 ≤ 𝑘𝑖 ≤ 4) ，表示需要通过的关卡区间。
输出
输出 𝑚 行，每行一个整数，表示该次挑战武器组合方案数量。
样例输入 复制
7
1 3 7 2 3 7 2
4
1 1 1
2 5 4
4 7 1
1 7 1
样例输出 复制
1
0
1
2
提示
对于第一个询问，获得的武器为 1 ，选出一把武器的方案为 (1)
对于第二个询问，没有获得的武器。
对于第三个询问，获得的武器为 2，选出一把武器的方案为 (2)
对于第四个询问，获得的武器为 1,2，选出一把武器的方案为 (1), (2) 两种。

*/
#include <bits/stdc++.h>
#define ll long long int
using namespace std;
ll arr[1005], t[1000005];
long long C(int n, int m)
{
    ll sum = 1, sum2 = 1, sum3 = 1;
    for (int i = 1; i <= n; i++)
        sum *= i;
    for (int i = 1; i <= m; i++)
        sum2 *= i;
    if (n - m == 0)
        sum3 = 1;
    else
    {
        for (int i = 1; i <= n - m; i++)
            sum3 *= i;
    }
    return sum / (sum2 * sum3);
}

int main()
{
    ll n, m;
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> arr[i];
    cin >> m;
    while (m--)
    {
        memset(t, 0, sizeof t);
        ll l, r, k, j = 0, mmax = LONG_LONG_MIN, mmin = LONG_LONG_MAX, sum = 0;
        cin >> l >> r >> k;
        for (int i = l; i <= r; i++, j++)
        {
            mmax = max(mmax, arr[i]), mmin = min(mmin, arr[i]);
            t[arr[i]]++;
        }
        for (int i = mmin; i <= mmax; i++)
        {
            if (t[i] == i)
                sum++;
        }
        if (sum == 0)
            cout << 0 << endl;
        else
            cout << C(sum, k) << endl;
    }
    return 0;
}
