#include <iostream>
using namespace std;
bool isSorted(int *a,int n)
{  
    if(n==1)
    {
    return true;
    }
    if(a[0]<a[1] && isSorted(a+1,n-1))
    {
    return true;
    }

    
    return false;


}
int main() {
    int a[5];
    for(int i=0;i<5;i++)
    cin>>a[i];
    if(isSorted(a,5))
    cout<<"ARRAY IS SORTED";
    else
    cout<<"ARRAY IS NOT SORTED";

    return 0;
}
