#include <bits/stdc++.h>
using namespace std;
int arr[50];
int hang[50];
int zdj[50];
int ydj[50];
int n, ans = 0;
void print()
{
    ans++;
    if (ans <= 3)
    {
        for (int a = 1; a <= n; a++)
        {
            cout << arr[a] << " ";
        }
        cout << endl;
    }
}
void pic()
{
    cout << endl;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (arr[i] == j)
                cout << 1 << ' ';
            else
                cout << 0 << ' ';
        }
        cout << endl;
    }
}

void dns(int k)
{
    for (int i = 1; i <= n; i++)
    {
        if (hang[i] == 0 && zdj[k + i] == 0 && ydj[k - i + n] == 0)
        {
            arr[k] = i;
            hang[i] = 1;
            zdj[k + i] = 1;
            ydj[k - i + n] = 1;
            if (k == n)
            {
                print();
                //pic();
            }
            else
                dns(k + 1);
            hang[i] = 0;
            zdj[k + i] = 0;
            ydj[k - i + n] = 0;
        }
    }
}
int main()
{
    cin >> n;
    dns(1);
    cout << ans << endl;
    return 0;
}
