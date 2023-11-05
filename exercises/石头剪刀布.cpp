#include <bits/stdc++.h>
using namespace std;
int a[105], b[105];
int main()
{
    int n, na, nb, wa = 0, wb = 0;
    cin >> n >> na >> nb;
    for (int i = 0; i < na; i++)
        cin >> a[i];
    for (int i = 0; i < nb; i++)
        cin >> b[i];
    for (int i = 0; i < n; i++)
    {
        if (a[i % na] == 0 && b[i % nb] == 2)
            wa++;
        if (a[i % na] == 2 && b[i % nb] == 0)
            wb++;
        if (a[i % na] == 2 && b[i % nb] == 5)
            wa++;
        if (a[i % na] == 5 && b[i % nb] == 2)
            wb++;
        if (a[i % na] == 5 && b[i % nb] == 0)
            wa++;
        if (a[i % na] == 0 && b[i % nb] == 5)
            wb++;
    }
    if (wa > wb)
        cout << 'A' << endl;
    else if (wa < wb)
        cout << 'B' << endl;
    else
        cout << "draw" << endl;
    return 0;
}
