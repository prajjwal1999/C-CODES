#include <iostream>
using namespace std;
int god(int a,int b)
{
    if(b==a)
    return a;
    return god(b,a%b);
}
int main() {
    int a,b;
    cin>>a>>b;
   int x=god(a,b);
   cout<<x;
    return 0;
}

