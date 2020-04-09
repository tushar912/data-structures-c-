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
void deleet(node**head,node*del){
if(*head==nullptr||del==nullptr)
    return;
if(*head==del)
    *head=del->next;
if(del->next!=nullptr)
    del->next->prev=del->prev;
if(del->prev!=nullptr)
    del->prev->next=del->next;
free(del);

}

int main()
{


    node* head = nullptr;


    push(&head, 2);
    push(&head, 4);
    push(&head, 8);
    push(&head, 10);

    cout << "Original Linked list ";
    print(head);


    deleet(&head, head); /*delete first node*/
    deleet(&head, head->next); /*delete middle node*/
    deleet(&head, head->next); /*delete last node*/

    /* Modified linked list will be NULL<-8->NULL */
    cout << "\nModified Linked list ";
    print(head);

    return 0;
}
