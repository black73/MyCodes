#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,h,du,ju,l;
        cin>>n>>h>>du>>ju>>l;
        int t[n],b[n],c=0;
        for(int i=0; i<n; i++){
            cin>>t[i]>>b[i];
        }
        for(int i=0; i<n; i++){
            if(t[i]==1){
                if(b[i]>=h-du) c++;
                else {
                    if(l==1) l--;
                    else{
                        l--; c++;
                    }
                }
            }else if(t[i]==2){
                if(b[i]<=ju) c++;
                else {
                    if(l==1) l--;
                    else{
                        l--; c++;
                    }
                }
            }
            if(l==0) break;
        }
        cout<<c<<endl;
    }
}