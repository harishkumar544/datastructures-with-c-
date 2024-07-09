#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n, x;
  cin>>n;
  priority_queue<float> mx;
  priority_queue<float,vector<float>,greater<float>> mn;
  for(int i=0;i<n;i++)
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
     if(mx.size() > mn.size())
     {
         float b=mx.top();
        cout<<fixed << setprecision(1)<<b<<"\n"; 
     }
     else 
     {
         float a=(mx.top()+mn.top())/2;
        cout<<fixed << setprecision(1)<<a<<"\n";
     }
  }
}