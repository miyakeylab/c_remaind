#include <bits/stdc++.h>
using namespace std;
#define all(v) (v).begin(), (v).end()
using pll = pair<long, long>;
#define mp make_pair
#define ff first
#define ss second
#define pb push_back
#define ll long long

signed main()
{
  int n;
  cin >> n;
 
  ll res = 1;

  for(int i = 1; i < 10; i++){
    ll set = 1;
    if(i == 1 || i == 9){
      for(int p = 1; p < n+1;p++ ){
        set *= p;
      }
    }else{
      for(int p = 1; p < n+1;p++ ){
        set *= p;
      }
    }
    res += set;
  }

  cout << res % 998244353;
  return 0;
}