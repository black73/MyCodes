#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k,c=0;
        cin>>n>>k;
        int a[n];
        for(int i=0; i<n; i++){
            if(a[i]<=0) c++;
        }
        if(c>=k) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
    return 0;
}