#include <iostream>

using namespace std;
class node{
public:
    int data;
    node*next;
    node*prev;
    };
void print(node*head){
    node*t=head;
while(t->next!=head){
    cout<<t->data;
    t=t->next;
}
cout<<t->data;
}
void insertend(node**head,int data){
if(*head==nullptr){
   node*new_node=new node();
   new_node->data=data;
   new_node->next=new_node->prev=new_node;
   *head=new_node;

   return;
   }
node*last=(*head)->prev;
node*new_node=new node();
new_node->data=data;
new_node->next=*head;
(*head)->prev=new_node;
new_node->prev=last;
last->next=new_node;

}
void insertbegin(node**head,int data){
node*last=(*head)->prev;
node*new_node=new node();
new_node->data=data;
new_node->next=*head;
new_node->prev=last;
(*head)->prev=new_node;
last->next=new_node;
*head=new_node;
}
void insertafter(node**head,int a,int b){
node*new_node=new node();
new_node->data=a;
node*t=*head;
while(t->data!=b){
    t=t->next;
}
node*next=t->next;
t->next=new_node;
new_node->prev=t;
new_node->next=next;
next->prev=new_node;

}
int main()
{
    /* Start with the empty list */
    node* start = nullptr;

    // Insert 5. So linked list becomes 5->NULL
    insertend(&start, 5);

    // Insert 4 at the beginning. So linked
    // list becomes 4->5
    insertbegin(&start, 4);

    // Insert 7 at the end. So linked list
    // becomes 4->5->7
    insertend(&start, 7);

    // Insert 8 at the end. So linked list
    // becomes 4->5->7->8
    insertend(&start, 8);

    // Insert 6, after 5. So linked list
    // becomes 4->5->6->7->8
    insertafter(&start, 6, 5);

    cout<<"Created circular doubly linked list is: ";
    print(start);
    return 0;
}
