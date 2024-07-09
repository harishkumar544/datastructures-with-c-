#include <iostream>
#include<map>
using namespace std;
int main() 
{
    int n,i,n1,a; 
        cin>>n;
        map<int,int>mp;
    for(i=0;i<n;i++)
    {
        cin>>a;
        mp[a]++;
    }
    cin>>n1;
     for(i=0;i<n1;i++)
    {
        cin>>a;
        mp[a]--;
    }
    for(auto a:mp)
    {
        if(a.second!=0)
        {
            cout<<a.first<<" ";
        }
    }
}