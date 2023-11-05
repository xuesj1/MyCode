//洛谷p1046
#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[11],n,ans=0;
    for(int i=0;i<10;i++)
    {
        cin>>arr[i];
    }
    cin>>n;
    for(int i=0;i<10;i++)
    {
        if(n+30>=arr[i])
            ans++;
    }
    cout<<ans<<endl;
    return 0;
}
