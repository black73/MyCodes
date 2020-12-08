#include<bits/stdc++.h>
#include<string.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string p,h;
        cin>>p>>h;
        int m=sizeof(p), n=sizeof(h),c=0;
        for(int i=0; i<m-1; i++){
            for(int j=0; j<n; j++){
                if(p[i]==h[j]){
                    for(int k=j+1; k<m-1; k++){
                        if(p[i+1]==h[k]){
                            c++;
                            p[i]='@';
                            break;
                        }
                        else break;
                    }
                }
                if(c==m) break;
            }
            if(c==m) break;
        }
        if(c>=m) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}