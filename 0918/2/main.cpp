#include<bits/stdc++.h>
using namespace std;

signed main(){
    string s[4];
    string t;
    cin>>s[0];
    cin>>s[1];
    cin>>s[2];
    cin>>t;

  string res ="";
    for(int i = 0; i < (int)t.size(); ++i){
     
    if(t[i] == "1"){
      res += s[0];
             }
      cout<< (40 - n);
    }else if(t[i] == "2"){
      res += s[1];
    }else {

      res += s[2];
    }

      cout<< res;
}