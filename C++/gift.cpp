#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>> t;

    while(t--){
        int n;
        cin>> n;

        long int c[n], o[n];
        for(int i = 0; i < n; i++) cin>> c[i];
        for(int i = 0; i < n; i++) cin>> o[i];

        long int minc = c[0], mino = o[0];
        for(int i = 1; i < n; i++){
            if(minc > c[i]) minc = c[i];
            if(mino > o[i]) mino = o[i];
        }

        long long int g = 0;

        for(int i = 0; i < n; i++){
            c[i] = c[i] - minc;
            o[i] = o[i] - mino;
        }

        for(int i = 0; i < n; i++){
            if(o[i] >= c[i]) g = g + o[i];
            else if(c[i] > o[i]) g = g + c[i];
        }

        cout<<g<<endl;
    }
}