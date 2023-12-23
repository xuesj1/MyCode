#include <bits/stdc++.h>
using namespace std;

int main()
{
    int my[10], dui[10];
    int n, x;
    cin >> n >> x;
    for (int i = 0; i < n; i++)
    {
        cin >> dui[i];
        my[i] = i + 1;
    }
    do
    {
        int cut = 0;
        for (int i = 0; i < n; i++)
            if (my[i] - dui[i] >= x)
                cut++;
        if (cut > n / 2)
        {
            for (int i = 0; i < n; i++)
                cout << my[i] << ' ';
            cout << endl;
        }
    } while (next_permutation(my, my + n));
    return 0;
}
