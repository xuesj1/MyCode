#include <bits/stdc++.h>
using namespace std;
struct Milk
{
    int p, a;
} mk[100005];
bool cmp(Milk a, Milk b)
{
    if (a.p < b.p)
        return true;
    else
        return false;
}
int main()
{
    int n, m;
    int sum_p = 0, sum_m = 0, temp;
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        cin >> mk[i].p >> mk[i].a;
    }
    sort(mk, mk + m, cmp);
    for (int i = 0; i < m; i++)
    {
        if (sum_m >= n)
            break;
        temp = sum_m;
        if (mk[i].a >= n - sum_m)
        {
            temp = sum_m;
            sum_m += n - sum_m;
            sum_p += mk[i].p * (n - temp);
        }
        else
        {
            sum_m += mk[i].a;
            sum_p += mk[i].p * mk[i].a;
        }
    }
    cout << sum_p << endl;
    return 0;
}
