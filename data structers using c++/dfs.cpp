//dfs
#include<bits/stdc++.h>
using namespace std;
class Dfs{
    public:
    void implement_dfs(int n,vector<vector<int>> &v,vector<int> &visited,vector<int> &ans)
    {
        visited[n]=1;
        ans.push_back(n);
        cout<<n<<endl;
        for(auto a:v[n])
        {
            if(!visited[a])
            implement_dfs(a,v,visited,ans);
        }
    }
    void dfs(int n,vector<vector<int>> &v,int r)
    {
        vector<int> visited(r+1,0),ans(r+1);
        implement_dfs(n,v,visited,ans);
    }
    
};
int main()
{
    int n,e;
    cin>>n>>e;
    vector<vector<int>> v(n+1,vector<int>());
    for(int i=0;i<=n;i++)
    {
        int r,c;
        cin>>r>>c;
        v[r].push_back(c);
        v[c].push_back(r);
    }
    Dfs d;
    d.dfs(0,v,n);
    /*for(auto a:v)
    {
        for(auto b:a)
        {
            cout<<b<<" ";
        }
        cout<<endl;
    }*/
}