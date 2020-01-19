#include <iostream>
#include <vector>
using namespace std;
//Implementation of Heap using Vector(Dynamic Array)

class Heap{
        vector<int> v;
        //Configuration 
        bool minHeap;

        bool compare(int a,int b){
            if(minHeap){
                return a<b;
            }
            else{
                return a>b;
            }
        }

    public:
        Heap(bool type=true){
            minHeap = type;
            //Block the 0th index
            v.push_back(-1);
        }

        void push(int data){
            //Insert at Last
            v.push_back(data);
            //Take that element to correct position restore the heap property
            int index = v.size() - 1;
            int parent = index/2;

            while(index>1 && compare(v[index],v[parent]) ){
                swap(v[index],v[parent]);
                index = parent;
                parent = parent/2;
            }
        }
        bool empty(){
            return v.size()==1;
        }

        int top(){
            return v[1];
        }

};


int main() {

    Heap h(false);
    h.push(5);
    h.push(15);
    h.push(2);
    h.push(20);
    h.push(3);

    cout<<h.top()<<endl;


    return 0;
}
