#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        int s[n];
        for(int i = 0; i < n; i++) cin>>s[i];

        int sum = 0;

        for(int i = 1; i < n; i++){
            if(s[i] > s[i - 1]) sum += s[i] - s[i - 1] - 1;
            if(s[i - 1] > s[i]) sum += s[i - 1] - s[i] - 1;
        }

        cout<<sum<<endl;
    }
}