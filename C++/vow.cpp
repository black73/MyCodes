#include<bits/stdc++.h>

using namespace std;

int main(){
	string str;
	cin>>str;
	int S;
	 S= str.sizeof();
	int a=0,b=0;
	for(int i=0; i<S; i++){
		if(str[i]=='a' || str[i]=='e'|| str[i]=='i'|| str[i]=='o'|| str[i]=='u'){
			a++;
			if(a>b){
				b=a;
			}
		}else{
			a=0;
		}
	}
	cout<<b<<endl;
}