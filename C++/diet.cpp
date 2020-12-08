#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int a[n],c=0;
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        for(int i=0; i<n; i++){
            if(a[i]==k) c++;
            if(a[i]<k){
                cout<<"NO"<<" "<<i+1<<endl;
                break;
            }
            if(a[i]>k){
                if(i!=n-1) a[i+1]+=(a[i]-k);
                c++;
            }
        }
        if(c==n) cout<<"YES"<<endl;
    }
}