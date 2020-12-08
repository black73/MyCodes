#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, k;
        cin>>n>>k;
        
        int p[n], sum = 0;
        for(int i = 0; i < n; i++) cin>>p[i];

        for(int i = 0; i < n; i++){
            if(p[i] > k) sum += (p[i] - k);
        }

        cout<<sum<<endl;
    }
}