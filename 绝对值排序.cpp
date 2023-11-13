#include <bits/stdc++.h>
using namespace std;
struct number
{
    int num, nabs;
} narr[105];
bool cmp(number a, number b)
{
    if (a.nabs > b.nabs)
        return true;
    else
        return false;
}
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> narr[i].num;
        narr[i].nabs = abs(narr[i].num);
    }
    sort(narr, narr + n, cmp);
    for (int i = 0; i < n; i++)
        cout << narr[i].num << ' ';
    return 0;
}
