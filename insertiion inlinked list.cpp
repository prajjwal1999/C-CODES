#include <iostream>
using namespace std;

class node{
public:
    int data;
    node* next;
    
    //Constructor
    node(int d){
        data = d;
        next = NULL;
    }
};


//Passing a pointer variable by reference 
void insertAtHead(node*&head,int data){
    node*n = new node(data);
    n->next = head;
    head = n;
}
void print(node*head){
    //node*temp = head;
    
    while(head!=NULL){
        cout<<head->data<<"->";
        head = head->next;
    }
    cout<<endl;
}

int main() {
    node*head = NULL;
    insertAtHead(head,5);
    insertAtHead(head,4);
    insertAtHead(head,3);
    print(head);
    print(head);
}
