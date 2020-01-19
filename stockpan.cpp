#include <bits/stdc++.h>
using namespace std;
void printspan(int arr[],int n)
{
    stack<int> s;
    int ans[100]={};
    for(int day=0;day<n;day++)
    {
        int curprice=arr[day];
    while(s.empty()==false && arr[s.top()]<curprice)
        {
           s.pop();
        }
        int betterday=s.empty() ? 0: s.top();
        int span=day - betterday;
        ans[day]=span;
        s.push(day);
    }
    for(int i=0;i<n;i++)
    {
        cout<<ans[i]<<" ";
    }
}
int main() {
    int n=7;
    int a[100]={100,80,60,70,60,75,85};

    printspan(a,n);
    return 0;
}
