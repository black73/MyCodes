#include<bits/stdc++.h>
#include <sstream>
#include<string>
using namespace std;

int main(){
    string sum;
    cin>> sum;
    int n = strlen(sum);

    if(n == 1) cout<< sum;
    else{
        int m = (n/2) + 1;
        int a[m];

        a[0] = sum[0];
        for(int i = 2; i < n; i = i + 2) a[i/2] = sum[i];

        std::sort(a, a + m);
        ostringstream nsum;

        for(int i = 2; i < n; i = i + 2){
            nsum << a[i/2];
            string p = nsum.str();
        }

        cout<< sum;
    }
}