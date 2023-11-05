#include <bits/stdc++.h>
using namespace std;
int zaw[105][105]; // 障碍物
char ch;
bool dao = false;
int ha, hb, la, lb;
int k, n;
int zx[4] = {0, 0, -1, 1};
int zy[4] = {-1, 1, 0, 0};
void dfs(int x, int y)
{
    for (int a = 0; a < 4; a++)
    {
        int wx, wy;
        wx = x + zx[a]; // x的移动
        wy = y + zy[a]; // y的移动
        if (zaw[wx][wy] != 1 && wx >= 0 && wx < n && wy >= 0 && wy < n)
        {
            zaw[wx][wy] = 1;
            if (wx == hb && wy == lb)
            {
                dao = true;
                break;
            }
            else
                dfs(wx, wy);
        }
    }
}

int main()
{
    cin >> k;
    while (k--)
    {
        dao = false;
        memset(zaw, 0, sizeof(int)); // 每组测试数据都要清零障碍物数组
        cin >> n;                    // 迷宫的规模
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> ch;
                if (ch == '#')
                    zaw[i][j] = 1; // 有障碍物
            }
        }
        cin >> ha >> la >> hb >> lb;
        if (zaw[ha][la] == 1 || zaw[hb][lb] == 1) // 特判，起点或终点是否有障碍物
        {
            cout << "NO" << endl;
            continue;
        }
        dfs(ha, la); // 从起点开始搜索
        if (dao)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
