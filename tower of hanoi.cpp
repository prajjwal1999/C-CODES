#include <iostream>
using namespace std;
void towerofhanoi(int n , int a,int b,int c)
{
    //base case
    if(n==0)
    return ;
    //recursive case
    towerofhanoi(n-1,a,b,c);
    cout<<"MOVE "<<n<<" disk from "<<a<<" to "<<b<<endl;
    towerofhanoi(n-1,c,b,a);
}
int main() {
    int n;
    cin>>n;
   int a=0,b=1,c=2;
    towerofhanoi(n,a,b,c);
    return 0;
}
