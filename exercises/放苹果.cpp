//洛谷p2386
#include <bits/stdc++.h>
using namespace std;
int t,m,n,ans=0;
int arr[100]={1};
void dfs(int k,int s)//s苹果数，k位置
{
    for(int i=arr[k-1];i<=s;i++)
    {
        if(i<=s)
        {
            arr[k]=i;//放i个苹果在第k个盘子
            s-=i;//减去苹果数量
            if(s==0&&k<=n)//苹果为0，k小于盘子总数
            {
                ans++;//计数
            }
            else
                dfs(k+1,s);
            s+=i;
        }
    }
}

int main() {
    cin>>t;
    for(int a=1;a<=t;a++)
    {
        ans=0;
        cin>>m>>n;
        dfs(1,m);
        cout<<ans<<endl;
    }
    return 0;
}
