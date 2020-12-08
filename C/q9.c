#include<stdio.h>
#include<stdlib.h>

struct marks{
	char name[100];
	int roll, marks[5] ;
	char branch[100];
	char grade;
	
};
char average(int arr[]){
    printf("Enter marks for Student:- \n");
    scanf(" %d",&arr[0]);
    scanf(" %d",&arr[1]);
    scanf(" %d",&arr[2]);
    scanf(" %d",&arr[3]);
    scanf(" %d",&arr[4]);
    int avg = arr[0]+arr[1]+arr[2]+arr[3]+arr[4];
    avg /= 5;
    if(avg<=30) return 'F';
		if(avg>=90&&avg<=100) return 'A';
		if(avg>=75&&avg<90) return 'B';
		if(avg>=60&&avg<75) return 'C';
		if(avg>=45&&avg<60) return 'D';
		if(avg>30&&avg<45) return 'E';
    }
void main(){
	int n,i;
    printf("Enter number of Students: ");
	scanf("%d",&n);
    struct marks *s = (struct marks *)malloc(n*sizeof(struct marks));
    for( i=0;i<n;i++){
		printf("enter Name, Roll No. and Branch \n");
        scanf("%s%d%s",s[i].name, &s[i].roll, s[i].branch);
        s[i].grade = average(s[i].marks);
    }
    for(i=0;i<n;i++){
        printf("Student: %s of Branch %s having Roll no. %d got %c Grade \n",s[i].name,s[i].branch,s[i].roll,s[i].grade);
    }
}