#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<int,int> m;
    int i=0,xb=0,n;
    while(1)
    {
        i++;
        if(i%3==0||i%5==0)
        {
            xb++;
            if(xb>100000)
                break;
            m[xb]=i;
        }
    }
    while(cin>>n)
        cout<<m[n];
    return 0;
}
