#include<stdio.h>
#include<string.h>

int stack[1000];
int top=0,n=1000;
void push(char c){
    if(top==n-1) printf("stack overflow!");
    else{
        top++;
        stack[top]=c;
    }
}
void pop(){
    if(top==-1) printf("stack underflow!");
    else{
        char temp=stack[top];
        top--;
    }
}
void main(){
    int t,i;
    scanf("%d", &t);
    for(i=0; i<t; t++){
        char x,k;
        scanf("%c", &x);
        switch(x){
            case '1': scanf("%c", &k);  
                        push(k);
                        break;
            case '2': pop();               
        }
    }
    printf("%c", )
}