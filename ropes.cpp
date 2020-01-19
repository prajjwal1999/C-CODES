#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int RopeAns(int *arr ,int n)
{
	  
	priority_queue<int , vector<int>, greater<int>> pq(arr,arr+n);
	int cost=0;
	while(pq.size()>1)
	{
		int first=pq.top();
		pq.pop();
		int second=pq.top();
		pq.pop();
		cost+=(first+second);
		pq.push(first+second);
	}
	return cost;

}
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	int n;
	cin>>n;
	int * a=new int[n]();
	for(int i=0;i<n;i++)
	{
		int x;
		cin>>x;
		a[i]=x;
	}
	
	cout<<RopeAns(a,n);
   
	return 0;
}	