#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector <int> a;
    int n;
    cin>>n;

    for(int i=0;i<n;i++)
    {
        int temp;
        cin>>temp;
        a.push_back(temp);
        }
        sort(a.begin(),a.end());
        auto it=lower_bound(a.begin(),a.end(),2);
        cout<<it<<" "<<*it;
        return 0;

}