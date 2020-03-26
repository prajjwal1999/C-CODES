#include <iostream>
#include <cstring>

using namespace std;
int main() {
    char s[100];
    int len;
    cin>>s;
    len=strlen(s);
     int j=0;int i=0;
     int c=0;
    while(i!=len)
    {  c=0;
        while(s[i]==s[j])
        {
            c++;
            j++;
        }
        cout<<s[i]<<c;
        i=j;
    }
    return 0;
}
