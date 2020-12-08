#include<bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin>>T;
    while(T--){
        int m;
        cin>>m;
        int x[m];
        for(int j=0; j<m; j++) cin>>x[j];
        
        int mx=0, mn=m, p=0;
        for(int j=0; j<m; j++){
            if(x[j+1] - x[j]<=2){
                p++;
            }else{
                if(p+1>mx) mx=p+1;
                if(p+1<mn) mn=p+1;
                p=0;
            }
        }
        cout<<mn<<" "<<mx<<endl;
    }
}