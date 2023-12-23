#include <bits/stdc++.h>
using namespace std;
int tong[105], arr[5], user = 0, mmax = INT_MIN;
struct person
{
    vector<int> vec;
} parr[105];
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= 1; j++)
            cin >> arr[j];
        for (int k = 0; k < arr[1]; k++)
        {
            cin >> user;
            tong[user]++;
            parr[user].vec.push_back(arr[0]);
        }
    }
    sort(tong, tong + 100);
    for (int i = 0; i < 100; i++)
        mmax = max(mmax, tong[i]);
    cout << mmax << endl;
    sort(parr[mmax].vec.begin(), parr[mmax].vec.end());
    for (int i = 0; i < parr[mmax].vec.size(); i++)
        cout << parr[mmax].vec[i] << " ";
    return 0;
}
