//洛谷p1888
#include <bits/stdc++.h>
using namespace std;

int main() {
    int a,b,c;
    cin>>a>>b>>c;
    int m_max,m_min;
    m_max=max(a,b);m_max=max(m_max,c);
    m_min=min(a,b);m_min=min(m_min,c);
    int temp=__gcd(m_min,m_max);
    cout<<m_min/temp<<"/"<<m_max/temp;
    return 0;
}
