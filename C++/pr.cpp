#include<bits/stdc++.h>

using namespace std;

int main(){
	int n,i,j;
	cin>> n;
	cout<<"2 ";
	for(i=3; i<n;i++){
		int count=0;
		for(j=2; j<i; j++){
			if(i%j!=0) count++;
		}
		if(count==i-2) {cout<< i<<" ";}
	}
}