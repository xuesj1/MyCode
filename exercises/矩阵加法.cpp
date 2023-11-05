#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, arr[105][105], arr2[105][105];
    cin >> n >> m;
    for (int a = 0; a < 2; a++)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if(a==0)
                    cin>>arr[i][j];
                else
                    cin>>arr2[i][j];

            }
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<arr[i][j]+arr2[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
