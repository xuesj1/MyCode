#include <bits/stdc++.h>
using namespace std;
bool arr[101];
void f_arr(int m,int n)
{
    int cr=0,xb=0,ss=0;//cr表示目前出圈人数,xb表示出圈人的位置，ss表示现在数到了几
    while(cr!=m)
    {
        xb++;
        if(xb>m)//形成回环
            xb=1;
        if(arr[xb]==false)
        {
            ss++;
            if(ss==n)
            {
                arr[xb]=true;
                cr++;
                cout<<xb<<endl;
                ss=0;
            }
        }
    }
}

void f_vec(int m,int n)
{
    vector<int> vec;
    for(int i=1;i<=m;i++)
    {
        vec.push_back(i);
    }
    int xb=0;
    while(!vec.empty())
    {
        xb=(xb+n-1)%vec.size();
        cout<<vec[xb]<<endl;
        vec.erase(vec.begin()+xb);
    }
}

int main()
{
    int m,n;
    cin>>m>>n;
    //f_arr(m,n);
    f_vec(m,n);
    return 0;
}
