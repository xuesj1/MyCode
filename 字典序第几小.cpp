#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, cut = 0;
    char x;
    vector<int> v1, v2;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        v1.push_back(x - '0');
        v2.push_back(i + 1);
    }
    do
    {
        cut++;
        if (v1 == v2)
        {
            cout << cut << endl;
            return 0;
        }
    } while (next_permutation(v2.begin(), v2.end()));
    return 0;
}
