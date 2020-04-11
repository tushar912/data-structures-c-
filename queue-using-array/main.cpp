#include <iostream>

using namespace std;
class qu{
public:
    int frot;
    int rear;
    int siz;
    int *q;
};
void create(qu*qq,int s){
qq->siz=s;
qq->frot=qq->rear=-1;
qq->q=new int[s];
}
void enqueu(qu*qq,int x){
    if(qq->rear==(qq->siz)-1)
        {
        cout<<"full";

    }
    else{
            (qq->rear)++;
qq->q[qq->rear]=x;}

}
void dq(qu*qq){
qq->frot++;
int x=qq->q[qq->frot];

}
void dis(qu q){
for(int i=(q.frot)+1;i<=q.rear;i++){
    cout<<q.q[i]<<endl;
}
}
int main()
{
    qu q;
    create(&q,10);
    enqueu(&q,12);
enqueu(&q,2);
enqueu(&q,10);
dis(q);
    return 0;
}
