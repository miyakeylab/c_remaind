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
  string s;
  int a;
  int b;

  cin>>s; 
  cin>>a; 
  cin>>b; 


  string res = s;
  res[a-1] = s[b-1];
  res[b-1] = s[a-1];
  cout << res;
  return 0;

}