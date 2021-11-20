#include <bits/stdc++.h>
using namespace std;
 
 
int main() {
  std::string s = "";
  std::string t = "";
    cin >> s;
    cin >> t;
    int length_s = s.length();
    int length_t = t.length();
    int max_res = 0;
    int res = 0;
 
    for(int len = 0;length_s - length_t >= len ;len++){
      
      if(max_res < res){
        max_res = res;
      }
      res = 0;
     for(int len_t = 0; length_t > len_t; len_t++){
       
       if(s[len + len_t] == t[len_t]){
         res++;
       }
     }
    }
     if(max_res < res){
        max_res = res;
      }
    cout << length_t - max_res;
    return 0;
}