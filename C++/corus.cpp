#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,q;
        cin>>n>>q;
        string str;
        cin>>str;
        while(q--){
            long int c;
            cin>>c;
            int alpha[n],b[26];
            if(c>=n) cout<<0<<endl;
            else if(c==0) cout<<n<<endl;
            else{
                for(int i=0; i<26; i++) b[i]=0;

                for(int i=0; i<n; i++){
                    alpha[i]=str[i];
                    alpha[i]-=97;
                    b[alpha[i]]++;
                }
                
                int s=0;
                for(int i=0; i<26; i++){
                    b[i]-=c;
                    if(b[i]>0) s+=b[i];
                }
                
                if(s!=0) cout<<s<<endl;
                else cout<<0<<endl;
            }
        }
    }
}