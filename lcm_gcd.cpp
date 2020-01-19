#include <iostream>
using namespace std;
#define ll long long int 
ll god(ll a,ll b)
{
    if(b==0)
    return a;
    return god(b,a%b);
}
ll lcme(ll a,ll b)
{
    return ((a*b)/god(a,b));
}
int main() {
    ll a,b;
    cin>>a>>b;
   ll x=lcme(a,b);
   cout<<x;
    return 0;
}
