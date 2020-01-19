#include <iostream>
#include<cstring>
void rotate(char * a, int k)
{
    int i=strlen(a);
    while(i>=0)
    {
        a[i+k]=a[i];
        i--;
    }
    i=strlen(a);
    int j=i-k;
    int s=0;
    while(i>j)
    {
        a[s]=a[j];
        s++;
        j++;
      
    }
    
}
using namespace std;
int main() {
    char a[100];
    cin.getline(a,100);
    int k;
    cin>>k;
    rotate(a,k);
    cout<<a;
    return 0;
    
}
