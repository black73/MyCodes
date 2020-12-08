#include<bits/stdc++.h>
#include<cstring>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string j,s;
        cin>>j>>s;
        int n=j.length(),m=s.length(),c=0;
        for(int i=0; i<n; i++){
            for(int k=0; k<m; k++){
                if(j[i]==s[k]){
                    s[k]='@';
                    c++;
                }
            }
        }
        cout<<c<<endl;
    }
}