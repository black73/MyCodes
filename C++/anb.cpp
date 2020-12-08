#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    int s[t];
    for(int k=0; k<t; k++){
        int a,b,c=0;
        cin>>a>>b;
        for(int i=1; ;i++){
            if(a==b) break;
            if(i%2!=0) a+=i;
            else b+=i;
            c++;
        }
        s[k]=c;
    }
    for(int k=0; k<t; k++) cout<<s[k]<<endl;
}