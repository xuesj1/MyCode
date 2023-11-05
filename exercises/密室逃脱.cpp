#include <bits/stdc++.h>
using namespace std;
int m, n;

int maze[104][104] = {};

int dx[4] = {0, 0, -1, 1};

int dy[4] = {-1, 1, 0, 0};

struct Node
{
    int x, y, k, t;
};

bool legal(int x, int y)
{
    if (0 <= x && x < m && 0 <= y && y < n && maze[x][y] != 0)
        return 1;
    return 0;
}

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        memset(maze, 0, sizeof(maze));
        int vis[104][104] = {};
        memset(vis, 0xff, sizeof(vis));
        int S[10050] = {};
        int cnt = 0;
        cin >> m >> n;
        for (int i = 0; i < m; ++i)
        {
            for (int j = 0; j < n; ++j)
            {
                cin >> maze[i][j];
                if (maze[i][j] > 1)
                    S[cnt++] = maze[i][j];
            }
        }
        queue<Node> open;
        sort(S, S + cnt);
        if (maze[0][0] == S[0])
        {
            open.push({0, 0, 1, 0});
            vis[0][0] = 1;
        }
        else
        {
            open.push({0, 0, 0, 0});
            vis[0][0] = 0;
        }
        bool flag = 0;
        while (!open.empty())
        {
            Node temp = open.front();
            open.pop();
            if (temp.k == cnt)
            {
                flag = 1;
                cout << temp.t << endl;
                break;
            }
            for (int i = 0; i < 4; i++)
            {
                int x = temp.x + dx[i], y = temp.y + dy[i], k = temp.k;
                if (!legal(x, y))
                    continue;
                if (maze[x][y] == S[k])
                    k++;
                if (vis[x][y] >= k)
                    continue;
                vis[x][y] = k;
                open.push({x, y, k, temp.t + 1});
            }
        }
        if (!flag)
            cout << -1 << endl;
    }
    return 0;
}
