#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int a[n],i,j;
    for(i=0; i<n; i++) scanf("%d", &a[i]);
    for(i=0; i<n; i++){
        int flag=0;
        for(j=0; j<n-1-i; j++){
            if(a[j]>a[j+1]){
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                flag=1;
            }
        }
        if(flag==0) break;
    }
    for(i=0; i<n; i++) printf("%d ", a[i]);
}