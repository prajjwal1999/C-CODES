#include <bits/stdc++.h>
using namespace std;
#define ll  long long int
int main() {
    ll n,I;
    cin>>n>>I;
    ll a[n],b[n]={0};
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    ll temp;
    for(int i=0;i<n;i++)
    {
    temp=a[i];
    b[temp]++;
    }
    ll l,r;
    sort(b,b+n);
    l=a[n-2],r=a[n-1];
    int count=0;
    for(int i=0;i<n;i++)
    {
    if(b[i]!=0)
    count++;
    }

    if(count<=pow(2,I))
    cout<<"0";
    else{
    for(int i=0;i<n;i++)
    {
    if(a[i]<l)
        a[i]=l;

     if(a[i]>r)
         a[i]=r;
    }
    ll c[n]={0};
    int count1=0;
     for(int i=0;i<n;i++)
    {
        temp=a[i];
        c[temp]++;
    }
    for(int i=0;i<n;i++)
    {
    if(c[i]!=0)
    count1++;
    }
    cout<<count1+1;
    }
return 0;
}
