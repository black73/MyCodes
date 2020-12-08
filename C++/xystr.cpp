#include<bits/stdc++.h>
#include<string.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, i = 0, p = 0;

        string s;
        cin>>s;
        n = s.size();

        while(i < n - 1){
            if(s[i] != s[i+1]){
                p++;
                i += 2;
            }
            else i++;
        }

        cout<<p<<endl;
    }
}