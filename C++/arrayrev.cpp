#include<bits/stdc++.h>

using namespace std;

int main(){
	int n,s;
	cin>>n;
	int arr[n];
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}
	for(int i=0; i<=(n-1)/2; i++){
		s=arr[i];
		arr[i]=arr[n-i-1];
		arr[n-i-1]=s;
		cout<<arr[i];
	}
}