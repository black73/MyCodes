#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>n;
		m=2*n;
		char s[n],t[n],r[m];
		cin>>s>>t;
		for(int i=0; i<m; i++){
			if(i<n) r[i]=s[i];
			else r[i]=t[i-n]; 
		}
		map<char,int> m;
		for(int i=0; i<m; i++){
			m[r[i]]=1;
		}
		int k=sizeof(m);
		if(k==n) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
}

