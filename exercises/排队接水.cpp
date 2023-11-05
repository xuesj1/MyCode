//洛谷P1223
#include <bits/stdc++.h>
using namespace std;
struct people
{
    int wz;
    int tim;
};
bool cmp(people x,people y)
{
    if(x.tim<y.tim)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main() {
    people arr[1005];
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>arr[i].tim;
        arr[i].wz=i;
    }
    sort(arr+1,arr+n+1,cmp);
    double zt,t=0;
    for(int i=2;i<=n;i++)
    {
        t+=arr[i-1].tim;
        zt+=t;
    }
    for(int i=1;i<=n;i++)
    {
        cout<<arr[i].wz<<" ";
    }
    printf("\n%.2lf",zt/n);
    return 0;
}
