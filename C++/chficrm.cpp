#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, inhand = 0, flag = 0, c5 = 0, c10 = 0;
        cin>>n;

        int a[n];
        for(int i = 0; i < n; i++) cin>>a[i];

        for(int i = 0; i < n; i++){
            if(a[i] == 5){
                inhand += 5;
                c5++;
            }
            else if(a[i] == 10){
                if(inhand >= 5 && c5 > 0){
                    inhand += 5;
                    c5--;
                    c10++;
                }
                else{
                    flag = 1;
                    break;
                }
            }
            else if(a[i] == 15){
                if(inhand >= 10 && c5 > 1){
                    inhand += 5;
                    c5 -= 2;
                }
                else if(inhand >= 10 && c10 > 0){
                    inhand += 5;
                    c10--;
                }
                else{
                    flag = 1;
                    break;
                }
            }
        }

        if(flag == 1) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
}