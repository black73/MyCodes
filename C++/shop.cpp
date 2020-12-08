#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main(){
    int b,n,m;
    cin>>b>>n>>m;
    vector<int> k;
    vector<int> u;
    for(int i=0; i<n; i++){
        int f;
        cin>>f;
        k.push_back(f);
    } 
    for(int i=0; i<m; i++){
        int f;
        cin>>f;
        u.push_back(f);
    }
    vector<int> s;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if((k[i]+u[j])<=b){
                int sum=k[i]+u[j];
                cout<<sum<<endl;
                s.push_back(sum);
            }
        }
    } 
    int l=sizeof(s);
    int max=0;
    for(int t=0; t<l; t++){
        cout<<s[t]<<l<<endl;
        if(s[t]>max) max=s[t];
    }
    if(max==0) cout<<"-1"<<endl;
    else cout<<max<<endl;
}