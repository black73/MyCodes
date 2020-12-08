#include<stdio.h>

void multi(int n){
	static int i;
	for(i=0; i<=10; i++){
		printf("%d \n", n*i);
	}
}
void main(){
	int x;
	scanf("%d", &x);
	multi(x);
}