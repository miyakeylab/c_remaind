#include <bits/stdc++.h>
using namespace std;
#define all(v) (v).begin(), (v).end()
using pll = pair<long, long>;
using psi = pair<string, int>;
#define mp make_pair
#define ff first
#define ss second
#define pb push_back
#define ll long long



signed main(){
  int n;
  std::map<std::string, int> name;
  cin>>n; 
  string s;
  for(int i = 0; i < n;i++){
      cin>>s;
    if ( name.count(s)  > 0) {
        name[s]++;
    } else {
        name[s] = 1;
    }
  }
    auto iter = name.begin();
    int count = 0;
    string rtn = "";
    while (iter != name.end()) {
        if(iter->second > count){
          rtn = iter->first;
          count = iter->second;
        }
        iter++;
    }

  cout << rtn;

  return 0;

}