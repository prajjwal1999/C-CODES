#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll c[n],h[n];
        for(int i=0;i<n;i++)
        cin>>c[i];
        for(int i=0;i<n;i++)
        cin>>h[i];
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=2*i;j++)
            {
                if(2*i<=n)
                c[j-1]++;
            }//for j
        }//for i
        int flag=1;
        sort(h,h+n);
        for(int i=0;i<n;i++)
        {
            if(c[i]!=h[i])
            {
            flag=0;
            break;
            }
        }
       if(flag==1){
       cout<<"YES"<<endl;
       }
       else
       cout<<"NO"<<endl;
    }
    return 0;
}
