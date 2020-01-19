#include <bits/stdc++.h>
using namespace std;
int main() {
    int a,b,c,d,forward,back,middle;
    int count=0;
    cin>>a>>b>>c>>d;
      forward=  max(a,b,c);
      back=min(a,b,c);
      middle=a+b+c - forward-back;
    while((abs(forward-middle))<d && (abs(middle-back))<d && (abs(forward-back))<d )
    {
      if((forward-middle)<d)
      {
          forward++;
          count++;
      }
     else if((middle-back)<d)
      {
          back--;
          count++;
      }
    }
    cout<<count;
    return 0;
}

