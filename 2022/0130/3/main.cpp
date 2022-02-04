#include <bits/stdc++.h>
using namespace std;
#define all(v) (v).begin(), (v).end()
using pll = pair<long, long>;
#define mp make_pair
#define ff first
#define ss second
#define pb push_back
#define ll long long

signed main(){
  string s1;
  cin>>s1; 
  string sRev = s1;
  std::reverse(sRev.begin(), sRev.end());
      if(s1 == sRev){
		  cout << "Yes";
	  }else{
          string s2 = s1;
		  for(int i = s1.size() -1; i > 0;i--){
            //cout << s1[i] << endl;
            if(s1[i] == 'a'){
              s2 =  "a" + s2;
            }else{
              break;
            }
            //cout << s2 << endl;
          }
          string sRev2 = s2;
          std::reverse(sRev2.begin(), sRev2.end());
          if(s2 == sRev2){
		    cout << "Yes";
          }else{
            cout << "No";
          }
	  }
  return 0;

}