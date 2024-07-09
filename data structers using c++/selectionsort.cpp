#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int n,index,j;
        cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++)
        cin>>v[i];
        for(int i=n-1;i>0;i--)
        {
            index=i;
            for(int j=i-1;j>=0;j--)
            {
                if(v[j]>=v[index])
                index = j;
            }
            swap(v[i],v[index]);
            cout<<index<<" ";
        }
        cout<<"\n";
    }
}
