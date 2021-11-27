#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  string k;
  cin>>s; 
  cin>>k; 
  bool check = false;
  vector<int> ss(s.size()+18); 
  vector<int> kk(k.size()+18); 

  int count =0;
  for(int i=s.size() - 1;i >= 0;i--){
      ss.at(count)=(int)(s[i]-'0'); 
      count++;
   }
  
      count = 0;
  for(int i=k.size() - 1;i >= 0;i--){
      kk.at(count)=(int)(k[i]-'0'); 
      count++;
   }

  for(int i=s.size() - 1;i >= 0;i--){
    if(ss.at(i) + kk.at(i) >= 10 ){
        cout << "Hard";
        check = true;
        break;
      }
  }   

   if(check == false){
     cout << "Easy";
   }

   return 0;

}

