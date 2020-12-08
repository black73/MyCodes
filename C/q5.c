#include<string.h>
#include<stdio.h>
int size =100;

void main(){
    int n,t,i,j;
    printf("Enter number of strings: ");
    scanf("%d",&n);
    char a[n][size],temp[size];
    int b[n];
    printf("Enter strings: \n");
    for( i=0;i<n;i++){
        scanf("%s",&a[i]);
        b[i] = strlen(a[i]);
    }
    for ( i=0; i <= n-1; i++){
        for ( j=n-1; j > i; j--)
        {
            if (b[j] < b[j-1]) {
                t =b[j];
                b[j]=b[j-1];
                b[j-1] =t;

                strcpy(temp,a[j]);
                strcpy(a[j],a[j-1]);
                strcpy(a[j-1],temp);
            }
        }
    }
    for( i = 0; i<= n-1; i++ ){
        printf("'%s' = %d\n",a[i],b[i]);
    }
}