#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void downheapify(vector<int> & heap, int idx)
{
	int leftidx=2*idx+1;
	int rightidx=2*idx+2;
	if(leftidx>=heap.size() and rightidx>=heap.size())
	{
		return;
    }
    int largestidx=idx;
    if(leftidx<heap.size() and heap[leftidx]>heap[largestidx])
    {
    	largestidx=leftidx;
    }
    if(rightidx<heap.size() and heap[rightidx]>heap[largestidx])
    {
    	largestidx=rightidx;
    }
    if (largestidx==idx)
    	return;

    swap(heap[idx],heap[largestidx]);
    downheapify(heap,largestidx);



}
 void unheapify(vector <int> & heap, int idx)
 {
 	if(idx==0)
 		return;
 	int parentidx=(idx-1)/2;
 	if(heap[parentidx]<heap[idx])
 	{
 		swap(heap[parentidx],heap[idx]);
 		unheapify(heap,parentidx);
 	}
 	else
 	return; 
 }
 void insert(vector<int> &heap, int key)
{
	heap.push_back(key);
	unheapify(heap,heap.size()-1);
}

void display(vector<int> &heap)
{
	for(int i=0;i<heap.size();i++)
	{
		cout<<heap[i]<<" ";
	}
	cout<<endl;
}
void buildheapoptise(vector<int> &heap)
{
for(int i=heap.size()-1;i>=0;i--)
{
	downheapify(heap,i);
}
}
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	vector<int> heap;
	int n;

	cin>>n;
	for(int i=0;i<n;i++)
	{
		int temp;
		cin>>temp;
	insert(heap,temp);
}
buildheapoptise(heap);
	display(heap);
  
	return 0;
}	