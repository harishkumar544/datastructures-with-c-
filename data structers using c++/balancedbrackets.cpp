#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    while(n--){
        string c;
        cin>>c;
        stack<char> st;
        for(int i=0;i<c.length();i++){
            if(st.empty()){
                st.push(c[i]);
            }
            else if((st.top()=='(' && c[i]==')' )||(st.top()=='[' && c[i]==']' )||(st.top()=='{' && c[i]=='}' )){
                st.pop();
            }
            else{
                st.push(c[i]);
            }
        }
        if(st.empty())
        cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
   }
}
