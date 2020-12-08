#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int m[n][n], x = 1;

        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                m[i][j] = x;
                x++;
            }
        }

        if(n%2 == 0){
            for(int i = 0; i < n; i++){
                if(i%2 != 0){
                    for(int j = 0; j < n; j += 2){
                        int b = m[i][j];
                        m[i][j] = m[i][j + 1];
                        m[i][j + 1] = b;
                    }
                }
            }
        }

        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                cout<<m[i][j]<<" ";
            }
            cout<<endl;
        }
    }
}