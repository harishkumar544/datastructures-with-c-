#include <bits/stdc++.h>
using namespace std;
int main()
{
   int t,val; cin>>t;
   queue<int> st;
   while(t--){
       string str;
      cin>>str;
       if(str=="Dequeue"){
           if(!st.empty()){
               cout<<st.front()<<endl;
               st.pop();
           }
           else
           {
               cout<<"Empty"<<endl;
           }
       }
       else{
           cin>>val;
           st.push(val);
       }
       
   }
    
}