
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int l,r,b,t,p,n,i,j,s=0;
    cin>>p;
    while(p--)
    {
        cin>>n;
        vector<vector<int>> v(n,vector<int>(n));
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                cin>>v[i][j];
            }
        }
        l=0,r=n-1,b=n-1,t=0;
        while(true)
        {
            if(l>r)
            break;
            for(i=l;i<=r;i++)
            cout<<v[t][i]<<" ";
            t++;
            if(t>b)
            break;
            for(i=t;i<=b;i++)
            cout<<v[i][r]<<" ";
            r--;
            if(l>r)
            break;
            for(i=r;i>=l;i--)
            cout<<v[b][i]<<" ";
            b--;
            if(t>b)
            break;
            for(i=b;i>=t;i--)
            cout<<v[i][l]<<" ";
            l++;
        }
        cout<<endl;
    }
}
