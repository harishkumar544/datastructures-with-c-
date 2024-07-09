//prefix sum
#include <iostream>
#include <vector>
using namespace std;
int main() {
    int t,n,i,q,l,r;
    scanf("%d",&t);
    while(t--) 
    {
        scanf("%d",&n);
        vector<int> v(n);
        for (i=0; i<n;i++) 
        {
            scanf("%d",&v[i]);
        }
        vector<long long>Sum(n+1,0);
        for(i=0;i<n;i++) 
        {
            Sum[i+1]=Sum[i]+v[i];
        };
        scanf("%d",&q);
       while(q--)
       {
            scanf("%d %d",&l,&r);
            printf("%d\n",Sum[r]-Sum[l-1]);
        }
    }
    return 0;
}
