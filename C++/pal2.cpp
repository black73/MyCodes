#include<bits/stdc++.h>

using namespace std;

void main(){
    string s;
    cin>> s;
    int n;
    int flag=0;
    n= sizeof(s);
    for(int i=0,j=n-1; i<=j; i++,j--){
        if(s[i]!=s[j]) 
		{flag=1; 
		break;
		}
    
    }
    if(flag==0) cout<<"YES"<<endl;
    if(flag==1) cout<<"NO"<< endl;
	
}