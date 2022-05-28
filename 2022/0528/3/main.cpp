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
  int q;
  cin >> q;
  multiset<ll> s;

  for(int i = 0;i<q;i++){
    int t;
    cin >> t;
    if(t == 1){
      ll x;
      cin >> x;
      s.insert(x);
    }
    else if(t == 2){
      ll x;
      cin >> x;
      int  c;
      cin >> c;
      s.erase(x);
      // if (s.find(x) != s.end()) {
      //   int count = s.count(x);
      //   s.erase(x);
      //   if(count > c){
      //     int p = count - c;
      //     for(int i = 0;i<p;i++){
      //       s.insert(x);
      //     }
      //   }
      // }
    }
    else if(t == 3){
      auto it = s.begin();
      auto it2 = s.rbegin();
      cout << *it2 - *it << endl;
    }
  }
  return 0;
}