#include<stdio.h>

void main(){
	float a,b;
	float d;
	char c;
	scanf(" %f%f", &a,&b);
	scanf(" %c", &c);
	switch(c){
		case '+': d=(a+b); printf("a+b=%f", d);
				break;
		case '-': d=(a-b); printf("a-b=%f", d);
				break;
		case '/': d=(float)(a/b); printf("a/b=%f", d);
				break;
		case '*': d=(a*b); printf("a*b=%f", d);
				break;
	}
	
}