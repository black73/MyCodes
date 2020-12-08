#include<stdio.h>
int bits(long long n){
    int c=0;
    if(n==0) return 1;
    while(n>0){
        n /= 2;
        c++;
    }
    return c;
}
void main(){
    long long n;
    scanf("%lld",&n);
    long long int temp;
    float sum=0;
	int i;
    for( i=0;i<n;i++){
        scanf("%lld",&temp);
        sum += bits(temp);
    }
    sum /=n;
    printf("%f",sum);
}