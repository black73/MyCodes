#include<bits/stdc++.h>

using namespace std;

int main(){
	string s,p;
	cin>> s;
	int n,x;
	n=s.size();
	for(int i=0; i<=n/2; i++){
		if(s[i]!=s[n-i-1]){
			p="no";
			break;
		}else{
			p="yes";
		}

	}
	cout<<p<<endl;
}