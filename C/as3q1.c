#include<stdio.h>
#include<stdlib.h>

struct qu{

    int f,r;
    int size;
    int *s;
};

typedef struct qu qu;


qu* creat(int x){
    qu *q=(qu*)malloc(sizeof(qu));

    q->f=-1;
    q->r=-1;

    q->size=x;
    q->s=(int*)malloc(x*sizeof(int));

    return q;
}

int empty(qu *q){
if(q->f==q->r)
    return 1;
else return 0;
}

int full(qu *q){
    if((q->r+1)%(q->size)==q->f)
        return 1;
    else return 0;
}

void push(qu *q,int x){

    if(full(q))
        printf("Stack is full\n");
    else{
    q->r=(q->r+1)%(q->size);
    q->s[q->r]=x;
	}
}

int pop(qu *q){
    int x=-1;
    if(empty(q)){
        printf("Stack is already empty\n");
    }

    else{
        
        q->f=((q->f)+1%(q->size));
        x=q->s[q->f];
        
    }
    return x;
}

void display(qu *q){
    if(empty(q))
        printf("Stack is empty\n");
    else {
        printf("Top value is %d\n",q->s[q->r]);
    }
}

void add(qu *q1,qu *q2){
    if(empty(q1)){
        printf("Enter a number\n");
        int x;
        scanf("%d",&x);
        push(q1,x);

        while(!empty(q2)){
            push(q1,pop(q2));
        }
    }
    else{
         printf("Enter a number\n");
        int x;
        scanf("%d",&x);
        push(q2,x);

        while(!empty(q1)){
            push(q2,pop(q1));
        }
    }
}

int rem(qu *q1,qu *q2){
    if(empty(q1)) return pop(q2);
    else return pop(q1);
}

int show(qu *q1,qu *q2){
    if(empty(q1)) printf("The top value is %d\n",q2->s[q1->f],q2->s[q2->r] );
    else printf("The top value is %d and %d\n",q1->s[q1->f],q1->s[q1->r] );
}


int main(){

    qu *q1;
    q1=creat(10);
    qu *q2;
    q2=creat(10);

    int z,k;

    while(1){
        printf("Enter operation\n");
        scanf("%d",&z);

        switch(z){
            case 1:add(q1,q2);
            break;

            case 2:k=rem(q1,q2);
            printf("The popped value is %d\n",k);
            break;

            case 3: show(q1,q2);
            break;

            default:
            return 0;
        }
    }
}