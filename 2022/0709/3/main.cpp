#include <bits/stdc++.h>
using namespace std;
#define all(v) (v).begin(), (v).end()
#define mp make_pair
#define ff first
#define ss second
#define pb push_back
/* alias */
using ull = unsigned long long;
using ll = long long;
using vi = vector<int>;
using vl = vector<long>;
using vll = vector<long long>;
using vvi = vector<vi>;
using vvl = vector<vl>;
using vvll = vector<vll>;
using vs = vector<string>;
using pii = pair<int, int>;
using pll = pair<long, long>;

#define YESNO(bool) if(bool){cout<<"YES"<<endl;}else{cout<<"NO"<<endl;}
#define yesno(bool) if(bool){cout<<"yes"<<endl;}else{cout<<"no"<<endl;}
#define YesNo(bool) if(bool){cout<<"Yes"<<endl;}else{cout<<"No"<<endl;}

/* REP macro */
#define reps(i, a, n) for (ll i = (a); i < (ll)(n); ++i)
#define rep(i, n) reps(i, 0, n)
#define rrep(i, n) reps(i, 1, n + 1)
#define repd(i,n) for(ll i=n-1;i>=0;i--)
#define rrepd(i,n) for(ll i=n;i>=1;i--)

signed main()
{
  string s,t;
  cin >> s >> t;
  vector<int> t_array;
  vector<int> s_array;
  vector<char> tc_array;
  vector<char> sc_array;
  int count = 1;
  for (int i = 0; i < (int)t.length(); ++i) {
    if(i == (int)t.length()){
      t_array.push_back(count);
      tc_array.push_back(t[i]);
    }else{
      if(t[i] == t[i +1]){
        count++;
      }else{
        t_array.push_back(count);
        tc_array.push_back(t[i]);
        count = 1;
      }
    }
  }

  count = 1;

  for (int i = 0; i < (int)s.length(); ++i) {
    if(i == (int)s.length()){
      s_array.push_back(count);
      sc_array.push_back(s[i]);
    }else{
      if(s[i] == s[i +1]){
        count++;
      }else{
        s_array.push_back(count);
        sc_array.push_back(s[i]);
        count = 1;
      }
    }
  }
  if( t_array.size() != s_array.size()){
    cout << "No";
    return 0;
  }
  bool check = true;
  for(int i = 0;i < (int)t_array.size();i++){
    if(t_array[i] != s_array[i] ){
      if(s_array[i] == 1 
      || t_array[i] == 1 
      || s_array[i] > t_array[i] ){
        check = false;
        break;
      }
    }
    if(sc_array[i] != tc_array[i]){
        check = false;
        break;
    }
  }
  YesNo(check);
  return 0;
}