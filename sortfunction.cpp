#include <iostream>
#include<algorithm>
using namespace std;
int main() {
    int a[8]={5,69,23,105,99,45,2,1,};
    sort(a,a+8);
    for(int i=0;i<8;i++)
    cout<<a[i]<<'\t';
    return 0;
}
