#include <stdio.h> 
#include <stdlib.h>

struct Queue
{
 int size;
 int front;
 int rear;
 int *Q;
};

void create(struct Queue *q,int size)
{
 q->size=size;
 q->front=q->rear=0;
 q->Q=(int *)malloc(q->size*sizeof(int));
}

void enqueue(struct Queue *q,int x)
{
 if((q->rear+1)%q->size==q->front)
 printf("Queue is Full\n");
 else
 {
 q->rear=(q->rear+1)%q->size;
 q->Q[q->rear]=x;
 }
}

int dequeue(struct Queue *q)
{
 int x=-1;

 if(q->front==q->rear)
 printf("Queue is Empty\n");
 else
 {
 q->front=(q->front+1)%q->size;
 x=q->Q[q->front];
 }
 return x;
}

void Display(struct Queue q)
{
 int i=q.front+1;

 do
 {
 printf("%d ",q.Q[i]);
 i=(i+1)%q.size;
 }while(i!=(q.rear+1)%q.size);

 printf("\n");
}

int main()
{
 struct Queue q;
 int n,x;
 scanf("%d", &n);
 create(&q,n);
 int m=n-1;
 do{
     printf("enter a no.\n");
     scanf("%d", &x);
     enqueue(&q,x);
 }while((m)--);
 Display(q);
 printf("%d dequeued!",dequeue(&q));
}