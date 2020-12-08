#include<stdio.h>

void main(){
	char a[100];
	scanf("%s", a);
	int n,i,m;
	for(n=1; a[n]!='\0'; n++);
	for(i=0; i<n; i++){
		m=a[i];
		printf("%c- %d \n", a[i],m);
	}
}