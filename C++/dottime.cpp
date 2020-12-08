#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, m, q;
        cin>>n>>m>>q;
        int a[n];
        for(int i = 0; i < n; i++) cin>>a[i];
        while(q--){
            int pos, val, s, f = 0;
            cin>>pos>>val;
            a[pos] = val;
            for(int i = 1; i < n-m+1; i++){
                for(int j = 1; j < n-m+1; j++){
                    for(int k = 0; k < m; k++){
                        f += (a[i+k]*a[j+k]) % 998244353;
                        cout<<f<<endl;
                    }
                }
            }
            s = f % 998244353;
            cout<<s<<endl;
        }
    }
}