#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<bool> a;
    while(1){
        if(n==1){
            a.push_back(n);
            break;
        }
        int m=n%2;
        n/=2;
        a.push_back(m);
        if(n==0) break;
    }
    int s=sizeof(a);
    vector<int> v;
    for(int i=0; i<s; i++){
        int c=0;
        for(int j=i; j<s; j++){
            if(a[i]==1) c++;
            else break;
        }
        v.push_back(c);
    }
    int h=sizeof(v), max=v[0];
    for(int i=1; i<h; i++){
        if(v[i]>max) max=v[i];
    }
    cout<<max<<endl;
}