// 洛谷p1213
#include <bits/stdc++.h>
using namespace std;

int arr[10];
int res[10];

int main()
{
    for (int a = 0; a < 9; a++)
        cin >> arr[a];
    int f1, f2, f3, f4, f5, f6, f7, f8, f9, min_n = INT_MAX;
    for (f1 = 0; f1 < 4; f1++)
        for (f2 = 0; f2 < 4; f2++)
            for (f3 = 0; f3 < 4; f3++)
                for (f4 = 0; f4 < 4; f4++)
                    for (f5 = 0; f5 < 4; f5++)
                        for (f6 = 0; f6 < 4; f6++)
                            for (f7 = 0; f7 < 4; f7++)
                                for (f8 = 0; f8 < 4; f8++)
                                    for (f9 = 0; f9 < 4; f9++)
                                    {
                                        if ((arr[0] + f1 + f2 + f4) % 4 == 0 && (arr[1] + f1 + f2 + f3 + f5) % 4 == 0)
                                            if ((arr[2] + f2 + f3 + f6) % 4 == 0 && (arr[3] + f1 + f4 + f5 + f7) % 4 == 0)
                                                if ((arr[4] + f1 + f3 + f5 + f7 + f9) % 4 == 0 && (arr[5] + f3 + f5 + f6 + f9) % 4 == 0)
                                                    if ((arr[6] + f4 + f7 + f8) % 4 == 0 && (arr[7] + f5 + f7 + f8 + f9) % 4 == 0)
                                                        if ((arr[8] + f6 + f8 + f9) % 4 == 0)
                                                        {
                                                            int sum = f1 + f2 + f3 + f4 + f5 + f6 + f7 + f8 + f9;
                                                            if (sum < min_n)
                                                            {
                                                                min_n = sum;
                                                                res[0] = f1;
                                                                res[1] = f2;
                                                                res[2] = f3;
                                                                res[3] = f4;
                                                                res[4] = f5;
                                                                res[5] = f6;
                                                                res[6] = f7;
                                                                res[7] = f8;
                                                                res[8] = f9;
                                                            }
                                                        }
                                    }
    for (int a = 0; a < 9; a++)
    {
        while (res[a] != 0)
        {
            cout << a + 1 << " ";
            res[a]-=3;
        }
    }
    return 0;
}
