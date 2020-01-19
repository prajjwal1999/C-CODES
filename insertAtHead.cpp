#include <bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node *next;
    node(int d)
    {
        data=d;
        next=NULL;
    }
};
void insertAtHead(node * &head,int data)
{
    node *n= new node(data);
    n->next=head;
    head=n;
}
void print(node *head)
{
    node * temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data;
        temp=temp->next;
    }

}

int main() {
    node * head=NULL;
    insertAtHead(head,5);
    print(head);
    return 0;
}
