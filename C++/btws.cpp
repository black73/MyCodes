#include<bits/stdc++.h>
#include<bitset>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int x,y,l,r,z;
        cin>>x>>y>>l>>r;
        for(int i=0; i<=37; i++){
            if(pow(2,i)-1<=r) z=pow(2,i)-1;
            else if(pow(2,i)-1>=l) continue;
            else break;
        }
        cout<< z <<endl;
    }
}