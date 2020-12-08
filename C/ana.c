#include<stdio.h>

void main(){
	int f,p;
	scanf(" %d", &f);
	char s1[1000], s2[1000];
	scanf("%s%s", s1,s2);
	int n,m,i,j,count=0;
	for(n=0; s1[n]!='\0'; n++);
	for(m=0; s2[m]!='\0'; m++);
	for(int p=1; p<=f; p++){
	if(n==m){
		for(i=0; i<n; i++){
			for(j=0; j<m; j++){
				if(s1[i]==s2[j]){
					count++;
					s2[j]='@';
					break;
				}
			}
			if(count==n) break;
		}
		if(count==n) printf("YES");
		else printf("NO");
	}else{
		printf("NO");
	}
	}
}