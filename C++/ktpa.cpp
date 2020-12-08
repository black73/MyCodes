#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,c=0,d=0;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
        if(a[i]%2==0) c++;
        else d++;
    }
    if(c>d) cout<<"READY FOR BATTLE"<<endl;
    else cout<<"NOT READY"<<endl;
}