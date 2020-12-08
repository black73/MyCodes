#include<bits/stdc++.h>

using namespace std;

int main(){
	int n;
	int s=0;
	cin>>n;
	while(n!=0){
		int i;
		i=n%10;
		n=n/10;
		s = s + i;
	}
	cout<<s;
}