#include <bits/stdc++.h>
using namespace std;
struct grade
{
    double ai, bi;
} garr[10];
int main()
{
    double n, sum = 0, t = 0, tt = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> garr[i].ai >> garr[i].bi;
        tt += (100 / garr[i].ai) * garr[i].bi;
    }
    cin >> t;
    for (int i = 0; i < n; i++)
    {
        if (tt >= t)
        {
            cout << "Already Au." << endl;
            return 0;
        }
        else
        {
            int temp = ceil((t - tt) / (100 / garr[i].ai));
            if (temp <= (garr[i].ai - garr[i].bi))
                cout << temp << endl;
            else
                cout << "NaN" << endl;
        }
    }
    return 0;
}
