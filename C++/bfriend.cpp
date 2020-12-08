#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; 
    cin>>t; 
    while(t--){
        int n,flag=0;
        long int p,sum=0,max=0;
        cin>>n>>p;
        long int d[n],a[n],b[n];
        for(int i=0; i<n; i++){
            b[i]=0;
            cin>>d[i];
        }
        for(int i=0; i<n; i++){
            if(p%d[i]!=0){
                a[i]=d[i];
                flag=1; 
                break;
            }else a[i]=0;
        }
        if(flag==0) cout<<"NO"<<endl;
        else{
            for(int i=0; i<n; i++){
                cout<<a[i]<<" ";
                if(a[i]!=0){
                    for(int j=0; j<n; j++){
                        if(max<a[j]){
                            max=a[j];
                            a[j]=0;
                        }
                    }
                    while(1){
                        if(sum>p){
                            sum-=max;
                            break;
                        }
                        else{
                            sum+=max;
                            b[i]++;
                        }
                    }
                }
            }
            cout<<"YES"<<" ";
            for(int i=0; i<n; i++) cout<<b[i]<<" ";
            cout<<endl;
        }
    }
}