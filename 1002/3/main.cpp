#include<bits/stdc++.h>
using namespace std;
string s[50001];
string k[26][50001];
signed main(){
    string x;
    int n;

    for(int i = 0; i < n; ++i){
       cin>> s[i];
    }

  　string res ="";

    for(int i = 0; i < n; ++i){
        int resCount = 0;
        for(int p = 0; p < (int)x.size(); p++ ){
            int checkCount = 0;
            cout<< s[i] <<endl;
            for(int q = 0; q < (int)s[i].size(); q++ ){
                if(x[p] == s[i][q]){
                    resCount+= p;
                    checkCount++;
                }
                if(checkCount == (int)s[i].size()){
                    break;
                }
            }
            cout<< checkCount <<endl;
        }
            
        cout<< resCount <<endl;
    }
}