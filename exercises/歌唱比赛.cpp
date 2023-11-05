#include <bits/stdc++.h>
using namespace std;
struct student
{
    double arr[25];
} stu[105];
int main()
{
    int n, m;
    double m_max = 0, sum = 0;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> stu[i].arr[j];
        }
    }
    for (int i = 0; i < n; i++)
        sort(stu[i].arr, stu[i].arr + m);
    for (int i = 0; i < n; i++)
        stu[i].arr[0] = 0, stu[i].arr[m - 1] = 0;
    for (int i = 0; i < n; i++)
    {
        sum = 0;
        for (int j = 0; j < m; j++)
        {
            sum += stu[i].arr[j];
        }
        m_max = max(m_max, sum / (m - 2));
    }
    printf("%.2lf", m_max);
    return 0;
}
