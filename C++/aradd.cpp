#include<bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin>>n;
	int ar1[n],ar2[n],ar3[n];
	for(int i=0; i<n; i++){
		cin>>ar1[i];
	}
	for(int i=0; i<n; i++){
		cin>>ar2[i];
	}
	for(int i=0; i<n; i++){
		ar3[i]= ar1[i]+ar2[i];
		cout<<ar3[i];
	}
}