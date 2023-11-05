/*#include <bits/stdc++.h>
using namespace std;
int book[200];
int n = 0;
int arr[200];
void print(int n)
{
    for (int i = 1; i <= n; i++)
    {
        cout << setw(5) << arr[i];
    }
    cout << endl;
}
void dns(int k)
{
    if (k > n)
        print(n);
    else
    {
        for (int i = 1; i <= n; i++)
        {
            if (book[i] == 0)
            {
                book[i] = 1;
                arr[k] = i;
                dns(k + 1);
                book[i] = 0;
            }
        }
    }
}
int main()
{
    cin >> n;
    dns(1);
    return 0;
}
*/
#include <bits/stdc++.h>
using namespace std;
int n, arr[10];
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        arr[i] = i + 1;
    }
    do
    {
        for (int i = 0; i < n; i++)
            cout << setw(5) << arr[i];
        cout << endl;
    } while (next_permutation(arr, arr + n));
    return 0;
}
