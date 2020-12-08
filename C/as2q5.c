#include<stdio.h>
#include<string.h>

void main(){
    char s[1000];
    scanf("%s", s);
    int v=0,c=0;
    char* p=s;
    while(*p!='\0'){
        if(*p=='a'||*p=='e'||*p=='i'||*p=='o'||*p=='u') v++; 
        else c++;
        p++;
    }
    printf("no. of vowels:%d\nno. of consonants:%d\n", v, c);
    int i,n=strlen(s);
    printf("vowels are: ");
    for(i=0; i<n; i++){
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u') printf("%c ", s[i]);
    }
    printf("\n");
    printf("consonents are: ");
    for(i=0; i<n; i++){
        if(s[i]!='a'&&s[i]!='e'&&s[i]!='i'&&s[i]!='o'&&s[i]!='u') printf("%c ", s[i]);
    }
} 