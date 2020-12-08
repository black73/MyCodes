#include<stdio.h>

void main(){
	int n,i,j;
	scanf("%d", &n);
	int a[n];
	for(i=0; i<n; i++){
		scanf("%d", &a[i]);
	}
	for(i=0; i<n; i++){
		if(a[i]==2) printf("2- prime \n");
		else if(a[i]==1) printf("1- not prime \n");
		else {
			int flag=0;
			for(j=2; j<a[i]; j++){
			if(a[i]%j==0){
				flag=1;
				break;
			}
		}
			if(flag==0) printf("%d- prime \n", a[i]);
			else printf("%d- not prime \n", a[i]);
		}
	}
}