#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,m,ans=0;
    cin>>n>>m;
    int arr[105][105];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(i==0||i==m-1||j==0||j==n-1)
                ans+=arr[i][j];
        }
    }
    cout<<ans<<endl;
    return 0;
}
