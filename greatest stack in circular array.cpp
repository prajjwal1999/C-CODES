#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
    stack<ll> s;

    int n;
    cin>>n;
    ll a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    s.push(a[0]);
    for(int i=1;i<n;i++)
    {
        int current=a[i];
        if(current>s.top())
        {
            cout<<current<<" ";
            s.pop();
            s.push(current);
        }
        else
        cout<<-1<<" ";
    }
    if(a[n-1]<a[0])
    {
        cout<<a[0];
    }
    else if(a[n-1]>a[0])
    cout<<-1;
    return 0;
}

