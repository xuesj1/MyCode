#include <bits/stdc++.h>
using namespace std;

int main() {
    double a=0,n;
    cin>>n;
    int arr1[105][105],arr2[105][105];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>arr1[i][j];
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>arr2[i][j];
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(arr1[i][j]==arr2[i][j])
            {
                a++;
            }
        }
    }
    a/=n*n;
    printf("%.2lf",a*100);
    return 0;
}
