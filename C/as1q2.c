#include<stdio.h>

int main(){
    int n,i,j,x;
    scanf("%d", &n);
    double a[n][n],c[n][n];
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
        scanf("%lf", &a[i][j]);
        }
    }
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            if(i==j) c[i][j]=1;
            else c[i][j]=0;
        }
    }
    for(i=0; i<n; i++){
        double k=a[i][i];
        for(j=0; j<n; j++){
            a[i][j]/=k;
            c[i][j]/=k;
        }
        for(x=0; x<n; x++){
            double l=a[x][i];
            for(j=0; j<n; j++){
                if(x!=i){
                    a[x][j]-=l*a[i][j];
                    c[x][j]-=l*c[i][j];
                }
            }
        }
    }
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            printf("%lf ", c[i][j]);
        }
        printf("\n");
    }
}