#include<stdio.h>

void main(){
	char str[1000];
	scanf("%s", str);
	int i,j,count=0, flag=0;
	char a;
	scanf(" %c", &a);
	for(i=0; str[i]!='\0'; i++);
	for(j=i-1; j>=0 ; --j){
		if(str[j]=='a'){
			count=j+1;
			flag=1;
			break;
		}
	}
	if(flag==1) printf("%d", count);
	else printf("not available");
}