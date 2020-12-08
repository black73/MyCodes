#include<bits/stdc++.h>
using namespace std;

int main(){
    long int n,d;
    cin>>n>>d;
    long int l[n],c=0;
    for(int i=0; i<n; i++) cin>>l[i];
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(l[i]-l[j]<=d){
                l[i]=l[j]=(char)'@';
                c++;
                break;
            }
        }
    }
    string str,sc="black";
    getline(cin, str);
    cout<<str<<endl;
    cout<<c<<endl;
}