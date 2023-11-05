#include <bits/stdc++.h>
using namespace std;
struct Ticket
{
    int price, lati, use;
} stic[100001];
int main()
{
    int n, x, p, t;
    int ans = 0;
    int head = 0, tail = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x >> p >> t;
        int flag = 0;
        if (x == 0) // 地铁
        {
            tail++;
            ans += p;
            stic[tail].price = p;
            stic[tail].lati = t + 45;
            stic[tail].use = 0;
        }
        else
        {
            for (int i = head; i <= tail; i++)
            {
                if (stic[i].lati < t)
                {
                    head = i;
                    continue;
                }
                if (stic[i].price >= p && stic[i].use == 0)
                {
                    flag = 1;
                    stic[i].use = 1;
                    break;
                }
            }
            if (flag == 1)
                ans += 0;
            else
                ans += p;
        }
    }
    cout << ans << endl;
    return 0;
}
