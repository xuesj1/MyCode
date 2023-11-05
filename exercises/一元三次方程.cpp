// 洛谷p1024
#include <bits/stdc++.h>
using namespace std;

double a, b, c, d;
double x1, x2, mid, fx1, fx2;
int ans = 0;

double f(double x)
{
    return a * x * x * x + b * x * x + c * x + d;
}

int main()
{
    cin >> a >> b >> c >> d;
    for (int x = -100; x < 100; x++)
    {
        x1 = x;
        x2 = x1 + 1;
        fx1 = f(x1);
        fx2 = f(x2);
        if (fx1 == 0)
        {
            printf("%.2lf ", x1);
            ans++;
        }
        if (fx1 * fx2 < 0)
        {
            while (x2 - x1 >= 0.001)
            {
                mid = (x1 + x2) / 2;
                if (f(x1) * f(mid) <= 0)
                    x2 = mid;
                else
                    x1 = mid;
            }
            printf("%.2lf ", x1);
            ans++;
        }
        if (ans == 3)
            break;
    }
    return 0;
}
