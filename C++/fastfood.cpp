#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n],b[n];
        for(int i=0; i<n; i++) cin>>a[i];
        for(int i=0; i<n; i++) cin>>b[i];
        int sumaf=0,sum=0;
        for(int i=0; i<n; i++){
            sumaf+=a[i];
            int sumab=0,sumbb=0;
            for(int j=i+1; j<n; j++){
                sumab+=a[j]; sumbb+=b[j];
            }
            if(sumbb>sumab){
                if(a[0]>b[0]) sum=sumaf+sumbb;
                else sum=sumaf+sumbb+b[0]-a[0];
                break;
            }else{
                sum=sumaf;
            }
        }
        cout<<sum<<endl;
    }
}