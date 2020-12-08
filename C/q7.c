#include<stdio.h>
#include<stdlib.h>  
#include<string.h>
#include<math.h>
int main()
{   
    int n,i;
    printf("Enter the numbers of characters to be read from file: ");
    scanf("%d",&n);
    FILE *fp;
    int num,sum=0;
    char ch[10];
    fp=fopen("Filesum.txt","r");
    for( i=0;i<n;i++)
    {
        if(fgets(ch,9,fp))
        {
            num = atoi(ch);
            sum += num;
        }
        else 
        {
        printf("File terminated before n inputs \nFor all characters in file, ");
        break;
        }
    }
    printf("Sum = %d",sum);
    fclose(fp);
}