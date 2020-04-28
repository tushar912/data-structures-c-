#include <iostream>

using namespace std;

int main()
{
    #include <cmath>
#include <cstdio>
#include <vector>
#include<stack>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    stack<int>front,rear;
    int q;
    cin>>q;
    for(int i=0;i<q;i++){
      int type,x;
      cin>>type;
      if(type==1){
          cin>>x;
          rear.push(x);
      }
      else {
          if(front.empty()){
          while(!rear.empty()){
              front.push(rear.top());
              rear.pop();
          }

      }
      if(!front.empty()){
          if(type==2)
          front.pop();
          if(type==3)
          cout<<front.top()<<endl;
      }
    }
    }
     return 0;
}

}
