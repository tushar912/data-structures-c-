#include<bits/stdc++.h>
using namespace std;

int main() {
    stack <int> st;

   string s="231*+9-" ;

    for(int i=0;i<(s.length());i++){

        if (isdigit(s[i])){
            st.push((int)(s[i]-'0'));

        }
        else{
            float val1,val2;
            val1=st.top();
            st.pop();
            val2=st.top();
            st.pop();
           switch (s[i])
            {
             case '+': st.push( val2 + val1); break;
             case '-': st.push(val2 - val1); break;
             case '*': st.push( val2 * val1); break;
             case '/': st.push( val2/val1);   break;

            }
        }

    }int m=st.top();
    cout<<m;
    return 0;
}
