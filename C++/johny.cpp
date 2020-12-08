#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n],k,m;
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        cin>>k;
        for(int i=0; i<n; i++){
            if(k==i+1){
                m=a[i];
                break;
            }
        }
        sort(a,a+n);
        for(int i=0; i<n; i++){
            if(m==a[i]) cout<<i+1<<endl;
        }
    }
}