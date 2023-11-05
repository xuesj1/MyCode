//洛谷B2102
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[6][6];
    int x, y, m, flag = 0;
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            cin >> arr[i][j];
        }
    }
    for (int i = 1; i <= 5; i++)
    {
        m = arr[i][1];
        x = i;
        y = 1;
        for (int j = 2; j <= 5; j++)
        {
            if (m < arr[i][j])
            {
                m = arr[i][j];
                y = j;
            }
        }
        for (int h = 1; h <= 5; h++)
        {
            if (m > arr[h][y])
            {
                flag++;
                break;
            }
        }
        if (flag == 0)
        {
            flag = 1;
            break;
        }
        flag = 0;
    }
    if (flag == 1)
    {
        cout << x << " " << y << " " << m;
    }
    else
    {
        cout << "not found";
    }
    return 0;
}
