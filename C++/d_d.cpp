#include<bits/stdc++.h>
#include<cstdlib>
#include<string>
#include<sstream>
using namespace std;

int main(){
    string s;
    cin>>s;
    int s0=s[0],s1=s[1];
    s0-=48;s1-=48;
    int m=s0*10+s1;
    if(s[8]=='P'&&m!=12) m+=12;
    if(s[8]=='A'&&m==12) m=00;
    s.erase(0,2);
    s.erase(6,2);
    ostringstream str1; 
    str1 << m;
    string geek = str1.str(); 
    string p=geek+s;
    if(m<10){
        cout<<"0";
        cout<<p<<endl;
    }
    else cout<<p<<endl;
}

