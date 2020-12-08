#include<stdio.h>
#include<string.h>

int main(){
    char str[100];
    scanf("%s", str);
    char *b,*e;
    int n=strlen(str),i;
    b=str;
    e=str;
    for(i=0; i<n-1; i++) e++;
    for(i=0; i<n/2; i++){
        char temp=*b;
        *b=*e;
        *e=temp;
        b++;
        e--;
    }
    printf("%s", str);
}