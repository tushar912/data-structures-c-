#include <iostream>
#include<stack>
using namespace std;
void display(stack<int>s)
{
while(s.size()!=0){
    cout<<"   "<<s.top();
    s.pop();
}
cout<<endl;
}

int main()
{
   stack<int> s;
   s.push(10);
    s.push(30);
    s.push(20);
    s.push(5);
    s.push(1);

    cout << "The stack is : ";
    display(s);

    cout << "\ns.size() : " << s.size();
    cout << "\ns.top() : " << s.top();


    cout << "\ns.pop() : ";
    s.pop();
    display(s);
       return 0;
}
