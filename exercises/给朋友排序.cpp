#include <bits/stdc++.h>
using namespace std;
map<string,int> m;
string cx(string name)
{
    return name.substr(0,name.find(" "));
}

bool cmp(string x,string y)
{
    if(m[cx(x)]>m[cx(y)])
        return true;
    else
        return false;
}

int main() {
    vector<string> vec;
    string s1,s2;
    while(cin>>s1>>s2)
    {
        if(s1=="0")
            break;
        vec.push_back(s1+" "+s2);
        m[s1]++;
    }
    stable_sort(vec.begin(),vec.end(),cmp);
    for(int i=0;i<vec.size();i++)
    {
        cout<<vec[i]<<endl;
    }
    return 0;
}
