#include <bits/stdc++.h>
using namespace std;
int main() {
    int T;
    int s,t,n;
    cin>>T;
    for(int i=0;i<T;i++)
    {
        cin>>n>>s>>t;
        if(n==s && n==t)
        cout<<1;
        else
        {
            if(s<t)
            cout<<(n-s+1);
            else 
            cout<<(n-t+1);
        }
    }
    return 0;
}
