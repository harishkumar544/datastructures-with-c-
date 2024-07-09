#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int n,temp,j;
        cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++)
        cin>>v[i];
        for(int i=1;i<n;i++)
        {
            temp=v[i];
            j=i-1;
            while(j>=0 && temp<v[j])
            {
                v[j+1]=v[j];
                j--;
            }
            v[j+1]=temp;
            cout<<j+1<<" ";
        }
        cout<<"\n";
    }
}
