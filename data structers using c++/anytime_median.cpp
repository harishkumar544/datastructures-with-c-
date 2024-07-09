#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t,n,i,x;
  cin>>t;
  while(t--)
  {
      cin>>n;
      priority_queue<int> mx;
      priority_queue<int,vector<int>,greater<int>> mn;
      for(i=0;i<n;i++)
      {
          cin>>x;
          if(mx.empty() || x<=mx.top())
          {
              mx.push(x);
          }
          else
          {
              mn.push(x);
          }
          if(mx.size() > mn.size()+1)
          {
              mn.push(mx.top());
              mx.pop();
          }
          else if(mn.size()>mx.size())
          {
              mx.push(mn.top());
              mn.pop();
          }
          cout<<mx.top()<<" ";
      }
      cout<<"\n";
  }
}