#include <iostream>
#include<cstring>
using namespace std;
int main() {
    char a[50];
    cin>>a;
    int i=0;
    if(a[i]=='9')
    i++;
    for(;a[i]='\0';i++)
    {
        int digit=a[i]-'0';
        if(digit>=5)
        {
            digit=digit-9;
            a[i]=digit - '0';
        }
    }
    cout<<a[0];

    return 0;
}
