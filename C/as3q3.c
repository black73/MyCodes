#include<stdio.h>

void towers(int n, char from, char to, char aux){
    if(n==1){
        printf("disk1: %c-> %c\n", from, to);
        return ;
    }
    towers(n-1, from, aux, to);
    printf("disk%d: %c-> %c\n", n, from, to);
    towers(n-1, aux, to, from);
}
void main(){
    int n;
    scanf("%d", &n);
    towers(n, 'A', 'C', 'B');
}