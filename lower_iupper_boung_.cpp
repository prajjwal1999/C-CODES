#include <bits/stdc++.h>
using namespace std;
#define ll long long int 
int main() {
    ll N;
    cin>>N;
    ll a[N];
      for(int i=0;i<N;i++)
      {
       cin>>a[i];
      }
           //sorting the array
            sort(a,a+N);
            ll ans=-1,ans1=-1;
            //test cases
            ll T;
            cin>>T;
                for(int j=0;j<T;j++)
              {
                   ll M;
                   M=0;
                   cin>>M;
                   ans=-1,ans1=-1;
    for(int k=0;k<2;k++)
 {
     ll low=0,mid,end=N-1;
         while(low<=end)
    {
        mid=(low+end)/2;
        if(a[mid]==M)
        {
                   if(k%2==0)
                   {
                   ans= mid;
                   end=mid-1;
                   }
        else
             {
             ans1= mid;
             low=mid+1;
             }
        }

        else if(a[mid]>M)
        end=mid-1;

        else if(a[mid]<M)
        low=mid+1;
    }
    if(k%2==0)
    cout<<ans<<" ";
    else
     cout<<ans1<<endl;
   }
}
    return 0;
   
}
