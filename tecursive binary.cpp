#include <bits/stdc++.h>
using namespace std;
int binary(int *a,int mid,int low,int end,int key)
{
     mid=(low+end)/2;
    if(low>end)
    return -1;
    if(a[mid]==key)
    return mid;
    if(a[mid]>key)
     binary(a,mid,low,mid-1,key);
    
    if(a[mid]<key)
    binary(a,mid,mid+1,end,key);
    

}
int main() {
    int a[]={1,2,3,4,5,99};
    int len=sizeof(a)/sizeof(int);
    int key;
    cin>>key;
    int low=0,mid,end=len;
         cout<<" "<<binary(a,mid,low,end,99)<<endl;
    
    return 0;
}
