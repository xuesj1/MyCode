//洛谷p1226
#include <bits/stdc++.h>
using namespace std;
long long b,p,k,m;

long long kuaimi(long long p)
{
    if(p==0)
        return 1;
    long long temp;
    temp=kuaimi(p/2)%k;
    if(p%2==0)
        return temp*temp%k;
    else
        return (temp*temp%k)*(m%k)%k;
}

int main() {
    cin>>b>>p>>k;
    m=b%k;
    cout<<b<<"^"<<p<<" mod "<<k<<"="<<kuaimi(p)<<endl;   
    return 0;
}
