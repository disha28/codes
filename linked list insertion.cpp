#include<bits/stdc++.h>
using namespace std;
class node
{
    public:
    int data;
    node*next;
};
void push(node**head,int new_data)
{
    node *p=new node();
    p->data=new_data;
    p->next=*head;
   * head=p;
}
void insert_after(node*prev_node,int new_data)
{
    if(prev_node==NULL)
    cout<<"the previous node cannot be null";
    node*p=new node();
    p->data=new_data;
    p->next=prev_node->next;
    prev_node->next=p;
}
void printlist(node*n)
{
    while(n!=NULL)
    {
        cout<<n->data<<" ";
        n=n->next;
    }
}
void append(node**head,int new_data)
{
    node*p=new node();
    p->data=new_data;
    p->next=NULL;
    node*last=*head;
    if(head==NULL)
    *head=p;
    while(last->next!=NULL)
    last=last->next;
    last->next=p;
    
}
int main() {
	

node* head=NULL;
node* second=NULL;
node*third=NULL;

head =new node;
second =new node;
third =new node;
head->data=1;
head->next=second;
second->data=2;
second->next=third;
third->data=3;
third->next=NULL;

push(&head,4);
insert_after(head->next->next,5);
append(&head,7);
printlist(head);

	
	
	
	
	
	return 0;
}