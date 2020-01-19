#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int a[n];
    int b[3145]={0};
    int j=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int c=0;
    for(int i=0;i<n;i++)
    {
        j=a[i];
        b[j]++;
        
    }
    int i=0;
    while(i!=11)
    {
        if(b[i]!=0)
        {
            while(b[i]>0)
            {
                cout<<i<<" ";
                b[i]--;
            }
        }
        i++;
    }
    return 0;
}
