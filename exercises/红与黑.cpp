#include <iostream>
using namespace std;
int w, h, ans;
int x, y;
char ch[21][21];
int xx[4] = {0, 0, -1, 1};
int yy[4] = {-1, 1, 0, 0};
void dfs(int x, int y)
{
    ans++;
    ch[x][y] = '#';
    for (int i = 0; i < 4; i++)
    {
        int zx = x + xx[i];
        int zy = y + yy[i];
        if (zx >= 0 && zx < h && zy >= 0 && zy < w && ch[zx][zy] == '.')
        {
            dfs(zx, zy);
        }
    }
}
int main()
{
    while (1)
    {
        cin >> w >> h;
        if (w == 0 && h == 0)
            break;
        ans = 0;
        for (int i = 0; i < h; i++)
        {
            for (int j = 0; j < w; j++)
            {
                cin >> ch[i][j];
                if (ch[i][j] == '@')
                    x = i, y = j;
            }
        }
        dfs(x, y);
        cout << ans << endl;
    }
    return 0;
}