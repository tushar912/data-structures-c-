#include <iostream>

using namespace std;

class stacknode{
public:
  int data;
  stacknode*next;

};
stacknode*new_node(int data){
stacknode*node=new stacknode();
node->data=data;
node->next=nullptr;
return node;
}
int isempty(stacknode*root){
return (!root);
}
void push(stacknode**root,int data){
stacknode*neww=new_node(data);
neww->next=*root;
*root=neww;
cout<<data<<"pushed"<<endl;

}
int pop(stacknode**root){
stacknode*temp=*root;
*root=(*root)->next;
int popped=temp->data;
free(temp);
return popped;
}
int peek(stacknode*root){
return root->data;
}
int main()
{
     stacknode* root = nullptr;

    push(&root, 10);
    push(&root, 20);
    push(&root, 30);

    cout << pop(&root) << " popped from stack\n";

    cout << "Top element is " << peek(root) << endl;
    return 0;
}
