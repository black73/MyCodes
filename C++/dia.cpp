#include<bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin>>n;
	for(int i=1; i<=n; i++){
		if(i==(n+1)/2){
			for(int j=1; j<=n; j++){
				cout<<"*";
			}
		}
		cout<<endl;
	}
}