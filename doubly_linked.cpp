#include<bits/stdc++.h>
using namespace std;

 class node{
 public:
 	int data;
 	node * next;
 	node * prev;

 	node(int d)
 	{
 		data=d;
 		next=NULL;
 		prev=NULL;
 	}
 };

 void insert_at_head(node * &head, int data, node * &prev)
 {
 	node * n=new node(data);
 	n->next=head;
 	head=n;
 	head->prev=n;
 	n->prev=NULL;
 }

 void Display(node * &head, node * &prev)
 {
 	node * temp=head;
 	while(temp!=NULL){
 		cout<<temp->data<<" ";
 		temp=temp->next;
 	}
 	cout<<endl;
 	 temp=prev;
 	while(temp!=NULL){
 		cout<<temp->data<<" ";
 		temp=temp->next;
 	}

 }
 int main()
 {
 	node * head=NULL; node * prev =NULL;
 	insert_at_head(head, 45, prev);
 		insert_at_head(head, 405, prev);
 			insert_at_head(head, 458, prev);
 			Display(head, prev);
 			return 0;

 }