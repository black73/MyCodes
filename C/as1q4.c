#include<stdio.h>
#include<string.h>

int main(){
    int t,i;
    scanf("%d", &t);
    for(i=1; i<=t; i++){
        char s[100];
        fgets(s, 100, stdin); 
        if((s[1]=='r'&&s[2]=='s')||s[1]=='s') printf("Female\n");
        else printf("Male\n");
    }
    return 0;
}