#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    int a[t];
    for(int k=0; k<t; k++){
        long int n;
        cin>>n;
        int p[n],s[n],sum=0;
        for(int i=0; i<n; i++){
            cin>>p[i]>>s[i];
        }
        for(int i=0; i<n; i++){
            if(p[i]<9){
                int max=s[i];
                for(int j=i+1; j<n; j++){
                    if(p[i]==p[j]){
                        if(s[i]<s[j]){
                            max=s[j];
                            s[i]=s[j];
                            s[j]=0;
                        }
                        else{
                            s[j]=0;
                        }
                    }
                }
                sum+=max;
            }
        }
        a[k]=sum;
    }
    for(int k=0; k<t; k++){
        cout<<a[k]<<endl;
    }
	return 0;
}