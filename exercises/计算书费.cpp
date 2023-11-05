#include <bits/stdc++.h>
using namespace std;

int main()
{
    double k, sum = 0;
    double arr[11] = {28.9, 32.7, 45.6, 78, 35, 86.2, 27.8, 43, 56, 65};
    for (int i = 0; i < 10; i++)
    {
        cin >> k;
        sum += arr[i] * k;
    }
    printf("%.1lf", sum);
    return 0;
}
