#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int a[4];
        for(int i=0; i<4; i++) cin>>a[i];
        int c=0;
        if(a[0]==a[1]||a[0]==a[2]||a[0]==a[3]) c++;
        if(a[1]==a[0]||a[1]==a[2]||a[1]==a[3]) c++;
        if(a[2]==a[1]||a[2]==a[0]||a[2]==a[3]) c++;
        if(a[3]==a[1]||a[3]==a[2]||a[3]==a[0]) c++;
        if(c==4) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}