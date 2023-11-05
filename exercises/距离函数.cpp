#include <bits/stdc++.h>
using namespace std;
double dis(double x1, double y1, double x2, double y2)
{
    return sqrt(abs(pow(x2 - x1, 2)) + abs(pow(y2 - y1, 2)));
}
int main()
{
    double x1, y1, x2, y2, x3, y3;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    double ans = dis(x1, y1, x2, y2) + dis(x2, y2, x3, y3) + dis(x1, y1, x3, y3);
    printf("%.2lf", ans);
    return 0;
}
