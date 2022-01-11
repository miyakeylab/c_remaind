#include<bits/stdc++.h>
using namespace std;

signed main(){
    int n;

  cin>>n; 

  if(n< 10 ){
      cout<< "AGC00" << std::to_string(n);

  }else {
    if(n < 42 ){
      cout<< "AGC0" << std::to_string(n);
    }else{
      cout<< "AGC0" << std::to_string(n+1);
    }
  }

  return 0;

}