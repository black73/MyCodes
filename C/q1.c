#include<stdio.h>

void main(){
	int n,i,j,max;
	scanf("%d", &n);
	int a[n];
	for(i=0; i<n; i++){
		scanf("%d", &a[i]);
	}
	max=a[0];
	for(j=1; j<n; j++){
		if(a[j]>a[j-1]) max=a[j];
	}
	printf("%d is the max. \n", max);
}