#include <bits/stdc++.h>
using namespace std;
int n, arr[1000] = {1};
void print(int t) // t是位置
{
    cout << n << "=";
    for (int i = 1; i <= t - 1; i++)
        cout << arr[i] << "+";
    cout << arr[t] << endl;
}
// k是第几个位置，s是输入的数字
void dns(int k, int s)
{
    // 枚举这个数字s
    for (int a = arr[k - 1]; a <= s; a++)
    {
        if (a < n) // 被分解的过程，当前搜索的数字小于n
        {
            arr[k] = a; // 把数字a存到答案数组中
            s -= a;     // a这个数字用掉了
            if (s == 0) // 数字已经被减完了就输出
                print(k);
            else
                dns(k + 1, s);
            s += a; // 把a这个数字补回来（回溯）
        }
    }
}

int main()
{
    cin >> n;
    dns(1, n);
    return 0;
}
