#include <iostream>
#include<stack>
using namespace std;
int main(){
    bool j=true;
stack<char>s;
string str= "[(])";
int n=str.length();
for(int i=0;i<n;i++){
    if(str[i]=='('||str[i]=='{'||str[i]=='[')
        s.push(str[i]);

        if(s.empty())
            j=false;

    if(str[i]== ']'){
    if(s.top()=='{'||s.top()=='(')
        j=false;
        s.pop();
    }
    if(str[i]=='}'){
     if(s.top()=='('||s.top()=='[')
            j=false;
        s.pop();}

    if(str[i]==')'){
        if(s.top()=='['||s.top()=='{')
            j=false;
        s.pop();
        }



}
if(j){
    cout<<"balance";
}
else
    cout<<"not balance";
return 0;
}
