#include<bits/stdc++.h>

using namespace std;

int main(){
	int n,k=0;
	cin>>n;
	int ar[n][n];
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			cin>>ar[i][j];
			if(ar[i][j]==ar[i][n-j-1]&&ar[i][j]==ar[n-1-i][j])k++;
		}
	}
	if(k==1){
		cout<<"YES"<<endl;
	}else{
		cout<<"NO"<<endl;
	}
}