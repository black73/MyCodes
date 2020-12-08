#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node *next;
};

typedef struct node node;
node *head;

void push(int a){
	node *n=(node*)malloc(sizeof(int));
	n->data=a;

	n->next=head;
	head=n;
}

void insert(int x,int a){

	node *temp=head;
	node *n=(node*)malloc(sizeof(int));
	n->data=a;
	if(x==1){
		n->next=head;
		head=n;
	}
	else{
		int i;
		for(i=0;i<x-2;i++){
			temp=temp->next;
		}
		n->next=temp->next;
		temp->next=n;
	}
	
}

void show(){
	node *temp=head;
	while(temp!=NULL){
		printf("%d ",temp->data);
		temp=temp->next;
	}
}

int main(){

	int o,k,p;

	while(1){
		printf("Enter operation\n(1-Push, 2-Insert, 3-Show)\n");
		scanf("%d",&o);

		switch(o){
			case 1: printf("Enter a number\n");
			scanf("%d",&k);
			 push(k);
			 break;
			case 2: printf("Enter position and number\n");
			scanf("%d%d",&p,&k);
			insert(p,k);
			break;

			case 3:show();
			break;

			default: return 0;
		}
	}
}