#include <bits/stdc++.h>
using namespace std;
int main() {
    priority_queue<int, vector<int>, greater<int>> run;
    vector<int> a;
    int k;
    cin>>k;
    int temp;
    cin>>temp;
    while(temp!=-1)
    {
        cin>>temp;
        a.push_back(temp);
    }
    for(int i=0;i<k;i++)
    {
        run.push(a[i]);
    }
    for(int i=k;i<a.size();i++)
    {
        if(a[i]>run.top())
        {
            run.pop();
            run.push(a[i]);
        }
    }
    while(!run.empty())
    {
        cout<<run.top()<<" ";
        run.pop();
    }
 
 return 0;
}
