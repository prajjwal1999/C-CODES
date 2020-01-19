#include <iostream>
#include<queue>
#include<vector>
#include<functional>
using namespace std;


int main() {
    
    //priority_queue<int> pq_max;
    priority_queue<int,vector<int>,greater<int> > pq;
    
    int a[10] = {5,6,17,18,9,11};
    
    //Insert these in q 
    for(int i=0;i<6;i++){
        pq.push(a[i]);
    }
    
    //Heap - Max 
    while(!pq.empty()){
        cout<<pq.top()<<",";
        pq.pop();
    }
    
    
    return 0;
}
