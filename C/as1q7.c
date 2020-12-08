#include<stdio.h>

struct marks{
    char name[25];
    int roll;
    int m[5];
}a[100];
int main(){
    int n,i,j;
    printf("enter no. of students\n");
    scanf("%d", &n);
    for(i=0; i<n; i++){
        printf("enter name and roll no.\n");
        scanf("%s%d", a[i].name, &a[i].roll);
        printf("enter marks\n");
        for(j=0; j<5; j++){
            scanf("%d", &a[i].m[j]);
        }
        printf("student %s having roll no.: %d\nscored: \n", a[i].name, a[i].roll);
        for(j=0; j<5; j++){
            printf("%d\n", a[i].m[j]);
        }
    }
    return 0;
}
