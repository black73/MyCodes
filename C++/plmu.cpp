#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
    long long int s[t];
	for(int k=0; k<t; k++){
	    long long int n,c=0;
	    cin>>n;
	    long long int a[n];
	    for(int i=0; i<n; i++){
	        cin>>a[i];
	    }
	    for(int i=0; i<n; i++){
	        for(int j=i+1; j<n; j++){
	            if((a[i]+a[j])==(a[i]*a[j])) c++;
	        }
	    }
        s[k]=c;
	}
    for(int k=0; k<t; k++) cout<<s[k]<<endl;
	return 0;
}