#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m,k,s=0;
        cin>>n>>m>>k;
        if(m<n) s=m-n;
        else s=n-m;
        s+=k;
        if(s>=0) cout<<"0"<<endl;
        else cout<<-s<<endl; 
    }
}