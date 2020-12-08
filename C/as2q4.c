#include<stdio.h>

void main(){
    char c='A';
    char *p = &c;
    while(*p<='Z'){
        printf("%c ",*p);
        (*p)++;
    }
    printf("\n");
    (*p)--;
    while(*p>='A'){
        printf("%c ",*p);
        (*p)--;
    }
}