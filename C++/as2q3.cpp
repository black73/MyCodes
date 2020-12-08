#include<iostream>
#include<string>
 
using namespace std;
const int maxx = 200;
char stack[maxx+1];
int top = -1;

void push(char c){
    if(top == maxx){
        cout<<"Stack Overflow"<<endl;
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
    }
}
int main(){
    char post[200];
    string temp;char c1,c2;
    cout<<"Enter Postfix Expression string: "<<endl;;
    cin>>post;
    int c=0;
    for(int i=0;post[i]!='\0';i++){
        char t = post[i];

        if( t>='a' && t <= 'z'){
            push(t);
        }

        else{
            c++; 
            if(c==1){
                c1 = stack[top];
                pop();
                c2 = stack[top];
                pop();
                temp = '(' + c1 + t+ c2 + ')';
            }
            else{
                string temp2 = temp;
                temp = '('+  stack[top] + t;
                temp = temp + temp2 + ')';
            }
        }
    }
    cout<<temp;
    return 0;
}