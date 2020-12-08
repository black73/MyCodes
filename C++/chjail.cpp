#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int m,n,x,y;
        cin>>m>>n>>x>>y;
        int p[m][n];
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                cin>>p[i][j];
            }
        }
        int p0=p[0][0],sum=0,j,i;
        for( i=0; i<x;){
            for( j=0; j<y;){
                if(i==x-1&&j==y-1) break;
                if(i+1==x-1||j+1==y-1){
                    int min=p[x-1][y-1];
                    sum+=min;
                    break;
                }else{
                    int a=p[i+1][j], b=p[i][j+1], c=p[i+1][j+1];
                    int min=a;
                    if(b<min) min=b;
                    if(c<min) min=c;
                    cout<<min<<endl;
                    if(min==a) i++;
                    if(min==b) j++;
                    if(min==c){ i++; j++;}
                    sum+=min;
                }
                
            }
            if(i==x-1&&j==y-1) break;
        }
        cout<<sum<<endl;
        if(sum<=p0) cout<<"Escape"<<endl;
        else cout<<"Died"<<endl;
    }
}


