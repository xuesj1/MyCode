#include <bits/stdc++.h>
using namespace std;
double arr[5];//结果
int flag[5];
bool dfs(int k)
{
    if(k==4)//4个数完成了
    {
        for(int i=1;i<=4;i++)
        {
            if(flag[i]==0&&fabs(arr[i]-24)<0.000001)
                return true;
        }
        return false;
    }
    for(int i=1;i<=4;i++)
    {
        if(flag[i]==0)//满足条件
        {
            for(int j=i+1;j<=4;j++)
            {
                if(flag[j]==0)
                {
                    flag[j]=1;
                    double n1=arr[i],n2=arr[j];
                    arr[i]=n1+n2;//加运算
                    if(dfs(k+1))
                        return true;
                    arr[i]=n1*n2;
                    if(dfs(k+1))//乘运算
                        return true;
                    arr[i]=n1-n2;
                    if(dfs(k+1))//减运算
                        return true;
                    arr[i]=n2-n1;
                    if(dfs(k+1))
                        return true;
                    arr[i]=n1/n2;
                    if(dfs(k+1))//除运算
                        return true;
                    arr[i]=n2/n1;
                    if(dfs(k+1))
                        return true;
                    flag[j]=0;
                    arr[i]=n1;
                }
            }
        }
    }
    return false;//没有
}
int main() {
    while(1)
    {
        int sum=0;
        for(int i=1;i<=4;i++)
        {
            cin>>arr[i];
            sum+=arr[i];
        }
        if(sum==0)
            return 0;
        if(dfs(1))
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
