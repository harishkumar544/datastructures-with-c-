#include <bits/stdc++.h>
using namespace std;
int main()
{
   int t,val; cin>>t;
   stack<int> st;
   while(t--){
       string str;
      cin>>str;
       if(str=="pop"){
           if(!st.empty()){
               cout<<st.top()<<endl;
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