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

int main()
{
     node* head = nullptr;


    append(&head, 6);


    push(&head, 7);

    push(&head, 1);


    append(&head, 4);

    insertafter(head->next, 8);

    cout << "Created DLL is: ";




    print(head);

    return 0;
}
