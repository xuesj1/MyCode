#include <bits/stdc++.h>
using namespace std;

int main()
{
    double a, b, c, d;
    cin >> a >> b >> c >> d;
    double s = a * b + c * d;
    double v = s / (b + d);
    printf("%.1lf\n%.1lf", s, v);
    return 0;
}
