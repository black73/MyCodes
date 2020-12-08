#include<stdio.h>

void main(){
	int n,i,j,k,m;
	int x=1;
	scanf("%d", &n);
	int a[n][n];
	m=2*(n-1);
	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
				while((i+j)==k){
					if(k%2==0){
						a[j][i]=x;
					}
					else{
						a[i][j]=x;
					}
					x++;k++;
					if(k==m) break;
				}
				if(k==m) break;
		}
		if(k==m) break;
	}
	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
			printf("%d \n", a[i][j]);
		}
	}
}