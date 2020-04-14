#include <iostream>

using namespace std;
class node{
public:
    int data;
    node*next;
}*rear=nullptr,*font=nullptr;
void enqueue(int x){
node*t=new node();
if(t==nullptr){
   cout<<"fail";

}
else{
    t->data=x;
    t->next=nullptr;
    if(font==nullptr)
        font=rear=t;
    else{
        rear->next=t;
        rear=t;
    }
}
}
int dequeue(){
font=font->next;
}
void display(){
node*t=font;
while(t!=rear){
cout<<t->data<<endl;
t=t->next;
}
cout<<t->data;
}
int main()
{enqueue(10);
enqueue(20);
enqueue(60);
enqueue(50);
display();
dequeue();
display();
    return 0;
}
