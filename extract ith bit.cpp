#include <iostream>
using namespace std;
int bit(int n, int i)
{
    return (n & (1<<i))!=0?1:0;
}

int main() {
    for(int i=0;i<4;i++){
int x=bit(11,i);
    cout<<x<<endl;
    }
    return 0;
}
