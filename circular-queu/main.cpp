#include <iostream>

using namespace std;
class queue{
    public:
int size;
int rear;
int front;
int *q;
};
void create(queue *t,int size){
t->size=size;
t->rear=t->front=0;
t->q=new int[size];
}
void enqueue(queue *h,int x){
if((h->rear+1)%(h->size)==(h->front)){
    cout<<"full";

}
else{
    h->rear=(h->rear+1)%(h->size);
    h->q[h->rear]=x;
}
}
void dequeue(queue *t){
t->front=(t->front+1)%(t->size);

}
void display(queue q){
int i=q.front+1;
do{
    cout<<q.q[i]<<endl;
    i=(i+1)%q.size;
}while(i!=(q.rear+1)%(q.size));
}
int main()
{
    queue q;
    create(&q,5);
    enqueue(&q,10);
    enqueue(&q,50);
    enqueue(&q,60);
    enqueue(&q,80);
    enqueue(&q,100);
    display(q);
    return 0;
}
