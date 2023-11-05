// P1588
#include <bits/stdc++.h>
using namespace std;
const int MAX = 100005; // 定义边界值（10^5）
int ans[MAX];           // 定义答案（步数）数组
void bfs(int x, int y)  // 广搜函数
{
    memset(ans, 0, sizeof ans); // 因为有多组数据，所以每次数组都要清零
    queue<int> q;               // 广搜用队列
    q.push(x);                  // 将初始值（农夫的坐标）入队
    ans[x] = 0;                 // 初始位置到初始位置的坐标是0，如果x==y输出0
    while (!q.empty())          // 如果队列不为空就循环
    {
        int hd = q.front();          // 记录队首元素
        q.pop();                     // 队首元素出队
        if (hd == y)                 // 如果当前元素等于奶牛的位置，说明农夫抓到了牛
            cout << ans[hd] << endl; // 输出当前元素所用步数
        // 农夫有三种走法：1.前进一步    2.后退一步    3.走（瞬移）到当前坐标*2的点
        if (hd + 1 <= MAX && ans[hd + 1] == 0) // 1.前进一步，如果前进后点的坐标没有越界并且前进后的点没有被走过
        {
            ans[hd + 1] = ans[hd] + 1; // 前进后点的步数为当前点+1
            q.push(hd + 1);            // 走过了，将该元素入队
        }
        if (hd - 1 >= 0 && ans[hd - 1] == 0) // 2.后退一步，如果后退的点不小于0且没有被走过 PS：要>=0不能是>=x 因为当x=5 y=8时 走法为（5-1）*2
        {
            ans[hd - 1] = ans[hd] + 1; ////后退的点的步数为当前点+1
            q.push(hd - 1);            // 走过了，将该元素入队
        }
        if (hd * 2 <= MAX && ans[hd * 2] == 0) // 3.走到当前坐标*2的点，如果*2的点没有越界且没走过 PS：要<=MAX不能是<=y 因为当x=5 y=9时 走法为（2*5）-1
        {
            ans[hd * 2] = ans[hd] + 1; //*2后的点的步数为当前点+1
            q.push(hd * 2);            // 走过了，将该元素入队
        }
    }
}
int main()
{
    int t; // 总共有t组数据
    cin >> t;
    while (t--) // 循环输入t次
    {
        int x, y;
        cin >> x >> y; // 输入农夫和牛的坐标
        bfs(x, y);     // 广搜
    }
    return 0;
}
