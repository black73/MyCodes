#include<bits/stdc++.h>
using namespace std;

int main(){
   int t;
   cin>>t;
   while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0; i<n; i++) cin>>a[i];
        int max = *max_element(a, a + n); 
        int t=max+1; 
        int count[t]; 
        for(int i=0; i<t; i++) 
            count[i]=0; 
        for(int i=0; i<n; i++) 
            count[a[i]]++; 
        int mode=0; 
        int k=count[0]; 
        for(int i=1; i<t; i++){ 
            if(count[i]>k){ 
                k=count[i]; 
                mode=i; 
            } 
        } 
        int c=0;
        for(int i=0; i<n; i++){
            if(a[i]!=mode){
                a[i]=mode;
                c++;
            }
        }
        cout<<c<<endl;
    }
}