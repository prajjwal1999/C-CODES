#include <iostream>
using namespace std;
#define ll long long int 
int verify(ll a[],ll r[],ll key, ll k)
{
      for(int i=0;i<k;i++)
      {
        if(key%a[i]!=r[i])
           return 0;
      }
   return 1;
}
int main() {
    ll k;
    cin>>k;
    ll a[k], r[k];
    for(int i=0;i<k;k++)
        cin>>a[i];
    for(int i=0;i<k;k++)
        cin>>r[i];

    int i=1;
    for( i=1;i<13;i++)
    {
        if(verify(a,r,i,k)==1)
        {
        cout<<i;
        break;
        }
     }

return 0;
}

