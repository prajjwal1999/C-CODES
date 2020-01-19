#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int prefix_sum_subarray_k(int * arr, int n, int k)
{
    unordered_map<int,int> mp;
    int pre=0,len=0;
    for(int i=0;i<n;i++)
    {
        pre+=arr[i];
        if(pre==k)
            len=max(len,i+1);
        if(mp.find(pre-k)!=mp.end())
            len=max(len, i-mp[pre-k]);
        else
            mp[pre]=i;
    }
    return len;
}
int longest_conti_subsequence(int * arr, int n)
{
    unordered_set<int> s;
    for(int i=0;i<n;i++)
    {
        s.insert(arr[i]);
    }
    int ans=0;
    for(int i=0;i<n;i++)
    {
        if(s.find(arr[i]-1)!=s.end())
            continue;
        else{
            int count=0;
            int x=arr[i];
            while(s.find(x)!=s.end()){
                count++;
                x++;
            }
            ans=max(ans,count);
        }
    }
    return ans;
}
int main()
{
  #ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif
  int n;
  cin>>n;
  int * a=new int[n];
  for(int i=0;i<n;i++)
    cin>>a[i];
int k;
cin>>k;
cout<<prefix_sum_subarray_k(a,n,k);

return 0;
}
