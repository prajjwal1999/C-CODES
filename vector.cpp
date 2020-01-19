#include <iostream>

using namespace std;
int main() {
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w", stdout);
	#endif
    ios::sync_with_stdio(false);
    vector <int>v;
    int n;
    cin>>n;
   
    for(int i=0;i<n;i++)
    {
         int temp;
        cin>>temp;
        v.push_back(temp);
    }
   
    cout<<endl<<v.capacity();
    cout<<endl<<v.max_size();
    v.clear();
     for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    return 0;
}
