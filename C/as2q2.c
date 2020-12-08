#include<stdio.h>
#include<string.h>
const int maxx = 200;
char stack[201];
int top = -1;
int prec(char c) 
{ 
    if(c == '^' || c == '$') 
    return 3; 
    else if(c == '*' || c == '/' || c == '%') 
    return 2; 
    else if(c == '+' || c == '-')
    return 1; 
    else
    return -1; 
}
char push(char c){
    if(top == maxx){
        printf("Stack Overflow");
    } else {
        top++;
        stack[top] = c;
    }
}
void pop(){
    if(top == -1){
        return;
    } else {
        top--;
        printf("%c",stack[top+1]);
    }
}
void display(){
    int temp = top;
    if(temp == -1) printf("Stack empty");
    else {
        printf("\nStack Elements are: ");
        while(temp!= -1){
            printf("%c", stack[temp]);
            temp--;
        }
    }
}
void main(){
    char in[200];
    int i;
    printf("Enter Infix Expression string: ");
    scanf("%s",in);
    for(i=0;in[i]!='\0';i++){
        char t = in[i];

        if(( t>='a' && t <= 'z') ||( t>='0' && t<='9') ){
            printf("%c",t);
        }

        else if(t == '(') {  
            push('('); 
        }

        else if( t == ')'){
            while(top != -1 && stack[top] != '(')
            { 
                pop();
            }
            if(stack[top] == '(')
            {
                top--;
            }
        }

        else{
            while(top != -1 && ( prec(stack[top]) >= prec(t) )){
                pop();
            }
            push(t);
        }
    }
    while(top!=-1){
        pop();
    }
}