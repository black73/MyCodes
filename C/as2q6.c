#include<stdio.h>
#include<string.h>

void swap(char *c1, char *c2){
    char temp=*c1;
    *c1=*c2;
    *c2=temp;
}
void Per(char *c, int b, int e){
    int i;
    if(b==e) printf("%s ", c);
    else{
        for(i=b; i<=e; i++){
            swap((c+b),(c+i));
            Per(c, b+1, e);
            swap((c+b),(c+i));
        }
    }
}
void main(){
    char word[1000];
    scanf("%s", word);
    int n=strlen(word);
    Per(word, 0, n-1);
}