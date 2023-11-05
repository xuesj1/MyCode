#include <bits/stdc++.h>
using namespace std;
struct lesson
{
    int a, b;
} ls[1005];
int main()
{
    int n, mmax = INT_MIN;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> ls[i].a >> ls[i].b;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (ls[j].a >= ls[i].a && ls[j].a <= ls[i].b)
                mmax = max(mmax, ls[i].b - ls[j].a + 1);
            else if (ls[i].a >= ls[j].a && ls[i].a <= ls[j].b)
                mmax = max(mmax, ls[j].b - ls[i].a + 1);
        }
    }
    cout << mmax << endl;
    return 0;
}
