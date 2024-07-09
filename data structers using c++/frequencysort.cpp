#include<bits/stdc++.h>
using namespace std;
vector<int> c(2001);
bool comp(int a,int b)
{
    if(c[a+1000]!=c[b+1000])
    return c[a+1000]<c[b+1000];
    else
    return a<b;
}
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int n,index,j;
        cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++){
        cin>>v[i];
        c[v[i]+1000]++;
        }
        sort(v.begin(),v.end(),comp);
        for(int k:v)
        cout<<k<<" ";
        vector<int> t(2001,0);
        c=t;
        cout<<"\n";
    }
}
