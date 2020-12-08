#include<stdio.h>

void main(){
	int i,j,k;
	int m,n,l,p;
	scanf("%d%d%d%d", &m, &n, &l, &p);
	if(n==l){
		int a[m][n], b[l][p], c[m][p];
		for(i=0; i<m; i++){
			for(j=0; j<n; j++){
				scanf("%d", &a[i][j]);
			}
		}
		for(i=0; i<l; i++){
			for(j=0; j<p; j++){
				scanf("%d", &b[i][j]);
			}
		}
		for(i=0; i<m; i++){
			for(j=0; j<p; j++) c[i][j]=0;
		}
		for(i=0; i<m; i++){
			for(j=0; j<p; j++){
				for(k=0; k<n; k++){
					c[i][j]+=a[i][k]*b[k][j];
				}
			}
		}
		for(i=0; i<m; i++){
			for(j=0; j<p; j++){
				printf("%d ",c[i][j]);
			}
			printf("\n");
		}
	}else printf("Inappropriate data, number of columns in first matrix should match number of rows in second.");
}