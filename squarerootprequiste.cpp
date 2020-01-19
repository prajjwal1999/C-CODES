#include <iostream>
using namespace std;
float  squareroot(int n,int p)
{
  int start=0,end=n;
  int mid;
  int ans;
  while(start<=end)
  {
      mid=(start+end)/2;
      if(mid*mid==n)
      {
         ans=mid;
         break;
      }
      if(mid*mid<n)
      {
          start=mid+1;
          ans=mid;
             
      }
      else{
          end=mid-1;
      }
  }
  float inc=0.1;
  for(int i=0;i<p;i++)
  {
      while(ans*ans<=n){
      ans+=inc;
      }
      ans=ans-inc;
      inc=inc/10;
      }

      return ans;
  }
int main() {
int n,p;
cin>>n>>p;
   float sq= squareroot(n,p);
   cout<<sq;
    return 0;
}
