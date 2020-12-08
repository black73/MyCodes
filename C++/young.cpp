#include<bits/stdc++.h>
using namespace std;

int main(){
    long int n;
    cin>>n;
    long long int a[n],sum=0,c=0,d=0,flag=0;
    for(int i=0; i<n; i++){
        cin>>a[i];
        sum+=a[i];
    } 
    for(int i=0; i<n-2; i++){
        if(a[i]%2!=0) c++;
        else break;
    }
    for(int i=0; i<n-2; i++){
        if(a[i]%2==0) d++;
        else break;
    }
    if(a[n-2]%2!=0){
        flag=1;
    }
    if(sum%2==0){ 
        if(((n%2==0&&c==n-2)||d==n-2)&&flag==1) cout<<sum/2<<endl;
        else cout<<(sum/2)-1<<endl;
    }
    else cout<<sum/2<<endl;
}