#include <bits/stdc++.h>
using namespace std;

int main()
{
    double n, arr[105], age[5];
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] >= 0 && arr[i] <= 18)
            age[0]++;
        else if (arr[i] >= 19 && arr[i] <= 35)
            age[1]++;
        else if (arr[i] >= 36 && arr[i] <= 60)
            age[2]++;
        else
            age[3]++;
    }
    for (int i = 0; i < 4; i++)
    {
        printf("%.2lf%%\n", (age[i] / n) * 100);
    }
    return 0;
}
