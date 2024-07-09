#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a;
    string s;
    cin>>n;
    cin>>s;
    unordered_set<char> c;
    for(int i=0;i<n;i++)
    {
        s[i]=tolower(s[i]);
        c.insert(s[i]);
    }
    if(c.size()==26)
    cout<<"YES";
    else
    cout<<"NO";
}