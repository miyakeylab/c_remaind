#include<bits/stdc++.h>
using namespace std;

signed main(){
    string s;
    string t;

    cin>>s;
    cin>>t;

  if(s[0] == '#' && s[1] == '#' ){
      cout<< "Yes";

  }else if(s[0] == '.' && s[1] == '.' ){
    if(t[0] == '#' && t[1] == '#' ){
    cout<< "Yes";
    }else{
      cout<< "No";
    }
  }else if(s[0] == '.' ){
    if((t[0] == '#' && t[1] == '#')  || t[1] == '#'){
      cout<< "Yes";

    }else{
      cout<< "No";

    }

  }else{
        if((t[0] == '#' && t[1] == '#')  || t[0] == '#'){
      cout<< "Yes";

    }else{
      cout<< "No";

    }
  }

    return 0;

}