#include <bits/stdc++.h>
using namespace std;

const int N = 1000;
// ans_dp从路径的答案，in_arr存输入的金字塔
int ans_dp[N][N], in_arr[N][N];

int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cin >> in_arr[i][j];
        }
    }
    ans_dp[1][1] = in_arr[1][1]; // 边界
    for (int i = 2; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            ans_dp[i][j] = max(ans_dp[i - 1][j], ans_dp[i - 1][j - 1]) + in_arr[i][j]; // 动态转移方程，两种子结构
        }
    }
    int max_ans = 0;
    for (int i = 1; i <= n; i++)
    {
        max_ans = max(max_ans, ans_dp[n][i]);
    }
    cout << max_ans << endl;
    return 0;
}
