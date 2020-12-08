#include<stdio.h>

void main(){
	int n,i,j,k;
	scanf("%d", &n);
	int a[n][n], b[n][n], c[n][n] = {};
	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
			scanf("%d", &a[i][j]);
		}
	}
	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
			scanf("%d", &b[i][j]);
			c[i][j] = 0;
		}
	}
	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
			for(k=0; k<n; k++){
			}
		}
	}
	for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
}