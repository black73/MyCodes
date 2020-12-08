#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, s, flag = 0;
        cin >>n>>s;
        int player[n], job[n];
        for(int i=0; i<n; i++) cin>>player[i];
        for(int i=0; i<n; i++) cin>>job[i];
        int cost = 100-s;
        for(int i=0; i<n; i++){
            if(job[i]==0){
                for(int j=0; j<n; j++){
                    if(job[j]==1 && (player[i] + player[j] <= cost)) flag = 1;
                }
            }
        } 
        if(flag == 1) cout<<"yes"<<endl;
        else cout<<"no"<<endl;
    }
}