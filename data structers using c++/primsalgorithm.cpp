//prims algorithm

#include <bits/stdc++.h>
using namespace std;
vector<pair<int,int>> prims(int n,vector<vector<pair<int,int>>> &adj)
{
    vector<int> visited(n,0);
    priority_queue<pair<pair<int,int>,int>,vector<pair<pair<int,int>,int>>,greater<pair<pair<int,int>,int>>> pq;
    vector<pair<int,int>> edges;
    pq.push({{0,0},-1});
    int ans=0;
    while(!pq.empty())
    {
        auto x=pq.top();
        pq.pop();
        int weight=x.first.first;
        int cur=x.first.second;
        int parent=x.second;
        if(!visited[cur]){
            visited[cur]=1;
            ans+=weight;
            if(parent!=-1)
            {
                edges.push_back({parent,cur});
            }
            for(auto k:adj[cur])
            {
                int neighbour=k.first;
                int dist=k.second;
                if(!visited[neighbour])
                {
                    pq.push({{dist,neighbour},cur});
                }
            }
        }
    }
    cout<<"total cost:"<<ans<<endl;
    return edges;
}
int main()
{
    int n,e;
    cin>>n>>e;
    vector<vector<pair<int,int>>> v(n+1,vector<pair<int,int>>());
    for(int i=0;i<n;i++)
    {
        int r,c,cost;
        cin>>r>>c>>cost;
        pair<int,int> p={c,cost};
        pair<int,int> q={r,cost};
        v[r].push_back(p);
        v[c].push_back(q);
    }
    vector<pair<int,int>> edges=prims(n,v);
    for(auto k:edges)
    cout<<k.first<<" "<<k.second<<endl;
    return 0;
}