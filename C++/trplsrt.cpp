#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int p[n],a[n],b[n];
        for(int i=0; i<n; i++){
            cin>>p[i];
            a[i]=p[i];
            b[i]=0;
        }
        sort(a,a+n);
        int flag=0, d[k][3], l=0;

        for(int i=0; i<k; i++){
            for(int j=0; j<3; j++){
                d[i][j]=0;
            }
        }

        while(k--){

            for(int i=0; i<n; i++){
                if(p[i]!=a[i]) b[i]=p[i];
                else b[i]=0;
            }

            int m, g=0, s=a[n-1], v1, v2, v3;
            for(int i=0; i<n; i++){
                if(b[i]!=0 && g<b[i]){
                    g=b[i];
                    v2=i;
                }
                if(b[i]!=0 && s>b[i]){
                    s=b[i];
                    v3=i;
                }
            }

            for(int i=0; i<n; i++){
                if(b[i]!=0 && b[i]!=g && b[i]!=s){
                    m=b[i];
                    v1=i;
                    break;
                }else{
                    m=p[v2+1];
                    v1=v2+1;
                }
            }

            d[l][0]=v1;
            d[l][1]=v2;
            d[l][2]=v3;
            l++;

            int c=p[v1];
            p[v1]=p[v3];
            p[v3]=c;

            c=p[v3];
            p[v3]=p[v2];
            p[v2]=c;

            for(int i=0; i<n; i++){
                if(a[i]==p[i]) flag=1;
                else{
                    flag=0;
                    break;
                }
            }
            if(flag==1) break;
            else continue;
        }
        if(flag==1){
            cout<<l<<endl;
            for(int i=0; i<l; i++){
                for(int j=0; j<3; j++){
                    cout<<d[i][j]+1<<" ";
                }
                cout<<endl;
            }
        }else cout<<"-1"<<endl;

        for(int i=0; i<n; i++) cout<<p[i]<<" ";
    }
}