#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    long long int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    for(int i=0; i<n; i++){
        int sum=0,flag=0,t=0,x=a[i];
        while(1){
            int m=a[i]%10;
            if(m%2==0&&m!=0||x==0) flag=1;
            if(m==0||) t=1;
            sum+=m;
            a[i]=a[i]/10;
            if(a[i]==0) break;
        }
        if(flag==1&&(sum%3)==0&&t==1) cout<<"red"<<endl;
        else cout<<"cyan"<<endl;
    }
    return 0;
}