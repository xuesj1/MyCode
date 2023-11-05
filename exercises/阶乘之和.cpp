#include <bits/stdc++.h>
using namespace std;
struct aljc
{
    int arr[500];
    int len = 1;
} jcrr[55];
int sum[2000];
void jc(int num)
{
    jcrr[num].arr[1] = 1;
    for (int i = 1; i <= num; i++)
    {
        int jin = 0;
        for (int j = 1; j <= jcrr[num].len; j++)
        {
            jcrr[num].arr[j] = jcrr[num].arr[j] * i + jin;
            jin = jcrr[num].arr[j] / 10;
            jcrr[num].arr[j] = jcrr[num].arr[j] % 10;
            if (j == jcrr[num].len && jin != 0)
                jcrr[num].len++;
        }
    }
}
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        jc(i);
    }
    int xb = 1;
    for (int i = 1; i <= n; i += 2)
    {
        int jin = 0;
        while (xb <= jcrr[i].len || xb <= jcrr[i + 1].len)
        {
            sum[xb] += jcrr[i].arr[xb] + jcrr[i + 1].arr[xb] + jin;
            jin = sum[xb] / 10;
            sum[xb] %= 10;
            xb++;
        }
        sum[xb] = jin;
    }
    while (xb > 1 && sum[xb] == 0)
    {
        xb--;
    }
    for (int a = xb; a >= 1; a--)
    {
        cout << sum[a];
    }
    return 0;
}
