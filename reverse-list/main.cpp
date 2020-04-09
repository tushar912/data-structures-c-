#include <iostream>

using namespace std;
class node{
public:
    node*next;
    node*prev;
    int data;
};
void print(node*head){
while(head!=nullptr){
    cout<<head->data<<endl;
    head=head->next;
}
}
void push(node**head,int data){

    node*new_node=new node();
    new_node->data=data;
    new_node->next=*head;
    new_node->prev=nullptr;
    if((*head)!=nullptr)
        (*head)->prev=new_node;
    *head=new_node;
 }
void insertafter(node*prev,int data){

if(prev==nullptr){
    cout<<"cant add";
    return;}
node*new_node=new node();
new_node->data=data;

new_node->next=prev->next;

prev->next=new_node;
new_node->prev=prev;
if(prev->next!=nullptr){
    new_node->next->prev=new_node;
}
}

void append(node**head,int data){
node*new_node=new node();
node*last=*head;
new_node->data=data;
new_node->next=nullptr;
if(*head==nullptr){
    new_node->prev=nullptr;
    *head=new_node;
    return;
}
while(last->next!=nullptr){
    last=last->next;
}
last->next=new_node;
new_node->prev=last;
}
void revers(node**head){
node*t=nullptr;
node*current=*head;
while(current!=0){
    t=current->prev;
    current->prev=current->next;
    current->next=t;
    current=current->prev;
}
if(t!=nullptr)
    *head=t->prev;


}

int main()
{

 /* Start with the empty list */
    node* head = nullptr;

    /* Let us create a sorted linked list to test the functions
    Created linked list will be 10->8->4->2 */
    push(&head, 2);
    push(&head, 4);
    push(&head, 8);
    push(&head, 10);

    cout << "Original Linked list" << endl;
    print(head);

    /* Reverse doubly linked list */
    revers(&head);

    cout << "\nReversed Linked list" << endl;
    print(head);





    return 0;
}
