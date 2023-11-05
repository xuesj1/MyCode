#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,m,k;
    int arr[105][105],arr2[105][105];
    cin>>n>>m>>k;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<k;j++)
        {
            cin>>arr2[i][j];
        }
    }
    int temp=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<k;j++)
        {
            for(int k=0;k<m;k++)
            {
                temp=0;
                temp+=arr[i][k]+arr2[k][j];
            }
            cout<<temp<<" ";
        }
        cout<<endl;
    }
    return 0;
}
