#include<bits/stdc++.h>
using namespace std;

signed main(){
    int s;
    int t;
    int x;

    cin>>s;
        cin>>t;
            cin>>x;
    if(t == 0){
      t = 24;
    }
  if(s < t){
    if(s <= x && x < t){
      cout<< "Yes";
    
    }else{
      cout<< "No";
    }
  }else{
    if((s <= x && x <= 23) ||  (x < t && 0 <= x)){
      cout<< "Yes";
    
    }else{
      cout<< "No";
    } 
  }
    return 0;

}