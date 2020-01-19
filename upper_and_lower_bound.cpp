#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    int key;
    cin>>key;
    int start=0,end=n-1;
    int mid;
    int ans=-1;
    while(start<=end)
    {
        mid=(start+end)/2;
        if(a[mid]==key){
        ans=mid;
        start=mid+1;
        }
        else if(a[mid]>key)
        end=mid-1;
        else
        start=mid+1;
}
if(ans!=-1)
cout<<"key found at : "<<ans;
    return 0;
}
