#include<bits/stdc++.h>

using namespace std;

int main(){
	int n,m;
	int k=0;
	cin>>n>>m;
	char ar[n][m];
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			cin>>ar[i][j];
		}
	}
	for(int i=0; i<n; i++){
	for(int j=0; j<=m-3; j++){if(ar[i][j]=='s'&&ar[i][j+1]=='a'&&ar[i][j+2]=='b'&&ar[i][j+3]=='a') k++;}
	}
	for(int i=0; i<=n-3; i++){
	for(int j=0; j<m; j++){if(ar[i][j]=='s'&&ar[i+1][j]=='a'&&ar[i+2][j]=='b'&&ar[i+3][j]=='a') k++; }
	}
	for(int i=0; i<=n-3; i++){
	for(int j=0; j<=m-3; j++){if(ar[i][j]=='s'&&ar[i+1][j+1]=='a'&&ar[i+2][j+2]=='b'&&ar[i+3][j+3]=='a') k++; }
	}
	for(int i=0; i<=n+3; i++){
	for(int j=0; j<=m-3; j++){if(ar[i][j]=='s'&&ar[i-1][j+1]=='a'&&ar[i-2][j+2]=='b'&&ar[i-3][j+3]=='a') k++; }
	}
	cout<<k<<endl;
}