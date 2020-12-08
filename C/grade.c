#include<stdio.h>

void main(){
	int n,a[5],i,j;
	scanf(" %d", &n);
	printf("enter Name, Roll No. and Branch \n");
	for(i=1; i<=n; i++){
		char s[100], b[100];
		int r;
		float avg, sum=0;
		scanf(" %s%d%s", s, &r, b);
		for(j=0; j<5; j++){
			scanf(" %d", &a[i]);
			sum+=a[i];
		}
		avg=(sum/5);
		printf("Student %s roll no. %d of branch %s received: ", s, r, b);
		if(avg<=30) printf("failed grade-F");
		if(avg>=90&&avg<=100) printf("grade-A");
		if(avg>=75&&avg<90) printf("grade-B");
		if(avg>=60&&avg<75) printf("grade-C");
		if(avg>=45&&avg<60) printf("grade-D");
		if(avg>30&&avg<45) printf("grade-E");
	}
}