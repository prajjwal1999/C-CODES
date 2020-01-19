#include <iostream>
using namespace std;
int main() {
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w", stdout);
	#endif 
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    int key;
    cin>>key;
    int start=0,end=n-1;
    int mid;
    while(start<=end)
    {
        mid=(start+end)/2;
        if(a[mid]==key){
        cout<<"KEY FOUND AT "<<mid;
        break;
        }
        else if(a[mid]>key)
        end=mid-1;
        else
        start=mid+1;
}
    return 0;
}
