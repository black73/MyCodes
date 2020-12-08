#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long int n;
        cin>>n;
        int f[n];
        f[0]=0,f[1]=1;
        for(int i=2; i<n; i++){
            f[i]=f[i-1]+f[i-2];
        }
        int d[n];
        for(int i=0; i<n; i++){
            d[i]=f[i]%10;
        }
        int e[n/2];
        while(1){
            if(n==1) break;
            for(int i=1,j=0; i<n,j<n/2; i+=2,j++){
                e[j]=d[i];
            }
            n=n/2;
            for(int i=1; i<n; i++) d[i]=e[i];
        }
        if(n==1) cout<<e[0]<<endl;
    }
}