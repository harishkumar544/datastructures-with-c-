#include<bits/stdc++.h>
using namespace std;
unordered_map < int, int > mp;
bool cmp(int a,int b)
{
    if(mp[a]!=mp[b])
    {
        return mp[a]<mp[b];
    }
    else
    return a<b;
}
int main()
{
    int t,m,n;
    cin>>t;
    while(t--){
        cin>>m;
        vector<int> v(m);
        for(int i=0;i<m;i++)
        {
            cin>>v[i];
            mp[v[i]]++;
        }
        sort(v.begin(),v.end(),cmp);
        for(int n:v)
        cout<<n<<" ";
        cout<<"\n";
        mp.clear();
    }
}