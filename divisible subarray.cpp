#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll a[1000005],prefixsum[1000005];
int main() {
    int t;
    cin>>t;
    for(int k=0;k<t;k++)
    {
        int n;
        cin>>n;
        ll sum=0;
        for(int k=0;k<n;k++)
        cin>>a[k];
        memset(prefixsum,0,sizeof(prefixsum));
        prefixsum[0]=1;
        for(int i=0;i<n;i++)
        {
            sum=sum+a[i];
            sum%=n;
            sum=(sum+n)%n;//for neagtive no
            prefixsum[sum]++;//frequecy array
        }//end of for i
        ll ans=0;
        for(int i=0;i<n;i++)
        {
            ll no=prefixsum[i];
            ans+=((no)*(no-1))/2;
        }
        cout<<ans<<endl;
        }
        return 0;
    }

