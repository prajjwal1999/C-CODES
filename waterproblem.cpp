#include <iostream>
using namespace std;
int main() {
    int n,i,sum=0,ms=0;
    cin>>n;
    int a[n],L[n],R[n];
    for(i=0;i<n;i++){
    cin>>a[i];
}
    for(i=0;i<n;i++)
    {
        if(a[i]>ms){
        ms=a[i];}
        L[i]=ms;
    }
    i=n-1;
    ms=0;
    while(i>=0)
    {
        if(a[i]>ms){
        ms=a[i];}
        R[i]=ms;
        i--;
    }
    for(i=0;i<n;i++)
    {
        sum =sum +  (min(R[i],L[i])-a[i]) ;
    }
     cout<<"THE WATER STORED IS : "<<sum;
     return 0;
}
