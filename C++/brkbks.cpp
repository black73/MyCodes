#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    while(n--){
        int p,q,r,s;
        cin>>p>>q>>r>>s;
        int flag=0;
        if(p>=q+r+s) flag=1;
            else if(p>=q+r||p>=s+r) 
            flag=2;
            else if(p>=q||p>=s) 
            flag=3;
        cout<<flag<<endl;
    }
}