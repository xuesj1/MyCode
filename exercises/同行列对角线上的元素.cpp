#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, i, j;
    cin >> n >> i >> j;
    for (int x = 0; x < 4; x++)
    {
        for (int a = 1; a <= n; a++)
        {
            for (int b = 1; b <= n; b++)
            {
                if (x == 0 && a == i)
                {
                    cout << "(" << a << ","<< b<<")";
                }
                if (x == 1 && b == j)
                {
                    cout << "(" << a << ","<< b<<")";
                }
                if (x == 3 && a+b == i+j)
                {
                    cout << "(" << b << ","<< a<<")";
                }
                if (x == 2 && b-a == j-i)
                {
                    cout << "(" << a << ","<< b<<")";
                }
            }
        }
        cout<<endl;
    }
    return 0;
}
