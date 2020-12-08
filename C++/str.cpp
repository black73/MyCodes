#include<bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin >>s;
    int n= sizeof(s);
    int sum=0;
    for(int i=0; i<n; i++){
        sum=sum+(s[i]-96);
    }
    cout <<sum<<endl;
}