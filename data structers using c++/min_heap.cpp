#include<bits/stdc++.h>
using namespace std;
int main()
{
   priority_queue<int,vector<int>,greater<int>> pq;
   int t;
   cin>>t;
   while(t--)
   {
       string str;
       cin>>str;
       if(str=="insert")
       {
           int val;
           cin>>val;
           pq.push(val);
       }
       else if(str=="getMin")
       {
           if(!pq.empty())
           {
               cout<<pq.top()<<"\n";
           }
           else
           cout<<"Empty\n";
       }
       else if(str=="delMin")
       {
           if(!pq.empty())
           pq.pop();
       }
   }
}