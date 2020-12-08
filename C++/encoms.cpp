#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        for(int i=0; i<n-1; i++){
            if(i%2!=0) continue;
            else{
                char a=s[i];
                s[i]=s[i+1];
                s[i+1]=a;
            }
        }
        for(int i=0; i<n; i++){
            int m=s[i];
            m-=97;
            m=26-m;
            m+=96;
            s[i]=(char)m;
        }
        cout<<s<<endl;
    }
}