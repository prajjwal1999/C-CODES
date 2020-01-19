#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
    ll n,k,ans;
    int T;
    cin>>T;
    for(int i=0;i<T;i++)
    {
        cin>>n>>k;
        ll low=0,mid,end=n;
        while(low<=end)
        {  
             mid = (low+end)/2;
            if(pow(mid,k)<=n)
            {
            ans=mid;
            low=mid+1;
            }
            else if(pow(mid,k)>n)
            end=mid-1;
            
        }
        cout<<ans<<endl;
    }
    return 0;
}
