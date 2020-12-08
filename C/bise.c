#include<stdio.h>

void main(){
	int n,k,i,a=0;
	scanf("%d", &n);
	int ar[n];
	for(i=0;i<n;i++){
		scanf("%d", &ar[i]);
	}
		scanf("%d",&k);
		int low=0, high=n-1, mid;
		while(low<=high)
		{
			mid=(high+low)/2;
			if(k==ar[mid])
			{
				printf("found");
				a=1;
				break;
			}
			else if(k>ar[mid]) low=mid+1;
				else if(k<ar[mid]) high=mid-1;
		}
		if(a==0)
		{
			printf("not found");
		}
}